// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_controller:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice
#include "motor_controller/msg/detail/motor_speeds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
motor_controller__msg__MotorSpeeds__init(motor_controller__msg__MotorSpeeds * msg)
{
  if (!msg) {
    return false;
  }
  // m1
  // m2
  // m3
  // m4
  // m5
  // m6
  return true;
}

void
motor_controller__msg__MotorSpeeds__fini(motor_controller__msg__MotorSpeeds * msg)
{
  if (!msg) {
    return;
  }
  // m1
  // m2
  // m3
  // m4
  // m5
  // m6
}

bool
motor_controller__msg__MotorSpeeds__are_equal(const motor_controller__msg__MotorSpeeds * lhs, const motor_controller__msg__MotorSpeeds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // m1
  if (lhs->m1 != rhs->m1) {
    return false;
  }
  // m2
  if (lhs->m2 != rhs->m2) {
    return false;
  }
  // m3
  if (lhs->m3 != rhs->m3) {
    return false;
  }
  // m4
  if (lhs->m4 != rhs->m4) {
    return false;
  }
  // m5
  if (lhs->m5 != rhs->m5) {
    return false;
  }
  // m6
  if (lhs->m6 != rhs->m6) {
    return false;
  }
  return true;
}

bool
motor_controller__msg__MotorSpeeds__copy(
  const motor_controller__msg__MotorSpeeds * input,
  motor_controller__msg__MotorSpeeds * output)
{
  if (!input || !output) {
    return false;
  }
  // m1
  output->m1 = input->m1;
  // m2
  output->m2 = input->m2;
  // m3
  output->m3 = input->m3;
  // m4
  output->m4 = input->m4;
  // m5
  output->m5 = input->m5;
  // m6
  output->m6 = input->m6;
  return true;
}

motor_controller__msg__MotorSpeeds *
motor_controller__msg__MotorSpeeds__create()
{
  motor_controller__msg__MotorSpeeds * msg = (motor_controller__msg__MotorSpeeds *)malloc(sizeof(motor_controller__msg__MotorSpeeds));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_controller__msg__MotorSpeeds));
  bool success = motor_controller__msg__MotorSpeeds__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
motor_controller__msg__MotorSpeeds__destroy(motor_controller__msg__MotorSpeeds * msg)
{
  if (msg) {
    motor_controller__msg__MotorSpeeds__fini(msg);
  }
  free(msg);
}


bool
motor_controller__msg__MotorSpeeds__Sequence__init(motor_controller__msg__MotorSpeeds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  motor_controller__msg__MotorSpeeds * data = NULL;
  if (size) {
    data = (motor_controller__msg__MotorSpeeds *)calloc(size, sizeof(motor_controller__msg__MotorSpeeds));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_controller__msg__MotorSpeeds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_controller__msg__MotorSpeeds__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motor_controller__msg__MotorSpeeds__Sequence__fini(motor_controller__msg__MotorSpeeds__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_controller__msg__MotorSpeeds__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motor_controller__msg__MotorSpeeds__Sequence *
motor_controller__msg__MotorSpeeds__Sequence__create(size_t size)
{
  motor_controller__msg__MotorSpeeds__Sequence * array = (motor_controller__msg__MotorSpeeds__Sequence *)malloc(sizeof(motor_controller__msg__MotorSpeeds__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = motor_controller__msg__MotorSpeeds__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
motor_controller__msg__MotorSpeeds__Sequence__destroy(motor_controller__msg__MotorSpeeds__Sequence * array)
{
  if (array) {
    motor_controller__msg__MotorSpeeds__Sequence__fini(array);
  }
  free(array);
}

bool
motor_controller__msg__MotorSpeeds__Sequence__are_equal(const motor_controller__msg__MotorSpeeds__Sequence * lhs, const motor_controller__msg__MotorSpeeds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_controller__msg__MotorSpeeds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_controller__msg__MotorSpeeds__Sequence__copy(
  const motor_controller__msg__MotorSpeeds__Sequence * input,
  motor_controller__msg__MotorSpeeds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_controller__msg__MotorSpeeds);
    motor_controller__msg__MotorSpeeds * data =
      (motor_controller__msg__MotorSpeeds *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_controller__msg__MotorSpeeds__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          motor_controller__msg__MotorSpeeds__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_controller__msg__MotorSpeeds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
