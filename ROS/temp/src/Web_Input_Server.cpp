#include <ros/ros.h>
#include <mavros_msgs/Waypoint.h>
#include "offb/Web_Input.h"
#include <string>
#include<std_msgs/String.h>
//#include "AssignWP.h"
#include <vector>

std::string hostel = "hos";
int DroneID;
//std::vector<mavros_msgs::Waypoint> listOfWP;

bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res);

int main(int argc, char **argv)
{
    ros::init(argc,argv,"Web_Input_Server");
    ros::NodeHandle n;
    ros::NodeHandle p;

    ros::ServiceServer service = n.advertiseService("Web_Input", getData);
    ROS_INFO("Ready to get data");    

    std_msgs::String hostelTo;
    hostelTo.data = hostel;

    ros::Publisher hostel_data_pub = p.advertise<std_msgs::String>("hostel_Data", 100);

    ros::Rate loop_rate(10);

    while(hostel_data_pub.getNumSubscribers() == 0)
    {
        ros::spinOnce();
        loop_rate.sleep();
    }

    hostel_data_pub.publish(hostelTo);
    ros::spin();
    return 0;
}

 bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res){
        hostel = req.hostel_to;
        DroneID = req.DroneID;
        res.success = true;
        return true;
    }



