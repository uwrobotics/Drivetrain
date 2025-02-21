// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_

#include "motor_controller/msg/detail/motor_speeds__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motor_controller
{

namespace msg
{

namespace builder
{

class Init_MotorSpeeds_m6
{
public:
  explicit Init_MotorSpeeds_m6(::motor_controller::msg::MotorSpeeds & msg)
  : msg_(msg)
  {}
  ::motor_controller::msg::MotorSpeeds m6(::motor_controller::msg::MotorSpeeds::_m6_type arg)
  {
    msg_.m6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::msg::MotorSpeeds msg_;
};

class Init_MotorSpeeds_m5
{
public:
  explicit Init_MotorSpeeds_m5(::motor_controller::msg::MotorSpeeds & msg)
  : msg_(msg)
  {}
  Init_MotorSpeeds_m6 m5(::motor_controller::msg::MotorSpeeds::_m5_type arg)
  {
    msg_.m5 = std::move(arg);
    return Init_MotorSpeeds_m6(msg_);
  }

private:
  ::motor_controller::msg::MotorSpeeds msg_;
};

class Init_MotorSpeeds_m4
{
public:
  explicit Init_MotorSpeeds_m4(::motor_controller::msg::MotorSpeeds & msg)
  : msg_(msg)
  {}
  Init_MotorSpeeds_m5 m4(::motor_controller::msg::MotorSpeeds::_m4_type arg)
  {
    msg_.m4 = std::move(arg);
    return Init_MotorSpeeds_m5(msg_);
  }

private:
  ::motor_controller::msg::MotorSpeeds msg_;
};

class Init_MotorSpeeds_m3
{
public:
  explicit Init_MotorSpeeds_m3(::motor_controller::msg::MotorSpeeds & msg)
  : msg_(msg)
  {}
  Init_MotorSpeeds_m4 m3(::motor_controller::msg::MotorSpeeds::_m3_type arg)
  {
    msg_.m3 = std::move(arg);
    return Init_MotorSpeeds_m4(msg_);
  }

private:
  ::motor_controller::msg::MotorSpeeds msg_;
};

class Init_MotorSpeeds_m2
{
public:
  explicit Init_MotorSpeeds_m2(::motor_controller::msg::MotorSpeeds & msg)
  : msg_(msg)
  {}
  Init_MotorSpeeds_m3 m2(::motor_controller::msg::MotorSpeeds::_m2_type arg)
  {
    msg_.m2 = std::move(arg);
    return Init_MotorSpeeds_m3(msg_);
  }

private:
  ::motor_controller::msg::MotorSpeeds msg_;
};

class Init_MotorSpeeds_m1
{
public:
  Init_MotorSpeeds_m1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorSpeeds_m2 m1(::motor_controller::msg::MotorSpeeds::_m1_type arg)
  {
    msg_.m1 = std::move(arg);
    return Init_MotorSpeeds_m2(msg_);
  }

private:
  ::motor_controller::msg::MotorSpeeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::msg::MotorSpeeds>()
{
  return motor_controller::msg::builder::Init_MotorSpeeds_m1();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__BUILDER_HPP_
