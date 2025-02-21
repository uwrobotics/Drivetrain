// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_controller:msg/ArcadeSpeed.idl
// generated code does not contain a copyright notice
#include "motor_controller/msg/detail/arcade_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
motor_controller__msg__ArcadeSpeed__init(motor_controller__msg__ArcadeSpeed * msg)
{
  if (!msg) {
    return false;
  }
  // r
  // l
  return true;
}

void
motor_controller__msg__ArcadeSpeed__fini(motor_controller__msg__ArcadeSpeed * msg)
{
  if (!msg) {
    return;
  }
  // r
  // l
}

bool
motor_controller__msg__ArcadeSpeed__are_equal(const motor_controller__msg__ArcadeSpeed * lhs, const motor_controller__msg__ArcadeSpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // l
  if (lhs->l != rhs->l) {
    return false;
  }
  return true;
}

bool
motor_controller__msg__ArcadeSpeed__copy(
  const motor_controller__msg__ArcadeSpeed * input,
  motor_controller__msg__ArcadeSpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // r
  output->r = input->r;
  // l
  output->l = input->l;
  return true;
}

motor_controller__msg__ArcadeSpeed *
motor_controller__msg__ArcadeSpeed__create()
{
  motor_controller__msg__ArcadeSpeed * msg = (motor_controller__msg__ArcadeSpeed *)malloc(sizeof(motor_controller__msg__ArcadeSpeed));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_controller__msg__ArcadeSpeed));
  bool success = motor_controller__msg__ArcadeSpeed__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
motor_controller__msg__ArcadeSpeed__destroy(motor_controller__msg__ArcadeSpeed * msg)
{
  if (msg) {
    motor_controller__msg__ArcadeSpeed__fini(msg);
  }
  free(msg);
}


bool
motor_controller__msg__ArcadeSpeed__Sequence__init(motor_controller__msg__ArcadeSpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  motor_controller__msg__ArcadeSpeed * data = NULL;
  if (size) {
    data = (motor_controller__msg__ArcadeSpeed *)calloc(size, sizeof(motor_controller__msg__ArcadeSpeed));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_controller__msg__ArcadeSpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_controller__msg__ArcadeSpeed__fini(&data[i - 1]);
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
motor_controller__msg__ArcadeSpeed__Sequence__fini(motor_controller__msg__ArcadeSpeed__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_controller__msg__ArcadeSpeed__fini(&array->data[i]);
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

motor_controller__msg__ArcadeSpeed__Sequence *
motor_controller__msg__ArcadeSpeed__Sequence__create(size_t size)
{
  motor_controller__msg__ArcadeSpeed__Sequence * array = (motor_controller__msg__ArcadeSpeed__Sequence *)malloc(sizeof(motor_controller__msg__ArcadeSpeed__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = motor_controller__msg__ArcadeSpeed__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
motor_controller__msg__ArcadeSpeed__Sequence__destroy(motor_controller__msg__ArcadeSpeed__Sequence * array)
{
  if (array) {
    motor_controller__msg__ArcadeSpeed__Sequence__fini(array);
  }
  free(array);
}

bool
motor_controller__msg__ArcadeSpeed__Sequence__are_equal(const motor_controller__msg__ArcadeSpeed__Sequence * lhs, const motor_controller__msg__ArcadeSpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_controller__msg__ArcadeSpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_controller__msg__ArcadeSpeed__Sequence__copy(
  const motor_controller__msg__ArcadeSpeed__Sequence * input,
  motor_controller__msg__ArcadeSpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_controller__msg__ArcadeSpeed);
    motor_controller__msg__ArcadeSpeed * data =
      (motor_controller__msg__ArcadeSpeed *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_controller__msg__ArcadeSpeed__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          motor_controller__msg__ArcadeSpeed__fini(&data[i]);
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
    if (!motor_controller__msg__ArcadeSpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
