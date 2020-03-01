#include <ros/ros.h>
#include <std_msgs/Float32.h>

class PT1{

    private:
        const float Ts; // sampling time
        const float k, T; // PT1 parameters
        float x; // system output

        ros::Publisher* pub_handle;

    public:
        PT1(const float sampling_time, const float k, const float T, float x0, ros::Publisher* ph);
        float _step(float u);
        void step(const std_msgs::Float32::ConstPtr& msg_in);
};