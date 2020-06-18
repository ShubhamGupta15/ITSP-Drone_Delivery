from django.urls import path

from .views import MainPageView, AboutPageView, TrackPageView, DeliveryOrderStatusView, ThankYouPageView

urlpatterns = [
    path('home/',MainPageView,name = 'MainPage'),
    path('home/about/',AboutPageView.as_view(),name = 'AboutPage'),
    path('home/track/<int:id>', TrackPageView, name = 'TrackPage'),
    path('home/deliverystatus/<int:id>', DeliveryOrderStatusView, name = "StatusPage"),
    path('home/track/thankyou/', ThankYouPageView,name = "ThankYouPage")
    #path('base/',BaseView, name = 'Base'),
]