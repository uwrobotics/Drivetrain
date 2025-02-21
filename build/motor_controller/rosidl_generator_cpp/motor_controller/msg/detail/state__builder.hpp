// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:msg/State.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__STATE__BUILDER_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__STATE__BUILDER_HPP_

#include "motor_controller/msg/detail/state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motor_controller
{

namespace msg
{

namespace builder
{

class Init_State_label
{
public:
  explicit Init_State_label(::motor_controller::msg::State & msg)
  : msg_(msg)
  {}
  ::motor_controller::msg::State label(::motor_controller::msg::State::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::msg::State msg_;
};

class Init_State_id
{
public:
  Init_State_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_label id(::motor_controller::msg::State::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_State_label(msg_);
  }

private:
  ::motor_controller::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::msg::State>()
{
  return motor_controller::msg::builder::Init_State_id();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__STATE__BUILDER_HPP_
