#include <ros/ros.h>
#include <mavros_msgs/Waypoint.h>
#include "offb/Web_Input.h"
#include <string>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>
#include <vector>
#include "offb/Data.h"
#include "offb/Delivery.h"

std::string hostel ;
std::string droneID;
std::string delivered_DroneID;
bool publish_data = false, pub_delivery = false;

bool getData(offb::Web_Input::Request &req, offb::Web_Input::Response &res);
bool getDeliveryStatus(offb::Delivery::Request &req, offb::Delivery::Response &res);

std_msgs::Bool delivered;

int main(int argc, char **argv)
{
    ros::init(argc,argv,"Web_Input_Server");
    ros::NodeHandle n;
    ros::NodeHandle d;
    ros::NodeHandle p1;
    ros::NodeHandle p2;
    ros::NodeHandle p3;
    ros::NodeHandle d1;
    ros::NodeHandle d2;
    ros::NodeHandle d3;

    ros::Rate rate(20.0);

    ros::ServiceServer service = n.advertiseService("Web_Input", getData);
    ROS_INFO("Ready to get data");
    ros::ServiceServer delverySrv = d.advertiseService("Delivery", getDeliveryStatus);
    ROS_INFO("Ready to get delivery status");

    offb::Data hostel_ID;
    

    ros::Publisher hostel_data_pub0 = p1.advertise<offb::Data>("UAV0_Data", 100);
    ros::Publisher hostel_data_pub1 = p2.advertise<offb::Data>("UAV1_Data", 100);
    ros::Publisher hostel_data_pub2 = p3.advertise<offb::Data>("UAV2_Data", 100);

    ros::Publisher pub_delivery0 = p1.advertise<std_msgs::Bool>("delivered0", 100);
    ros::Publisher pub_delivery1 = p2.advertise<std_msgs::Bool>("delivered1", 100);
    ros::Publisher pub_delivery2 = p3.advertise<std_msgs::Bool>("delivered2", 100);


    while(hostel_data_pub1.getNumSubscribers() == 0 && hostel_data_pub2.getNumSubscribers() == 0 && hostel_data_pub0.getNumSubscribers() == 0){
        rate.sleep();
        ROS_INFO("WAITING...");
    }

/*    while(pub_delivery0.getNumSubscribers() == 0 && pub_delivery1.getNumSubscribers() == 0 && pub_delivery2.getNumSubscribers() == 0){    
        rate.sleep();
        ROS_INFO("WAITING...");
    }
*/


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

    if(pub_delivery)
    {
        if(delivered_DroneID == "1")
        {            
            pub_delivery0.publish(delivered);
            ROS_INFO("UAV-0 has delivered");            
        }
        else if(delivered_DroneID == "2")
        {
            pub_delivery1.publish(delivered);
            ROS_INFO("UAV-1 has delivered");            
        }
        else if(delivered_DroneID == "3")
        {
            pub_delivery2.publish(delivered);
            ROS_INFO("UAV-2 has delivered");            
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

bool getDeliveryStatus(offb::Delivery::Request &req, offb::Delivery::Response &res)
{
    delivered.data = req.delivered;
    delivered_DroneID = req.DroneID;
    ROS_INFO("Received delivery status");
    res.status = true;
    pub_delivery = true;

    return true;
}
