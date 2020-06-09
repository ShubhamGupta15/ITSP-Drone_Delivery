#include <ros/ros.h>
#include <mavros_msgs/Waypoint.h>
#include <offb/Web_Input.h>
#include <offb/WpList.h>
#include <string>
#include "AssignWP.h"
#include <vector>


std::string hostel;
int DroneID;
//std::vector<mavros_msgs::Waypoint> listOfWP;
offb::WpList listOfWP;

bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res)
{
    hostel = req.hostel_to;
    DroneID = req.DroneID;
    res.success = true;

    listOfWP.wpList = waypoint_in(hostel);
    
    ros::Publisher web_data_pub = p.advertise<offb::WpList>("Data", 100);

    ros::Rate loop_rate(10);

    while(web_data_pub.getNumSubscribers() == 0)
    {
        ros::spinOnce();
        ros::loop_rate.sleep();
    }

    web_data_pub.publish(listOfWP);

    return true;
}

int main(int argc, char **argv)
{
    ros::init(argc,argv,"Web_Input_Server");
    ros::NodeHandle n;
    ros::NodeHandle p;

    ros::ServiceServer service = n.advertiseService("Web_Input", getData);
    ROS_INFO("Ready to get data");
    ros::spin();

    return 0;
}
