#include <ros/ros.h>
#include <std_msgs/String.h>

class SineNode{

    private:

        ros::NodeHandle node;
        ros::Publisher pub_handle;

    public:
        SineNode();
        void step();
};