#include "AssignWP.h"

std::vector<mavros_msgs::Waypoint> waypoint_in(std::string hostel)
{
    using namespace std;


    std::vector<mavros_msgs::Waypoint> listOfWP;



        if (hostel == "Hostel 5"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[15];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.134200730814737;
            wp_msg[6].y_long = 72.91026833324011;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = false;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.13457073;
            wp_msg[7].y_long = 72.91042733;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = false;
            wp_msg[8].autocontinue = true;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.134200730814737;
            wp_msg[8].y_long = 72.91026833324011;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.1330327753317;
            wp_msg[9].y_long = 72.91374519912415;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.13251566;
            wp_msg[10].y_long = 72.91478359;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.131826153051637;
            wp_msg[11].y_long = 72.91517249655345;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.130894762909364;
            wp_msg[12].y_long = 72.9153875779665;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = true;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.12758956;
            wp_msg[13].y_long = 72.91537197;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 21;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.125633351189254;
            wp_msg[14].y_long = 72.91629707808244;
            wp_msg[14].z_alt = 30.0;

            for(int i = 0;i<=14;i++){
                listOfWP.push_back(wp_msg[i]);
            }

        }
        elseif(hostel="Hostel 9"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[15];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.134200730814737;
            wp_msg[6].y_long = 72.91026833324011;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = false;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.135002248736157;
            wp_msg[7].y_long = 72.90821460877987;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = false;
            wp_msg[8].autocontinue = true;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.134200730814737;
            wp_msg[8].y_long = 72.91026833324011;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.1330327753317;
            wp_msg[9].y_long = 72.91374519912415;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.13251566;
            wp_msg[10].y_long = 72.91478359;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.131826153051637;
            wp_msg[11].y_long = 72.91517249655345;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.130894762909364;
            wp_msg[12].y_long = 72.9153875779665;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = true;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.12758956;
            wp_msg[13].y_long = 72.91537197;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 21;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.125633351189254;
            wp_msg[14].y_long = 72.91629707808244;
            wp_msg[14].z_alt = 30.0;

            for(i = 0;i<=14;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 6"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[19];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.134200730814737;
            wp_msg[6].y_long = 72.91026833324011;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = true;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.13517744011609;
            wp_msg[7].y_long = 72.90775814828831;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = true;
            wp_msg[8].autocontinue = false;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.1352903;
            wp_msg[8].y_long = 72.90689687097125;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = true;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.13517744011609;
            wp_msg[9].y_long = 72.90775814828831;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.134200730814737;
            wp_msg[10].y_long = 72.91026833324011;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.1330327753317;
            wp_msg[11].y_long = 72.91374519912415;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.13251566;
            wp_msg[12].y_long = 72.91478359;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = false;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.131826153051637;
            wp_msg[13].y_long = 72.91517249655345;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 16;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.130894762909364;
            wp_msg[14].y_long = 72.9153875779665;
            wp_msg[14].z_alt = 30.0;

            wp_msg[15].frame = 3;
            wp_msg[15].command = 16;
            wp_msg[15].is_current = true;
            wp_msg[15].autocontinue = true;
            wp_msg[15].param1 = 15;
            wp_msg[15].param2 = 0;
            wp_msg[15].param3 = 0;
            wp_msg[15].param4 = 0;
            wp_msg[15].x_lat = 19.12758956;
            wp_msg[15].y_long = 72.91537197;
            wp_msg[15].z_alt = 30.0;

            wp_msg[16].frame = 3;
            wp_msg[16].command = 21;
            wp_msg[16].is_current = false;
            wp_msg[16].autocontinue = true;
            wp_msg[16].param1 = 15;
            wp_msg[16].param2 = 0;
            wp_msg[16].param3 = 0;
            wp_msg[16].param4 = 0;
            wp_msg[16].x_lat = 19.125633351189254;
            wp_msg[16].y_long = 72.91629707808244;
            wp_msg[16].z_alt = 30.0;

            for(i = 0;i<=16;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 12"||hostel="Hostel 13"||hostel="Hostel 14"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[19];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.134200730814737;
            wp_msg[6].y_long = 72.91026833324011;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = true;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.13517744011609;
            wp_msg[7].y_long = 72.90775814828831;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = true;
            wp_msg[8].autocontinue = true;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.13531747903989;
            wp_msg[8].y_long = 72.90656472448077;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = true;
            wp_msg[9].autocontinue = false;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.13554072;
            wp_msg[9].y_long = 72.90563643;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = true;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.13531747903989;
            wp_msg[10].y_long = 72.90656472448077;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = true;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.13517744011609;
            wp_msg[11].y_long = 72.90775814828831;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.134200730814737;
            wp_msg[12].y_long = 72.91026833324011;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = false;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.1330327753317;
            wp_msg[13].y_long = 72.91374519912415;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 16;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.13251566;
            wp_msg[14].y_long = 72.91478359;
            wp_msg[14].z_alt = 30.0;

            wp_msg[15].frame = 3;
            wp_msg[15].command = 21;
            wp_msg[15].is_current = false;
            wp_msg[15].autocontinue = true;
            wp_msg[15].param1 = 15;
            wp_msg[15].param2 = 0;
            wp_msg[15].param3 = 0;
            wp_msg[15].param4 = 0;
            wp_msg[15].x_lat = 19.131826153051637;
            wp_msg[15].y_long = 72.91517249655345;
            wp_msg[15].z_alt = 30.0;

            wp_msg[16].frame = 3;
            wp_msg[16].command = 16;
            wp_msg[16].is_current = false;
            wp_msg[16].autocontinue = true;
            wp_msg[16].param1 = 15;
            wp_msg[16].param2 = 0;
            wp_msg[16].param3 = 0;
            wp_msg[16].param4 = 0;
            wp_msg[16].x_lat = 19.130894762909364;
            wp_msg[16].y_long = 72.9153875779665;
            wp_msg[16].z_alt = 30.0;

            wp_msg[17].frame = 3;
            wp_msg[17].command = 16;
            wp_msg[17].is_current = true;
            wp_msg[17].autocontinue = true;
            wp_msg[17].param1 = 15;
            wp_msg[17].param2 = 0;
            wp_msg[17].param3 = 0;
            wp_msg[17].param4 = 0;
            wp_msg[17].x_lat = 19.12758956;
            wp_msg[17].y_long = 72.91537197;
            wp_msg[17].z_alt = 30.0;

            wp_msg[18].frame = 3;
            wp_msg[18].command = 22;
            wp_msg[18].is_current = false;
            wp_msg[18].autocontinue = true;
            wp_msg[18].param1 = 15;
            wp_msg[18].param2 = 0;
            wp_msg[18].param3 = 0;
            wp_msg[18].param4 = 0;
            wp_msg[18].x_lat = 19.125633351189254;
            wp_msg[18].y_long = 72.91629707808244;
            wp_msg[18].z_alt = 30.0;

            for(i = 0;i<=18;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 4"||hostel="Tansa House"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[15];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.134200730814737;
            wp_msg[6].y_long = 72.91026833324011;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = false;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.13601889279605;
            wp_msg[7].y_long = 72.91050898343514;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = false;
            wp_msg[8].autocontinue = true;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.134200730814737;
            wp_msg[8].y_long = 72.91026833324011;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.1330327753317;
            wp_msg[9].y_long = 72.91374519912415;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.13251566;
            wp_msg[10].y_long = 72.91478359;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.131826153051637;
            wp_msg[11].y_long = 72.91517249655345;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.130894762909364;
            wp_msg[12].y_long = 72.9153875779665;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = true;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.12758956;
            wp_msg[13].y_long = 72.91537197;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 21;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.125633351189254;
            wp_msg[14].y_long = 72.91629707808244;
            wp_msg[14].z_alt = 30.0;

            for(int i = 0;i<=14;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 15"||hostel="Hostel 16"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[17];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.135740622257973;
            wp_msg[6].y_long = 72.91466851533599;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = false;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.13710708624554;
            wp_msg[7].y_long = 72.91497808998898;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = true;
            wp_msg[8].autocontinue = false;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.137345961361305;
            wp_msg[8].y_long = 72.91441502426792;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.13710708624554;
            wp_msg[9].y_long = 72.91497808998898;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.135740622257973;
            wp_msg[10].y_long = 72.91466851533599;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.1330327753317;
            wp_msg[11].y_long = 72.91374519912415;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.13251566;
            wp_msg[12].y_long = 72.91478359;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = false;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.131826153051637;
            wp_msg[13].y_long = 72.91517249655345;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 16;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.130894762909364;
            wp_msg[14].y_long = 72.9153875779665;
            wp_msg[14].z_alt = 30.0;

            wp_msg[15].frame = 3;
            wp_msg[15].command = 16;
            wp_msg[15].is_current = true;
            wp_msg[15].autocontinue = true;
            wp_msg[15].param1 = 15;
            wp_msg[15].param2 = 0;
            wp_msg[15].param3 = 0;
            wp_msg[15].param4 = 0;
            wp_msg[15].x_lat = 19.12758956;
            wp_msg[15].y_long = 72.91537197;
            wp_msg[15].z_alt = 30.0;

            wp_msg[16].frame = 3;
            wp_msg[16].command = 21;
            wp_msg[16].is_current = false;
            wp_msg[16].autocontinue = true;
            wp_msg[16].param1 = 15;
            wp_msg[16].param2 = 0;
            wp_msg[16].param3 = 0;
            wp_msg[16].param4 = 0;
            wp_msg[16].x_lat = 19.125633351189254;
            wp_msg[16].y_long = 72.91629707808244;
            wp_msg[16].z_alt = 30.0;

            for(int i = 0;i<=16;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 1"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[15];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.135740622257973;
            wp_msg[6].y_long = 72.91466851533599;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = false;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.13585373824709;
            wp_msg[7].y_long = 72.91387373629988;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = false;
            wp_msg[8].autocontinue = true;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.135740622257973;
            wp_msg[8].y_long = 72.91466851533599;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.1330327753317;
            wp_msg[9].y_long = 72.91374519912415;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.13251566;
            wp_msg[10].y_long = 72.91478359;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.131826153051637;
            wp_msg[11].y_long = 72.91517249655345;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.130894762909364;
            wp_msg[12].y_long = 72.9153875779665;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = true;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.12758956;
            wp_msg[13].y_long = 72.91537197;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 21;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.125633351189254;
            wp_msg[14].y_long = 72.91629707808244;
            wp_msg[14].z_alt = 30.0;

            for(int i = 0;i<=14;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 2"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[15];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.135740622257973;
            wp_msg[6].y_long = 72.91466851533599;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = false;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.136009560412223;
            wp_msg[7].y_long = 72.91269050021256;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = false;
            wp_msg[8].autocontinue = true;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.135740622257973;
            wp_msg[8].y_long = 72.91466851533599;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.1330327753317;
            wp_msg[9].y_long = 72.91374519912415;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.13251566;
            wp_msg[10].y_long = 72.91478359;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.131826153051637;
            wp_msg[11].y_long = 72.91517249655345;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.130894762909364;
            wp_msg[12].y_long = 72.9153875779665;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = true;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.12758956;
            wp_msg[13].y_long = 72.91537197;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 21;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.125633351189254;
            wp_msg[14].y_long = 72.91629707808244;
            wp_msg[14].z_alt = 30.0;

            for(int i = 0;i<=14;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 3"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[17];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.135740622257973;
            wp_msg[6].y_long = 72.91466851533599;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = false;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.136009560412223;
            wp_msg[7].y_long = 72.91269050021256;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = true;
            wp_msg[8].autocontinue = false;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.13600971;
            wp_msg[8].y_long = 72.91132568;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.136009560412223;
            wp_msg[9].y_long = 72.91269050021256;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.135740622257973;
            wp_msg[10].y_long = 72.91466851533599;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.1330327753317;
            wp_msg[11].y_long = 72.91374519912415;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.13251566;
            wp_msg[12].y_long = 72.91478359;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = false;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.131826153051637;
            wp_msg[13].y_long = 72.91517249655345;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 16;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.130894762909364;
            wp_msg[14].y_long = 72.9153875779665;
            wp_msg[14].z_alt = 30.0;

            wp_msg[15].frame = 3;
            wp_msg[15].command = 16;
            wp_msg[15].is_current = true;
            wp_msg[15].autocontinue = true;
            wp_msg[15].param1 = 15;
            wp_msg[15].param2 = 0;
            wp_msg[15].param3 = 0;
            wp_msg[15].param4 = 0;
            wp_msg[15].x_lat = 19.12758956;
            wp_msg[15].y_long = 72.91537197;
            wp_msg[15].z_alt = 30.0;

            wp_msg[16].frame = 3;
            wp_msg[16].command = 21;
            wp_msg[16].is_current = false;
            wp_msg[16].autocontinue = true;
            wp_msg[16].param1 = 15;
            wp_msg[16].param2 = 0;
            wp_msg[16].param3 = 0;
            wp_msg[16].param4 = 0;
            wp_msg[16].x_lat = 19.125633351189254;
            wp_msg[16].y_long = 72.91629707808244;
            wp_msg[16].z_alt = 30.0;

            for(int i = 0;i<=16;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 7"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[13];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = false;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.13395640039345;
            wp_msg[6].y_long = 72.9110172478625;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = false;
            wp_msg[7].autocontinue = true;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.1330327753317;
            wp_msg[7].y_long = 72.91374519912415;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = false;
            wp_msg[8].autocontinue = true;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.13251566;
            wp_msg[8].y_long = 72.91478359;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.131826153051637;
            wp_msg[9].y_long = 72.91517249655345;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.130894762909364;
            wp_msg[10].y_long = 72.9153875779665;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = true;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.12758956;
            wp_msg[11].y_long = 72.91537197;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 21;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.125633351189254;
            wp_msg[12].y_long = 72.91629707808244;
            wp_msg[12].z_alt = 30.0;

            for(int i = 0;i<=12;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 11"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[17];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.135740622257973;
            wp_msg[6].y_long = 72.91466851533599;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = true;
            wp_msg[7].autocontinue = false;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.136009560412223;
            wp_msg[7].y_long = 72.91269050021256;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = true;
            wp_msg[8].autocontinue = false;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.13600971;
            wp_msg[8].y_long = 72.91132568;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.136009560412223;
            wp_msg[9].y_long = 72.91269050021256;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.135740622257973;
            wp_msg[10].y_long = 72.91466851533599;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = false;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.1330327753317;
            wp_msg[11].y_long = 72.91374519912415;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 16;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.13251566;
            wp_msg[12].y_long = 72.91478359;
            wp_msg[12].z_alt = 30.0;

            wp_msg[13].frame = 3;
            wp_msg[13].command = 16;
            wp_msg[13].is_current = false;
            wp_msg[13].autocontinue = true;
            wp_msg[13].param1 = 15;
            wp_msg[13].param2 = 0;
            wp_msg[13].param3 = 0;
            wp_msg[13].param4 = 0;
            wp_msg[13].x_lat = 19.131826153051637;
            wp_msg[13].y_long = 72.91517249655345;
            wp_msg[13].z_alt = 30.0;

            wp_msg[14].frame = 3;
            wp_msg[14].command = 16;
            wp_msg[14].is_current = false;
            wp_msg[14].autocontinue = true;
            wp_msg[14].param1 = 15;
            wp_msg[14].param2 = 0;
            wp_msg[14].param3 = 0;
            wp_msg[14].param4 = 0;
            wp_msg[14].x_lat = 19.130894762909364;
            wp_msg[14].y_long = 72.9153875779665;
            wp_msg[14].z_alt = 30.0;

            wp_msg[15].frame = 3;
            wp_msg[15].command = 16;
            wp_msg[15].is_current = true;
            wp_msg[15].autocontinue = true;
            wp_msg[15].param1 = 15;
            wp_msg[15].param2 = 0;
            wp_msg[15].param3 = 0;
            wp_msg[15].param4 = 0;
            wp_msg[15].x_lat = 19.12758956;
            wp_msg[15].y_long = 72.91537197;
            wp_msg[15].z_alt = 30.0;

            wp_msg[16].frame = 3;
            wp_msg[16].command = 21;
            wp_msg[16].is_current = false;
            wp_msg[16].autocontinue = true;
            wp_msg[16].param1 = 15;
            wp_msg[16].param2 = 0;
            wp_msg[16].param3 = 0;
            wp_msg[16].param4 = 0;
            wp_msg[16].x_lat = 19.125633351189254;
            wp_msg[16].y_long = 72.91629707808244;
            wp_msg[16].z_alt = 30.0;

            for(int i = 0;i<=16;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 7"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[13];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.130894762909364;
            wp_msg[2].y_long = 72.9153875779665;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = true;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.131826153051637;
            wp_msg[3].y_long = 72.91517249655345;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.13251566;
            wp_msg[4].y_long = 72.91478359;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = false;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.1330327753317;
            wp_msg[5].y_long = 72.91374519912415;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 16;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = false;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.133509569626987;
            wp_msg[6].y_long = 72.91230447609246;
            wp_msg[6].z_alt = 30.0;

            wp_msg[7].frame = 3;
            wp_msg[7].command = 16;
            wp_msg[7].is_current = false;
            wp_msg[7].autocontinue = true;
            wp_msg[7].param1 = 15;
            wp_msg[7].param2 = 0;
            wp_msg[7].param3 = 0;
            wp_msg[7].param4 = 0;
            wp_msg[7].x_lat = 19.1330327753317;
            wp_msg[7].y_long = 72.91374519912415;
            wp_msg[7].z_alt = 30.0;

            wp_msg[8].frame = 3;
            wp_msg[8].command = 16;
            wp_msg[8].is_current = false;
            wp_msg[8].autocontinue = true;
            wp_msg[8].param1 = 15;
            wp_msg[8].param2 = 0;
            wp_msg[8].param3 = 0;
            wp_msg[8].param4 = 0;
            wp_msg[8].x_lat = 19.13251566;
            wp_msg[8].y_long = 72.91478359;
            wp_msg[8].z_alt = 30.0;

            wp_msg[9].frame = 3;
            wp_msg[9].command = 16;
            wp_msg[9].is_current = false;
            wp_msg[9].autocontinue = true;
            wp_msg[9].param1 = 15;
            wp_msg[9].param2 = 0;
            wp_msg[9].param3 = 0;
            wp_msg[9].param4 = 0;
            wp_msg[9].x_lat = 19.131826153051637;
            wp_msg[9].y_long = 72.91517249655345;
            wp_msg[9].z_alt = 30.0;

            wp_msg[10].frame = 3;
            wp_msg[10].command = 16;
            wp_msg[10].is_current = false;
            wp_msg[10].autocontinue = true;
            wp_msg[10].param1 = 15;
            wp_msg[10].param2 = 0;
            wp_msg[10].param3 = 0;
            wp_msg[10].param4 = 0;
            wp_msg[10].x_lat = 19.130894762909364;
            wp_msg[10].y_long = 72.9153875779665;
            wp_msg[10].z_alt = 30.0;

            wp_msg[11].frame = 3;
            wp_msg[11].command = 16;
            wp_msg[11].is_current = true;
            wp_msg[11].autocontinue = true;
            wp_msg[11].param1 = 15;
            wp_msg[11].param2 = 0;
            wp_msg[11].param3 = 0;
            wp_msg[11].param4 = 0;
            wp_msg[11].x_lat = 19.12758956;
            wp_msg[11].y_long = 72.91537197;
            wp_msg[11].z_alt = 30.0;

            wp_msg[12].frame = 3;
            wp_msg[12].command = 21;
            wp_msg[12].is_current = false;
            wp_msg[12].autocontinue = true;
            wp_msg[12].param1 = 15;
            wp_msg[12].param2 = 0;
            wp_msg[12].param3 = 0;
            wp_msg[12].param4 = 0;
            wp_msg[12].x_lat = 19.125633351189254;
            wp_msg[12].y_long = 72.91629707808244;
            wp_msg[12].z_alt = 30.0;

            for(int i = 0;i<=12;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        elseif(hostel="Hostel 10"){
            mavros_msgs::Waypoint *wp_msg=new mavros_msgs::Waypoint wp_msg[13];

            wp_msg[0].frame = 3;
            wp_msg[0].command = 22;
            wp_msg[0].is_current = false;
            wp_msg[0].autocontinue = true;
            wp_msg[0].param1 = 15;
            wp_msg[0].param2 = 0;
            wp_msg[0].param3 = 0;
            wp_msg[0].param4 = 0;
            wp_msg[0].x_lat = 19.125633351189254;
            wp_msg[0].y_long = 72.91629707808244;
            wp_msg[0].z_alt = 30.0;

            wp_msg[1].frame = 3;
            wp_msg[1].command = 16;
            wp_msg[1].is_current = true;
            wp_msg[1].autocontinue = true;
            wp_msg[1].param1 = 15;
            wp_msg[1].param2 = 0;
            wp_msg[1].param3 = 0;
            wp_msg[1].param4 = 0;
            wp_msg[1].x_lat = 19.12758956;
            wp_msg[1].y_long = 72.91537197;
            wp_msg[1].z_alt = 30.0;

            wp_msg[2].frame = 3;
            wp_msg[2].command = 16;
            wp_msg[2].is_current = false;
            wp_msg[2].autocontinue = true;
            wp_msg[2].param1 = 15;
            wp_msg[2].param2 = 0;
            wp_msg[2].param3 = 0;
            wp_msg[2].param4 = 0;
            wp_msg[2].x_lat = 19.129551702895714;
            wp_msg[2].y_long = 72.91542773516198;
            wp_msg[2].z_alt = 30.0;

            wp_msg[3].frame = 3;
            wp_msg[3].command = 16;
            wp_msg[3].is_current = false;
            wp_msg[3].autocontinue = false;
            wp_msg[3].param1 = 15;
            wp_msg[3].param2 = 0;
            wp_msg[3].param3 = 0;
            wp_msg[3].param4 = 0;
            wp_msg[3].x_lat = 19.12957540217411;
            wp_msg[3].y_long = 72.91578288571688;
            wp_msg[3].z_alt = 30.0;

            wp_msg[4].frame = 3;
            wp_msg[4].command = 16;
            wp_msg[4].is_current = false;
            wp_msg[4].autocontinue = true;
            wp_msg[4].param1 = 15;
            wp_msg[4].param2 = 0;
            wp_msg[4].param3 = 0;
            wp_msg[4].param4 = 0;
            wp_msg[4].x_lat = 19.129551702895714;
            wp_msg[4].y_long = 72.91542773516198;
            wp_msg[4].z_alt = 30.0;

            wp_msg[5].frame = 3;
            wp_msg[5].command = 16;
            wp_msg[5].is_current = true;
            wp_msg[5].autocontinue = true;
            wp_msg[5].param1 = 15;
            wp_msg[5].param2 = 0;
            wp_msg[5].param3 = 0;
            wp_msg[5].param4 = 0;
            wp_msg[5].x_lat = 19.12758956;
            wp_msg[5].y_long = 72.91537197;
            wp_msg[5].z_alt = 30.0;

            wp_msg[6].frame = 3;
            wp_msg[6].command = 22;
            wp_msg[6].is_current = false;
            wp_msg[6].autocontinue = true;
            wp_msg[6].param1 = 15;
            wp_msg[6].param2 = 0;
            wp_msg[6].param3 = 0;
            wp_msg[6].param4 = 0;
            wp_msg[6].x_lat = 19.125633351189254;
            wp_msg[6].y_long = 72.91629707808244;
            wp_msg[6].z_alt = 30.0;

            for(int i = 0;i<=6;i++){
                listOfWP.push_back(wp_msg[i]);
            }
        }
        //ros::spinOnce();

    return listOfWP;
}
