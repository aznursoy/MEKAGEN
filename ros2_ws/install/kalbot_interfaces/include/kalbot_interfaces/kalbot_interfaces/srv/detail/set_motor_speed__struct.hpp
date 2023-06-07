// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kalbot_interfaces:srv/SetMotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__STRUCT_HPP_
#define KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kalbot_interfaces__srv__SetMotorSpeed_Request __attribute__((deprecated))
#else
# define DEPRECATED__kalbot_interfaces__srv__SetMotorSpeed_Request __declspec(deprecated)
#endif

namespace kalbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotorSpeed_Request_
{
  using Type = SetMotorSpeed_Request_<ContainerAllocator>;

  explicit SetMotorSpeed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_speed = 0ll;
      this->right_speed = 0ll;
    }
  }

  explicit SetMotorSpeed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_speed = 0ll;
      this->right_speed = 0ll;
    }
  }

  // field types and members
  using _left_speed_type =
    int64_t;
  _left_speed_type left_speed;
  using _right_speed_type =
    int64_t;
  _right_speed_type right_speed;

  // setters for named parameter idiom
  Type & set__left_speed(
    const int64_t & _arg)
  {
    this->left_speed = _arg;
    return *this;
  }
  Type & set__right_speed(
    const int64_t & _arg)
  {
    this->right_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kalbot_interfaces__srv__SetMotorSpeed_Request
    std::shared_ptr<kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kalbot_interfaces__srv__SetMotorSpeed_Request
    std::shared_ptr<kalbot_interfaces::srv::SetMotorSpeed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorSpeed_Request_ & other) const
  {
    if (this->left_speed != other.left_speed) {
      return false;
    }
    if (this->right_speed != other.right_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorSpeed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorSpeed_Request_

// alias to use template instance with default allocator
using SetMotorSpeed_Request =
  kalbot_interfaces::srv::SetMotorSpeed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kalbot_interfaces


#ifndef _WIN32
# define DEPRECATED__kalbot_interfaces__srv__SetMotorSpeed_Response __attribute__((deprecated))
#else
# define DEPRECATED__kalbot_interfaces__srv__SetMotorSpeed_Response __declspec(deprecated)
#endif

namespace kalbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotorSpeed_Response_
{
  using Type = SetMotorSpeed_Response_<ContainerAllocator>;

  explicit SetMotorSpeed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetMotorSpeed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kalbot_interfaces__srv__SetMotorSpeed_Response
    std::shared_ptr<kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kalbot_interfaces__srv__SetMotorSpeed_Response
    std::shared_ptr<kalbot_interfaces::srv::SetMotorSpeed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorSpeed_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorSpeed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorSpeed_Response_

// alias to use template instance with default allocator
using SetMotorSpeed_Response =
  kalbot_interfaces::srv::SetMotorSpeed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace kalbot_interfaces

namespace kalbot_interfaces
{

namespace srv
{

struct SetMotorSpeed
{
  using Request = kalbot_interfaces::srv::SetMotorSpeed_Request;
  using Response = kalbot_interfaces::srv::SetMotorSpeed_Response;
};

}  // namespace srv

}  // namespace kalbot_interfaces

#endif  // KALBOT_INTERFACES__SRV__DETAIL__SET_MOTOR_SPEED__STRUCT_HPP_
