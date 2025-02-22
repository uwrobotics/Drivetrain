# UW Robotics Drivetrain Integration Repo

## Groundstation Setup

### Installation

```bash
git clone https://github.com/uwrobotics/lcm_groundstation.git
```

### Setup

```bash
cd lcm_groundstation

python3 keys.py
```

## Rover Setup

### Installation

```bash
mkdir ~/ros_ws
cd ~/ros_ws

git clone https://github.com/uwrobotics/Drivetrain.git
cd Drivetrain
git submodule update --init --recursive

colcon build --symlink-install
```

### Setup

```bash
export LCM_DEFAULT_URL=udpm://239.255.76.67:7667?ttl=1

cd ~/ros_ws

source install/setup.bash

ros2 run py_odrive msg_server

ros2 launch Drivetrain/Motor-Controller/launch/launch.py

ros2 run lcm_receiver lcm_receiver

```

```bash
# To reset back to the UNINIT state, run
ros2 service call /state_manager/change_mc_state motor_controller/srv/ChangeState "{transition: {id: 64, label: 'reset'}}"
# To recalibrate after reset, run
ros2 service call /state_manager/change_mc_state motor_controller/srv/ChangeState "{transition: {id: 6, label: 'calibrate'}}"
# To transition to the VEL_CONTROL state again, run
ros2 service call /state_manager/change_mc_state motor_controller/srv/ChangeState "{transition: {id: 12, label: 'active_vel_control'}}"

```

More setup information can be found in the corresponding submodule

## TroubleShooting

### Grant Non-root user Dialout Preveillege

```bash
sudo adduser <user> dialout
```

## Maintiance

If you have any question regarding this project, please contact:

[uwaterloorobotics@gmail.com](mailto:uwaterloorobotics@gmail.com)
