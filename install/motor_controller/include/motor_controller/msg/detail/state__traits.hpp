// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_controller:msg/State.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__STATE__TRAITS_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__STATE__TRAITS_HPP_

#include "motor_controller/msg/detail/state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const motor_controller::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    value_to_yaml(msg.label, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const motor_controller::msg::State & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<motor_controller::msg::State>()
{
  return "motor_controller::msg::State";
}

template<>
inline const char * name<motor_controller::msg::State>()
{
  return "motor_controller/msg/State";
}

template<>
struct has_fixed_size<motor_controller::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motor_controller::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motor_controller::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__STATE__TRAITS_HPP_
