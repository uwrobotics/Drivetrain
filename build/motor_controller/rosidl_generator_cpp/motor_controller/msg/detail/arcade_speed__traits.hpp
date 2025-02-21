// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_controller:msg/ArcadeSpeed.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__TRAITS_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__TRAITS_HPP_

#include "motor_controller/msg/detail/arcade_speed__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const motor_controller::msg::ArcadeSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l: ";
    value_to_yaml(msg.l, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const motor_controller::msg::ArcadeSpeed & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<motor_controller::msg::ArcadeSpeed>()
{
  return "motor_controller::msg::ArcadeSpeed";
}

template<>
inline const char * name<motor_controller::msg::ArcadeSpeed>()
{
  return "motor_controller/msg/ArcadeSpeed";
}

template<>
struct has_fixed_size<motor_controller::msg::ArcadeSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_controller::msg::ArcadeSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_controller::msg::ArcadeSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__ARCADE_SPEED__TRAITS_HPP_
