// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:msg/Transition.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__STRUCT_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_A'.
enum
{
  motor_controller__msg__Transition__TYPE_A = 1
};

/// Constant 'TYPE_B'.
enum
{
  motor_controller__msg__Transition__TYPE_B = 2
};

/// Constant 'TYPE_C'.
enum
{
  motor_controller__msg__Transition__TYPE_C = 3
};

/// Constant 'TYPE_D'.
enum
{
  motor_controller__msg__Transition__TYPE_D = 4
};

/// Constant 'TRANSITION_CALIBRATE'.
enum
{
  motor_controller__msg__Transition__TRANSITION_CALIBRATE = 6
};

/// Constant 'TRANSITION_CALIBRATE_COMPLETE'.
enum
{
  motor_controller__msg__Transition__TRANSITION_CALIBRATE_COMPLETE = 8
};

/// Constant 'TRANSITION_ACTIVATE_POS_CONTROL'.
enum
{
  motor_controller__msg__Transition__TRANSITION_ACTIVATE_POS_CONTROL = 10
};

/// Constant 'TRANSITION_ACTIVATE_VEL_CONTROL'.
enum
{
  motor_controller__msg__Transition__TRANSITION_ACTIVATE_VEL_CONTROL = 12
};

/// Constant 'TRANSITION_SHUTDOWN'.
enum
{
  motor_controller__msg__Transition__TRANSITION_SHUTDOWN = 14
};

/// Constant 'TRANSITION_SHUTDOWN_COMPLETE'.
enum
{
  motor_controller__msg__Transition__TRANSITION_SHUTDOWN_COMPLETE = 20
};

/// Constant 'TRANSITION_DEACTIVATE_POS_CONTROL'.
enum
{
  motor_controller__msg__Transition__TRANSITION_DEACTIVATE_POS_CONTROL = 22
};

/// Constant 'TRANSITION_DEACTIVATE_VEL_CONTROL'.
enum
{
  motor_controller__msg__Transition__TRANSITION_DEACTIVATE_VEL_CONTROL = 24
};

/// Constant 'TRANSITION_CALIBRATE_ERROR'.
enum
{
  motor_controller__msg__Transition__TRANSITION_CALIBRATE_ERROR = 30
};

/// Constant 'TRANSITION_ACTIVATE_POS_CONTROL_ERROR'.
enum
{
  motor_controller__msg__Transition__TRANSITION_ACTIVATE_POS_CONTROL_ERROR = 32
};

/// Constant 'TRANSITION_DEACTIVATE_POS_CONTROL_ERROR'.
enum
{
  motor_controller__msg__Transition__TRANSITION_DEACTIVATE_POS_CONTROL_ERROR = 34
};

/// Constant 'TRANSITION_ACTIVATE_VEL_CONTROL_ERROR'.
enum
{
  motor_controller__msg__Transition__TRANSITION_ACTIVATE_VEL_CONTROL_ERROR = 36
};

/// Constant 'TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR'.
enum
{
  motor_controller__msg__Transition__TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR = 38
};

/// Constant 'TRANSITION_SHUTDOWN_ERROR'.
enum
{
  motor_controller__msg__Transition__TRANSITION_SHUTDOWN_ERROR = 40
};

/// Constant 'TRANSITION_ERR_PROCESSING_COMPLETE'.
enum
{
  motor_controller__msg__Transition__TRANSITION_ERR_PROCESSING_COMPLETE = 42
};

/// Constant 'TRANSITION_ERR_PROCESSING_ERROR'.
enum
{
  motor_controller__msg__Transition__TRANSITION_ERR_PROCESSING_ERROR = 44
};

/// Constant 'TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE'.
enum
{
  motor_controller__msg__Transition__TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE = 50
};

/// Constant 'TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE'.
enum
{
  motor_controller__msg__Transition__TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE = 51
};

/// Constant 'TRANSITION_RESET'.
enum
{
  motor_controller__msg__Transition__TRANSITION_RESET = 64
};

/// Constant 'TRANSITION_SUCCESS'.
enum
{
  motor_controller__msg__Transition__TRANSITION_SUCCESS = 97
};

/// Constant 'TRANSITION_FAILURE'.
enum
{
  motor_controller__msg__Transition__TRANSITION_FAILURE = 98
};

/// Constant 'TRANSITION_ERROR'.
enum
{
  motor_controller__msg__Transition__TRANSITION_ERROR = 99
};

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Transition in the package motor_controller.
typedef struct motor_controller__msg__Transition
{
  uint8_t id;
  rosidl_runtime_c__String label;
} motor_controller__msg__Transition;

// Struct for a sequence of motor_controller__msg__Transition.
typedef struct motor_controller__msg__Transition__Sequence
{
  motor_controller__msg__Transition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__msg__Transition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__STRUCT_H_
