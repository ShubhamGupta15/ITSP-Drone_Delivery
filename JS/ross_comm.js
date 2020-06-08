
//js fo communicating with ROS

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
        <!-- Publishing-->
        var lockey = new ROSLIB.Topic({
            ros: ros,
            name: '/location_input',
            messageType: 'std_msgs/String'
        });
        var thespot = document.getElementById("hostel-to").value;
        var hostel = new ROSLIB.Message({
            data: thespot,
        });
        lockey.publish(hostel);
        console.log('Destination: ', thespot);