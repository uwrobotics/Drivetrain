// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_controller:msg/ArcadeSpeed.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__STRUCT_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__motor_controller__msg__ArcadeSpeed __attribute__((deprecated))
#else
# define DEPRECATED__motor_controller__msg__ArcadeSpeed __declspec(deprecated)
#endif

namespace motor_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArcadeSpeed_
{
  using Type = ArcadeSpeed_<ContainerAllocator>;

  explicit ArcadeSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0.0;
      this->l = 0.0;
    }
  }

  explicit ArcadeSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0.0;
      this->l = 0.0;
    }
  }

  // field types and members
  using _r_type =
    double;
  _r_type r;
  using _l_type =
    double;
  _l_type l;

  // setters for named parameter idiom
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__l(
    const double & _arg)
  {
    this->l = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_controller::msg::ArcadeSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_controller::msg::ArcadeSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_controller::msg::ArcadeSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_controller::msg::ArcadeSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::ArcadeSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::ArcadeSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::ArcadeSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::ArcadeSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_controller::msg::ArcadeSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_controller::msg::ArcadeSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_controller__msg__ArcadeSpeed
    std::shared_ptr<motor_controller::msg::ArcadeSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_controller__msg__ArcadeSpeed
    std::shared_ptr<motor_controller::msg::ArcadeSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArcadeSpeed_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->l != other.l) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArcadeSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArcadeSpeed_

// alias to use template instance with default allocator
using ArcadeSpeed =
  motor_controller::msg::ArcadeSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__STRUCT_HPP_
