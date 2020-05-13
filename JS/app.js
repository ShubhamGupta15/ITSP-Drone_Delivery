
    // Your web app's Firebase configuration
    var firebaseConfig = {
    apiKey: "AIzaSyBh9XgJXNJXkpLgEwcU4d080MqhISukpCs",
    authDomain: "drone-delivery-crusaders.firebaseapp.com",
    databaseURL: "https://drone-delivery-crusaders.firebaseio.com",
    projectId: "drone-delivery-crusaders",
    storageBucket: "drone-delivery-crusaders.appspot.com",
    messagingSenderId: "44700296781",
    appId: "1:44700296781:web:d57c794e69eb75425e5e04",
    measurementId: "G-NB4E645J64"
    };
    // Initialize Firebase
    firebase.initializeApp(firebaseConfig);
    firebase.analytics();

    //script to format the form
    var droneCode = document.getElementById("drone-code");

    var onCodeSubmit = function (e) {


    };

        //to respond to click
        droneCode.addEventListener( "" , onCodeSubmit);
        droneCode.addEventListener("submit" , onCodeSubmit);
