// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kalbot_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kalbot_interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kalbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_right_motor_speed
{
public:
  explicit Init_MotorCommand_right_motor_speed(::kalbot_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::kalbot_interfaces::msg::MotorCommand right_motor_speed(::kalbot_interfaces::msg::MotorCommand::_right_motor_speed_type arg)
  {
    msg_.right_motor_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kalbot_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_left_motor_speed
{
public:
  Init_MotorCommand_left_motor_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_right_motor_speed left_motor_speed(::kalbot_interfaces::msg::MotorCommand::_left_motor_speed_type arg)
  {
    msg_.left_motor_speed = std::move(arg);
    return Init_MotorCommand_right_motor_speed(msg_);
  }

private:
  ::kalbot_interfaces::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kalbot_interfaces::msg::MotorCommand>()
{
  return kalbot_interfaces::msg::builder::Init_MotorCommand_left_motor_speed();
}

}  // namespace kalbot_interfaces

#endif  // KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
