// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kalbot_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
#define KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kalbot_interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kalbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_motor_speed
  {
    out << "left_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_speed, out);
    out << ", ";
  }

  // member: right_motor_speed
  {
    out << "right_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_motor_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_motor_speed, out);
    out << "\n";
  }

  // member: right_motor_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_motor_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_motor_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kalbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kalbot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kalbot_interfaces::msg::MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  kalbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kalbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const kalbot_interfaces::msg::MotorCommand & msg)
{
  return kalbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kalbot_interfaces::msg::MotorCommand>()
{
  return "kalbot_interfaces::msg::MotorCommand";
}

template<>
inline const char * name<kalbot_interfaces::msg::MotorCommand>()
{
  return "kalbot_interfaces/msg/MotorCommand";
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

#endif  // KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
