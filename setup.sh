#!/bin/bash
set -e

vcs import < src/ros2.repos src
sudo apt-get update
rosdep update --include-eol-distros
rosdep install --from-paths src --ignore-src -y
