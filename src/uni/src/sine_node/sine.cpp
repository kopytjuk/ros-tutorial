#include "sine.h"

#include <ros/ros.h>
#include <std_msgs/Float32.h>

#include <math.h>


SineNode::SineNode(const float sampling_time) : T(sampling_time)
{
    pub_handle = node.advertise<std_msgs::Float32>("sine", 1000); // FIFO size 1000
    ROS_INFO("Sine node initialized!\n");
    time = 0;
}

void SineNode::step()
{
    std_msgs::Float32 msg;

    msg.data = sin(2.0*M_PI*time); // 1Hz frequency
    pub_handle.publish(msg);

    time += T;
}
