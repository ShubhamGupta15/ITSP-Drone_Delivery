from django.db import models

# Create your models here.

class Drones(models.Model):
    droneID = models.IntegerField(blank = False , unique = True)
    is_busy = models.BooleanField(default = False,blank = True)
    HostelNo = models.CharField(max_length = 10, blank = True, null = True)

class Delivery_Order(models.Model):
    hostel = models.CharField(max_length = 10, null = False, blank = False)
    deliveryID = models.IntegerField(blank = False ,null = False)
    drone = models.IntegerField(blank = False, null = False)
    status = models.BooleanField(blank = False, null = False, default = False)