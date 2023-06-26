// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice
#include "kalbot_interfaces/srv/set_motor_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
kalbot_interfaces__srv__SetMotorSpeed_Request__init(kalbot_interfaces__srv__SetMotorSpeed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // left_speed
  // right_speed
  return true;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Request__fini(kalbot_interfaces__srv__SetMotorSpeed_Request * msg)
{
  if (!msg) {
    return;
  }
  // left_speed
  // right_speed
}

kalbot_interfaces__srv__SetMotorSpeed_Request *
kalbot_interfaces__srv__SetMotorSpeed_Request__create()
{
  kalbot_interfaces__srv__SetMotorSpeed_Request * msg = (kalbot_interfaces__srv__SetMotorSpeed_Request *)malloc(sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request));
  bool success = kalbot_interfaces__srv__SetMotorSpeed_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Request__destroy(kalbot_interfaces__srv__SetMotorSpeed_Request * msg)
{
  if (msg) {
    kalbot_interfaces__srv__SetMotorSpeed_Request__fini(msg);
  }
  free(msg);
}


bool
kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__init(kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kalbot_interfaces__srv__SetMotorSpeed_Request * data = NULL;
  if (size) {
    data = (kalbot_interfaces__srv__SetMotorSpeed_Request *)calloc(size, sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kalbot_interfaces__srv__SetMotorSpeed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kalbot_interfaces__srv__SetMotorSpeed_Request__fini(&data[i - 1]);
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
kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__fini(kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kalbot_interfaces__srv__SetMotorSpeed_Request__fini(&array->data[i]);
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

kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence *
kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__create(size_t size)
{
  kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * array = (kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence *)malloc(sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__destroy(kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * array)
{
  if (array) {
    kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__fini(array);
  }
  free(array);
}


bool
kalbot_interfaces__srv__SetMotorSpeed_Response__init(kalbot_interfaces__srv__SetMotorSpeed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Response__fini(kalbot_interfaces__srv__SetMotorSpeed_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

kalbot_interfaces__srv__SetMotorSpeed_Response *
kalbot_interfaces__srv__SetMotorSpeed_Response__create()
{
  kalbot_interfaces__srv__SetMotorSpeed_Response * msg = (kalbot_interfaces__srv__SetMotorSpeed_Response *)malloc(sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response));
  bool success = kalbot_interfaces__srv__SetMotorSpeed_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Response__destroy(kalbot_interfaces__srv__SetMotorSpeed_Response * msg)
{
  if (msg) {
    kalbot_interfaces__srv__SetMotorSpeed_Response__fini(msg);
  }
  free(msg);
}


bool
kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__init(kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kalbot_interfaces__srv__SetMotorSpeed_Response * data = NULL;
  if (size) {
    data = (kalbot_interfaces__srv__SetMotorSpeed_Response *)calloc(size, sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kalbot_interfaces__srv__SetMotorSpeed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kalbot_interfaces__srv__SetMotorSpeed_Response__fini(&data[i - 1]);
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
kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__fini(kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kalbot_interfaces__srv__SetMotorSpeed_Response__fini(&array->data[i]);
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

kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence *
kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__create(size_t size)
{
  kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * array = (kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence *)malloc(sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__destroy(kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * array)
{
  if (array) {
    kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__fini(array);
  }
  free(array);
}
