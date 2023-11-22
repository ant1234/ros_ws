// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_new_robot_interfaces:msg/HardwareCheck.idl
// generated code does not contain a copyright notice

#ifndef MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__BUILDER_HPP_
#define MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_new_robot_interfaces/msg/detail/hardware_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_new_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_HardwareCheck_height
{
public:
  explicit Init_HardwareCheck_height(::my_new_robot_interfaces::msg::HardwareCheck & msg)
  : msg_(msg)
  {}
  ::my_new_robot_interfaces::msg::HardwareCheck height(::my_new_robot_interfaces::msg::HardwareCheck::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_new_robot_interfaces::msg::HardwareCheck msg_;
};

class Init_HardwareCheck_age
{
public:
  explicit Init_HardwareCheck_age(::my_new_robot_interfaces::msg::HardwareCheck & msg)
  : msg_(msg)
  {}
  Init_HardwareCheck_height age(::my_new_robot_interfaces::msg::HardwareCheck::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_HardwareCheck_height(msg_);
  }

private:
  ::my_new_robot_interfaces::msg::HardwareCheck msg_;
};

class Init_HardwareCheck_name
{
public:
  Init_HardwareCheck_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareCheck_age name(::my_new_robot_interfaces::msg::HardwareCheck::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_HardwareCheck_age(msg_);
  }

private:
  ::my_new_robot_interfaces::msg::HardwareCheck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_new_robot_interfaces::msg::HardwareCheck>()
{
  return my_new_robot_interfaces::msg::builder::Init_HardwareCheck_name();
}

}  // namespace my_new_robot_interfaces

#endif  // MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__BUILDER_HPP_
