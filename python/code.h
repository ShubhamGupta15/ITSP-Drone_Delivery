#include "mavros_msgs/Waypoint.h"
#include "mavros_msgs/WaypointList.h"
#include "mavros_msgs/WaypointPush.h"
#include "mavros_msgs/WaypointClear.h"


	ros::NodeHandle p;
	ros::NodeHandle u;	
	ros::ServiceClient clientPush = p.serviceClient<mavros_msgs::WaypointPush>("/mavros/mission/clear");
	ros::ServiceClient clientClear = u.serviceClient<mavros_msgs::WaypointClear>("/mavros/mission/clear");
	mavros_msgs::WaypointPush PushSrv;
	mavros_msgs::WaypointClear ClearSrv;
	
	mavros_msgs::WaypointList listOfWP;
	
	PushSrv.request.start_index = 0;
	PushSrv.request.waypoints = listOfWP.waypoints;
	
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
		if(ClearSrv.success)	
			ROS_INFO("WAYPOINTS CLEARED");
		else
			ROS_INFO("ERROR IN CLEARING WAYPOINTS");
	}
	else
		ROS_INFO("------------------------------ERROR IN CALLING CLEAR SERVICE------------------------------");

