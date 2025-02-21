// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_controller:srv/ChangeState.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__TRAITS_HPP_
#define MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__TRAITS_HPP_

#include "motor_controller/srv/detail/change_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'transition'
#include "motor_controller/msg/detail/transition__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const motor_controller::srv::ChangeState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transition:\n";
    to_yaml(msg.transition, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const motor_controller::srv::ChangeState_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<motor_controller::srv::ChangeState_Request>()
{
  return "motor_controller::srv::ChangeState_Request";
}

template<>
inline const char * name<motor_controller::srv::ChangeState_Request>()
{
  return "motor_controller/srv/ChangeState_Request";
}

template<>
struct has_fixed_size<motor_controller::srv::ChangeState_Request>
  : std::integral_constant<bool, has_fixed_size<motor_controller::msg::Transition>::value> {};

template<>
struct has_bounded_size<motor_controller::srv::ChangeState_Request>
  : std::integral_constant<bool, has_bounded_size<motor_controller::msg::Transition>::value> {};

template<>
struct is_message<motor_controller::srv::ChangeState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const motor_controller::srv::ChangeState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const motor_controller::srv::ChangeState_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<motor_controller::srv::ChangeState_Response>()
{
  return "motor_controller::srv::ChangeState_Response";
}

template<>
inline const char * name<motor_controller::srv::ChangeState_Response>()
{
  return "motor_controller/srv/ChangeState_Response";
}

template<>
struct has_fixed_size<motor_controller::srv::ChangeState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_controller::srv::ChangeState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_controller::srv::ChangeState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motor_controller::srv::ChangeState>()
{
  return "motor_controller::srv::ChangeState";
}

template<>
inline const char * name<motor_controller::srv::ChangeState>()
{
  return "motor_controller/srv/ChangeState";
}

template<>
struct has_fixed_size<motor_controller::srv::ChangeState>
  : std::integral_constant<
    bool,
    has_fixed_size<motor_controller::srv::ChangeState_Request>::value &&
    has_fixed_size<motor_controller::srv::ChangeState_Response>::value
  >
{
};

template<>
struct has_bounded_size<motor_controller::srv::ChangeState>
  : std::integral_constant<
    bool,
    has_bounded_size<motor_controller::srv::ChangeState_Request>::value &&
    has_bounded_size<motor_controller::srv::ChangeState_Response>::value
  >
{
};

template<>
struct is_service<motor_controller::srv::ChangeState>
  : std::true_type
{
};

template<>
struct is_service_request<motor_controller::srv::ChangeState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motor_controller::srv::ChangeState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_CONTROLLER__SRV__DETAIL__CHANGE_STATE__TRAITS_HPP_
