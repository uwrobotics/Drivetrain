// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorSpeeds in the package motor_controller.
typedef struct motor_controller__msg__MotorSpeeds
{
  double m1;
  double m2;
  double m3;
  double m4;
  double m5;
  double m6;
} motor_controller__msg__MotorSpeeds;

// Struct for a sequence of motor_controller__msg__MotorSpeeds.
typedef struct motor_controller__msg__MotorSpeeds__Sequence
{
  motor_controller__msg__MotorSpeeds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__msg__MotorSpeeds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_H_
