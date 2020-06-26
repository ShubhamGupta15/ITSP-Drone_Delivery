from django.shortcuts import render, HttpResponseRedirect, redirect
from django.views.generic import TemplateView
from .models import Delivery_Order, Drone
from .forms import OrderForm, TrackForm, ConfirmForm
from datetime import datetime
from django.core.mail import send_mail
import threading
# Create your views here.

def updateDroneStatus(delID):
    obj = Delivery_Order.objects.get(deliveryID = delID)
    drone_obj = Drone.objects.get(droneID = obj.drone)
    if drone_obj.busy == True:
        drone_obj.busy = False
        drone_obj.save()
        print("Changed Drone Status")

def updateDelStatus(delID):
        
    obj = Delivery_Order.objects.get(deliveryID = delID)
    if obj.orderstatus == False:
        obj.orderstatus = True
        obj.save()
        print("Changed Del Status")

def cancelDrone(id):
    obj = Drone.objects.get(droneID = id)
    obj.busy = False
    obj.save()

def MainPageView(request):

    order = OrderForm()
    trackform = TrackForm()
    if request.POST.get('submit-order') == 'Place Order':        
        order = OrderForm(request.POST)
        if order.is_valid():            
            alldrones = Drone.objects.all()
            assigned_droneID = None
            all_busy = True
            for drone in alldrones:
                if drone.busy == False:
                    assigned_droneID = drone.droneID
                    drone.busy = True
                    drone.HostelNo = order.cleaned_data['hostel']
                    request.session['email'] = order.cleaned_data['email']
                    drone.save()
                    request.session['assigned_drone'] = assigned_droneID
                    all_busy = False
                    break
            if all_busy:
                context = {
                    "invalidity": False,
                    "busy": True
                }
                return render(request, "DeliveryOrderStatus.html",context)
            
            return HttpResponseRedirect("http://127.0.0.1:8000/home/confirm/")
    
    elif request.POST.get('track-form') == 'Track':
        trackform = TrackForm(request.POST)        
        if trackform.is_valid():
            ID = trackform.cleaned_data['deliveryID']
            return redirect("http://127.0.0.1:8000/home/track/%d" % ID)


    context = {
         "form":order,
         "trackform": trackform
    }    
    return render(request,'MainPage.html',context)

def ConfirmPageView(request):

    confirmform = ConfirmForm(request = request)
    request.session['order_placed'] = False
    request.session['seen_status'] = False

    notbusy = threading.Timer(20,cancelDrone,[request.session['assigned_drone']])
    notbusy.start()

    if request.POST.get('Confirm') == 'Confirm':

        confirmform = ConfirmForm(request.POST, request = request)
        if confirmform.is_valid():
            hostel = Drone.objects.get(droneID = request.session['assigned_drone']).HostelNo
            delivery = Delivery_Order()
            delivery.drone = request.session['assigned_drone']
            delivery.orderstatus = False
            delivery.hostel = hostel
            count = Delivery_Order.objects.all().count()
            delivery.deliveryID = 12000 + 10*count + request.session['assigned_drone']
            delivery.save()
            request.session['order_placed'] = True

            droneTimer = threading.Timer(1200,updateDroneStatus,[delivery.deliveryID])
            droneTimer.start()
            deliveryTimer = threading.Timer(660,updateDroneStatus,[delivery.deliveryID])
            deliveryTimer.start()

            notbusy.cancel()

            messageS = 'Delivery Details - \n' + 'Delivery hostel: ' + delivery.hostel + '\n Delivery ID: ' + str(delivery.deliveryID) + '\n If you want to track your delivery, enter the above delivery ID in our track form.' +'\n 127.0.0.1:8000/home/'

            send_mail('Delivery Order',messageS,'itspcrusaders@gmail.com',[request.session['email']])          

            return HttpResponseRedirect('http://127.0.0.1:8000/home/deliverystatus/%d' % delivery.deliveryID)
        
    elif request.POST.get('Cancel') == 'Cancel':
    
        drone = Drone.objects.get(droneID = request.session['assigned_drone'])
        drone.busy = False
        drone.save()
        return HttpResponseRedirect('http://127.0.0.1:8000/home/')
            

    context = {
        'droneID': request.session['assigned_drone'],
        'form': confirmform
    }

    return render(request,'confirm.html',context)

def DeliveryOrderStatusView(request, id):

    if (request.session.get('seen_status')== False) and (request.session.get('order_placed')==True):
        orderToDisplay = Delivery_Order.objects.get(deliveryID = id)

        context = {
             "id": orderToDisplay.deliveryID,            
             "hostel": orderToDisplay.hostel
        }
        request.session['seen_status'] = True
        request.session['order_placed'] = False
        return render(request, "DeliveryOrderStatus.html", context)

    else :
        return redirect("http://127.0.0.1:8000/home/track/%d" % id)

def TrackPageView(request, id):

    if request.POST.get('Delivered') == 'Delivered':
        order = Delivery_Order.objects.get(deliveryID = id)
        order.orderstatus = True
        order.save()

        T = threading.Timer(600.0,updateDroneStatus,[id])
        T.start()
        
        return HttpResponseRedirect('http://127.0.0.1:8000/home/track/thankyou/')
    
    
    orderNo = Delivery_Order.objects.get(deliveryID = id)
    if orderNo.orderstatus == False:

        context = {
            "id": orderNo.deliveryID
        }
        return render(request,"testloc.html",context)
    else :
        return render(request,'completed.html',{})

def ThankYouPageView(request):

    return render(request, 'thankyou.html',{})

class AboutPageView(TemplateView):
    
    template_name = 'AboutUs.html'
   