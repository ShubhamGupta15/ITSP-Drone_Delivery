#include "AssignWP.h"

std::vector<mavros_msgs::Waypoint> waypoint_in(std::string hostel)
{
    using namespace std;

    std::string hi;
    std::vector<mavros_msgs::Waypoint> listOfWP;

    mavros_msgs::Waypoint wp_msg[5];
    
        if (hostel == "Hostel 5"){
            
            wp_set = false;

            wp_msg[0].frame = 3; 
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.12579446;
            wp_msg[0].y_long = 72.91619611;
            wp_msg[0].z_alt = 10.0;

            wp_msg[1].frame = 3; 
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12871289;
            wp_msg[1].y_long = 72.91537415;
            wp_msg[1].z_alt = 10.0;

            wp_msg[2].frame = 3; 
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.131931872621035;
            wp_msg[2].y_long = 72.915175289366;
            wp_msg[2].z_alt = 10.0;

            wp_msg[3].frame = 3; 
            wp_msg[3].command = 21;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.13398597233391;
            wp_msg[3].y_long = 72.91314691725862;
            wp_msg[3].z_alt = 10.0;

            wp_msg[4].frame = 3; 
            wp_msg[4].command = 21;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13477503621716;
            wp_msg[4].y_long = 72.9104689353687;
            wp_msg[4].z_alt = 10.0;
        
            
            for(int i = 0;i<=4;i++){
                listOfWP.push_back(wp_msg[i]);
            }

        } 
        //ros::spinOnce();
    
    return listOfWP;
}
