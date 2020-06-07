#include "Info.h"

void Info::SendWayPoints()
{
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
}

void Info::clearWayPoints()
{
	if(clientClear.call(ClearSrv))
	{
		if(ClearSrv.success)	
			ROS_INFO("WAYPOINTS CLEARED");
		else
			ROS_INFO("ERROR IN CLEARING WAYPOINTS");
	}
	else
		ROS_INFO("------------------------------ERROR IN CALLING CLEAR SERVICE------------------------------");
}

