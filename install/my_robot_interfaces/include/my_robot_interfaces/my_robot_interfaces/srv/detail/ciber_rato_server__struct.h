// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:srv/CiberRatoServer.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__STRUCT_H_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'set_visiting_led'
// Member 'set_returning_led'
// Member 'state'
// Member 'stopped_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CiberRatoServer in the package my_robot_interfaces.
typedef struct my_robot_interfaces__srv__CiberRatoServer_Request
{
  rosidl_runtime_c__String set_visiting_led;
  rosidl_runtime_c__String set_returning_led;
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String stopped_state;
  double lpow;
  double rpow;
  bool initial_state;
} my_robot_interfaces__srv__CiberRatoServer_Request;

// Struct for a sequence of my_robot_interfaces__srv__CiberRatoServer_Request.
typedef struct my_robot_interfaces__srv__CiberRatoServer_Request__Sequence
{
  my_robot_interfaces__srv__CiberRatoServer_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__srv__CiberRatoServer_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'stopped_state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CiberRatoServer in the package my_robot_interfaces.
typedef struct my_robot_interfaces__srv__CiberRatoServer_Response
{
  bool start_rob;
  bool stop_rob;
  bool visiting_led;
  bool returning_led;
  int64_t ground;
  double center_id;
  double left_id;
  double right_id;
  double back_id;
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String stopped_state;
} my_robot_interfaces__srv__CiberRatoServer_Response;

// Struct for a sequence of my_robot_interfaces__srv__CiberRatoServer_Response.
typedef struct my_robot_interfaces__srv__CiberRatoServer_Response__Sequence
{
  my_robot_interfaces__srv__CiberRatoServer_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__srv__CiberRatoServer_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__STRUCT_H_
