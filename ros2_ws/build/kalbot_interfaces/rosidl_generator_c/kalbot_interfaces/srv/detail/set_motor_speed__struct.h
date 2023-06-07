// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__STRUCT_H_
#define KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetMotorSpeed in the package kalbot_interfaces.
typedef struct kalbot_interfaces__srv__SetMotorSpeed_Request
{
  int64_t left_speed;
  int64_t right_speed;
} kalbot_interfaces__srv__SetMotorSpeed_Request;

// Struct for a sequence of kalbot_interfaces__srv__SetMotorSpeed_Request.
typedef struct kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence
{
  kalbot_interfaces__srv__SetMotorSpeed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kalbot_interfaces__srv__SetMotorSpeed_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetMotorSpeed in the package kalbot_interfaces.
typedef struct kalbot_interfaces__srv__SetMotorSpeed_Response
{
  bool success;
} kalbot_interfaces__srv__SetMotorSpeed_Response;

// Struct for a sequence of kalbot_interfaces__srv__SetMotorSpeed_Response.
typedef struct kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence
{
  kalbot_interfaces__srv__SetMotorSpeed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kalbot_interfaces__srv__SetMotorSpeed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__STRUCT_H_
