#include <ros/ros.h>
#include <std_msgs/String.h>


int main(int argc, char **argv){

    ros::init(argc, argv, "sine_node");

    ros::NodeHandle nh;

    ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);

    ros::Rate loopRate(10);

    while(ros::ok()){

        std_msgs::String msg;

        msg.data = "hello world";

        ROS_INFO("%s", msg.data.c_str());

        chatter_pub.publish(msg);

        ros::spinOnce();

        loopRate.sleep();
    }

    return 0;

}