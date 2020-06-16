from django.contrib import admin

from .models import Drones,Delivery_Order
# Register your models here.

admin.site.register(Drones)
admin.site.register(Delivery_Order)