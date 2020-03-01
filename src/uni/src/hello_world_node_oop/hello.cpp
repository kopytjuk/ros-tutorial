#include "hello.h"

#include <ros/ros.h>
#include <std_msgs/String.h>


HelloNode::HelloNode()
{
    pub_handle = node.advertise<std_msgs::String>("hello_topic", 1000); // FIFO size 1000
    ROS_INFO("Sine node initialized!\n");
}

void HelloNode::step()
{
    std_msgs::String msg;
    msg.data = "Hello OOP world!";

    pub_handle.publish(msg);
}
