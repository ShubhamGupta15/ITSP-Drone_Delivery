import pyrebase

firebaseConfig = {
    "apiKey": "AIzaSyBh9XgJXNJXkpLgEwcU4d080MqhISukpCs",
    "authDomain": "drone-delivery-crusaders.firebaseapp.com",
    "databaseURL": "https://drone-delivery-crusaders.firebaseio.com",
    "projectId": "drone-delivery-crusaders",
    "storageBucket": "drone-delivery-crusaders.appspot.com",
    "messagingSenderId": "44700296781",
    "appId": "1:44700296781:web:0038d9b4b8f3d6ae5e5e04",
    "measurementId": "G-Q395MHGJCK",
    "serviceAccount": "python/drone-delivery-crusaders-firebase-adminsdk-y1nml-b1f007d7de.json"
  }

firebase = pyrebase.initialize_app(firebaseConfig)
# Get a reference to the auth service
auth = firebase.auth()

user = auth.sign_in_with_email_and_password()
# before the 1 hour expiry:
user = auth.refresh(user['refreshToken'])


data = {"trackingID": "7"}

db = firebase.database()
db.child("data").child("drone data").update(data, user['idToken'])
