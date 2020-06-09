    // Your web app's Firebase configuration
    const firebaseConfig = {
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
    
    //for rosbridge connection
    var ros = new ROSLIB.Ros({
            url : 'ws://localhost:9090'
        });
        ros.on('connection', function() {
            console.log('Connected to websocket server.');
        });

        ros.on('error', function(error) {
            console.log('Error connecting to websocket server: ', error);
        });

        ros.on('close', function() {
            console.log('Connection to websocket server closed.');
        });


    //document refrences to firebase database
    const docRef1 = firestore.doc("data/Delivery");
    const docRef2 = firestore.doc("data/Tracking");

    //var for delivery form
    let droneIDInput = document.getElementById("drone-id");
    let hostelInput = document.getElementById("hostel-to");
    const formLoc = document.getElementById("locationForm");


    // var for tracking form
    let droneIDTrackInput = document.getElementById("drone-track");
    let formTrack = document.getElementById("trackForm");

    //for data entry to database on response to delivery form
    var onSubmitDelivery = function (e) {
        e.preventDefault();

        let droneID = droneIDInput.value;
        let hostelToGo = hostelInput.value;

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

        
        //JS for communicating with ROS

        

        //Publishing
        var thespot = hostelToGo;
        var dronekaid = String(droneID);
        /*var lockey = new ROSLIB.Topic({
            ros: ros,
            name: '/location_input',
            messageType: 'std_msgs/String'
        });

        var hostel = new ROSLIB.Message({
             data: thespot,
        });
        lockey.publish(hostel);
        console.log('Destination: ', thespot);

        var drone = new ROSLIB.Topic({
            ros: ros,
            name: '/drone_id',
            messageType: 'std_msgs/String'
        });
        var droneneed = new ROSLIB.Message({
            data: dronekaid,
        });
        lockey.publish(droneneed);
        console.log('Destination: ', dronekaid);
        */


        //service def
        var web_inputClient = new ROSLIB.Service({
            ros : ros,
            name : '/Web_Input',
            serviceType : 'offb/Web_Input'  //instead of webinput add .srv file name which will be in offb/src
         });
        var request = new ROSLIB.ServiceRequest({
            hostel_to : thespot,
            //DroneID : "Hostel 5"
        });
        //calling service check res.success
        console.log('service');
        web_inputClient.callService(request, function(res) {
            console.log('Result for service call on '+ web_inputClient.name + ': '+ res.success);
        });
        //reload page
        location.href = "index.html";


    };



    //for data entry on response to tracking form
    var onSubmitTrack = function (e) {
        e.preventDefault();

        let droneIDTrack = droneIDTrackInput.value;

        docRef2.set({
            trackingID: droneIDTrack
        }).then(function () {
                console.log("Tracking")
        }).catch(function (err) {
                console.log(err);
        });

        //location.href = "HTML/testloc.html";

    };



    //to respond to submisson of delivery form
    formLoc.addEventListener( "submit" , onSubmitDelivery);

    //to respond to submisson of trackiing form
    formTrack.addEventListener("submit", onSubmitTrack);
