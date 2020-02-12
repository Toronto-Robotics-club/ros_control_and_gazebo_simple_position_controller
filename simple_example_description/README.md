This package is built based on a ros answers question and answer (see: https://answers.ros.org/question/273947/moving-joints-in-gazebo-simple-example/). Since the code
does not build I put together this package to allow others to have the ability 
to simply run the code. 

*NOTE* THIS IS AN EXAMPLE OF A JointPositionController

This package works on the following system:
Ubuntu 16.04 LTS
Gazebo7 version 7.16
Ros Kinetic

to run the project follow these steps:
1) Build the project: 
       $ cd Desktop/workspace
       $ catkin_make
       $ source devel/setup.bash
2) Run the project:
       $ roslaunch simple_example_description spawn_robot.launch

