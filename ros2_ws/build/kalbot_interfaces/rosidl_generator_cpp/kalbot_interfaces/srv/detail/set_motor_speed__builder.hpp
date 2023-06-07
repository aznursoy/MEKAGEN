// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__BUILDER_HPP_
#define KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kalbot_interfaces/srv/detail/set_motor_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kalbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotorSpeed_Request_right_speed
{
public:
  explicit Init_SetMotorSpeed_Request_right_speed(::kalbot_interfaces::srv::SetMotorSpeed_Request & msg)
  : msg_(msg)
  {}
  ::kalbot_interfaces::srv::SetMotorSpeed_Request right_speed(::kalbot_interfaces::srv::SetMotorSpeed_Request::_right_speed_type arg)
  {
    msg_.right_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kalbot_interfaces::srv::SetMotorSpeed_Request msg_;
};

class Init_SetMotorSpeed_Request_left_speed
{
public:
  Init_SetMotorSpeed_Request_left_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorSpeed_Request_right_speed left_speed(::kalbot_interfaces::srv::SetMotorSpeed_Request::_left_speed_type arg)
  {
    msg_.left_speed = std::move(arg);
    return Init_SetMotorSpeed_Request_right_speed(msg_);
  }

private:
  ::kalbot_interfaces::srv::SetMotorSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kalbot_interfaces::srv::SetMotorSpeed_Request>()
{
  return kalbot_interfaces::srv::builder::Init_SetMotorSpeed_Request_left_speed();
}

}  // namespace kalbot_interfaces


namespace kalbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotorSpeed_Response_success
{
public:
  Init_SetMotorSpeed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kalbot_interfaces::srv::SetMotorSpeed_Response success(::kalbot_interfaces::srv::SetMotorSpeed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kalbot_interfaces::srv::SetMotorSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kalbot_interfaces::srv::SetMotorSpeed_Response>()
{
  return kalbot_interfaces::srv::builder::Init_SetMotorSpeed_Response_success();
}

}  // namespace kalbot_interfaces

#endif  // KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__BUILDER_HPP_
