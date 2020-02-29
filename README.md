# ROS tutorial

ROS tutorial from [http://wiki.ros.org/action/fullsearch/ROS/Tutorials](ROS tutorial from http://wiki.ros.org/action/fullsearch/ROS/Tutorials)

## Contents

- Publisher/Subscriber node pair
    - [listener.cpp](src/publish-subscribe-model/listener.cpp)
    - [talker.cpp](src/publish-subscribe-model/listener.cpp)

## How to run

This repo contains a single package which has to be integrated into the catkin workspace.

1. Clone the repository in your `catkin_ws/src` directory.
2. Run `source ~/catkin_ws/devel/setup.*sh` command dependent on your shell.
3. Compile the code:
    ```shell
    cd ~/catkin_ws
    catkin_make
    ```