#ifndef INFO_H
#define INFO_H

#include "mavros/Waypoint.h"
#include "mavros/WaypointList.h"


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
