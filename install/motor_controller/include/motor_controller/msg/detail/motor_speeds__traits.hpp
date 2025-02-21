// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_controller:msg/MotorSpeeds.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__TRAITS_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__TRAITS_HPP_

#include "motor_controller/msg/detail/motor_speeds__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const motor_controller::msg::MotorSpeeds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: m1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m1: ";
    value_to_yaml(msg.m1, out);
    out << "\n";
  }

  // member: m2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m2: ";
    value_to_yaml(msg.m2, out);
    out << "\n";
  }

  // member: m3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m3: ";
    value_to_yaml(msg.m3, out);
    out << "\n";
  }

  // member: m4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m4: ";
    value_to_yaml(msg.m4, out);
    out << "\n";
  }

  // member: m5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m5: ";
    value_to_yaml(msg.m5, out);
    out << "\n";
  }

  // member: m6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m6: ";
    value_to_yaml(msg.m6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const motor_controller::msg::MotorSpeeds & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<motor_controller::msg::MotorSpeeds>()
{
  return "motor_controller::msg::MotorSpeeds";
}

template<>
inline const char * name<motor_controller::msg::MotorSpeeds>()
{
  return "motor_controller/msg/MotorSpeeds";
}

template<>
struct has_fixed_size<motor_controller::msg::MotorSpeeds>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_controller::msg::MotorSpeeds>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_controller::msg::MotorSpeeds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__MOTOR_SPEEDS__TRAITS_HPP_
