from django.shortcuts import render, HttpResponseRedirect, redirect
from django.views.generic import TemplateView
from .models import Delivery_Order, Drones
import threading

# Create your views here.
def updateStatus(delID):
        
    obj = Delivery_Order.objects.get(deliveryID = delID)
    if obj.status == False:
        obj.status = True
        obj.save()
        print("Changed Del Status")
    drone_obj = Drones.objects.get(droneID = obj.drone)
    if drone_obj.is_busy == True:
        drone_obj.is_busy = False
        drone_obj.save()
        print("Changed Drone Status")
    print("hello")

def DeliveryOrderStatusView(request, id):

    if Delivery_Order.objects.filter(deliveryID = id).exists():
        orderToDisplay = Delivery_Order.objects.get(deliveryID = id)
        context = {
            "id": orderToDisplay.deliveryID,            
            "hostel": orderToDisplay.hostel
        }

        return render(request, "DeliveryOrderStatus.html", context)
        
    else:
        return render(request, "DeliveryOrderStatus.html", {})   


def MainPageView(request):
    
    global count

    if request.method == "GET":        
        return render(request,"index.html",{})
    elif request.POST.get('order_form') == 'Submit':
        print("Method is post")
        allBusy = True

        hostelto = request.POST.get('hostelno')

        list_of_hostels = ["Hostel 1", "Hostel 2", "Hostel 3", "Hostel 4", "Hostel 5", "Hostel 6", "Hostel 7", "Hostel 8", "Hostel 9", "Hostel 10", "Hostel 11", "Hostel 12", "Hostel 13", "Hostel 14", "Hostel 15", "Hostel 16", "Hostel 17", "Hostel 18", "Tansa House"]

        if not hostelto in list_of_hostels:
            context = {
                "invalidity": True
            }
            return render(request,'DeliveryOrderStatus.html',context)

        allDrones = Drones.objects.all()

        for num in range(3):
            if allDrones[num].is_busy == False:            
                tempD = allDrones[num]
                tempD.is_busy = True
                tempD.HostelNo = hostelto
                tempD.save()
                allBusy = False
                break

        if allBusy:
            context = {
                "invalidity": False,
                "busy": True
            }
            return render(request, "DeliveryOrderStatus.html",context)
        
        count = Delivery_Order.objects.all().count()

        order = Delivery_Order()
        order.hostel = hostelto
        order.drone = tempD.droneID
        order.deliveryID = 120000 + (count+1)*20 + tempD.droneID
        order.status = False
        order.save()

        returnTimer = threading.Timer(900.0, updateStatus,[order.deliveryID])
        returnTimer.start()
        
        return HttpResponseRedirect("http://127.0.0.1:8000/home/deliverystatus/%d" % order.deliveryID)

    elif request.POST.get('track_form') == 'Submit':
        
        trackID = int(request.POST.get('deliveryID'))
        return redirect("http://127.0.0.1:8000/home/track/%d" % trackID)

def TrackPageView(request, id):
    
    if request.POST.get('Delivered') == 'Delivered':
        order = Delivery_Order.objects.get(deliveryID = id)
        order.status = True
        order.save()
        drone = Drones.objects.get(droneID = order.drone)
        drone.is_busy = False
        drone.save()
        
        return HttpResponseRedirect('http://127.0.0.1:8000/home/track/thankyou/')
    
    if Delivery_Order.objects.filter(deliveryID = id).exists():
        orderNo = Delivery_Order.objects.get(deliveryID = id)

        if orderNo.status == False:
            context = {
                "id": orderNo.deliveryID
            }

            return render(request,"testloc.html",context)

        else :

            return render(request,'completed.html',{})
    else:
        context = {
            "invalid":True
        }
        return render(request,'completed.html',context)

def ThankYouPageView(request):

    return render(request, 'thankyou.html',{})

class AboutPageView(TemplateView):
    
    template_name = 'AboutUs.html'
