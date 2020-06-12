#include <ros/ros.h>
#include <mavros_msgs/Waypoint.h>
#include "offb/Web_Input.h"
#include <string>
#include<std_msgs/String.h>
#include <vector>
#include"offb/Data.h"

std::string hostel ;
std::string droneID;
bool publish_data = false;
//std::vector<mavros_msgs::Waypoint> listOfWP;

bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res);

int main(int argc, char **argv)
{
    ros::init(argc,argv,"Web_Input_Server");
    ros::NodeHandle n;
    ros::NodeHandle p1;
    ros::NodeHandle p2;
    ros::NodeHandle p3;

    ros::Rate rate(20.0);

    ros::ServiceServer service = n.advertiseService("Web_Input", getData);
    ROS_INFO("Ready to get data");    

    offb::Data hostel_ID;

    ros::Publisher hostel_data_pub0 = p1.advertise<offb::Data>("UAV0_Data", 100);
    ros::Publisher hostel_data_pub1 = p2.advertise<offb::Data>("UAV1_Data", 100);
    ros::Publisher hostel_data_pub2 = p3.advertise<offb::Data>("UAV2_Data", 100);

    while(hostel_data_pub1.getNumSubscribers() == 0 && hostel_data_pub2.getNumSubscribers() == 0 && hostel_data_pub0.getNumSubscribers() == 0){
        //ros::spinOnce();
        rate.sleep();
        ROS_INFO("WAITING...");
    }


    while(ros::ok()){
    
    hostel_ID.DroneID = droneID;
    hostel_ID.Hostel = hostel;

    
    if(publish_data)
    {
        if(droneID == "1")
        {            
            hostel_data_pub0.publish(hostel_ID);
            ROS_INFO("PUBLISHED TO UAV-0");            
        }
        else if(droneID == "2")
        {
            hostel_data_pub1.publish(hostel_ID);
            ROS_INFO("PUBLISHED TO UAV-1");            
        }
        else if(droneID == "3")
        {
            hostel_data_pub2.publish(hostel_ID);
            ROS_INFO("PUBLISHED TO UAV-2");            
        }
        publish_data = false;
    }

    ros::spinOnce();
    rate.sleep();
    }
    return 0;
}

 bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res){
        hostel = req.hostel_to;
        droneID = req.DroneID;
        res.success = true;
        ROS_INFO("service request succesful");
        publish_data = true;
        return true;
}
