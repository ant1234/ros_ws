// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_new_robot_interfaces:msg/HardwareCheck.idl
// generated code does not contain a copyright notice

#ifndef MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__STRUCT_HPP_
#define MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_new_robot_interfaces__msg__HardwareCheck __attribute__((deprecated))
#else
# define DEPRECATED__my_new_robot_interfaces__msg__HardwareCheck __declspec(deprecated)
#endif

namespace my_new_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HardwareCheck_
{
  using Type = HardwareCheck_<ContainerAllocator>;

  explicit HardwareCheck_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0l;
      this->height = 0.0f;
    }
  }

  explicit HardwareCheck_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0l;
      this->height = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _age_type =
    int32_t;
  _age_type age;
  using _height_type =
    float;
  _height_type height;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__age(
    const int32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_new_robot_interfaces__msg__HardwareCheck
    std::shared_ptr<my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_new_robot_interfaces__msg__HardwareCheck
    std::shared_ptr<my_new_robot_interfaces::msg::HardwareCheck_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareCheck_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareCheck_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareCheck_

// alias to use template instance with default allocator
using HardwareCheck =
  my_new_robot_interfaces::msg::HardwareCheck_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_new_robot_interfaces

#endif  // MY_NEW_ROBOT_INTERFACES__MSG__DETAIL__HARDWARE_CHECK__STRUCT_HPP_
