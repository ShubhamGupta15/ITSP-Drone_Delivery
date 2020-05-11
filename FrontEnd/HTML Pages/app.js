
<!-- The core Firebase JS SDK is always required and must be listed first -->
<script src="https://www.gstatic.com/firebasejs/7.14.3/firebase-app.js"></script>

<!-- TODO: Add SDKs for Firebase products that you want to use
     https://firebase.google.com/docs/web/setup#available-libraries -->
<script src="https://www.gstatic.com/firebasejs/7.14.3/firebase-analytics.js"></script>

<script>
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
</script>

<script>                                                                    //script to format the form
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

            //create form 2
            dest.innerHTML = " <form action=\"\" method=\"post\" id=\"hostel-to\" class=\"form\">" +
                "        <label for=\"hostel\">Choose the hostel for delivey</label><br>" +
                "        <input id=\"hostel\" list=\"destination\"name=\"destination\" placeholder=\"Choose the hostel\" required>" +
                "        <datalist id=\"destination\">" +
                "            <option value=droneId+\",Main Gate\"></option>" +
                "            <option value=droneId+\",Hostel 1\"></option>" +
                "            <option value=droneId+\",Hostel 2\"></option>" +
                "            <option value=droneId+\",Hostel 3\"></option>" +
                "            <option value=droneId+\",Hostel 4\"></option>" +
                "            <option value=droneId+\",Hostel 5\"></option>" +
                "            <option value=droneId+\",Hostel 6\"></option>" +
                "            <option value=droneId+\",Hostel 7\"></option>" +
                "            <option value=droneId+\",Hostel 8\"></option>" +
                "            <option value=droneId+\",Hostel 9\"></option>" +
                "            <option value=droneId+\",Hostel 10\"></option>" +
                "            <option value=droneId+\",Hostel 11\"></option>" +
                "            <option value=droneId+\",Hostel 12\"></option>" +
                "            <option value=droneId+\",Hostel 13\"></option>" +
                "            <option value=droneId+\",Hostel 14\"></option>" +
                "            <option value=droneId+\",Hostel 15\"></option>" +
                "            <option value=droneId+\",Hostel 16\"></option>" +
                "            <option value=droneId+\",Hostel 17\"></option>" +
                "            <option value=droneId+\",Hostel 18\"></option>" +
                "            <option value=droneId+\",Tansa House\"></option>" +
                "        </datalist>\n" +
                "        <input type=\"submit\">\n" +
                "    </form>"


            // add form 2 to webpage
            document.body.appendChild(dest);

            //disable form 1
            sub1.remove()
            document.getElementById("Drone-id").disabled = true;

        };

            //to respond to click
            droneCode.addEventListener("submit" , onCodeSubmit);
    </script>