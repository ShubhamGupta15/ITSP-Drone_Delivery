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

std::vector <mavros_msgs::Waypoint> listOfWP; 

mavros_msgs::State current_state;
void state_cb(const mavros_msgs::State::ConstPtr& msg){
    current_state = *msg;
}

void passData(std_msgs::String hostel);


int main(int argc, char **argv)
{
    ros::init(argc, argv, "offb_node");
    ros::NodeHandle nh;
    ros::NodeHandle p;
    ros::NodeHandle u;
    ros::NodeHandle r;

    ros::Subscriber state_sub = nh.subscribe<mavros_msgs::State>
            ("mavros/state", 10, state_cb);
    ros::Publisher local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>
            ("mavros/setpoint_position/local", 10);
    ros::ServiceClient arming_client = nh.serviceClient<mavros_msgs::CommandBool>
            ("mavros/cmd/arming");
    ros::ServiceClient set_mode_client = nh.serviceClient<mavros_msgs::SetMode>
            ("mavros/set_mode");
    ros::ServiceClient clientPush = p.serviceClient<mavros_msgs::WaypointPush>
            ("/mavros/mission/push");
	ros::ServiceClient clientClear = u.serviceClient<mavros_msgs::WaypointClear>
            ("/mavros/mission/clear");
    ros::ServiceClient set_home_client = u.serviceClient<mavros_msgs::CommandHome>
            ("mavros/cmd/set_home");
    ros::Subscriber location_sub = nh.subscribe <std_msgs::String>
            ("Data", 100, passData);
    /*ros::Publisher location_pub = r.advertise <std_msgs::String>
            ("location_input", 100);
    std_msgs::String ini;
    ini.data = "Hostel 5";
    
    ros::Rate rate(20.0);

    while(location_pub.getNumSubscribers() == 0){
        ros::spinOnce();
        rate.sleep();
    }

    location_pub.publish(ini);
    */
    
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

        

        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}






void passData(std_msgs::String hostel){

    mavros_msgs::Waypoint wp_msg[5];
    
    if (hostel.data == "Hostel 5"){
        
        wp_msg[0].frame = 3; 
        wp_msg[0].command = 22;
        wp_msg[0].is_current = false;
        wp_msg[0].autocontinue = true;
        wp_msg[0].param1 = 15;
        wp_msg[0].param2 = 0;
        wp_msg[0].param3 = 0;
        wp_msg[0].param4 = 0;
        wp_msg[0].x_lat = 19.12579446;
        wp_msg[0].y_long = 72.91619611;
        wp_msg[0].z_alt = 10.0;

        wp_msg[1].frame = 3; 
        wp_msg[1].command = 16;
        wp_msg[1].is_current = true;
        wp_msg[1].autocontinue = true;
        wp_msg[1].param1 = 15;
        wp_msg[1].param2 = 0;
        wp_msg[1].param3 = 0;
        wp_msg[1].param4 = 0;
        wp_msg[1].x_lat = 19.12871289;
        wp_msg[1].y_long = 72.91537415;
        wp_msg[1].z_alt = 10.0;

        wp_msg[2].frame = 3; 
        wp_msg[2].command = 16;
        wp_msg[2].is_current = false;
        wp_msg[2].autocontinue = true;
        wp_msg[2].param1 = 15;
        wp_msg[2].param2 = 0;
        wp_msg[2].param3 = 0;
        wp_msg[2].param4 = 0;
        wp_msg[2].x_lat = 19.131931872621035;
        wp_msg[2].y_long = 72.915175289366;
        wp_msg[2].z_alt = 10.0;

        wp_msg[3].frame = 3; 
        wp_msg[3].command = 21;
        wp_msg[3].is_current = false;
        wp_msg[3].autocontinue = true;
        wp_msg[3].param1 = 15;
        wp_msg[3].param2 = 0;
        wp_msg[3].param3 = 0;
        wp_msg[3].param4 = 0;
        wp_msg[3].x_lat = 19.13398597233391;
        wp_msg[3].y_long = 72.91314691725862;
        wp_msg[3].z_alt = 10.0;

        wp_msg[4].frame = 3; 
        wp_msg[4].command = 21;
        wp_msg[4].is_current = false;
        wp_msg[4].autocontinue = true;
        wp_msg[4].param1 = 15;
        wp_msg[4].param2 = 0;
        wp_msg[4].param3 = 0;
        wp_msg[4].param4 = 0;
        wp_msg[4].x_lat = 19.13477503621716;
        wp_msg[4].y_long = 72.9104689353687;
        wp_msg[4].z_alt = 10.0;
    
        
        for(int i = 0;i<=4;i++){
            listOfWP.push_back(wp_msg[i]);
        }
    }
}