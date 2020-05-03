from flask import Flask, render_template, url_for, flash, redirect,request
from flask_sqlalchemy import SQLAlchemy
from forms import droneIdCheck,locationEntry

app = Flask(__name__)
app.config['SECRET_KEY']='koihackkarkedikhao'
app.config['SQLALCHEMY_DATABASE_URI']='sqlite:///location.db'
db=SQLAlchemy(app)

class Location(db.Model):
    __tablename__ = 'Destinaton'
    id = db.Column(db.Integer, primary_key=True)
    lockey = db.Column(db.String(3), unique=True, nullable=False)
    locationfull = db.Column(db.String(60), unique=True, nullable=False)

    #print to check
    def __repr__(self):
        return f"Location('{self.lockey}', '{self.locationfull}')"


@app.route('/',methods=['GET', 'POST'])
def index():
    form = droneIdCheck()
    if form.validate_on_submit():
        if (form.droneCode.data == '23'):
            return redirect(url_for('location'))
        else:
            flash('Wrong ID')
    return render_template('droneId.html', form=form)

@app.route('/location',methods=['GET', 'POST'])
def location():
    form = locationEntry()
    if request.method == 'POST':
        #destination = form.loc.data
        return redirect(url_for('track'))
    return render_template('LocCheck2.html', form=form)

@app.route('/track',methods = ['POST', 'GET'])
def track():
      return render_template('testloc.html')

@app.route('/about')
def about():
    return render_template('about.html')


if __name__ == "__main__":
    app.run(debug=True)
