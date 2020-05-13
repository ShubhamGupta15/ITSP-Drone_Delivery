
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

        // not to send data in first submit
        e.preventDefault()

        //create a new div
        var dest = document.createElement("div");

        //req to disable form 1
        var sub1 = document.getElementById("submit")

        // to get the dta of form 1
        var droneId = document.getElementById("Drone-id").value


        // add form 2 to webpage
        document.body.appendChild(dest);

        //disable form 1
        sub1.remove()
        document.getElementById("Drone-id").disabled = true;

    };

        //to respond to click
        droneCode.addEventListener("submit" , onCodeSubmit);