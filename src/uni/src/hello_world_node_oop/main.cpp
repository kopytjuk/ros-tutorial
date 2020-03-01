#include <ros/ros.h>
#include <std_msgs/String.h>

#include "hello.h"


int main(int argc, char **argv){

    ros::init(argc, argv, "hello_node_oop");

    HelloNode node;

    ros::Rate loopRate(10);

    while(ros::ok()){
        node.step();
    }

    return 0;

}