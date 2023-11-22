// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_new_robot_interfaces:msg/HardwareCheck.idl
// generated code does not contain a copyright notice

#ifndef MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__STRUCT_H_
#define MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HardwareCheck in the package my_new_robot_interfaces.
typedef struct my_new_robot_interfaces__msg__HardwareCheck
{
  rosidl_runtime_c__String name;
  int32_t age;
  float height;
} my_new_robot_interfaces__msg__HardwareCheck;

// Struct for a sequence of my_new_robot_interfaces__msg__HardwareCheck.
typedef struct my_new_robot_interfaces__msg__HardwareCheck__Sequence
{
  my_new_robot_interfaces__msg__HardwareCheck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_new_robot_interfaces__msg__HardwareCheck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__STRUCT_H_
