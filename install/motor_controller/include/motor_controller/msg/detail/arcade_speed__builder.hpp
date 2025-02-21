// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:msg/ArcadeSpeed.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__BUILDER_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__BUILDER_HPP_

#include "motor_controller/msg/detail/arcade_speed__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motor_controller
{

namespace msg
{

namespace builder
{

class Init_ArcadeSpeed_l
{
public:
  explicit Init_ArcadeSpeed_l(::motor_controller::msg::ArcadeSpeed & msg)
  : msg_(msg)
  {}
  ::motor_controller::msg::ArcadeSpeed l(::motor_controller::msg::ArcadeSpeed::_l_type arg)
  {
    msg_.l = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::msg::ArcadeSpeed msg_;
};

class Init_ArcadeSpeed_r
{
public:
  Init_ArcadeSpeed_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArcadeSpeed_l r(::motor_controller::msg::ArcadeSpeed::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ArcadeSpeed_l(msg_);
  }

private:
  ::motor_controller::msg::ArcadeSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::msg::ArcadeSpeed>()
{
  return motor_controller::msg::builder::Init_ArcadeSpeed_r();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__BUILDER_HPP_
