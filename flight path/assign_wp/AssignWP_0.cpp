#include "AssignWP_0.h"

std::vector<mavros_msgs::Waypoint> waypoint_in(std::string hostel,int flag)
{
    using namespace std;


    std::vector<mavros_msgs::Waypoint> listOfWP;

    if (hostel == "Hostel 1"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 2.744;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 2.744;
            wp_msg[2].x_lat = 19.1360299;
            wp_msg[2].y_long = 72.9139665;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 182.744;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 2"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 337.802;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 337.802;
            wp_msg[2].x_lat = 19.1360964;
            wp_msg[2].y_long = 72.9124832;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 157.802;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 3"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 323.485;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 323.485;
            wp_msg[2].x_lat = 19.1360733;
            wp_msg[2].y_long = 72.9114177;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 143.485;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 4" || hostel=="Tansa House"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 315.244;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 315.244;
            wp_msg[2].x_lat = 19.13616100;
            wp_msg[2].y_long = 72.91051350;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 135.244;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 5"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 295.2914;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 295.2194;
            wp_msg[2].x_lat = 19.13462890;
            wp_msg[2].y_long = 72.91018120;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 115.2194;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 6"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 290.066;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 290.066;
            wp_msg[2].x_lat = 19.13531370;
            wp_msg[2].y_long = 72.90714230;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 110.066;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 7"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 289.949;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 289.949;
            wp_msg[2].x_lat = 19.13388450;
            wp_msg[2].y_long = 72.91124270;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 109.949;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 8"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 289.727;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 289.727;
            wp_msg[2].x_lat = 19.13387060;
            wp_msg[2].y_long = 72.91125210;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 109.727;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 9"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 291.389;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 291.389;
            wp_msg[2].x_lat = 19.13503560;
            wp_msg[2].y_long = 72.90833920;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 111.389;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 10"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 347.708;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 350.265;
            wp_msg[1].x_lat = 19.12762280;
            wp_msg[1].y_long = 72.91583060;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 350.265;
            wp_msg[2].x_lat = 19.12827660;
            wp_msg[2].y_long = 72.91571260;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 170.265;
                wp_msg[1].param4 = 167.88;
                wp_msg[0].param4 = 167.88;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 11"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 286.423;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 286.423;
            wp_msg[2].x_lat = 19.13347850;
            wp_msg[2].y_long = 72.91209700;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 106.423;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 12" || hostel=="Hostel 13" || hostel=="Hostel 14"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 339.132;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 286.508;
            wp_msg[1].x_lat = 19.1329773;
            wp_msg[1].y_long = 72.9133381;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 286.508;
            wp_msg[2].x_lat = 19.13532390;
            wp_msg[2].y_long = 72.90555510;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 106.508;
                wp_msg[1].param4 = 159.132;
                wp_msg[0].param4 = 159.132;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 15" || hostel=="Hostel 16"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 10.517;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 10.517;
            wp_msg[2].x_lat = 19.13745370;
            wp_msg[2].y_long = 72.91468400;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 190.517;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    else if(hostel=="Hostel 18"){
        mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint[3];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = true;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 342.31;
            wp_msg[0].x_lat = 19.1256161;
            wp_msg[0].y_long = 72.9162906;
            wp_msg[0].z_alt = 21.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = false;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 311.505;
            wp_msg[1].x_lat = 19.1329976;
            wp_msg[1].y_long = 72.9138136;
            wp_msg[1].z_alt = 21.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 21;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = false;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 311.505;
            wp_msg[2].x_lat = 19.13654270;
            wp_msg[2].y_long = 72.90959850;
            wp_msg[2].z_alt = 21.0;

            if(flag==1){
                wp_msg[2].command = 22;
                wp_msg[2].is_current = true;
                wp_msg[2].autocontinue = true;
                wp_msg[2].param4 = 131.505;
                wp_msg[1].param4 = 162.31;
                wp_msg[0].param4 = 162.31;
                wp_msg[0].command = 21;
                wp_msg[0].is_current = false;
                wp_msg[0].autocontinue = true;
                wp_msg[0].x_lat = 19.1256430;
                wp_msg[0].y_long = 72.9162779;
                    for(int i = 2;i>=0;i--){
                    listOfWP.push_back(wp_msg[i]);
                    }

            }
            else if(flag==2){
                for(int i = 0;i<=2;i++){
                    listOfWP.push_back(wp_msg[i]);
                }
            }
    }
    return listOfWP;
}
