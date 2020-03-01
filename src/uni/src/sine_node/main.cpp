#include <ros/ros.h>

#include "sine.h"


int main(int argc, char **argv){

    ros::init(argc, argv, "hello_node_oop");

    ros::NodeHandle nh;

    double T;
    nh.getParam("sampling_time", T);

    ROS_INFO("Running with sample_time = %.2f", T);

    SineNode node((const float) T);

    ros::Rate loopRate(1.0F/T);

    while(ros::ok()){

        node.step();

        ros::spinOnce();
        loopRate.sleep();
    }

    return 0;

}