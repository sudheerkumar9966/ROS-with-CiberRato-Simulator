// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_robot_interfaces:srv/CiberRatoServer.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/srv/detail/ciber_rato_server__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `set_visiting_led`
// Member `set_returning_led`
// Member `state`
// Member `stopped_state`
#include "rosidl_runtime_c/string_functions.h"

bool
my_robot_interfaces__srv__CiberRatoServer_Request__init(my_robot_interfaces__srv__CiberRatoServer_Request * msg)
{
  if (!msg) {
    return false;
  }
  // set_visiting_led
  if (!rosidl_runtime_c__String__init(&msg->set_visiting_led)) {
    my_robot_interfaces__srv__CiberRatoServer_Request__fini(msg);
    return false;
  }
  // set_returning_led
  if (!rosidl_runtime_c__String__init(&msg->set_returning_led)) {
    my_robot_interfaces__srv__CiberRatoServer_Request__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    my_robot_interfaces__srv__CiberRatoServer_Request__fini(msg);
    return false;
  }
  // stopped_state
  if (!rosidl_runtime_c__String__init(&msg->stopped_state)) {
    my_robot_interfaces__srv__CiberRatoServer_Request__fini(msg);
    return false;
  }
  // lpow
  // rpow
  // initial_state
  return true;
}

void
my_robot_interfaces__srv__CiberRatoServer_Request__fini(my_robot_interfaces__srv__CiberRatoServer_Request * msg)
{
  if (!msg) {
    return;
  }
  // set_visiting_led
  rosidl_runtime_c__String__fini(&msg->set_visiting_led);
  // set_returning_led
  rosidl_runtime_c__String__fini(&msg->set_returning_led);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // stopped_state
  rosidl_runtime_c__String__fini(&msg->stopped_state);
  // lpow
  // rpow
  // initial_state
}

