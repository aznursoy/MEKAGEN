// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kalbot_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__MSG__MOTOR_COMMAND__STRUCT_H_
#define KALBOT_INTERFACES__MSG__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorCommand in the package kalbot_interfaces.
typedef struct kalbot_interfaces__msg__MotorCommand
{
  int64_t left_motor_speed;
  int64_t right_motor_speed;
} kalbot_interfaces__msg__MotorCommand;

// Struct for a sequence of kalbot_interfaces__msg__MotorCommand.
typedef struct kalbot_interfaces__msg__MotorCommand__Sequence
{
  kalbot_interfaces__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kalbot_interfaces__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KALBOT_INTERFACES__MSG__MOTOR_COMMAND__STRUCT_H_
