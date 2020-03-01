#include <ros/ros.h>
#include <std_msgs/String.h>

class HelloNode{

    private:

        ros::NodeHandle node;
        ros::Publisher pub_handle;

    public:
        HelloNode();
        void step();
};