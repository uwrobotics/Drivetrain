// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_controller:msg/State.idl
// generated code does not contain a copyright notice
#include "motor_controller/msg/detail/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

bool
motor_controller__msg__State__init(motor_controller__msg__State * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    motor_controller__msg__State__fini(msg);
    return false;
  }
  return true;
}

void
motor_controller__msg__State__fini(motor_controller__msg__State * msg)
{
  if (!msg) {
    return;
  }
  // id
  // label
  rosidl_runtime_c__String__fini(&msg->label);
}

bool
motor_controller__msg__State__are_equal(const motor_controller__msg__State * lhs, const motor_controller__msg__State * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  return true;
}

bool
motor_controller__msg__State__copy(
  const motor_controller__msg__State * input,
  motor_controller__msg__State * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  return true;
}

motor_controller__msg__State *
motor_controller__msg__State__create()
{
  motor_controller__msg__State * msg = (motor_controller__msg__State *)malloc(sizeof(motor_controller__msg__State));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_controller__msg__State));
  bool success = motor_controller__msg__State__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
motor_controller__msg__State__destroy(motor_controller__msg__State * msg)
{
  if (msg) {
    motor_controller__msg__State__fini(msg);
  }
  free(msg);
}


bool
motor_controller__msg__State__Sequence__init(motor_controller__msg__State__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  motor_controller__msg__State * data = NULL;
  if (size) {
    data = (motor_controller__msg__State *)calloc(size, sizeof(motor_controller__msg__State));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_controller__msg__State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_controller__msg__State__fini(&data[i - 1]);
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
motor_controller__msg__State__Sequence__fini(motor_controller__msg__State__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_controller__msg__State__fini(&array->data[i]);
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

motor_controller__msg__State__Sequence *
motor_controller__msg__State__Sequence__create(size_t size)
{
  motor_controller__msg__State__Sequence * array = (motor_controller__msg__State__Sequence *)malloc(sizeof(motor_controller__msg__State__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = motor_controller__msg__State__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
motor_controller__msg__State__Sequence__destroy(motor_controller__msg__State__Sequence * array)
{
  if (array) {
    motor_controller__msg__State__Sequence__fini(array);
  }
  free(array);
}

bool
motor_controller__msg__State__Sequence__are_equal(const motor_controller__msg__State__Sequence * lhs, const motor_controller__msg__State__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_controller__msg__State__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_controller__msg__State__Sequence__copy(
  const motor_controller__msg__State__Sequence * input,
  motor_controller__msg__State__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_controller__msg__State);
    motor_controller__msg__State * data =
      (motor_controller__msg__State *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_controller__msg__State__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          motor_controller__msg__State__fini(&data[i]);
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
    if (!motor_controller__msg__State__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
