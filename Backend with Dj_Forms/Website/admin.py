from django.contrib import admin

# Register your models here.
from .models import Delivery_Order, Drone

class OrderAdmin(admin.ModelAdmin):
    readonly_fields = ('date','time',)


admin.site.register(Delivery_Order,OrderAdmin)
admin.site.register(Drone)