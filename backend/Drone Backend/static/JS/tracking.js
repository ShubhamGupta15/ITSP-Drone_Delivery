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

    //fetching droneID to track from URL param
    var queryString = decodeURIComponent(window.location.search);
    queryString = queryString.substring(1);
    var trackID = queryString.split("&");

    var lat, long;

    //subscription
    var getloc = new ROSLIB.Topic({
      ros : ros,
      name : '/mavros/global_position/global',
      messageType : 'sensor_msgs/NavSatFix'
    });

    getloc.subscribe(function(message) {
      lat = message.latitude;
      long = message.longitude;

    });

var map, watchId, userPin;

function GetMap()
{
    map = new Microsoft.Maps.Map('#myMap', {
        credentials:'Auy26xShWKNnx2Ko3hic0uOAMBpK0jy_TtfM06-nuGi3WBeUREIlgzJMLqylaDs8'
    });
}
/*
function StartTracking() {
    //Add a pushpin to show the user's location.
    userPin = new Microsoft.Maps.Pushpin(map.getCenter(), { visible: false });
    map.entities.push(userPin);
    watchId = navigator.geolocation.watchPosition(UsersLocationUpdated);
    console.log('started Tracking');
    console.log('Push '+lat + ' ' +long);
}

function UsersLocationUpdated() {
    var loc = new Microsoft.Maps.Location(lat, long);

    //Update the user pushpin.
    userPin.setLocation(loc);
    userPin.setOptions({ visible: true });
    console.log('Updated '+lat + ' ' +long);

    //Center the map on the user's location.
    map.setView({ center: loc });
}
*/

var tid;

function startPush(){
  tid = setTimeout(pushLoc, 2000);
}

function pushLoc(){
  var loc = new Microsoft.Maps.Location(lat, long);

  //Update the user pushpin.
  userPin.setLocation(loc);
  userPin.setOptions({ visible: true });
  console.log('Updated '+lat + ' ' +long);

  //Center the map on the user's location.
  map.setView({ center: loc });

  tid = setTimeout(pushLoc, 5000);
}

function putPin(){
  userPin = new Microsoft.Maps.Pushpin(map.getCenter(), { visible: false });
    map.entities.push(userPin);
}

function StopTracking() {
    getloc.unsubscribe();
    clearTimeout(tid);
    //Remove the user pushpin.
    map.entities.clear();
}
