from django.urls import path

from .views import MainPageView, DeliveryOrderStatusView, TrackPageView, ThankYouPageView,ConfirmPageView

urlpatterns = [
    path('home/',MainPageView,name="home"),
    path('home/deliverystatus/<int:id>/', DeliveryOrderStatusView, name = "StatusPage"),
    path('home/track/<int:id>', TrackPageView, name = 'TrackPage'),
    path('home/track/thankyou/', ThankYouPageView,name = "ThankYouPage"),
    path('home/confirm/', ConfirmPageView, name = "ConfirmPage")
]