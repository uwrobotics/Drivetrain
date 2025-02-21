// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_controller:msg/State.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__STATE__STRUCT_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__motor_controller__msg__State __attribute__((deprecated))
#else
# define DEPRECATED__motor_controller__msg__State __declspec(deprecated)
#endif

namespace motor_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct State_
{
  using Type = State_<ContainerAllocator>;

  explicit State_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->label = "";
    }
  }

  explicit State_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t UNINIT =
    0u;
  static constexpr uint8_t TRANSITION_STATE_PRE_CAL =
    1u;
  static constexpr uint8_t IDLE =
    2u;
  static constexpr uint8_t TRANSITION_STATE_ACTIVATING_POS_CONTROL =
    3u;
  static constexpr uint8_t POS_CONTROL =
    4u;
  static constexpr uint8_t TRANSITION_STATE_DEACTIVATING_POS_CONTROL =
    5u;
  static constexpr uint8_t TRANSITION_STATE_ACTIVATING_VEL_CONTROL =
    6u;
  static constexpr uint8_t VEL_CONTROL =
    7u;
  static constexpr uint8_t TRANSITION_STATE_DEACTIVATING_VEL_CONTROL =
    8u;
  static constexpr uint8_t TRANSITION_STATE_SHUTTING_DOWN =
    9u;
  static constexpr uint8_t TRANSITION_STATE_ERR_PROCESSING =
    10u;
  static constexpr uint8_t FINALIZED =
    11u;

  // pointer types
  using RawPtr =
    motor_controller::msg::State_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_controller::msg::State_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_controller::msg::State_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_controller::msg::State_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::State_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::State_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::State_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::State_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_controller::msg::State_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_controller::msg::State_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_controller__msg__State
    std::shared_ptr<motor_controller::msg::State_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_controller__msg__State
    std::shared_ptr<motor_controller::msg::State_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_

// alias to use template instance with default allocator
using State =
  motor_controller::msg::State_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::UNINIT;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::TRANSITION_STATE_PRE_CAL;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::IDLE;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::TRANSITION_STATE_ACTIVATING_POS_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::POS_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::TRANSITION_STATE_DEACTIVATING_POS_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::TRANSITION_STATE_ACTIVATING_VEL_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::VEL_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::TRANSITION_STATE_DEACTIVATING_VEL_CONTROL;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::TRANSITION_STATE_SHUTTING_DOWN;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::TRANSITION_STATE_ERR_PROCESSING;
template<typename ContainerAllocator>
constexpr uint8_t State_<ContainerAllocator>::FINALIZED;

}  // namespace msg

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__STATE__STRUCT_HPP_
