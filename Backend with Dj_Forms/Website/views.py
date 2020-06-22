from django.shortcuts import render, HttpResponseRedirect, redirect
from django.views.generic import TemplateView
from .models import Delivery_Order, Drone
from .forms import OrderForm, TrackForm
from datetime import datetime
import threading
# Create your views here.

def updateStatus(delID):
        
    obj = Delivery_Order.objects.get(deliveryID = delID)
    if obj.orderstatus == False:
        obj.orderstatus = True
        obj.save()
        print("Changed Del Status")
    drone_obj = Drone.objects.get(droneID = obj.drone)
    if drone_obj.busy == True:
        drone_obj.busy = False
        drone_obj.save()
        print("Changed Drone Status")    

def MainPageView(request):

    order = OrderForm()
    trackform = TrackForm()
    request.session['order_placed'] = False
    request.session['seen_status'] = False
    if request.POST.get('submit-order') == 'Place Order':
        order = OrderForm(request.POST)
        if order.is_valid():
            print("VALID")
            alldrones = Drone.objects.all()
            assigned_droneID = None
            all_busy = True
            for drone in alldrones:
                if drone.busy == False:
                    assigned_droneID = drone.droneID
                    drone.busy = True
                    drone.HostelNo = order.cleaned_data['hostel']
                    drone.save()
                    all_busy = False
                    break
            if all_busy:
                context = {
                    "invalidity": False,
                    "busy": True
                }
                return render(request, "DeliveryOrderStatus.html",context)
            delivery = Delivery_Order()
            delivery.drone = assigned_droneID
            delivery.orderstatus = False
            delivery.hostel = order.cleaned_data['hostel']
            #todays_orders = Delivery_Order.objects.filter(date = datetime.date(datetime.now())).count()
            todays_orders = Delivery_Order.objects.all().count()
            delivery.deliveryID = 12000 + 10*todays_orders + assigned_droneID
            delivery.save()

            returnTimer = threading.Timer(900.0, updateStatus,[delivery.deliveryID])
            returnTimer.start()


            request.session['order_placed'] = True

            return HttpResponseRedirect("http://127.0.0.1:8000/home/deliverystatus/%d" % delivery.deliveryID)
    
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

def DeliveryOrderStatusView(request, id = None):

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
        context = {
            "already_seen": True
        }
        return render(request, "DeliveryOrderStatus.html",context)

def TrackPageView(request, id):

    if request.POST.get('Delivered') == 'Delivered':
        order = Delivery_Order.objects.get(deliveryID = id)
        order.orderstatus = True
        order.save()
        drone = Drone.objects.get(droneID = order.drone)
        drone.busy = False
        drone.save()
        
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
   