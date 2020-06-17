#ifndef WAYPOINT_H
#define WAYPOINT_H
#include <vector>
#include <string>
#include <mavros_msgs/Waypoint.h>
//#include "offb/Waypoint"

std::vector<mavros_msgs::Waypoint> waypoint_in(std::string hostel);

#endif