bool
my_robot_interfaces__srv__CiberRatoServer_Request__are_equal(const my_robot_interfaces__srv__CiberRatoServer_Request * lhs, const my_robot_interfaces__srv__CiberRatoServer_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // set_visiting_led
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->set_visiting_led), &(rhs->set_visiting_led)))
  {
    return false;
  }
  // set_returning_led
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->set_returning_led), &(rhs->set_returning_led)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // stopped_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stopped_state), &(rhs->stopped_state)))
  {
    return false;
  }
  // lpow
  if (lhs->lpow != rhs->lpow) {
    return false;
  }
  // rpow
  if (lhs->rpow != rhs->rpow) {
    return false;
  }
  // initial_state
  if (lhs->initial_state != rhs->initial_state) {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__srv__CiberRatoServer_Request__copy(
  const my_robot_interfaces__srv__CiberRatoServer_Request * input,
  my_robot_interfaces__srv__CiberRatoServer_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // set_visiting_led
  if (!rosidl_runtime_c__String__copy(
      &(input->set_visiting_led), &(output->set_visiting_led)))
  {
    return false;
  }
  // set_returning_led
  if (!rosidl_runtime_c__String__copy(
      &(input->set_returning_led), &(output->set_returning_led)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // stopped_state
  if (!rosidl_runtime_c__String__copy(
      &(input->stopped_state), &(output->stopped_state)))
  {
    return false;
  }
  // lpow
  output->lpow = input->lpow;
  // rpow
  output->rpow = input->rpow;
  // initial_state
  output->initial_state = input->initial_state;
  return true;
}

my_robot_interfaces__srv__CiberRatoServer_Request *
my_robot_interfaces__srv__CiberRatoServer_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__srv__CiberRatoServer_Request * msg = (my_robot_interfaces__srv__CiberRatoServer_Request *)allocator.allocate(sizeof(my_robot_interfaces__srv__CiberRatoServer_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__srv__CiberRatoServer_Request));
  bool success = my_robot_interfaces__srv__CiberRatoServer_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__srv__CiberRatoServer_Request__destroy(my_robot_interfaces__srv__CiberRatoServer_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__srv__CiberRatoServer_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__srv__CiberRatoServer_Request__Sequence__init(my_robot_interfaces__srv__CiberRatoServer_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__srv__CiberRatoServer_Request * data = NULL;

  if (size) {
    data = (my_robot_interfaces__srv__CiberRatoServer_Request *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__srv__CiberRatoServer_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__srv__CiberRatoServer_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__srv__CiberRatoServer_Request__fini(&data[i - 1]);
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
my_robot_interfaces__srv__CiberRatoServer_Request__Sequence__fini(my_robot_interfaces__srv__CiberRatoServer_Request__Sequence * array)
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
      my_robot_interfaces__srv__CiberRatoServer_Request__fini(&array->data[i]);
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

my_robot_interfaces__srv__CiberRatoServer_Request__Sequence *
my_robot_interfaces__srv__CiberRatoServer_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__srv__CiberRatoServer_Request__Sequence * array = (my_robot_interfaces__srv__CiberRatoServer_Request__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__srv__CiberRatoServer_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__srv__CiberRatoServer_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__srv__CiberRatoServer_Request__Sequence__destroy(my_robot_interfaces__srv__CiberRatoServer_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__srv__CiberRatoServer_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__srv__CiberRatoServer_Request__Sequence__are_equal(const my_robot_interfaces__srv__CiberRatoServer_Request__Sequence * lhs, const my_robot_interfaces__srv__CiberRatoServer_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__srv__CiberRatoServer_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__srv__CiberRatoServer_Request__Sequence__copy(
  const my_robot_interfaces__srv__CiberRatoServer_Request__Sequence * input,
  my_robot_interfaces__srv__CiberRatoServer_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__srv__CiberRatoServer_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__srv__CiberRatoServer_Request * data =
      (my_robot_interfaces__srv__CiberRatoServer_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__srv__CiberRatoServer_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__srv__CiberRatoServer_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__srv__CiberRatoServer_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// Member `stopped_state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
my_robot_interfaces__srv__CiberRatoServer_Response__init(my_robot_interfaces__srv__CiberRatoServer_Response * msg)
{
  if (!msg) {
    return false;
  }
  // start_rob
  // stop_rob
  // visiting_led
  // returning_led
  // ground
  // center_id
  // left_id
  // right_id
  // back_id
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    my_robot_interfaces__srv__CiberRatoServer_Response__fini(msg);
    return false;
  }
  // stopped_state
  if (!rosidl_runtime_c__String__init(&msg->stopped_state)) {
    my_robot_interfaces__srv__CiberRatoServer_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__srv__CiberRatoServer_Response__fini(my_robot_interfaces__srv__CiberRatoServer_Response * msg)
{
  if (!msg) {
    return;
  }
  // start_rob
  // stop_rob
  // visiting_led
  // returning_led
  // ground
  // center_id
  // left_id
  // right_id
  // back_id
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // stopped_state
  rosidl_runtime_c__String__fini(&msg->stopped_state);
}

bool
my_robot_interfaces__srv__CiberRatoServer_Response__are_equal(const my_robot_interfaces__srv__CiberRatoServer_Response * lhs, const my_robot_interfaces__srv__CiberRatoServer_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_rob
  if (lhs->start_rob != rhs->start_rob) {
    return false;
  }
  // stop_rob
  if (lhs->stop_rob != rhs->stop_rob) {
    return false;
  }
  // visiting_led
  if (lhs->visiting_led != rhs->visiting_led) {
    return false;
  }
  // returning_led
  if (lhs->returning_led != rhs->returning_led) {
    return false;
  }
  // ground
  if (lhs->ground != rhs->ground) {
    return false;
  }
  // center_id
  if (lhs->center_id != rhs->center_id) {
    return false;
  }
  // left_id
  if (lhs->left_id != rhs->left_id) {
    return false;
  }
  // right_id
  if (lhs->right_id != rhs->right_id) {
    return false;
  }
  // back_id
  if (lhs->back_id != rhs->back_id) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // stopped_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stopped_state), &(rhs->stopped_state)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__srv__CiberRatoServer_Response__copy(
  const my_robot_interfaces__srv__CiberRatoServer_Response * input,
  my_robot_interfaces__srv__CiberRatoServer_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // start_rob
  output->start_rob = input->start_rob;
  // stop_rob
  output->stop_rob = input->stop_rob;
  // visiting_led
  output->visiting_led = input->visiting_led;
  // returning_led
  output->returning_led = input->returning_led;
  // ground
  output->ground = input->ground;
  // center_id
  output->center_id = input->center_id;
  // left_id
  output->left_id = input->left_id;
  // right_id
  output->right_id = input->right_id;
  // back_id
  output->back_id = input->back_id;
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // stopped_state
  if (!rosidl_runtime_c__String__copy(
      &(input->stopped_state), &(output->stopped_state)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__srv__CiberRatoServer_Response *
my_robot_interfaces__srv__CiberRatoServer_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__srv__CiberRatoServer_Response * msg = (my_robot_interfaces__srv__CiberRatoServer_Response *)allocator.allocate(sizeof(my_robot_interfaces__srv__CiberRatoServer_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__srv__CiberRatoServer_Response));
  bool success = my_robot_interfaces__srv__CiberRatoServer_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__srv__CiberRatoServer_Response__destroy(my_robot_interfaces__srv__CiberRatoServer_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__srv__CiberRatoServer_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__srv__CiberRatoServer_Response__Sequence__init(my_robot_interfaces__srv__CiberRatoServer_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__srv__CiberRatoServer_Response * data = NULL;

  if (size) {
    data = (my_robot_interfaces__srv__CiberRatoServer_Response *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__srv__CiberRatoServer_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__srv__CiberRatoServer_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__srv__CiberRatoServer_Response__fini(&data[i - 1]);
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
my_robot_interfaces__srv__CiberRatoServer_Response__Sequence__fini(my_robot_interfaces__srv__CiberRatoServer_Response__Sequence * array)
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
      my_robot_interfaces__srv__CiberRatoServer_Response__fini(&array->data[i]);
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

my_robot_interfaces__srv__CiberRatoServer_Response__Sequence *
my_robot_interfaces__srv__CiberRatoServer_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__srv__CiberRatoServer_Response__Sequence * array = (my_robot_interfaces__srv__CiberRatoServer_Response__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__srv__CiberRatoServer_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__srv__CiberRatoServer_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__srv__CiberRatoServer_Response__Sequence__destroy(my_robot_interfaces__srv__CiberRatoServer_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__srv__CiberRatoServer_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__srv__CiberRatoServer_Response__Sequence__are_equal(const my_robot_interfaces__srv__CiberRatoServer_Response__Sequence * lhs, const my_robot_interfaces__srv__CiberRatoServer_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__srv__CiberRatoServer_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__srv__CiberRatoServer_Response__Sequence__copy(
  const my_robot_interfaces__srv__CiberRatoServer_Response__Sequence * input,
  my_robot_interfaces__srv__CiberRatoServer_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__srv__CiberRatoServer_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__srv__CiberRatoServer_Response * data =
      (my_robot_interfaces__srv__CiberRatoServer_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__srv__CiberRatoServer_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__srv__CiberRatoServer_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__srv__CiberRatoServer_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
