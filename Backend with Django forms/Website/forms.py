from django import forms
from .models import Delivery_Order, Drone

class OrderForm(forms.Form):
    listofhostels = (
        ('empty', '---Select Hostel---'),
        ('Hostel 1','Hostel 1'),
        ('Hostel 2','Hostel 2'),
        ('Hostel 3','Hostel 3'),
        ('Hostel 4','Hostel 4'),
        ('Hostel 5','Hostel 5'),
        ('Hostel 6','Hostel 6'),
        ('Hostel 7','Hostel 7'),
        ('Hostel 8','Hostel 8'),
        ('Hostel 9','Hostel 9'),
        ('Hostel 10','Hostel 10'),
        ('Hostel 11','Hostel 11'),
        ('Hostel 12','Hostel 12'),
        ('Hostel 13','Hostel 13'),
        ('Hostel 14','Hostel 14'),
        ('Hostel 15','Hostel 15'),
        ('Hostel 16','Hostel 16'),
        ('Hostel 17','Hostel 17'),
        ('Hostel 18','Hostel 18'),
        ('Tansa House','Tansa House')
    )

    hostel = forms.ChoiceField(
        required =True,
        choices = listofhostels,
        initial = None,
        label = "Select the delivery hostel:" ,
        widget = forms.Select(attrs = {'class': 'input-box'})
        )
    
    email = forms.EmailField(required = True, label = "Enter email of client:")    
    phone = forms.CharField(max_length=10, min_length=10, label = "Enter phone of client:")
    
    def clean_hostel(self):

        enteredhostel = self.cleaned_data.get("hostel")
        if enteredhostel == 'empty':
            print("ERROR RAISED")
            raise forms.ValidationError("PLEASE SELECT A HOSTEL")
        else:
            return enteredhostel

class TrackForm(forms.Form):

    deliveryID = forms.IntegerField(
        localize = True, 
        widget = forms.NumberInput(
            attrs = {'class': 'input-box',
                     'placeholder': 'DELIVERY ID'   
            }
        ),
        label = "ENTER DELIVERY ID:"
        )

    def clean_deliveryID(self):
        ID = self.cleaned_data.get("deliveryID")
        if not Delivery_Order.objects.filter(deliveryID = ID).exists():
            raise forms.ValidationError("Invalid delivery ID")
        else:
            return ID

class ConfirmForm(forms.Form):

    deployPin = forms.IntegerField(required = True, label = "Enter pin of the assigned drone:")

    def __init__(self, *args, **kwargs):
        self.request = kwargs.pop("request")
        super(ConfirmForm, self).__init__(*args, **kwargs)

    def clean_deployPin(self):        
        assignedDrone = Drone.objects.get(droneID = self.request.session["assigned_drone"])
        
        if self.cleaned_data.get("deployPin") == assignedDrone.deploy_pin:
            return self.cleaned_data.get("deployPin")
        else:
            raise forms.ValidationError("Pin doesn't match with the assigned drone. Please check if you are using the correct drone.")