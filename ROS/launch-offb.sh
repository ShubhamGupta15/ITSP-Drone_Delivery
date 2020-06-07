#!/bin/bash

source ./launch-common.sh
cd ~/catkin_ws/src/Firmware
DONT_RUN=1 make px4_sitl_default gazebo
source ~/catkin_ws/devel/setup.bash    # (optional)
source Tools/setup_gazebo.bash $(pwd) $(pwd)/build/px4_sitl_default
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)/Tools/sitl_gazebo
cd 

export PX4_HOME_LAT=19.12579446
export PX4_HOME_LON=72.91619611
export PX4_HOME_ALT=28.5

cd ../
roslaunch offb offb.launch


