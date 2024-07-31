// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_robot_interfaces:srv/CiberRatoServer.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/srv/detail/ciber_rato_server__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_robot_interfaces/srv/detail/ciber_rato_server__struct.h"
#include "my_robot_interfaces/srv/detail/ciber_rato_server__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // set_returning_led, set_visiting_led, state, stopped_state
#include "rosidl_runtime_c/string_functions.h"  // set_returning_led, set_visiting_led, state, stopped_state

// forward declare type support functions


using _CiberRatoServer_Request__ros_msg_type = my_robot_interfaces__srv__CiberRatoServer_Request;

static bool _CiberRatoServer_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CiberRatoServer_Request__ros_msg_type * ros_message = static_cast<const _CiberRatoServer_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: set_visiting_led
  {
    const rosidl_runtime_c__String * str = &ros_message->set_visiting_led;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: set_returning_led
  {
    const rosidl_runtime_c__String * str = &ros_message->set_returning_led;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stopped_state
  {
    const rosidl_runtime_c__String * str = &ros_message->stopped_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lpow
  {
    cdr << ros_message->lpow;
  }

  // Field name: rpow
  {
    cdr << ros_message->rpow;
  }

  // Field name: initial_state
  {
    cdr << (ros_message->initial_state ? true : false);
  }

  return true;
}

static bool _CiberRatoServer_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CiberRatoServer_Request__ros_msg_type * ros_message = static_cast<_CiberRatoServer_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: set_visiting_led
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->set_visiting_led.data) {
      rosidl_runtime_c__String__init(&ros_message->set_visiting_led);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->set_visiting_led,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'set_visiting_led'\n");
      return false;
    }
  }

  // Field name: set_returning_led
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->set_returning_led.data) {
      rosidl_runtime_c__String__init(&ros_message->set_returning_led);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->set_returning_led,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'set_returning_led'\n");
      return false;
    }
  }

  // Field name: state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }

  // Field name: stopped_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->stopped_state.data) {
      rosidl_runtime_c__String__init(&ros_message->stopped_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->stopped_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'stopped_state'\n");
      return false;
    }
  }

  // Field name: lpow
  {
    cdr >> ros_message->lpow;
  }

  // Field name: rpow
  {
    cdr >> ros_message->rpow;
  }

  // Field name: initial_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->initial_state = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__srv__CiberRatoServer_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CiberRatoServer_Request__ros_msg_type * ros_message = static_cast<const _CiberRatoServer_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name set_visiting_led
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->set_visiting_led.size + 1);
  // field.name set_returning_led
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->set_returning_led.size + 1);
  // field.name state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);
  // field.name stopped_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->stopped_state.size + 1);
  // field.name lpow
  {
    size_t item_size = sizeof(ros_message->lpow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpow
  {
    size_t item_size = sizeof(ros_message->rpow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_state
  {
    size_t item_size = sizeof(ros_message->initial_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CiberRatoServer_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_robot_interfaces__srv__CiberRatoServer_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__srv__CiberRatoServer_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: set_visiting_led
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: set_returning_led
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stopped_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lpow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rpow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: initial_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_robot_interfaces__srv__CiberRatoServer_Request;
    is_plain =
      (
      offsetof(DataType, initial_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CiberRatoServer_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_robot_interfaces__srv__CiberRatoServer_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CiberRatoServer_Request = {
  "my_robot_interfaces::srv",
  "CiberRatoServer_Request",
  _CiberRatoServer_Request__cdr_serialize,
  _CiberRatoServer_Request__cdr_deserialize,
  _CiberRatoServer_Request__get_serialized_size,
  _CiberRatoServer_Request__max_serialized_size
};

static rosidl_message_type_support_t _CiberRatoServer_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CiberRatoServer_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, CiberRatoServer_Request)() {
  return &_CiberRatoServer_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_robot_interfaces/srv/detail/ciber_rato_server__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/ciber_rato_server__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // state, stopped_state
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // state, stopped_state

// forward declare type support functions


using _CiberRatoServer_Response__ros_msg_type = my_robot_interfaces__srv__CiberRatoServer_Response;

static bool _CiberRatoServer_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CiberRatoServer_Response__ros_msg_type * ros_message = static_cast<const _CiberRatoServer_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: start_rob
  {
    cdr << (ros_message->start_rob ? true : false);
  }

  // Field name: stop_rob
  {
    cdr << (ros_message->stop_rob ? true : false);
  }

  // Field name: visiting_led
  {
    cdr << (ros_message->visiting_led ? true : false);
  }

  // Field name: returning_led
  {
    cdr << (ros_message->returning_led ? true : false);
  }

  // Field name: ground
  {
    cdr << ros_message->ground;
  }

  // Field name: center_id
  {
    cdr << ros_message->center_id;
  }

  // Field name: left_id
  {
    cdr << ros_message->left_id;
  }

  // Field name: right_id
  {
    cdr << ros_message->right_id;
  }

  // Field name: back_id
  {
    cdr << ros_message->back_id;
  }

  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stopped_state
  {
    const rosidl_runtime_c__String * str = &ros_message->stopped_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CiberRatoServer_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CiberRatoServer_Response__ros_msg_type * ros_message = static_cast<_CiberRatoServer_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: start_rob
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->start_rob = tmp ? true : false;
  }

  // Field name: stop_rob
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stop_rob = tmp ? true : false;
  }

  // Field name: visiting_led
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->visiting_led = tmp ? true : false;
  }

  // Field name: returning_led
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->returning_led = tmp ? true : false;
  }

  // Field name: ground
  {
    cdr >> ros_message->ground;
  }

  // Field name: center_id
  {
    cdr >> ros_message->center_id;
  }

  // Field name: left_id
  {
    cdr >> ros_message->left_id;
  }

  // Field name: right_id
  {
    cdr >> ros_message->right_id;
  }

  // Field name: back_id
  {
    cdr >> ros_message->back_id;
  }

  // Field name: state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }

  // Field name: stopped_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->stopped_state.data) {
      rosidl_runtime_c__String__init(&ros_message->stopped_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->stopped_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'stopped_state'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t get_serialized_size_my_robot_interfaces__srv__CiberRatoServer_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CiberRatoServer_Response__ros_msg_type * ros_message = static_cast<const _CiberRatoServer_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start_rob
  {
    size_t item_size = sizeof(ros_message->start_rob);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_rob
  {
    size_t item_size = sizeof(ros_message->stop_rob);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name visiting_led
  {
    size_t item_size = sizeof(ros_message->visiting_led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name returning_led
  {
    size_t item_size = sizeof(ros_message->returning_led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ground
  {
    size_t item_size = sizeof(ros_message->ground);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_id
  {
    size_t item_size = sizeof(ros_message->center_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_id
  {
    size_t item_size = sizeof(ros_message->left_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_id
  {
    size_t item_size = sizeof(ros_message->right_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_id
  {
    size_t item_size = sizeof(ros_message->back_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);
  // field.name stopped_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->stopped_state.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CiberRatoServer_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_robot_interfaces__srv__CiberRatoServer_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_robot_interfaces
size_t max_serialized_size_my_robot_interfaces__srv__CiberRatoServer_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: start_rob
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_rob
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: visiting_led
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: returning_led
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ground
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: center_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: back_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stopped_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_robot_interfaces__srv__CiberRatoServer_Response;
    is_plain =
      (
      offsetof(DataType, stopped_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CiberRatoServer_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_robot_interfaces__srv__CiberRatoServer_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CiberRatoServer_Response = {
  "my_robot_interfaces::srv",
  "CiberRatoServer_Response",
  _CiberRatoServer_Response__cdr_serialize,
  _CiberRatoServer_Response__cdr_deserialize,
  _CiberRatoServer_Response__get_serialized_size,
  _CiberRatoServer_Response__max_serialized_size
};

static rosidl_message_type_support_t _CiberRatoServer_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CiberRatoServer_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, CiberRatoServer_Response)() {
  return &_CiberRatoServer_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_robot_interfaces/srv/ciber_rato_server.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CiberRatoServer__callbacks = {
  "my_robot_interfaces::srv",
  "CiberRatoServer",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, CiberRatoServer_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, CiberRatoServer_Response)(),
};

static rosidl_service_type_support_t CiberRatoServer__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CiberRatoServer__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, srv, CiberRatoServer)() {
  return &CiberRatoServer__handle;
}

#if defined(__cplusplus)
}
#endif
