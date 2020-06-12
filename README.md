# ITSP-Drone_Delivery

This report contains the code behind a Drone Delivery system innovated in fulfilment of the Institute Technical Summer Project organised by the Institute Technical Council of IIT Bombay.

How to use offb:

The working package(with web integration) is offb-working2.
1. Install ROS, Gazebo, mavros, mavlink as directed in px4 documentation.
2. Clone px4 Firmware in catkin_ws/src.
3. Install rosbridge_suite as directed in the wiki ROS documentation.
4. Add a folder named offb in catkin_ws/src.
5. Replace the contents of your offb package with the contents of this offb-working2.
6. Copy the launch_rosbridge.sh launch-common.sh and launch-offb.sh to your catkin_ws root.
7. Check and modify permisson of all files to executables.
8. From the worlds folder, add iitb2.world to catkin_ws/src/Firmware/Tools/sitl_gazebo/worlds, and the rest of the files to      sitl_gazebo/models.
9. Run catkin build. (not catkin_make)
10. Install QGroundControl.
11. Setup Done!!


How to run simulation:

1. First launch the rosbridge server using the launch_rosbridge.sh.
2. In a new terminal launch the ROS setup using launch-offb.sh
3. Run QGroundControl.
4. Open the website in the websie folder of the repo.
5. Enter the commands to the delivery form.
6. The simulation and the QGroundControl will recieve commands and the misson will run**.

**Currently misson only supported for hostel 5 rest will be added soon.
