# Search & Rescue - EE149 Fall 2020 Final Project

A simulation of a group of robots that must search the environment for an object and cooperatively return it to the origin.

## Setup Instructions

Developed on Ubuntu 20.04.1 LTS, but other distributions should work too.

### Install ROS 1

Follow instructions to install ROS Noetic on [http://wiki.ros.org/noetic/Installation/Ubuntu](http://wiki.ros.org/noetic/Installation/Ubuntu). They are recreated below.

	sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
	sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
	sudo apt update
	sudo apt install ros-noetic-desktop-full
	echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
	source ~/.bashrc

For some reason rosdep is not installed by default.

	sudo apt install python3-rosdep
	sudo rosdep init
	rosdep update

### Install Gazebo

Already installed with ros-noetic-desktop-full!

### Create Workspace and Install Packages

You can also clone this repo into your own workspace!

	mkdir -p EE149/src
	cd EE149/src
	catkin_init_workspace
	git clone https://github.com/skuklinsky/EE149-Search-and-Rescue.git sar
	cd ..
	catkin_make

## How to Run

	catkin_make
	source devel/setup.sh