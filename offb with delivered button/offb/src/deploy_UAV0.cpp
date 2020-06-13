#include <ros/ros.h>
#include<vector>
#include <geometry_msgs/PoseStamped.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/Waypoint.h>
#include <mavros_msgs/WaypointList.h>
#include <mavros_msgs/CommandHome.h>
#include <mavros_msgs/WaypointPush.h>
#include <mavros_msgs/WaypointClear.h>
#include <std_msgs/String.h>
#include "AssignWP.h"
#include "offb/Data.h"
#include "std_msgs/Bool.h"

std::vector <mavros_msgs::Waypoint> listOfWP; 

bool success = true;
bool status = false;

mavros_msgs::State current_state;
void state_cb(const mavros_msgs::State::ConstPtr& msg){
    current_state = *msg;
}

void passData(offb::Data hostel_ID);
void getStatus(std_msgs::Bool delry)

mavros_msgs::WaypointSetCurrent setCurrent;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "deploy_UAV0");
    ros::NodeHandle nh;
    ros::NodeHandle p;
    ros::NodeHandle u;
    ros::NodeHandle r;
    ros::NodeHandle c;

    ros::Subscriber state_sub = nh.subscribe<mavros_msgs::State>
            ("/uav0/mavros/state", 10, state_cb);
    ros::Publisher local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>
            ("uav0/mavros/setpoint_position/local", 10);
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
    ros::Subscriber location_sub = nh.subscribe <offb::Data>
            ("UAV0_Data", 100, passData);
    ros::Subscriber del = nh.subscribe <std_msgs::Bool>
            ("delivered0", 100, getStatus);

    ros::ServiceClient droneReturn = c.serviceClient<mavros_msgs::WaypointSetCurrent>
        ("/uav0/mavros/mission/set_current");    

    mavros_msgs::WaypointPush PushSrv;
	mavros_msgs::WaypointClear ClearSrv;
    mavros_msgs::CommandHome set_home_srv;


    set_home_srv.request.current_gps = false;
    set_home_srv.request.latitude = 19.12579446;
    set_home_srv.request.longitude = 72.91619611;
    set_home_srv.request.altitude = 10;

    ros::Rate rate(20.0);
    while(ros::ok() && !current_state.connected){
        ros::spinOnce();
        rate.sleep();
    }


    while(success){
        ros::spinOnce();
        rate.sleep();
    }

    ros::Time missionStart = ros::Time::now();

    mavros_msgs::SetMode offb_set_mode;
    offb_set_mode.request.custom_mode = "AUTO.MISSION";

    mavros_msgs::CommandBool arm_cmd;
    arm_cmd.request.value = true;

    ros::Time last_request = ros::Time::now();

    PushSrv.request.start_index = 0;
	PushSrv.request.waypoints = listOfWP;

    

    if (set_home_client.call(set_home_srv))
    {
        if(set_home_srv.response.success)
            ROS_INFO("Home was set to new value ");
        else
            ROS_ERROR("Home position couldn't been changed"); 
        
    }
    else
        ROS_ERROR("Service could not be called");
    

    
    if(clientClear.call(ClearSrv))
	{
		if(ClearSrv.response.success)	
			ROS_INFO("WAYPOINTS CLEARED");
		else
			ROS_ERROR("ERROR IN CLEARING WAYPOINTS");
	}
	else
		ROS_ERROR("------------------------------ERROR IN CALLING CLEAR SERVICE------------------------------");

     
 
    if(clientPush.call(PushSrv))
	{
		if(PushSrv.response.success)
			ROS_INFO("Number of points transferred: %ld", (long int)PushSrv.response.wp_transfered);
		else
			ROS_ERROR("------------------------------ERROR IN SENDING WAYPOINTS------------------------------");
	}
	else
		ROS_ERROR("------------------------------ERROR IN CALLING PUSH SERVICE------------------------------");

	
    bool misson = true;
    bool arm = true;

    while(ros::ok()){
        if( misson && current_state.mode != "AUTO.MISSION" &&
            (ros::Time::now() - last_request > ros::Duration(5.0))){
            if( set_mode_client.call(offb_set_mode) &&
                offb_set_mode.response.mode_sent){
                ROS_INFO("Misson enabled");
                misson = false;
            }
            last_request = ros::Time::now();
        }
       else {
            if( arm && !current_state.armed &&
                (ros::Time::now() - last_request > ros::Duration(5.0))){
                if( arming_client.call(arm_cmd) &&
                    arm_cmd.response.success){
                    ROS_INFO("Vehicle armed");
                    arm = false;
                }
                last_request = ros::Time::now();
            }
        }

        if(status || ros::Time::now() - missionStart >= ros::Duration(600.0)){
            if(droneReturn.call(setCurrent))
            {
                if(setCurrent.success){
                    ROS_INFO("DRONE RETURN INITIATED");
                }
                else{
                    ROS_INFO("FAILED TO SET CURRENT WAYPOINT");
                }
            }
            else{
                ROS_INFO("FAILED TO CALLED SET CURRENT SERVICE");
            }

            status = false;
        }



        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}


void passData(offb::Data hostel_ID){

    success = false;


    listOfWP = waypoint_in(hostel_ID.Hostel);
}

void getStatus(std_msgs::Bool delry)
{
    status = delry.data;
    if(status)
        setCurrent.wp_seq = 5;
}