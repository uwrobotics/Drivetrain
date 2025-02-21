// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motor_controller:msg/ArcadeSpeed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motor_controller/msg/detail/arcade_speed__rosidl_typesupport_introspection_c.h"
#include "motor_controller/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motor_controller/msg/detail/arcade_speed__functions.h"
#include "motor_controller/msg/detail/arcade_speed__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_controller__msg__ArcadeSpeed__init(message_memory);
}

void ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_fini_function(void * message_memory)
{
  motor_controller__msg__ArcadeSpeed__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_message_member_array[2] = {
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller__msg__ArcadeSpeed, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller__msg__ArcadeSpeed, l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_message_members = {
  "motor_controller__msg",  // message namespace
  "ArcadeSpeed",  // message name
  2,  // number of fields
  sizeof(motor_controller__msg__ArcadeSpeed),
  ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_message_member_array,  // message members
  ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_message_type_support_handle = {
  0,
  &ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_controller
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_controller, msg, ArcadeSpeed)() {
  if (!ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_message_type_support_handle.typesupport_identifier) {
    ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ArcadeSpeed__rosidl_typesupport_introspection_c__ArcadeSpeed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
