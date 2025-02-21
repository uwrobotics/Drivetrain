// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:msg/ArcadeSpeed.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__STRUCT_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ArcadeSpeed in the package motor_controller.
typedef struct motor_controller__msg__ArcadeSpeed
{
  double r;
  double l;
} motor_controller__msg__ArcadeSpeed;

// Struct for a sequence of motor_controller__msg__ArcadeSpeed.
typedef struct motor_controller__msg__ArcadeSpeed__Sequence
{
  motor_controller__msg__ArcadeSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__msg__ArcadeSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__STRUCT_H_
