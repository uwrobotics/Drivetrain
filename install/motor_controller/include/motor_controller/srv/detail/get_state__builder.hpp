// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:srv/GetState.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__SRV__DETAIL__GET_STATE__BUILDER_HPP_
#define MOTOR_CONTROLLER__SRV__DETAIL__GET_STATE__BUILDER_HPP_

#include "motor_controller/srv/detail/get_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace motor_controller
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::srv::GetState_Request>()
{
  return ::motor_controller::srv::GetState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace motor_controller


namespace motor_controller
{

namespace srv
{

namespace builder
{

class Init_GetState_Response_current_state
{
public:
  Init_GetState_Response_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_controller::srv::GetState_Response current_state(::motor_controller::srv::GetState_Response::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::srv::GetState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::srv::GetState_Response>()
{
  return motor_controller::srv::builder::Init_GetState_Response_current_state();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__SRV__DETAIL__GET_STATE__BUILDER_HPP_
