#ifndef INFO_H
#define INFO_H

#include "mavros_msgs/Waypoint.h"
#include "mavros_msgs/WaypointList.h"
#include "mavros_msgs/WaypointPush.h"
#include "mavros_msgs/WaypointClear.h"


class Info
{

private:

	ros::NodeHandle p;
	ros::ServiceClient clientPush = p.serviceClient<mavros_msgs::WaypointPush>("/mavros/mission/clear");
	ros::ServiceClient clientClear = p.serviceClient<mavros_msgs::WaypointClear>("/mavros/mission/clear");
	mavros_msgs::WaypointPush PushSrv;
	mavros_msgs::WaypointClear ClearSrv;
	
	mavros_msgs::WaypointList listOfWP;

public:		
	Info(mavros_msgs::WaypointList list)
	{
		listOfWP.waypoints = list.waypoints;				
	}
	
	void SendWayPoints();
	void clearWayPoints();
	
};

#endif
