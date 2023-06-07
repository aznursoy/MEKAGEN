// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__TRAITS_HPP_
#define KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kalbot_interfaces/srv/detail/set_motor_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kalbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMotorSpeed_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_speed
  {
    out << "left_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_speed, out);
    out << ", ";
  }

  // member: right_speed
  {
    out << "right_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMotorSpeed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.left_speed, out);
    out << "\n";
  }

  // member: right_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.right_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMotorSpeed_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kalbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kalbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kalbot_interfaces::srv::SetMotorSpeed_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kalbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kalbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kalbot_interfaces::srv::SetMotorSpeed_Request & msg)
{
  return kalbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kalbot_interfaces::srv::SetMotorSpeed_Request>()
{
  return "kalbot_interfaces::srv::SetMotorSpeed_Request";
}

template<>
inline const char * name<kalbot_interfaces::srv::SetMotorSpeed_Request>()
{
  return "kalbot_interfaces/srv/SetMotorSpeed_Request";
}

template<>
struct has_fixed_size<kalbot_interfaces::srv::SetMotorSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kalbot_interfaces::srv::SetMotorSpeed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kalbot_interfaces::srv::SetMotorSpeed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kalbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMotorSpeed_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMotorSpeed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMotorSpeed_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kalbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use kalbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kalbot_interfaces::srv::SetMotorSpeed_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kalbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kalbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const kalbot_interfaces::srv::SetMotorSpeed_Response & msg)
{
  return kalbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kalbot_interfaces::srv::SetMotorSpeed_Response>()
{
  return "kalbot_interfaces::srv::SetMotorSpeed_Response";
}

template<>
inline const char * name<kalbot_interfaces::srv::SetMotorSpeed_Response>()
{
  return "kalbot_interfaces/srv/SetMotorSpeed_Response";
}

template<>
struct has_fixed_size<kalbot_interfaces::srv::SetMotorSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kalbot_interfaces::srv::SetMotorSpeed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kalbot_interfaces::srv::SetMotorSpeed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kalbot_interfaces::srv::SetMotorSpeed>()
{
  return "kalbot_interfaces::srv::SetMotorSpeed";
}

template<>
inline const char * name<kalbot_interfaces::srv::SetMotorSpeed>()
{
  return "kalbot_interfaces/srv/SetMotorSpeed";
}

template<>
struct has_fixed_size<kalbot_interfaces::srv::SetMotorSpeed>
  : std::integral_constant<
    bool,
    has_fixed_size<kalbot_interfaces::srv::SetMotorSpeed_Request>::value &&
    has_fixed_size<kalbot_interfaces::srv::SetMotorSpeed_Response>::value
  >
{
};

template<>
struct has_bounded_size<kalbot_interfaces::srv::SetMotorSpeed>
  : std::integral_constant<
    bool,
    has_bounded_size<kalbot_interfaces::srv::SetMotorSpeed_Request>::value &&
    has_bounded_size<kalbot_interfaces::srv::SetMotorSpeed_Response>::value
  >
{
};

template<>
struct is_service<kalbot_interfaces::srv::SetMotorSpeed>
  : std::true_type
{
};

template<>
struct is_service_request<kalbot_interfaces::srv::SetMotorSpeed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kalbot_interfaces::srv::SetMotorSpeed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__TRAITS_HPP_
