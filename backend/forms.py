from flask_wtf import FlaskForm
from wtforms import StringField,SubmitField,SelectField
from wtforms.validators import DataRequired

class droneIdCheck(FlaskForm):
    droneCode=StringField('DroneId: ',validators=[DataRequired()])
    submit=SubmitField('Submit')

class locationEntry(FlaskForm):
    loc = SelectField('Enter Location: ', choices=[('MSG','Main Gate'),('H01','Hostel 1'),('H02','Hostel 2'),('H03','Hostel 3'),
                                                   ('H04','Hostel 4'),('H05','Hostel 5'),('H06','Hostel 6'),('H07','Hostel 7'),
                                                 ('H08','Hostel 8'),('H09','Hostel 9'),('H10','Hostel 10'),('H11','Hostel 11'),
                                                 ('H12','Hostel 12'),('H13','Hostel 13'),('H14','Hostel 14'),('H15','Hostel 15'),
                                                   ('H16','Hostel 16'),('H17', 'Hostel 17'),('H18','Hostel 18'),('WTH','Tansa House')])
    submit = SubmitField('Submit')
