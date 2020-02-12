// This is a ROS version of the standard "hello, world" program.

// This header defines the standard ROS classes. This must be included in every 
// ROS C++ file i create
#include <ros/ros.h>

int main(int argc, char **argv) 
{
  // Initialize the ROS system. The last argument is the default node name (but 
  // it can be overridden).
  ros::init(argc, argv, "hello_ros");

  // Establish this program as a ROS node.
  ros::NodeHandle nh;

  // Send some output as a log message.
  ROS_INFO_STREAM("Hello, ROS (Mike Holaatme)");
}
