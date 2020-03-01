#include <ros/ros.h>

class SineNode{

    private:

        ros::NodeHandle node;
        ros::Publisher pub_handle;

        float time; // simulation time
        const float T; // sampling time

    public:
        SineNode(const float sampling_time);
        void step();
};