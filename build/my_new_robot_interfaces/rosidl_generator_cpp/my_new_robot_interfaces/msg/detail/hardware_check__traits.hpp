// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_new_robot_interfaces:msg/HardwareCheck.idl
// generated code does not contain a copyright notice

#ifndef MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__TRAITS_HPP_
#define MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_new_robot_interfaces/msg/detail/hardware_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_new_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareCheck & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareCheck & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareCheck & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_new_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_new_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_new_robot_interfaces::msg::HardwareCheck & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_new_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_new_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_new_robot_interfaces::msg::HardwareCheck & msg)
{
  return my_new_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_new_robot_interfaces::msg::HardwareCheck>()
{
  return "my_new_robot_interfaces::msg::HardwareCheck";
}

template<>
inline const char * name<my_new_robot_interfaces::msg::HardwareCheck>()
{
  return "my_new_robot_interfaces/msg/HardwareCheck";
}

template<>
struct has_fixed_size<my_new_robot_interfaces::msg::HardwareCheck>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_new_robot_interfaces::msg::HardwareCheck>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_new_robot_interfaces::msg::HardwareCheck>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__TRAITS_HPP_
