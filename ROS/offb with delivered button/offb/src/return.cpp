#include <ros/ros.h>
#include <mavros_msgs/WaypointSetCurrent.h>
#include <std_msgs/Bool.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/CommandTOL.h>
#include <sensor_msgs/NavSatFix.h>

void getStatus(std_msgs::Bool delry);
void getPos(sensor_msgs::NavSatFix gpsPos);

mavros_msgs::WaypointSetCurrent setCurrent;
sensor_msgs::NavSatFix position;

bool delivered = false;
float longitude, latitude;

int main(int argc, char** argv){
    
    ros::init(argc, argv, "return");
    ros::NodeHandle n;

    ros::Rate rate(20.0);

    ros::Subscriber del = n.subscribe <std_msgs::Bool>
        ("delivered0", 100, getStatus);
    ros::ServiceClient droneReturn = n.serviceClient<mavros_msgs::WaypointSetCurrent>
        ("/uav0/mavros/mission/set_current");
    ros::ServiceClient arming_client = n.serviceClient<mavros_msgs::CommandBool>
        ("/uav0/mavros/cmd/arming");
    ros::Subscriber pos = n.subscribe<sensor_msgs::NavSatFix>
        ("/uav0/mavros/global_position/global",100, getPos );
    ros::ServiceClient takeo = n.serviceClient<mavros_msgs::CommandTOL>
        ("/uav0/mavros/cmd/takeoff");

    mavros_msgs::CommandBool arm_cmd;
    arm_cmd.request.value = true;

    mavros_msgs::CommandTOL retake;
    retake.request.latitude = latitude;
    retake.request.longitude = longitude;
    retake.request.altitude = 30;

    ros::Time last_request = ros::Time::now();


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


void getStatus(std_msgs::Bool delry){
    bool status;
    status = delry.data;
    if(status){
        setCurrent.request.wp_seq = 5;
        ROS_INFO("setcurrent func");
        delivered = true;
    }
}

void getPos(sensor_msgs::NavSatFix gpsPos){
    latitude = gpsPos.latitude;
    longitude = gpsPos.longitude;
}