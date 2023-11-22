// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_new_robot_interfaces:msg/HardwareCheck.idl
// generated code does not contain a copyright notice
#include "my_new_robot_interfaces/msg/detail/hardware_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
my_new_robot_interfaces__msg__HardwareCheck__init(my_new_robot_interfaces__msg__HardwareCheck * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    my_new_robot_interfaces__msg__HardwareCheck__fini(msg);
    return false;
  }
  // age
  // height
  return true;
}

void
my_new_robot_interfaces__msg__HardwareCheck__fini(my_new_robot_interfaces__msg__HardwareCheck * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // age
  // height
}

bool
my_new_robot_interfaces__msg__HardwareCheck__are_equal(const my_new_robot_interfaces__msg__HardwareCheck * lhs, const my_new_robot_interfaces__msg__HardwareCheck * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
my_new_robot_interfaces__msg__HardwareCheck__copy(
  const my_new_robot_interfaces__msg__HardwareCheck * input,
  my_new_robot_interfaces__msg__HardwareCheck * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // age
  output->age = input->age;
  // height
  output->height = input->height;
  return true;
}

my_new_robot_interfaces__msg__HardwareCheck *
my_new_robot_interfaces__msg__HardwareCheck__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_new_robot_interfaces__msg__HardwareCheck * msg = (my_new_robot_interfaces__msg__HardwareCheck *)allocator.allocate(sizeof(my_new_robot_interfaces__msg__HardwareCheck), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_new_robot_interfaces__msg__HardwareCheck));
  bool success = my_new_robot_interfaces__msg__HardwareCheck__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_new_robot_interfaces__msg__HardwareCheck__destroy(my_new_robot_interfaces__msg__HardwareCheck * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_new_robot_interfaces__msg__HardwareCheck__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_new_robot_interfaces__msg__HardwareCheck__Sequence__init(my_new_robot_interfaces__msg__HardwareCheck__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_new_robot_interfaces__msg__HardwareCheck * data = NULL;

  if (size) {
    data = (my_new_robot_interfaces__msg__HardwareCheck *)allocator.zero_allocate(size, sizeof(my_new_robot_interfaces__msg__HardwareCheck), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_new_robot_interfaces__msg__HardwareCheck__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_new_robot_interfaces__msg__HardwareCheck__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_new_robot_interfaces__msg__HardwareCheck__Sequence__fini(my_new_robot_interfaces__msg__HardwareCheck__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_new_robot_interfaces__msg__HardwareCheck__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_new_robot_interfaces__msg__HardwareCheck__Sequence *
my_new_robot_interfaces__msg__HardwareCheck__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_new_robot_interfaces__msg__HardwareCheck__Sequence * array = (my_new_robot_interfaces__msg__HardwareCheck__Sequence *)allocator.allocate(sizeof(my_new_robot_interfaces__msg__HardwareCheck__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_new_robot_interfaces__msg__HardwareCheck__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_new_robot_interfaces__msg__HardwareCheck__Sequence__destroy(my_new_robot_interfaces__msg__HardwareCheck__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_new_robot_interfaces__msg__HardwareCheck__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_new_robot_interfaces__msg__HardwareCheck__Sequence__are_equal(const my_new_robot_interfaces__msg__HardwareCheck__Sequence * lhs, const my_new_robot_interfaces__msg__HardwareCheck__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_new_robot_interfaces__msg__HardwareCheck__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_new_robot_interfaces__msg__HardwareCheck__Sequence__copy(
  const my_new_robot_interfaces__msg__HardwareCheck__Sequence * input,
  my_new_robot_interfaces__msg__HardwareCheck__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_new_robot_interfaces__msg__HardwareCheck);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_new_robot_interfaces__msg__HardwareCheck * data =
      (my_new_robot_interfaces__msg__HardwareCheck *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_new_robot_interfaces__msg__HardwareCheck__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_new_robot_interfaces__msg__HardwareCheck__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_new_robot_interfaces__msg__HardwareCheck__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
