// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice
#include "kalbot_interfaces/srv/set_motor_speed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kalbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kalbot_interfaces/srv/set_motor_speed__struct.h"
#include "kalbot_interfaces/srv/set_motor_speed__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetMotorSpeed_Request__ros_msg_type = kalbot_interfaces__srv__SetMotorSpeed_Request;

static bool _SetMotorSpeed_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMotorSpeed_Request__ros_msg_type * ros_message = static_cast<const _SetMotorSpeed_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: left_speed
  {
    cdr << ros_message->left_speed;
  }

  // Field name: right_speed
  {
    cdr << ros_message->right_speed;
  }

  return true;
}

static bool _SetMotorSpeed_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMotorSpeed_Request__ros_msg_type * ros_message = static_cast<_SetMotorSpeed_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: left_speed
  {
    cdr >> ros_message->left_speed;
  }

  // Field name: right_speed
  {
    cdr >> ros_message->right_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kalbot_interfaces
size_t get_serialized_size_kalbot_interfaces__srv__SetMotorSpeed_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMotorSpeed_Request__ros_msg_type * ros_message = static_cast<const _SetMotorSpeed_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_speed
  {
    size_t item_size = sizeof(ros_message->left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_speed
  {
    size_t item_size = sizeof(ros_message->right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetMotorSpeed_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kalbot_interfaces__srv__SetMotorSpeed_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kalbot_interfaces
size_t max_serialized_size_kalbot_interfaces__srv__SetMotorSpeed_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetMotorSpeed_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_kalbot_interfaces__srv__SetMotorSpeed_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetMotorSpeed_Request = {
  "kalbot_interfaces::srv",
  "SetMotorSpeed_Request",
  _SetMotorSpeed_Request__cdr_serialize,
  _SetMotorSpeed_Request__cdr_deserialize,
  _SetMotorSpeed_Request__get_serialized_size,
  _SetMotorSpeed_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMotorSpeed_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMotorSpeed_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kalbot_interfaces, srv, SetMotorSpeed_Request)() {
  return &_SetMotorSpeed_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "kalbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "kalbot_interfaces/srv/set_motor_speed__struct.h"
// already included above
// #include "kalbot_interfaces/srv/set_motor_speed__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetMotorSpeed_Response__ros_msg_type = kalbot_interfaces__srv__SetMotorSpeed_Response;

static bool _SetMotorSpeed_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMotorSpeed_Response__ros_msg_type * ros_message = static_cast<const _SetMotorSpeed_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetMotorSpeed_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMotorSpeed_Response__ros_msg_type * ros_message = static_cast<_SetMotorSpeed_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kalbot_interfaces
size_t get_serialized_size_kalbot_interfaces__srv__SetMotorSpeed_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMotorSpeed_Response__ros_msg_type * ros_message = static_cast<const _SetMotorSpeed_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetMotorSpeed_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kalbot_interfaces__srv__SetMotorSpeed_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kalbot_interfaces
size_t max_serialized_size_kalbot_interfaces__srv__SetMotorSpeed_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetMotorSpeed_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_kalbot_interfaces__srv__SetMotorSpeed_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetMotorSpeed_Response = {
  "kalbot_interfaces::srv",
  "SetMotorSpeed_Response",
  _SetMotorSpeed_Response__cdr_serialize,
  _SetMotorSpeed_Response__cdr_deserialize,
  _SetMotorSpeed_Response__get_serialized_size,
  _SetMotorSpeed_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMotorSpeed_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMotorSpeed_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kalbot_interfaces, srv, SetMotorSpeed_Response)() {
  return &_SetMotorSpeed_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "kalbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kalbot_interfaces/srv/set_motor_speed.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetMotorSpeed__callbacks = {
  "kalbot_interfaces::srv",
  "SetMotorSpeed",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kalbot_interfaces, srv, SetMotorSpeed_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kalbot_interfaces, srv, SetMotorSpeed_Response)(),
};

static rosidl_service_type_support_t SetMotorSpeed__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetMotorSpeed__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kalbot_interfaces, srv, SetMotorSpeed)() {
  return &SetMotorSpeed__handle;
}

#if defined(__cplusplus)
}
#endif
