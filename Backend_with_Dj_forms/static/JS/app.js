    console.log('hello');

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


    //var for delivery form
    let deliveryIDInput = document.getElementById("deliveryID");
    let hostelInput = document.getElementById("hostelNo");

    //for data entry to database on responses to delivery form

        let deliveryID = String(deliveryIDInput.innerText);
        let hostelToGo = hostelInput.innerText;
        droneID = deliveryID.slice(-1);
        console.log(droneID);

        //JS for communicating with ROS



        //Publishing
        var thespot = hostelToGo;
        var dronekaid = String(droneID);

        //service def
        var web_inputClient = new ROSLIB.Service({
            ros : ros,
            name : '/Web_Input',
            serviceType : 'offb/Web_Input'  //instead of webinput add .srv file name which will be in offb/src
         });
        var request = new ROSLIB.ServiceRequest({
            hostel_to : thespot,
            DroneID : dronekaid
        });
        //calling service check res.success
        console.log('service');
        web_inputClient.callService(request, function(res) {
            console.log('Result for service call on '+ web_inputClient.name + ': '+ res.success);
        });