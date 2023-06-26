// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kalbot_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__MSG__MOTOR_COMMAND__TRAITS_HPP_
#define KALBOT_INTERFACES__MSG__MOTOR_COMMAND__TRAITS_HPP_

#include "kalbot_interfaces/msg/motor_command__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kalbot_interfaces::msg::MotorCommand>()
{
  return "kalbot_interfaces::msg::MotorCommand";
}

template<>
struct has_fixed_size<kalbot_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kalbot_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kalbot_interfaces::msg::MotorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KALBOT_INTERFACES__MSG__MOTOR_COMMAND__TRAITS_HPP_
