// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:msg/Transition.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__BUILDER_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__BUILDER_HPP_

#include "motor_controller/msg/detail/transition__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motor_controller
{

namespace msg
{

namespace builder
{

class Init_Transition_label
{
public:
  explicit Init_Transition_label(::motor_controller::msg::Transition & msg)
  : msg_(msg)
  {}
  ::motor_controller::msg::Transition label(::motor_controller::msg::Transition::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::msg::Transition msg_;
};

class Init_Transition_id
{
public:
  Init_Transition_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transition_label id(::motor_controller::msg::Transition::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Transition_label(msg_);
  }

private:
  ::motor_controller::msg::Transition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::msg::Transition>()
{
  return motor_controller::msg::builder::Init_Transition_id();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__BUILDER_HPP_
