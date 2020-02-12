This package is built based on a ros answers question and answer (see: https://answers.ros.org/question/273947/moving-joints-in-gazebo-simple-example/). Since the code
does not build I put together this package to allow others to have the ability 
to simply run the code. 

*NOTE* THIS IS AN EXAMPLE OF A JointPositionController. Fun fact: this controller, simply 'snaps' the joint into that position. It does not 'move' it, so there is no consideration of speed and direction. 

This package works on the following system:
Ubuntu 16.04 LTS
Gazebo7 version 7.16
Ros Kinetic

to run the project follow these steps:
1) Download the "simple_example_description" directory and put it into your Desktop/workspace/src/ directory.
2) Build the project: 
       $ cd Desktop/workspace
       $ catkin_make
       $ source devel/setup.bash
3) Run the project:
       $ roslaunch simple_example_description spawn_robot.launch
4) to give a command to get the joint to move:
       $ rostopic pub /simple_model/base_to_second_joint_position_controller/command std_msgs/Float64 "data: 0.4"

The page https://wiki.ros.org/ros_control lists several controllers. To try different controllers simply replace one line in the urdf file (the line with the <hardwareInterface> tag), and one line in the yaml file (the second line starting with "type:.."). I have tried the 4 controller combinations listed below:

----------------------------------Setup #1--------------------------------------

Urdf file: 
`<hardwareInterface>hardware_interface/EffortJointInterface</hardwareInterface>`

yaml file:
`type: effort_controllers/JointPositionController`
Result – ugly back and forth oscillation.

--------------------------------------------------------------------------------


------------------------------------Setup #2-----------------------------------
Urdf file: 
`<hardwareInterface>hardware_interface/EffortJointInterface</hardwareInterface>`

yaml file:
`type: effort_controllers/JointEffortController`
Result – spins one way, stops, spins the other way, and then rotates very, very fast.
---------------------------------------------------------------------------------


-------------------------------------Setup #3--------------------------------------
Urdf file: 
<hardwareInterface>hardware_interface/PositionJointInterface</hardwareInterface>

yaml file:
type: position_controllers/JointPositionController
Result – snaps into position
-------------------------------------------------------------------------------------


----------------------------------Setup #4----------------------------------------------
Urdf file: 
<hardwareInterface>hardware_interface/VelocityJointInterface</hardwareInterface>

yaml file:
type: velocity_controllers/JointVelocityController
Result – controlled rotation at the given velocity.
--------------------------------------------------------------------------------------

