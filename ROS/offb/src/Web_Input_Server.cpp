#include <ros/ros.h>
#include <mavros_msgs/Waypoint.h>
#include "offb/Web_Input.h"
#include <string>
#include<std_msgs/String.h>
//#include "AssignWP.h"
#include <vector>

std::string hostel ;
std::string droneID;
bool publish_data = false, wait_for_sub = true;
//std::vector<mavros_msgs::Waypoint> listOfWP;

bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res);

int main(int argc, char **argv)
{
    ros::init(argc,argv,"Web_Input_Server");
    ros::NodeHandle n;
    ros::NodeHandle p;

    ros::Rate rate(20.0);

    ros::ServiceServer service = n.advertiseService("Web_Input", getData);
    ROS_ERROR("Ready to get data");    

    std_msgs::String hostelTo;

    ros::Publisher hostel_data_pub = p.advertise<std_msgs::String>("hostel_Data", 100);

    while(true){
    /*
        ros::spinOnce();
        rate.sleep();*/
    
    hostelTo.data = hostel;     
    //ROS_ERROR("LOOP IS RUNNING");

    if(wait_for_sub)
    {
        while(hostel_data_pub.getNumSubscribers() == 0){
            //ros::spinOnce();
            rate.sleep();
            ROS_ERROR("WAITING...");
        }
        ROS_ERROR("WAITING FOR SUBSCRIBER DONE");
        wait_for_sub = false;
    }
    if(publish_data)
    {
            //while(ros::ok()){
            hostel_data_pub.publish(hostelTo);            
            //}
            ROS_ERROR("PUBLISHING DONE");
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
