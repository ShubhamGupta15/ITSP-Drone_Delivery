from django.db import models

# Create your models here.
class Drone(models.Model):
    droneID = models.IntegerField(blank = False , unique = True)
    deploy_pin = models.IntegerField(blank = False,unique = True,editable = False)
    busy = models.BooleanField(default = False,blank = True)
    HostelNo = models.CharField(max_length = 10, blank = True, null = True)

class Delivery_Order(models.Model):
    hostel = models.CharField(max_length = 10, null = False, blank = False)
    deliveryID = models.IntegerField(blank = False ,null = False)
    drone = models.IntegerField(blank = False, null = False)
    orderstatus = models.BooleanField(blank = False, null = False, default = False)
    client_email = models.EmailField(blank = False, default = None, null = True)
    time = models.TimeField(auto_now_add = True)
    date = models.DateField(auto_now_add = True)
