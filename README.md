# ITSP-Drone_Delivery

*This report contains the code behind a Drone Delivery system innovated in fulfilment of the Institute Technical Summer Project organised by the Institute Technical Council of IIT Bombay*
## Aim Of The Project
* Creating a complete Drone Delivery system which can be deployed.
*Currently the system only caters to the IIT Bombay campus but there are plans to scale it to larger areas in future.*
* Development of a website which can be used to initiate deliveries and track them.
* Integrating the input from website with the drone network and give corresponding instruction to the drone.

 ## How to use offb:
 *This folder contains the drone sysem architecture.
 The working package(with web integration) is offb-working2.
1. Install ROS, Gazebo, mavros, mavlink. For that copy the ubuntu_sim_ros_melodic.sh in your home.
   Now run bash ubuntu_sim_ros_melodic.sh in terminal.
2. Clone px4 Firmware in catkin_ws/src using git clone https://github.com/PX4/Firmware.git --recursive.
3. Install rosbridge_suite as directed in the wiki ROS documentation.
4. Add a folder named offb in catkin_ws/src.
5. Replace the contents of your offb package with the contents of this offb-single vehicle for single drone system and with offb-multi vehicle for multi drone system..
6. Copy the launch_rosbridge.sh launch-common.sh and launch-offb.sh in the ROS folder to your catkin_ws root.
7. Check and modify permisson of all files to executables.
8. From the worlds folder, add all the contents to both catkin_ws/src/Firmware/Tools/sitl_gazebo/worlds, and sitl_gazebo/models.
9. In catkin_ws/src/Firmware/launch/multi_uav_mavros_sitl.launch in line 8 change the world file at the end of the line to iitb2.world from empty.world
10. Run catkin build. (not catkin_make)
11. Install QGroundControl.
12. Setup Done!!


How to run simulation:

1. First launch the rosbridge server using the launch_rosbridge.sh.
2. In a new terminal launch the ROS setup using launch-offb.sh
3. Run QGroundControl.
4. Open the website in the websie folder of the repo.
5. Enter the commands to the delivery form.
6. The simulation and the QGroundControl will recieve commands and the misson will run.

Here is an example of our system running:
https://drive.google.com/file/d/15LzuOwKoyH1I0P72AiTNuyBkBPTJ-sk4/view?usp=sharing

Fair use of ubuntu_sim_ros_melodic.sh from dev.px4.io
