#include <ros/ros.h>
#include <mavros_msgs/Waypoint.h>
#include "offb/Web_Input.h"
#include <string>
#include<std_msgs/String.h>
//#include "AssignWP.h"
#include <vector>

std::string hostel ;
std::string droneID;
bool successful = true;
//std::vector<mavros_msgs::Waypoint> listOfWP;

bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res);

int main(int argc, char **argv)
{
    ros::init(argc,argv,"Web_Input_Server");
    ros::NodeHandle n;
    ros::NodeHandle p;

    ros::Rate rate(20.0);

    ros::ServiceServer service = n.advertiseService("Web_Input", getData);
    ROS_INFO("Ready to get data");    

    while(successful){
        ros::spinOnce();
        rate.sleep();
    }

    std_msgs::String hostelTo;

    hostelTo.data = hostel;    
    
    ros::Publisher hostel_data_pub = p.advertise<std_msgs::String>("hostel_Data", 100);

    while(hostel_data_pub.getNumSubscribers() == 0){
        ros::spinOnce();
        rate.sleep();
    }
    while(ros::ok()){
        hostel_data_pub.publish(hostelTo);
        ros::spin();
    }
    return 0;
}

 bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res){
        hostel = req.hostel_to;
        droneID = req.DroneID;
        res.success = true;
        ROS_INFO("service request succesful");
        successful = false;
        return true;
}