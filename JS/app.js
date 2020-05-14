
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


    //document refrences to firebase database
    const docRef1 = firestore.doc("data/drone data");
    const docRef2 = firestore.doc("data/tracking data");

    //var for delivery form
    let droneID = document.getElementById("drone-id").value;
    let hostelToGo = document.getElementById("hostel-to").value;
    const formLoc = document.getElementById("locationForm");


    // var for tracking form
    let droneIDTrack = document.getElementById("drone-track").value;
    let formTrack = document.getElementById("trackForm");

    //for data entry to database on response to delivery form
    var onSubmitDelivery = function (e) {
        e.preventDefault();

        docRef1.set({
            Drone: droneID,
            deliveryloc: hostelToGo
        }).then(function () {
                console.log("Delivery en route");
        }).catch(function (error) {
                console.log(error);
        });

        docRef2.set({
            trackingID: droneID
        });
    };

    //for data entry on response to tracking form
    var onSubmitTrack = function (e) {
        e.preventDefault();

        docRef2.set({
            trackingID: droneIDTrack
        }).then(function () {
                console.log("Tracking")
        }).catch(function (err) {
                console.log(err);
        });
    };



    //to respond to submisson of delivery form
    formLoc.addEventListener( "submit" , onSubmitDelivery);
    formLoc.addEventListener("submit", function () {
        location.href = "HTML/testloc.html"
    });


    //to repond to submisson of trackiing form
    formTrack.addEventListener("sumbit" , onSubmitTrack);
    formTrack.addEventListener("submit", function () {
        location.href = "HTML/testloc.html"
    });