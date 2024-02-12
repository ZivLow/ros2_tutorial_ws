# ROS2 Workspace for Tutorials

## Requirements

### Install ROS Humble
```bash
sudo apt install software-properties-common
sudo add-apt-repository universe
sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
sudo apt update && sudo apt upgrade -y
sudo apt install ros-humble-desktop -y
```

## Build
1. Source ROS Humble setup
```bash
source /opt/ros/humble/setup.bash
export ROS_DOMAIN_ID=0
```

2. Navigate to workspace root directory
```bash
cd ros2_tutorial_ws
```

3. Install ROS dependencies
```
rosdep install -i --from-path src --rosdistro humble -y
```

4. Colcon build
```bash
colcon build --packages-select <package_name1> <package_name2> ...
```
Alternatively, build all,
```bash
colcon build
```

