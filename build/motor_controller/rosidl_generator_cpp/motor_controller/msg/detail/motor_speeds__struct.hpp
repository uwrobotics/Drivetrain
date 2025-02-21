// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_controller:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__motor_controller__msg__MotorSpeeds __attribute__((deprecated))
#else
# define DEPRECATED__motor_controller__msg__MotorSpeeds __declspec(deprecated)
#endif

namespace motor_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorSpeeds_
{
  using Type = MotorSpeeds_<ContainerAllocator>;

  explicit MotorSpeeds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1 = 0.0;
      this->m2 = 0.0;
      this->m3 = 0.0;
      this->m4 = 0.0;
      this->m5 = 0.0;
      this->m6 = 0.0;
    }
  }

  explicit MotorSpeeds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1 = 0.0;
      this->m2 = 0.0;
      this->m3 = 0.0;
      this->m4 = 0.0;
      this->m5 = 0.0;
      this->m6 = 0.0;
    }
  }

  // field types and members
  using _m1_type =
    double;
  _m1_type m1;
  using _m2_type =
    double;
  _m2_type m2;
  using _m3_type =
    double;
  _m3_type m3;
  using _m4_type =
    double;
  _m4_type m4;
  using _m5_type =
    double;
  _m5_type m5;
  using _m6_type =
    double;
  _m6_type m6;

  // setters for named parameter idiom
  Type & set__m1(
    const double & _arg)
  {
    this->m1 = _arg;
    return *this;
  }
  Type & set__m2(
    const double & _arg)
  {
    this->m2 = _arg;
    return *this;
  }
  Type & set__m3(
    const double & _arg)
  {
    this->m3 = _arg;
    return *this;
  }
  Type & set__m4(
    const double & _arg)
  {
    this->m4 = _arg;
    return *this;
  }
  Type & set__m5(
    const double & _arg)
  {
    this->m5 = _arg;
    return *this;
  }
  Type & set__m6(
    const double & _arg)
  {
    this->m6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_controller::msg::MotorSpeeds_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_controller::msg::MotorSpeeds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_controller::msg::MotorSpeeds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_controller::msg::MotorSpeeds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::MotorSpeeds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::MotorSpeeds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::MotorSpeeds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::MotorSpeeds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_controller::msg::MotorSpeeds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_controller::msg::MotorSpeeds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_controller__msg__MotorSpeeds
    std::shared_ptr<motor_controller::msg::MotorSpeeds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_controller__msg__MotorSpeeds
    std::shared_ptr<motor_controller::msg::MotorSpeeds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorSpeeds_ & other) const
  {
    if (this->m1 != other.m1) {
      return false;
    }
    if (this->m2 != other.m2) {
      return false;
    }
    if (this->m3 != other.m3) {
      return false;
    }
    if (this->m4 != other.m4) {
      return false;
    }
    if (this->m5 != other.m5) {
      return false;
    }
    if (this->m6 != other.m6) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorSpeeds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorSpeeds_

// alias to use template instance with default allocator
using MotorSpeeds =
  motor_controller::msg::MotorSpeeds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__STRUCT_HPP_
