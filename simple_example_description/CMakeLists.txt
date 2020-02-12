# What version of CMake is needed?
cmake_minimum_required(VERSION 2.8.3)

# The name of this package (must match name in package.xml).
project(simple_example_description)

# Find the catkin build system, and any other packages on which we depend. In
# this case we only need the roscpp library.
find_package(catkin REQUIRED COMPONENTS roscpp)

# Declare our catkin package.
catkin_package()

# Specify locations of header files.
include_directories(include ${catkin_INCLUDE_DIRS})

# Declare the executable, along with its source files. If there are multiple
# executables, create multiples of this line. NOTE: executable name and source
# file name should be the same!!!!
add_executable(hello src/hello.cpp)

# Specify libraries against which to link. This line should be copied for each
# distinct executable in the package (where executable names should be the same
# as source names).
target_link_libraries(hello ${catkin_LIBRARIES})


