// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:msg/State.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__STATE__STRUCT_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNINIT'.
enum
{
  motor_controller__msg__State__UNINIT = 0
};

/// Constant 'TRANSITION_STATE_PRE_CAL'.
enum
{
  motor_controller__msg__State__TRANSITION_STATE_PRE_CAL = 1
};

/// Constant 'IDLE'.
enum
{
  motor_controller__msg__State__IDLE = 2
};

/// Constant 'TRANSITION_STATE_ACTIVATING_POS_CONTROL'.
enum
{
  motor_controller__msg__State__TRANSITION_STATE_ACTIVATING_POS_CONTROL = 3
};

/// Constant 'POS_CONTROL'.
enum
{
  motor_controller__msg__State__POS_CONTROL = 4
};

/// Constant 'TRANSITION_STATE_DEACTIVATING_POS_CONTROL'.
enum
{
  motor_controller__msg__State__TRANSITION_STATE_DEACTIVATING_POS_CONTROL = 5
};

/// Constant 'TRANSITION_STATE_ACTIVATING_VEL_CONTROL'.
enum
{
  motor_controller__msg__State__TRANSITION_STATE_ACTIVATING_VEL_CONTROL = 6
};

/// Constant 'VEL_CONTROL'.
enum
{
  motor_controller__msg__State__VEL_CONTROL = 7
};

/// Constant 'TRANSITION_STATE_DEACTIVATING_VEL_CONTROL'.
enum
{
  motor_controller__msg__State__TRANSITION_STATE_DEACTIVATING_VEL_CONTROL = 8
};

/// Constant 'TRANSITION_STATE_SHUTTING_DOWN'.
enum
{
  motor_controller__msg__State__TRANSITION_STATE_SHUTTING_DOWN = 9
};

/// Constant 'TRANSITION_STATE_ERR_PROCESSING'.
enum
{
  motor_controller__msg__State__TRANSITION_STATE_ERR_PROCESSING = 10
};

/// Constant 'FINALIZED'.
enum
{
  motor_controller__msg__State__FINALIZED = 11
};

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/State in the package motor_controller.
typedef struct motor_controller__msg__State
{
  uint8_t id;
  rosidl_runtime_c__String label;
} motor_controller__msg__State;

// Struct for a sequence of motor_controller__msg__State.
typedef struct motor_controller__msg__State__Sequence
{
  motor_controller__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__msg__State__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__STATE__STRUCT_H_
