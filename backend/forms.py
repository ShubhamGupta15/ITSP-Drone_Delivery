from flask_wtf import FlaskForm
from wtforms import StringField,SubmitField
from wtforms.validators import DataRequired

class droneIdCheck(FlaskForm):
    droneCode=StringField('DroneId: ',validators=[DataRequired()])
    submit=SubmitField('Submit')

#class locationEntry(FlaskForm):
    #loc = SelectField('Enter Location: ', choices=[('MSG','Main Gate'),('H01','Hostel 1'),('H02','Hostel 2'),('H03','Hostel 3')])
    #submit = SubmitField('Submit')
