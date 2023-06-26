// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__SRV__SET_MOTOR_SPEED__TRAITS_HPP_
#define KALBOT_INTERFACES__SRV__SET_MOTOR_SPEED__TRAITS_HPP_

#include "kalbot_interfaces/srv/set_motor_speed__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kalbot_interfaces::srv::SetMotorSpeed_Request>()
{
  return "kalbot_interfaces::srv::SetMotorSpeed_Request";
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

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kalbot_interfaces::srv::SetMotorSpeed_Response>()
{
  return "kalbot_interfaces::srv::SetMotorSpeed_Response";
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

#endif  // KALBOT_INTERFACES__SRV__SET_MOTOR_SPEED__TRAITS_HPP_
