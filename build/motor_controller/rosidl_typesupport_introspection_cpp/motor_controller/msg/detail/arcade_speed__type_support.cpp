// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motor_controller:msg/ArcadeSpeed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motor_controller/msg/detail/arcade_speed__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motor_controller
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArcadeSpeed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motor_controller::msg::ArcadeSpeed(_init);
}

void ArcadeSpeed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motor_controller::msg::ArcadeSpeed *>(message_memory);
  typed_message->~ArcadeSpeed();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArcadeSpeed_message_member_array[2] = {
  {
    "r",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller::msg::ArcadeSpeed, r),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "l",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller::msg::ArcadeSpeed, l),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArcadeSpeed_message_members = {
  "motor_controller::msg",  // message namespace
  "ArcadeSpeed",  // message name
  2,  // number of fields
  sizeof(motor_controller::msg::ArcadeSpeed),
  ArcadeSpeed_message_member_array,  // message members
  ArcadeSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  ArcadeSpeed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArcadeSpeed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArcadeSpeed_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace motor_controller


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_controller::msg::ArcadeSpeed>()
{
  return &::motor_controller::msg::rosidl_typesupport_introspection_cpp::ArcadeSpeed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_controller, msg, ArcadeSpeed)() {
  return &::motor_controller::msg::rosidl_typesupport_introspection_cpp::ArcadeSpeed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
