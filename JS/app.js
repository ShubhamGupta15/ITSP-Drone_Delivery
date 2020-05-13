
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
    let firestore = firebase.firestore();


    let droneIDInput = document.getElementById("drone-id");
    let hostelInput = document.getElementById("hostel-to");
    const submitButton = document.getElementById("Submit");
    const docRef = firestore.doc("data/drone data") ;

    var onSubmit = function () {
        let droneID = droneIDInput.value;
        let hostelToGo = hostelInput.value;

        docRef.set({
            Drone: droneID,
            deliveryloc: hostelToGo
        }).then(function () {
                console.log("yeah")
        }).catch(function (error) {
                console.log("Error"  + error)
        });
    };

        //to respond to click
    submitButton.addEventListener( "click" , onSubmit);

    var newvar = 2;