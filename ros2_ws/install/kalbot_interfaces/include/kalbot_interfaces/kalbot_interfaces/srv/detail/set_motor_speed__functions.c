// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice
#include "kalbot_interfaces/srv/detail/set_motor_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

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

bool
kalbot_interfaces__srv__SetMotorSpeed_Request__are_equal(const kalbot_interfaces__srv__SetMotorSpeed_Request * lhs, const kalbot_interfaces__srv__SetMotorSpeed_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_speed
  if (lhs->left_speed != rhs->left_speed) {
    return false;
  }
  // right_speed
  if (lhs->right_speed != rhs->right_speed) {
    return false;
  }
  return true;
}

bool
kalbot_interfaces__srv__SetMotorSpeed_Request__copy(
  const kalbot_interfaces__srv__SetMotorSpeed_Request * input,
  kalbot_interfaces__srv__SetMotorSpeed_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // left_speed
  output->left_speed = input->left_speed;
  // right_speed
  output->right_speed = input->right_speed;
  return true;
}

kalbot_interfaces__srv__SetMotorSpeed_Request *
kalbot_interfaces__srv__SetMotorSpeed_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalbot_interfaces__srv__SetMotorSpeed_Request * msg = (kalbot_interfaces__srv__SetMotorSpeed_Request *)allocator.allocate(sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request));
  bool success = kalbot_interfaces__srv__SetMotorSpeed_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Request__destroy(kalbot_interfaces__srv__SetMotorSpeed_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kalbot_interfaces__srv__SetMotorSpeed_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__init(kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalbot_interfaces__srv__SetMotorSpeed_Request * data = NULL;

  if (size) {
    data = (kalbot_interfaces__srv__SetMotorSpeed_Request *)allocator.zero_allocate(size, sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request), allocator.state);
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
      allocator.deallocate(data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kalbot_interfaces__srv__SetMotorSpeed_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * array = (kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence *)allocator.allocate(sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__destroy(kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__are_equal(const kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * lhs, const kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kalbot_interfaces__srv__SetMotorSpeed_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence__copy(
  const kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * input,
  kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kalbot_interfaces__srv__SetMotorSpeed_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kalbot_interfaces__srv__SetMotorSpeed_Request * data =
      (kalbot_interfaces__srv__SetMotorSpeed_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kalbot_interfaces__srv__SetMotorSpeed_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kalbot_interfaces__srv__SetMotorSpeed_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kalbot_interfaces__srv__SetMotorSpeed_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
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

bool
kalbot_interfaces__srv__SetMotorSpeed_Response__are_equal(const kalbot_interfaces__srv__SetMotorSpeed_Response * lhs, const kalbot_interfaces__srv__SetMotorSpeed_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
kalbot_interfaces__srv__SetMotorSpeed_Response__copy(
  const kalbot_interfaces__srv__SetMotorSpeed_Response * input,
  kalbot_interfaces__srv__SetMotorSpeed_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

kalbot_interfaces__srv__SetMotorSpeed_Response *
kalbot_interfaces__srv__SetMotorSpeed_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalbot_interfaces__srv__SetMotorSpeed_Response * msg = (kalbot_interfaces__srv__SetMotorSpeed_Response *)allocator.allocate(sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response));
  bool success = kalbot_interfaces__srv__SetMotorSpeed_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Response__destroy(kalbot_interfaces__srv__SetMotorSpeed_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kalbot_interfaces__srv__SetMotorSpeed_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__init(kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalbot_interfaces__srv__SetMotorSpeed_Response * data = NULL;

  if (size) {
    data = (kalbot_interfaces__srv__SetMotorSpeed_Response *)allocator.zero_allocate(size, sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response), allocator.state);
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
      allocator.deallocate(data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kalbot_interfaces__srv__SetMotorSpeed_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * array = (kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence *)allocator.allocate(sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__destroy(kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__are_equal(const kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * lhs, const kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kalbot_interfaces__srv__SetMotorSpeed_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence__copy(
  const kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * input,
  kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kalbot_interfaces__srv__SetMotorSpeed_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kalbot_interfaces__srv__SetMotorSpeed_Response * data =
      (kalbot_interfaces__srv__SetMotorSpeed_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kalbot_interfaces__srv__SetMotorSpeed_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kalbot_interfaces__srv__SetMotorSpeed_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kalbot_interfaces__srv__SetMotorSpeed_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
