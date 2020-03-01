#include <ros/ros.h>

#include "pt1.h"


int main(int argc, char **argv){

    ros::init(argc, argv, "pt1_node");

    ros::NodeHandle nh;

    double Ts;
    nh.getParam("sampling_time", Ts);

    ROS_INFO("Running with sample_time = %.2f", Ts);

    ros::Publisher pub_handle = nh.advertise<std_msgs::Float32>("pt1_out", 1000); // FIFO size 1000

    PT1 pt1((const float) Ts, 1.0, 1.0, 0.0, &pub_handle);

    ROS_INFO("PT1 node initialized!\n");

    ros::Subscriber sub_handle = nh.subscribe("pt1_in", 1000, &PT1::step, &pt1);
    
    ros::spin();

    return 0;

}