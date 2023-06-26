// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kalbot_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice
#include "kalbot_interfaces/msg/motor_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
kalbot_interfaces__msg__MotorCommand__init(kalbot_interfaces__msg__MotorCommand * msg)
{
  if (!msg) {
    return false;
  }
  // left_motor_speed
  // right_motor_speed
  return true;
}

void
kalbot_interfaces__msg__MotorCommand__fini(kalbot_interfaces__msg__MotorCommand * msg)
{
  if (!msg) {
    return;
  }
  // left_motor_speed
  // right_motor_speed
}

kalbot_interfaces__msg__MotorCommand *
kalbot_interfaces__msg__MotorCommand__create()
{
  kalbot_interfaces__msg__MotorCommand * msg = (kalbot_interfaces__msg__MotorCommand *)malloc(sizeof(kalbot_interfaces__msg__MotorCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kalbot_interfaces__msg__MotorCommand));
  bool success = kalbot_interfaces__msg__MotorCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kalbot_interfaces__msg__MotorCommand__destroy(kalbot_interfaces__msg__MotorCommand * msg)
{
  if (msg) {
    kalbot_interfaces__msg__MotorCommand__fini(msg);
  }
  free(msg);
}


bool
kalbot_interfaces__msg__MotorCommand__Sequence__init(kalbot_interfaces__msg__MotorCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kalbot_interfaces__msg__MotorCommand * data = NULL;
  if (size) {
    data = (kalbot_interfaces__msg__MotorCommand *)calloc(size, sizeof(kalbot_interfaces__msg__MotorCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kalbot_interfaces__msg__MotorCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kalbot_interfaces__msg__MotorCommand__fini(&data[i - 1]);
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
kalbot_interfaces__msg__MotorCommand__Sequence__fini(kalbot_interfaces__msg__MotorCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kalbot_interfaces__msg__MotorCommand__fini(&array->data[i]);
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

kalbot_interfaces__msg__MotorCommand__Sequence *
kalbot_interfaces__msg__MotorCommand__Sequence__create(size_t size)
{
  kalbot_interfaces__msg__MotorCommand__Sequence * array = (kalbot_interfaces__msg__MotorCommand__Sequence *)malloc(sizeof(kalbot_interfaces__msg__MotorCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kalbot_interfaces__msg__MotorCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kalbot_interfaces__msg__MotorCommand__Sequence__destroy(kalbot_interfaces__msg__MotorCommand__Sequence * array)
{
  if (array) {
    kalbot_interfaces__msg__MotorCommand__Sequence__fini(array);
  }
  free(array);
}
