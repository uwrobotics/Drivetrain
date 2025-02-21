// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:srv/ChangeState.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__STRUCT_H_
#define MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transition'
#include "motor_controller/msg/detail/transition__struct.h"

// Struct defined in srv/ChangeState in the package motor_controller.
typedef struct motor_controller__srv__ChangeState_Request
{
  motor_controller__msg__Transition transition;
} motor_controller__srv__ChangeState_Request;

// Struct for a sequence of motor_controller__srv__ChangeState_Request.
typedef struct motor_controller__srv__ChangeState_Request__Sequence
{
  motor_controller__srv__ChangeState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__srv__ChangeState_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ChangeState in the package motor_controller.
typedef struct motor_controller__srv__ChangeState_Response
{
  bool success;
} motor_controller__srv__ChangeState_Response;

// Struct for a sequence of motor_controller__srv__ChangeState_Response.
typedef struct motor_controller__srv__ChangeState_Response__Sequence
{
  motor_controller__srv__ChangeState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__srv__ChangeState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__STRUCT_H_
