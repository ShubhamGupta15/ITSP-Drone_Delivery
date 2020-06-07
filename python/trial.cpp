#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/Waypoint.h>
#include <mavros_msgs/WaypointList.h>
#include <mavros_msgs/WaypointPush.h>
#include <mavros_msgs/WaypointClear.h>
#include <vector>


mavros_msgs::State current_state;
void state_cb(const mavros_msgs::State::ConstPtr& msg){
    current_state = *msg;
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "offb_node");
    ros::NodeHandle nh;
    ros::NodeHandle p;
	ros::NodeHandle u;

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
    //ros::Subscriber location_sub = nh.subscribe <std_msgs::string>
    //      ("location", 10, );

    
    mavros_msgs::WaypointPush PushSrv;
	mavros_msgs::WaypointClear ClearSrv;

    //mavros_msgs:: listOfWP;
    std::vector <mavros_msgs::waypoint> listOfWP;
    int n_of_wp = 5;
    //mavros_msgs::Waypoint wp_msg[n_of_wp];
    //std::vector<mavros_msgs::waypoint> wp_msg;
    mavros_msgs::waypoint wp_msg[6];

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
        wp_msg[1].is_current = false;
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
        wp_msg[3].command = 22;
        wp_msg[3].is_current = false;
        wp_msg[4].autocontinue = true;
        wp_msg[4].param1 = 15;
        wp_msg[4].param2 = 0;
        wp_msg[4].param3 = 0;
        wp_msg[4].param4 = 0;
        wp_msg[4].x_lat = 19.13398597233391;
        wp_msg[4].y_long = 72.91314691725862;
        wp_msg[4].z_alt = 10.0;

        wp_msg[5].frame = 3; 
        wp_msg[5].command = 22;
        wp_msg[5].is_current = false;
        wp_msg[5].autocontinue = true;
        wp_msg[5].param1 = 15;
        wp_msg[5].param2 = 0;
        wp_msg[5].param3 = 0;
        wp_msg[5].param4 = 0;
        wp_msg[5].x_lat = 19.13477503621716;
        wp_msg[5].y_long = 72.9104689353687;
        wp_msg[5].z_alt = 10.0;
    
    //listOfWP.waypoints = wp_msg;

    for(int i = 0;i<=5;i++)
    {
        listOfWP.push_back(wp_msg[i]);
    }
    
    ros::Rate rate(20.0);

    while(ros::ok() && !current_state.connected){
        ros::spinOnce();
        rate.sleep();
    }

    geometry_msgs::PoseStamped pose;
    pose.pose.position.x = 0;
    pose.pose.position.y = 0;
    pose.pose.position.z = 0;

    //send a few setpoints before starting
    for(int i = 10; ros::ok() && i > 0; --i){
        local_pos_pub.publish(pose);
        ros::spinOnce();
        rate.sleep();
    }

    mavros_msgs::SetMode offb_set_mode;
    offb_set_mode.request.custom_mode = "OFFBOARD";

    mavros_msgs::CommandBool arm_cmd;
    arm_cmd.request.value = true;

    ros::Time last_request = ros::Time::now();

    PushSrv.request.start_index = 0;
	PushSrv.request.waypoints = listOfWP;


    if(clientPush.call(PushSrv))
	{
		if(PushSrv.response.success)
			ROS_INFO("Number of points transferred: %ld", (long int)PushSrv.response.wp_transfered);
		else
			ROS_INFO("------------------------------ERROR IN SENDING WAYPOINTS------------------------------");
	}
	else
		ROS_INFO("------------------------------ERROR IN CALLING PUSH SERVICE------------------------------");

	if(clientClear.call(ClearSrv))
	{
		if(ClearSrv.response.success)	
			ROS_INFO("WAYPOINTS CLEARED");
		else
			ROS_INFO("ERROR IN CLEARING WAYPOINTS");
	}
	else
		ROS_INFO("------------------------------ERROR IN CALLING CLEAR SERVICE------------------------------");




    while(ros::ok()){
        if( current_state.mode != "OFFBOARD" &&
            (ros::Time::now() - last_request > ros::Duration(5.0))){
            if( set_mode_client.call(offb_set_mode) &&
                offb_set_mode.response.mode_sent){
                ROS_INFO("Offboard enabled");
            }
            last_request = ros::Time::now();
        } else {
            if( !current_state.armed &&
                (ros::Time::now() - last_request > ros::Duration(5.0))){
                if( arming_client.call(arm_cmd) &&
                    arm_cmd.response.success){
                    ROS_INFO("Vehicle armed");
                }
                last_request = ros::Time::now();
            }
        }

        local_pos_pub.publish(pose);

        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}

