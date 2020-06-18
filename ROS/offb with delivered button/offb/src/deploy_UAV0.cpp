#include <ros/ros.h>
#include<vector>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/Waypoint.h>
#include <mavros_msgs/WaypointList.h>
#include <mavros_msgs/CommandHome.h>
#include <mavros_msgs/WaypointPush.h>
#include <mavros_msgs/WaypointClear.h>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>
#include <sensor_msgs/NavSatFix.h>
#include <string>
#include "AssignWP_0.h"
#include "offb/Data.h"

std::vector <mavros_msgs::Waypoint> listOfWP; 

void getStatus(std_msgs::Bool delry);
void getLoc(sensor_msgs::NavSatFix gpsLoc);

bool success = true;
bool onClick = false;
int flag;
float latitude, longitude;
std::string hostel;

mavros_msgs::State current_state;
void state_cb(const mavros_msgs::State::ConstPtr& msg){
    current_state = *msg;
}

void passData(offb::Data hostel_ID);


int main(int argc, char **argv)
{
    ros::init(argc, argv, "deploy_UAV0");
    ros::NodeHandle nh;
    ros::NodeHandle p;
    ros::NodeHandle u;
    ros::NodeHandle r;

    ros::Subscriber state_sub = nh.subscribe<mavros_msgs::State>
            ("/uav0/mavros/state", 10, state_cb);
    ros::ServiceClient arming_client = nh.serviceClient<mavros_msgs::CommandBool>
            ("/uav0/mavros/cmd/arming");
    ros::ServiceClient set_mode_client = nh.serviceClient<mavros_msgs::SetMode>
            ("/uav0/mavros/set_mode");
    ros::ServiceClient clientPush = p.serviceClient<mavros_msgs::WaypointPush>
            ("/uav0/mavros/mission/push");
	ros::ServiceClient clientClear = u.serviceClient<mavros_msgs::WaypointClear>
            ("/uav0/mavros/mission/clear");
    ros::ServiceClient set_home_client = u.serviceClient<mavros_msgs::CommandHome>
            ("/uav0/mavros/cmd/set_home");
    ros::Subscriber loc_sub= p.subscribe<sensor_msgs::NavSatFix>
            ("/uav0/mavros/global_position/global", 20, getLoc);
    ros::Subscriber location_sub = nh.subscribe <offb::Data>
            ("UAV0_Data", 100, passData);
    ros::Subscriber del = nh.subscribe <std_msgs::Bool>
            ("delivered0", 100, getStatus);


    mavros_msgs::WaypointPush PushSrv;
	mavros_msgs::WaypointClear ClearSrv;
    mavros_msgs::CommandHome set_home_srv;

    mavros_msgs::SetMode offb_set_mode;
    offb_set_mode.request.custom_mode = "AUTO.MISSION";

    mavros_msgs::CommandBool arm_cmd;
    arm_cmd.request.value = true;

    ros::Rate rate(20.0);
    while(ros::ok() && !current_state.connected){
        ros::spinOnce();
        rate.sleep();
    }

    //clearing all previous missons
    if(clientClear.call(ClearSrv))
    {
        if(ClearSrv.response.success)	
            ROS_INFO("WAYPOINTS CLEARED");
        else
            ROS_ERROR("ERROR IN CLEARING WAYPOINTS");
    }
    else
        ROS_ERROR("------------------------------ERROR IN CALLING CLEAR SERVICE------------------------------");


    while(ros::ok()){
        if(onClick){
            onClick=false;
            //clearing all previous missons
            if(clientClear.call(ClearSrv))
            {
                if(ClearSrv.response.success)	
                    ROS_INFO("WAYPOINTS CLEARED");
                else
                    ROS_ERROR("ERROR IN CLEARING WAYPOINTS");
            }
            else
                ROS_ERROR("------------------------------ERROR IN CALLING CLEAR SERVICE------------------------------");

<<<<<<< HEAD
=======
            while(success){
                ros::spinOnce();
                rate.sleep();
            }

>>>>>>> a04397b5fff8120fcd564a8941794999a699a830
            ros::Time last_request = ros::Time::now();

            PushSrv.request.start_index = 0;
            PushSrv.request.waypoints = listOfWP;

            set_home_srv.request.current_gps = false;
            set_home_srv.request.latitude = latitude;
            set_home_srv.request.longitude = longitude;
            set_home_srv.request.altitude = 0;

            if(clientPush.call(PushSrv))
            {
                if(PushSrv.response.success)
                    ROS_INFO("Number of points transferred: %ld", (long int)PushSrv.response.wp_transfered);
                else
                    ROS_ERROR("------------------------------ERROR IN SENDING WAYPOINTS------------------------------");
            }
            else
                ROS_ERROR("------------------------------ERROR IN CALLING PUSH SERVICE------------------------------");

            //setting home coord
            if (set_home_client.call(set_home_srv))
                {
                    if(set_home_srv.response.success)
                        ROS_INFO("Home was set to new value ");
                    else
                        ROS_ERROR("Home position couldn't been changed"); 
                    
                }
                else
                    ROS_ERROR("Service could not be called");

            
            bool misson = true;
            bool arm = true;

    
            if( misson && current_state.mode != "AUTO.MISSION" ){
                if( set_mode_client.call(offb_set_mode) &&
                    offb_set_mode.response.mode_sent){
                    if(flag == 1){
                        ROS_INFO("Misson enabled");
                    }
                    else if(flag == 2){
                        ROS_INFO("Return Initiated");
                    }
                    misson = false;
                }
                last_request = ros::Time::now();
            }
            if( arm && !current_state.armed ){
                if( arming_client.call(arm_cmd) &&
                    arm_cmd.response.success){
                    ROS_INFO("Vehicle armed");
                    arm = false;
                }
                last_request = ros::Time::now();
            }

        
        }
        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}






void passData(offb::Data hostel_ID){

    success = false;
    hostel = hostel_ID.Hostel;
    listOfWP = waypoint_in(hostel_ID.Hostel, 2);
    onClick=true;
    flag = 1;
}

void getStatus(std_msgs::Bool delry){
    bool status;
    status = delry.data;
    if(status){
        success = false;
        listOfWP = waypoint_in(hostel, 1);
        onClick = true;
        flag = 2;
    }
}

void getLoc(sensor_msgs::NavSatFix gpsLoc){
    latitude = gpsLoc.latitude;
    longitude = gpsLoc.longitude;
}