![ROS](https://www.ros.org/wp-content/uploads/2013/10/rosorg-logo1.png)

# ROS learning workspace

ROS tutorial from [http://wiki.ros.org/action/fullsearch/ROS/Tutorials](ROS tutorial from http://wiki.ros.org/action/fullsearch/ROS/Tutorials), mainly in [./src/beginner_tutorials](./src/beginner_tutorials).

Uni tasks in [./src/uni](./src/uni)

## ROS tutorial

- Publisher/Subscriber node pair
    - [listener.cpp](src/publish-subscribe-model/listener.cpp)
    - [talker.cpp](src/publish-subscribe-model/listener.cpp)

- Server/Client node pair
    - [add_two_ints_server.cpp](src/service-client-model/add_two_ints_server.cpp)
    - [add_two_ints_client.cpp](src/service-client-model/add_two_ints_client.cpp)

## ROS uni task

- Simple hello world: [src/uni/src/hello_world_node](src/uni/src/hello_world_node)
- OOP hello world: [src/uni/src/hello_world_node_oop](src/uni/src/hello_world_node_oop)
- Sine wave generator node: [src/uni/src/sine_node](src/uni/src/sine_node)
- PT1 element node: [src/uni/src/pt1-element](src/uni/src/pt1-element)

See [src/uni/CMakeLists.txt](src/uni/CMakeLists.txt) how to compile the class `SineNode` located in [src/uni/src/hello_world_node_oop/sine.cpp](src/uni/src/hello_world_node_oop/sine.cpp).

## How to compile

This repo contains a single package which has to be integrated into the catkin workspace.

1. Clone the repository
2. Run `source $REPO_PATH/devel/setup.*sh` command dependent on your shell.
3. Compile the code:
    ```shell
    cd ~/catkin_ws
    catkin_make
    ```

## Run

### Publisher/Subscriber

```shell
roslaunch beginner_tutorials talk-and-listen.launch
```

### Server only

Server only:

```shell
roslaunch beginner_tutorials only-server.launch
```

Then you can query the server (in a new terminal window):

```shell
rosservice call /add_two_ints 50 60
```

### Server & Client

Server only:

```shell
roslaunch beginner_tutorials server-client.launch
```