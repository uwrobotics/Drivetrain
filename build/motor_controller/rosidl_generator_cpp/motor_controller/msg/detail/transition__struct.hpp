// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_controller:msg/Transition.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__STRUCT_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__motor_controller__msg__Transition __attribute__((deprecated))
#else
# define DEPRECATED__motor_controller__msg__Transition __declspec(deprecated)
#endif

namespace motor_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Transition_
{
  using Type = Transition_<ContainerAllocator>;

  explicit Transition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->label = "";
    }
  }

  explicit Transition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->label = "";
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_A =
    1u;
  static constexpr uint8_t TYPE_B =
    2u;
  static constexpr uint8_t TYPE_C =
    3u;
  static constexpr uint8_t TYPE_D =
    4u;
  static constexpr uint8_t TRANSITION_CALIBRATE =
    6u;
  static constexpr uint8_t TRANSITION_CALIBRATE_COMPLETE =
    8u;
  static constexpr uint8_t TRANSITION_ACTIVATE_POS_CONTROL =
    10u;
  static constexpr uint8_t TRANSITION_ACTIVATE_VEL_CONTROL =
    12u;
  static constexpr uint8_t TRANSITION_SHUTDOWN =
    14u;
  static constexpr uint8_t TRANSITION_SHUTDOWN_COMPLETE =
    20u;
  static constexpr uint8_t TRANSITION_DEACTIVATE_POS_CONTROL =
    22u;
  static constexpr uint8_t TRANSITION_DEACTIVATE_VEL_CONTROL =
    24u;
  static constexpr uint8_t TRANSITION_CALIBRATE_ERROR =
    30u;
  static constexpr uint8_t TRANSITION_ACTIVATE_POS_CONTROL_ERROR =
    32u;
  static constexpr uint8_t TRANSITION_DEACTIVATE_POS_CONTROL_ERROR =
    34u;
  static constexpr uint8_t TRANSITION_ACTIVATE_VEL_CONTROL_ERROR =
    36u;
  static constexpr uint8_t TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR =
    38u;
  static constexpr uint8_t TRANSITION_SHUTDOWN_ERROR =
    40u;
  static constexpr uint8_t TRANSITION_ERR_PROCESSING_COMPLETE =
    42u;
  static constexpr uint8_t TRANSITION_ERR_PROCESSING_ERROR =
    44u;
  static constexpr uint8_t TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE =
    50u;
  static constexpr uint8_t TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE =
    51u;
  static constexpr uint8_t TRANSITION_RESET =
    64u;
  static constexpr uint8_t TRANSITION_SUCCESS =
    97u;
  static constexpr uint8_t TRANSITION_FAILURE =
    98u;
  static constexpr uint8_t TRANSITION_ERROR =
    99u;

  // pointer types
  using RawPtr =
    motor_controller::msg::Transition_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_controller::msg::Transition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_controller::msg::Transition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_controller::msg::Transition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::Transition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::Transition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::Transition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::Transition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_controller::msg::Transition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_controller::msg::Transition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_controller__msg__Transition
    std::shared_ptr<motor_controller::msg::Transition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_controller__msg__Transition
    std::shared_ptr<motor_controller::msg::Transition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transition_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transition_

// alias to use template instance with default allocator
using Transition =
  motor_controller::msg::Transition_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TYPE_A;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TYPE_B;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TYPE_C;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TYPE_D;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_CALIBRATE;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_CALIBRATE_COMPLETE;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_ACTIVATE_POS_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_ACTIVATE_VEL_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_SHUTDOWN;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_SHUTDOWN_COMPLETE;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_DEACTIVATE_POS_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_DEACTIVATE_VEL_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_CALIBRATE_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_ACTIVATE_POS_CONTROL_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_DEACTIVATE_POS_CONTROL_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_ACTIVATE_VEL_CONTROL_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_SHUTDOWN_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_ERR_PROCESSING_COMPLETE;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_ERR_PROCESSING_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_RESET;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_FAILURE;
template<typename ContainerAllocator>
constexpr uint8_t Transition_<ContainerAllocator>::TRANSITION_ERROR;

}  // namespace msg

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__TRANSITION__STRUCT_HPP_
