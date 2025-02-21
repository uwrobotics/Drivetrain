// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motor_controller:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motor_controller/msg/detail/motor_speeds__rosidl_typesupport_introspection_c.h"
#include "motor_controller/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motor_controller/msg/detail/motor_speeds__functions.h"
#include "motor_controller/msg/detail/motor_speeds__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_controller__msg__MotorSpeeds__init(message_memory);
}

void MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_fini_function(void * message_memory)
{
  motor_controller__msg__MotorSpeeds__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_message_member_array[6] = {
  {
    "m1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller__msg__MotorSpeeds, m1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller__msg__MotorSpeeds, m2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller__msg__MotorSpeeds, m3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller__msg__MotorSpeeds, m4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller__msg__MotorSpeeds, m5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller__msg__MotorSpeeds, m6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_message_members = {
  "motor_controller__msg",  // message namespace
  "MotorSpeeds",  // message name
  6,  // number of fields
  sizeof(motor_controller__msg__MotorSpeeds),
  MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_message_member_array,  // message members
  MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_message_type_support_handle = {
  0,
  &MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_controller
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_controller, msg, MotorSpeeds)() {
  if (!MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_message_type_support_handle.typesupport_identifier) {
    MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorSpeeds__rosidl_typesupport_introspection_c__MotorSpeeds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
