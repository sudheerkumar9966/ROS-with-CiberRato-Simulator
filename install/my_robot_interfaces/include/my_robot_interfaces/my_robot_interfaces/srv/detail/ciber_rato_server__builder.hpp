// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/CiberRatoServer.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/ciber_rato_server__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CiberRatoServer_Request_initial_state
{
public:
  explicit Init_CiberRatoServer_Request_initial_state(::my_robot_interfaces::srv::CiberRatoServer_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::CiberRatoServer_Request initial_state(::my_robot_interfaces::srv::CiberRatoServer_Request::_initial_state_type arg)
  {
    msg_.initial_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Request msg_;
};

class Init_CiberRatoServer_Request_rpow
{
public:
  explicit Init_CiberRatoServer_Request_rpow(::my_robot_interfaces::srv::CiberRatoServer_Request & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Request_initial_state rpow(::my_robot_interfaces::srv::CiberRatoServer_Request::_rpow_type arg)
  {
    msg_.rpow = std::move(arg);
    return Init_CiberRatoServer_Request_initial_state(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Request msg_;
};

class Init_CiberRatoServer_Request_lpow
{
public:
  explicit Init_CiberRatoServer_Request_lpow(::my_robot_interfaces::srv::CiberRatoServer_Request & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Request_rpow lpow(::my_robot_interfaces::srv::CiberRatoServer_Request::_lpow_type arg)
  {
    msg_.lpow = std::move(arg);
    return Init_CiberRatoServer_Request_rpow(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Request msg_;
};

class Init_CiberRatoServer_Request_stopped_state
{
public:
  explicit Init_CiberRatoServer_Request_stopped_state(::my_robot_interfaces::srv::CiberRatoServer_Request & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Request_lpow stopped_state(::my_robot_interfaces::srv::CiberRatoServer_Request::_stopped_state_type arg)
  {
    msg_.stopped_state = std::move(arg);
    return Init_CiberRatoServer_Request_lpow(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Request msg_;
};

class Init_CiberRatoServer_Request_state
{
public:
  explicit Init_CiberRatoServer_Request_state(::my_robot_interfaces::srv::CiberRatoServer_Request & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Request_stopped_state state(::my_robot_interfaces::srv::CiberRatoServer_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_CiberRatoServer_Request_stopped_state(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Request msg_;
};

class Init_CiberRatoServer_Request_set_returning_led
{
public:
  explicit Init_CiberRatoServer_Request_set_returning_led(::my_robot_interfaces::srv::CiberRatoServer_Request & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Request_state set_returning_led(::my_robot_interfaces::srv::CiberRatoServer_Request::_set_returning_led_type arg)
  {
    msg_.set_returning_led = std::move(arg);
    return Init_CiberRatoServer_Request_state(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Request msg_;
};

class Init_CiberRatoServer_Request_set_visiting_led
{
public:
  Init_CiberRatoServer_Request_set_visiting_led()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CiberRatoServer_Request_set_returning_led set_visiting_led(::my_robot_interfaces::srv::CiberRatoServer_Request::_set_visiting_led_type arg)
  {
    msg_.set_visiting_led = std::move(arg);
    return Init_CiberRatoServer_Request_set_returning_led(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::CiberRatoServer_Request>()
{
  return my_robot_interfaces::srv::builder::Init_CiberRatoServer_Request_set_visiting_led();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CiberRatoServer_Response_stopped_state
{
public:
  explicit Init_CiberRatoServer_Response_stopped_state(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::CiberRatoServer_Response stopped_state(::my_robot_interfaces::srv::CiberRatoServer_Response::_stopped_state_type arg)
  {
    msg_.stopped_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_state
{
public:
  explicit Init_CiberRatoServer_Response_state(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_stopped_state state(::my_robot_interfaces::srv::CiberRatoServer_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_CiberRatoServer_Response_stopped_state(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_back_id
{
public:
  explicit Init_CiberRatoServer_Response_back_id(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_state back_id(::my_robot_interfaces::srv::CiberRatoServer_Response::_back_id_type arg)
  {
    msg_.back_id = std::move(arg);
    return Init_CiberRatoServer_Response_state(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_right_id
{
public:
  explicit Init_CiberRatoServer_Response_right_id(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_back_id right_id(::my_robot_interfaces::srv::CiberRatoServer_Response::_right_id_type arg)
  {
    msg_.right_id = std::move(arg);
    return Init_CiberRatoServer_Response_back_id(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_left_id
{
public:
  explicit Init_CiberRatoServer_Response_left_id(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_right_id left_id(::my_robot_interfaces::srv::CiberRatoServer_Response::_left_id_type arg)
  {
    msg_.left_id = std::move(arg);
    return Init_CiberRatoServer_Response_right_id(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_center_id
{
public:
  explicit Init_CiberRatoServer_Response_center_id(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_left_id center_id(::my_robot_interfaces::srv::CiberRatoServer_Response::_center_id_type arg)
  {
    msg_.center_id = std::move(arg);
    return Init_CiberRatoServer_Response_left_id(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_ground
{
public:
  explicit Init_CiberRatoServer_Response_ground(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_center_id ground(::my_robot_interfaces::srv::CiberRatoServer_Response::_ground_type arg)
  {
    msg_.ground = std::move(arg);
    return Init_CiberRatoServer_Response_center_id(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_returning_led
{
public:
  explicit Init_CiberRatoServer_Response_returning_led(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_ground returning_led(::my_robot_interfaces::srv::CiberRatoServer_Response::_returning_led_type arg)
  {
    msg_.returning_led = std::move(arg);
    return Init_CiberRatoServer_Response_ground(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_visiting_led
{
public:
  explicit Init_CiberRatoServer_Response_visiting_led(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_returning_led visiting_led(::my_robot_interfaces::srv::CiberRatoServer_Response::_visiting_led_type arg)
  {
    msg_.visiting_led = std::move(arg);
    return Init_CiberRatoServer_Response_returning_led(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_stop_rob
{
public:
  explicit Init_CiberRatoServer_Response_stop_rob(::my_robot_interfaces::srv::CiberRatoServer_Response & msg)
  : msg_(msg)
  {}
  Init_CiberRatoServer_Response_visiting_led stop_rob(::my_robot_interfaces::srv::CiberRatoServer_Response::_stop_rob_type arg)
  {
    msg_.stop_rob = std::move(arg);
    return Init_CiberRatoServer_Response_visiting_led(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

class Init_CiberRatoServer_Response_start_rob
{
public:
  Init_CiberRatoServer_Response_start_rob()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CiberRatoServer_Response_stop_rob start_rob(::my_robot_interfaces::srv::CiberRatoServer_Response::_start_rob_type arg)
  {
    msg_.start_rob = std::move(arg);
    return Init_CiberRatoServer_Response_stop_rob(msg_);
  }

private:
  ::my_robot_interfaces::srv::CiberRatoServer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::CiberRatoServer_Response>()
{
  return my_robot_interfaces::srv::builder::Init_CiberRatoServer_Response_start_rob();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__BUILDER_HPP_
