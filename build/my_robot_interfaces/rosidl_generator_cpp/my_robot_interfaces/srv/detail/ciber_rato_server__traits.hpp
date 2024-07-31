// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:srv/CiberRatoServer.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/srv/detail/ciber_rato_server__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CiberRatoServer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: set_visiting_led
  {
    out << "set_visiting_led: ";
    rosidl_generator_traits::value_to_yaml(msg.set_visiting_led, out);
    out << ", ";
  }

  // member: set_returning_led
  {
    out << "set_returning_led: ";
    rosidl_generator_traits::value_to_yaml(msg.set_returning_led, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: stopped_state
  {
    out << "stopped_state: ";
    rosidl_generator_traits::value_to_yaml(msg.stopped_state, out);
    out << ", ";
  }

  // member: lpow
  {
    out << "lpow: ";
    rosidl_generator_traits::value_to_yaml(msg.lpow, out);
    out << ", ";
  }

  // member: rpow
  {
    out << "rpow: ";
    rosidl_generator_traits::value_to_yaml(msg.rpow, out);
    out << ", ";
  }

  // member: initial_state
  {
    out << "initial_state: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CiberRatoServer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_visiting_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_visiting_led: ";
    rosidl_generator_traits::value_to_yaml(msg.set_visiting_led, out);
    out << "\n";
  }

  // member: set_returning_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_returning_led: ";
    rosidl_generator_traits::value_to_yaml(msg.set_returning_led, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: stopped_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stopped_state: ";
    rosidl_generator_traits::value_to_yaml(msg.stopped_state, out);
    out << "\n";
  }

  // member: lpow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lpow: ";
    rosidl_generator_traits::value_to_yaml(msg.lpow, out);
    out << "\n";
  }

  // member: rpow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpow: ";
    rosidl_generator_traits::value_to_yaml(msg.rpow, out);
    out << "\n";
  }

  // member: initial_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_state: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CiberRatoServer_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::srv::CiberRatoServer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::srv::CiberRatoServer_Request & msg)
{
  return my_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::srv::CiberRatoServer_Request>()
{
  return "my_robot_interfaces::srv::CiberRatoServer_Request";
}

template<>
inline const char * name<my_robot_interfaces::srv::CiberRatoServer_Request>()
{
  return "my_robot_interfaces/srv/CiberRatoServer_Request";
}

template<>
struct has_fixed_size<my_robot_interfaces::srv::CiberRatoServer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::srv::CiberRatoServer_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::srv::CiberRatoServer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CiberRatoServer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_rob
  {
    out << "start_rob: ";
    rosidl_generator_traits::value_to_yaml(msg.start_rob, out);
    out << ", ";
  }

  // member: stop_rob
  {
    out << "stop_rob: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_rob, out);
    out << ", ";
  }

  // member: visiting_led
  {
    out << "visiting_led: ";
    rosidl_generator_traits::value_to_yaml(msg.visiting_led, out);
    out << ", ";
  }

  // member: returning_led
  {
    out << "returning_led: ";
    rosidl_generator_traits::value_to_yaml(msg.returning_led, out);
    out << ", ";
  }

  // member: ground
  {
    out << "ground: ";
    rosidl_generator_traits::value_to_yaml(msg.ground, out);
    out << ", ";
  }

  // member: center_id
  {
    out << "center_id: ";
    rosidl_generator_traits::value_to_yaml(msg.center_id, out);
    out << ", ";
  }

  // member: left_id
  {
    out << "left_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_id, out);
    out << ", ";
  }

  // member: right_id
  {
    out << "right_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_id, out);
    out << ", ";
  }

  // member: back_id
  {
    out << "back_id: ";
    rosidl_generator_traits::value_to_yaml(msg.back_id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: stopped_state
  {
    out << "stopped_state: ";
    rosidl_generator_traits::value_to_yaml(msg.stopped_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CiberRatoServer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_rob
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_rob: ";
    rosidl_generator_traits::value_to_yaml(msg.start_rob, out);
    out << "\n";
  }

  // member: stop_rob
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_rob: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_rob, out);
    out << "\n";
  }

  // member: visiting_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visiting_led: ";
    rosidl_generator_traits::value_to_yaml(msg.visiting_led, out);
    out << "\n";
  }

  // member: returning_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "returning_led: ";
    rosidl_generator_traits::value_to_yaml(msg.returning_led, out);
    out << "\n";
  }

  // member: ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground: ";
    rosidl_generator_traits::value_to_yaml(msg.ground, out);
    out << "\n";
  }

  // member: center_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_id: ";
    rosidl_generator_traits::value_to_yaml(msg.center_id, out);
    out << "\n";
  }

  // member: left_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_id, out);
    out << "\n";
  }

  // member: right_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_id, out);
    out << "\n";
  }

  // member: back_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_id: ";
    rosidl_generator_traits::value_to_yaml(msg.back_id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: stopped_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stopped_state: ";
    rosidl_generator_traits::value_to_yaml(msg.stopped_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CiberRatoServer_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::srv::CiberRatoServer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::srv::CiberRatoServer_Response & msg)
{
  return my_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::srv::CiberRatoServer_Response>()
{
  return "my_robot_interfaces::srv::CiberRatoServer_Response";
}

template<>
inline const char * name<my_robot_interfaces::srv::CiberRatoServer_Response>()
{
  return "my_robot_interfaces/srv/CiberRatoServer_Response";
}

template<>
struct has_fixed_size<my_robot_interfaces::srv::CiberRatoServer_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::srv::CiberRatoServer_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::srv::CiberRatoServer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_robot_interfaces::srv::CiberRatoServer>()
{
  return "my_robot_interfaces::srv::CiberRatoServer";
}

template<>
inline const char * name<my_robot_interfaces::srv::CiberRatoServer>()
{
  return "my_robot_interfaces/srv/CiberRatoServer";
}

template<>
struct has_fixed_size<my_robot_interfaces::srv::CiberRatoServer>
  : std::integral_constant<
    bool,
    has_fixed_size<my_robot_interfaces::srv::CiberRatoServer_Request>::value &&
    has_fixed_size<my_robot_interfaces::srv::CiberRatoServer_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_robot_interfaces::srv::CiberRatoServer>
  : std::integral_constant<
    bool,
    has_bounded_size<my_robot_interfaces::srv::CiberRatoServer_Request>::value &&
    has_bounded_size<my_robot_interfaces::srv::CiberRatoServer_Response>::value
  >
{
};

template<>
struct is_service<my_robot_interfaces::srv::CiberRatoServer>
  : std::true_type
{
};

template<>
struct is_service_request<my_robot_interfaces::srv::CiberRatoServer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_robot_interfaces::srv::CiberRatoServer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__TRAITS_HPP_
