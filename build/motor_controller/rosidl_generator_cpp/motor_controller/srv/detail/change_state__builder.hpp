// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:srv/ChangeState.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__BUILDER_HPP_
#define MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__BUILDER_HPP_

#include "motor_controller/srv/detail/change_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motor_controller
{

namespace srv
{

namespace builder
{

class Init_ChangeState_Request_transition
{
public:
  Init_ChangeState_Request_transition()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_controller::srv::ChangeState_Request transition(::motor_controller::srv::ChangeState_Request::_transition_type arg)
  {
    msg_.transition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::srv::ChangeState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::srv::ChangeState_Request>()
{
  return motor_controller::srv::builder::Init_ChangeState_Request_transition();
}

}  // namespace motor_controller


namespace motor_controller
{

namespace srv
{

namespace builder
{

class Init_ChangeState_Response_success
{
public:
  Init_ChangeState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_controller::srv::ChangeState_Response success(::motor_controller::srv::ChangeState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::srv::ChangeState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::srv::ChangeState_Response>()
{
  return motor_controller::srv::builder::Init_ChangeState_Response_success();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__BUILDER_HPP_
