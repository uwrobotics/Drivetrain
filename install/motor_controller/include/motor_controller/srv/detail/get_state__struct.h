// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:srv/GetState.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__SRV__DETAIL__GET_STATE__STRUCT_H_
#define MOTOR_CONTROLLER__SRV__DETAIL__GET_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetState in the package motor_controller.
typedef struct motor_controller__srv__GetState_Request
{
  uint8_t structure_needs_at_least_one_member;
} motor_controller__srv__GetState_Request;

// Struct for a sequence of motor_controller__srv__GetState_Request.
typedef struct motor_controller__srv__GetState_Request__Sequence
{
  motor_controller__srv__GetState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__srv__GetState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
#include "motor_controller/msg/detail/state__struct.h"

// Struct defined in srv/GetState in the package motor_controller.
typedef struct motor_controller__srv__GetState_Response
{
  motor_controller__msg__State current_state;
} motor_controller__srv__GetState_Response;

// Struct for a sequence of motor_controller__srv__GetState_Response.
typedef struct motor_controller__srv__GetState_Response__Sequence
{
  motor_controller__srv__GetState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__srv__GetState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__SRV__DETAIL__GET_STATE__STRUCT_H_
