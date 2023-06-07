// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kalbot_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kalbot_interfaces__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__kalbot_interfaces__msg__MotorCommand __declspec(deprecated)
#endif

namespace kalbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor_speed = 0ll;
      this->right_motor_speed = 0ll;
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_motor_speed = 0ll;
      this->right_motor_speed = 0ll;
    }
  }

  // field types and members
  using _left_motor_speed_type =
    int64_t;
  _left_motor_speed_type left_motor_speed;
  using _right_motor_speed_type =
    int64_t;
  _right_motor_speed_type right_motor_speed;

  // setters for named parameter idiom
  Type & set__left_motor_speed(
    const int64_t & _arg)
  {
    this->left_motor_speed = _arg;
    return *this;
  }
  Type & set__right_motor_speed(
    const int64_t & _arg)
  {
    this->right_motor_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kalbot_interfaces::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const kalbot_interfaces::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kalbot_interfaces::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kalbot_interfaces::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kalbot_interfaces::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kalbot_interfaces::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kalbot_interfaces::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kalbot_interfaces::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kalbot_interfaces::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kalbot_interfaces::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kalbot_interfaces__msg__MotorCommand
    std::shared_ptr<kalbot_interfaces::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kalbot_interfaces__msg__MotorCommand
    std::shared_ptr<kalbot_interfaces::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->left_motor_speed != other.left_motor_speed) {
      return false;
    }
    if (this->right_motor_speed != other.right_motor_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  kalbot_interfaces::msg::MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kalbot_interfaces

#endif  // KALBOT_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
