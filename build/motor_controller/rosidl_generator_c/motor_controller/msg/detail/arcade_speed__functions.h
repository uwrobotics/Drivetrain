// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motor_controller:msg/ArcadeSpeed.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__FUNCTIONS_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "motor_controller/msg/rosidl_generator_c__visibility_control.h"

#include "motor_controller/msg/detail/arcade_speed__struct.h"

/// Initialize msg/ArcadeSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_controller__msg__ArcadeSpeed
 * )) before or use
 * motor_controller__msg__ArcadeSpeed__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__ArcadeSpeed__init(motor_controller__msg__ArcadeSpeed * msg);

/// Finalize msg/ArcadeSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
void
motor_controller__msg__ArcadeSpeed__fini(motor_controller__msg__ArcadeSpeed * msg);

/// Create msg/ArcadeSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_controller__msg__ArcadeSpeed__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
motor_controller__msg__ArcadeSpeed *
motor_controller__msg__ArcadeSpeed__create();

/// Destroy msg/ArcadeSpeed message.
/**
 * It calls
 * motor_controller__msg__ArcadeSpeed__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
void
motor_controller__msg__ArcadeSpeed__destroy(motor_controller__msg__ArcadeSpeed * msg);

/// Check for msg/ArcadeSpeed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__ArcadeSpeed__are_equal(const motor_controller__msg__ArcadeSpeed * lhs, const motor_controller__msg__ArcadeSpeed * rhs);

/// Copy a msg/ArcadeSpeed message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__ArcadeSpeed__copy(
  const motor_controller__msg__ArcadeSpeed * input,
  motor_controller__msg__ArcadeSpeed * output);

/// Initialize array of msg/ArcadeSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_controller__msg__ArcadeSpeed__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__ArcadeSpeed__Sequence__init(motor_controller__msg__ArcadeSpeed__Sequence * array, size_t size);

/// Finalize array of msg/ArcadeSpeed messages.
/**
 * It calls
 * motor_controller__msg__ArcadeSpeed__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
void
motor_controller__msg__ArcadeSpeed__Sequence__fini(motor_controller__msg__ArcadeSpeed__Sequence * array);

/// Create array of msg/ArcadeSpeed messages.
/**
 * It allocates the memory for the array and calls
 * motor_controller__msg__ArcadeSpeed__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
motor_controller__msg__ArcadeSpeed__Sequence *
motor_controller__msg__ArcadeSpeed__Sequence__create(size_t size);

/// Destroy array of msg/ArcadeSpeed messages.
/**
 * It calls
 * motor_controller__msg__ArcadeSpeed__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
void
motor_controller__msg__ArcadeSpeed__Sequence__destroy(motor_controller__msg__ArcadeSpeed__Sequence * array);

/// Check for msg/ArcadeSpeed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__ArcadeSpeed__Sequence__are_equal(const motor_controller__msg__ArcadeSpeed__Sequence * lhs, const motor_controller__msg__ArcadeSpeed__Sequence * rhs);

/// Copy an array of msg/ArcadeSpeed messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__ArcadeSpeed__Sequence__copy(
  const motor_controller__msg__ArcadeSpeed__Sequence * input,
  motor_controller__msg__ArcadeSpeed__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__FUNCTIONS_H_
