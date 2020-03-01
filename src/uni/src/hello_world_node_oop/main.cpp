#include <ros/ros.h>
#include <std_msgs/String.h>

#include "sine.h"


int main(int argc, char **argv){

    ros::init(argc, argv, "sine_node_oop");

    SineNode node;

    ros::Rate loopRate(10);

    while(ros::ok()){
        node.step();
    }

    return 0;

}