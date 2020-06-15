#include <ros/ros.h>
#include <mavros_msgs/WaypointSetCurrent.h>
#include <std_msgs/Bool.h>

void getStatus(std_msgs::Bool delry);

mavros_msgs::WaypointSetCurrent setCurrent;

bool delivered = false;

int main(int argc, char** argv){
    
    ros::init(argc, argv, "return");
    ros::NodeHandle n;

    ros::Rate rate(20.0);

    ros::Subscriber del = n.subscribe <std_msgs::Bool>
        ("delivered0", 100, getStatus);
    ros::ServiceClient droneReturn = n.serviceClient<mavros_msgs::WaypointSetCurrent>
        ("/uav0/mavros/mission/set_current");

    while(ros::ok()){
        if(delivered){
            if(droneReturn.call(setCurrent)){
                if(setCurrent.response.success){
                    ROS_INFO("DRONE RETURN INITIATED");
                    delivered =false;
                }
                else{
                    ROS_INFO("FAILED TO SET CURRENT WAYPOINT");
                }
            }
            else{
                ROS_INFO("FAILED TO CALLED SET CURRENT SERVICE");
            }
        }
        ros::spinOnce();
        rate.sleep();
    }
}


void getStatus(std_msgs::Bool delry)
{
    bool status;
    status = delry.data;
    if(status){
        setCurrent.request.wp_seq = 5;
        ROS_INFO("setcurrent func");
        delivered = true;
    }
}