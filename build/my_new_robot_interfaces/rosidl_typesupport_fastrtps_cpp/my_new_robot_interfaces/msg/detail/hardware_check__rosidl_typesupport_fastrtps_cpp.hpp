// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from my_new_robot_interfaces:msg/HardwareCheck.idl
// generated code does not contain a copyright notice

#ifndef MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_new_robot_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "my_new_robot_interfaces/msg/detail/hardware_check__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace my_new_robot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_new_robot_interfaces
cdr_serialize(
  const my_new_robot_interfaces::msg::HardwareCheck & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_new_robot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_new_robot_interfaces::msg::HardwareCheck & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_new_robot_interfaces
get_serialized_size(
  const my_new_robot_interfaces::msg::HardwareCheck & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_new_robot_interfaces
max_serialized_size_HardwareCheck(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_new_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_new_robot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_new_robot_interfaces, msg, HardwareCheck)();

#ifdef __cplusplus
}
#endif

#endif  // MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
