#include "pt1.h"

#include <ros/ros.h>
#include <std_msgs/Float32.h>

#include <math.h>


PT1::PT1(const float sampling_time, const float k, const float T, float x0, ros::Publisher* ph) : Ts(sampling_time), k(k), T(T)
{
    x = x0;
    pub_handle = ph;
}

float PT1::_step(float u)
{   
    float delta_x = u*k/T - x/T;
    x = x + Ts*delta_x;
    return x;
}

void PT1::step(const std_msgs::Float32::ConstPtr& msg_in)
{   
    float u = msg_in->data;
    
    float out = _step(u);

    std_msgs::Float32 out_msg;
    out_msg.data = out;
    pub_handle->publish(out_msg);
}

