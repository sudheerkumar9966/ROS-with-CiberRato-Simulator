// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:srv/CiberRatoServer.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__CiberRatoServer_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__CiberRatoServer_Request __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CiberRatoServer_Request_
{
  using Type = CiberRatoServer_Request_<ContainerAllocator>;

  explicit CiberRatoServer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_visiting_led = "";
      this->set_returning_led = "";
      this->state = "";
      this->stopped_state = "";
      this->lpow = 0.0;
      this->rpow = 0.0;
      this->initial_state = false;
    }
  }

  explicit CiberRatoServer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : set_visiting_led(_alloc),
    set_returning_led(_alloc),
    state(_alloc),
    stopped_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_visiting_led = "";
      this->set_returning_led = "";
      this->state = "";
      this->stopped_state = "";
      this->lpow = 0.0;
      this->rpow = 0.0;
      this->initial_state = false;
    }
  }

  // field types and members
  using _set_visiting_led_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _set_visiting_led_type set_visiting_led;
  using _set_returning_led_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _set_returning_led_type set_returning_led;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _stopped_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stopped_state_type stopped_state;
  using _lpow_type =
    double;
  _lpow_type lpow;
  using _rpow_type =
    double;
  _rpow_type rpow;
  using _initial_state_type =
    bool;
  _initial_state_type initial_state;

  // setters for named parameter idiom
  Type & set__set_visiting_led(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->set_visiting_led = _arg;
    return *this;
  }
  Type & set__set_returning_led(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->set_returning_led = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__stopped_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stopped_state = _arg;
    return *this;
  }
  Type & set__lpow(
    const double & _arg)
  {
    this->lpow = _arg;
    return *this;
  }
  Type & set__rpow(
    const double & _arg)
  {
    this->rpow = _arg;
    return *this;
  }
  Type & set__initial_state(
    const bool & _arg)
  {
    this->initial_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__CiberRatoServer_Request
    std::shared_ptr<my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__CiberRatoServer_Request
    std::shared_ptr<my_robot_interfaces::srv::CiberRatoServer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CiberRatoServer_Request_ & other) const
  {
    if (this->set_visiting_led != other.set_visiting_led) {
      return false;
    }
    if (this->set_returning_led != other.set_returning_led) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->stopped_state != other.stopped_state) {
      return false;
    }
    if (this->lpow != other.lpow) {
      return false;
    }
    if (this->rpow != other.rpow) {
      return false;
    }
    if (this->initial_state != other.initial_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const CiberRatoServer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CiberRatoServer_Request_

// alias to use template instance with default allocator
using CiberRatoServer_Request =
  my_robot_interfaces::srv::CiberRatoServer_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__CiberRatoServer_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__CiberRatoServer_Response __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CiberRatoServer_Response_
{
  using Type = CiberRatoServer_Response_<ContainerAllocator>;

  explicit CiberRatoServer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_rob = false;
      this->stop_rob = false;
      this->visiting_led = false;
      this->returning_led = false;
      this->ground = 0ll;
      this->center_id = 0.0;
      this->left_id = 0.0;
      this->right_id = 0.0;
      this->back_id = 0.0;
      this->state = "";
      this->stopped_state = "";
    }
  }

  explicit CiberRatoServer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc),
    stopped_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_rob = false;
      this->stop_rob = false;
      this->visiting_led = false;
      this->returning_led = false;
      this->ground = 0ll;
      this->center_id = 0.0;
      this->left_id = 0.0;
      this->right_id = 0.0;
      this->back_id = 0.0;
      this->state = "";
      this->stopped_state = "";
    }
  }

  // field types and members
  using _start_rob_type =
    bool;
  _start_rob_type start_rob;
  using _stop_rob_type =
    bool;
  _stop_rob_type stop_rob;
  using _visiting_led_type =
    bool;
  _visiting_led_type visiting_led;
  using _returning_led_type =
    bool;
  _returning_led_type returning_led;
  using _ground_type =
    int64_t;
  _ground_type ground;
  using _center_id_type =
    double;
  _center_id_type center_id;
  using _left_id_type =
    double;
  _left_id_type left_id;
  using _right_id_type =
    double;
  _right_id_type right_id;
  using _back_id_type =
    double;
  _back_id_type back_id;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _stopped_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stopped_state_type stopped_state;

  // setters for named parameter idiom
  Type & set__start_rob(
    const bool & _arg)
  {
    this->start_rob = _arg;
    return *this;
  }
  Type & set__stop_rob(
    const bool & _arg)
  {
    this->stop_rob = _arg;
    return *this;
  }
  Type & set__visiting_led(
    const bool & _arg)
  {
    this->visiting_led = _arg;
    return *this;
  }
  Type & set__returning_led(
    const bool & _arg)
  {
    this->returning_led = _arg;
    return *this;
  }
  Type & set__ground(
    const int64_t & _arg)
  {
    this->ground = _arg;
    return *this;
  }
  Type & set__center_id(
    const double & _arg)
  {
    this->center_id = _arg;
    return *this;
  }
  Type & set__left_id(
    const double & _arg)
  {
    this->left_id = _arg;
    return *this;
  }
  Type & set__right_id(
    const double & _arg)
  {
    this->right_id = _arg;
    return *this;
  }
  Type & set__back_id(
    const double & _arg)
  {
    this->back_id = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__stopped_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stopped_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__CiberRatoServer_Response
    std::shared_ptr<my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__CiberRatoServer_Response
    std::shared_ptr<my_robot_interfaces::srv::CiberRatoServer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CiberRatoServer_Response_ & other) const
  {
    if (this->start_rob != other.start_rob) {
      return false;
    }
    if (this->stop_rob != other.stop_rob) {
      return false;
    }
    if (this->visiting_led != other.visiting_led) {
      return false;
    }
    if (this->returning_led != other.returning_led) {
      return false;
    }
    if (this->ground != other.ground) {
      return false;
    }
    if (this->center_id != other.center_id) {
      return false;
    }
    if (this->left_id != other.left_id) {
      return false;
    }
    if (this->right_id != other.right_id) {
      return false;
    }
    if (this->back_id != other.back_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->stopped_state != other.stopped_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const CiberRatoServer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CiberRatoServer_Response_

// alias to use template instance with default allocator
using CiberRatoServer_Response =
  my_robot_interfaces::srv::CiberRatoServer_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces

namespace my_robot_interfaces
{

namespace srv
{

struct CiberRatoServer
{
  using Request = my_robot_interfaces::srv::CiberRatoServer_Request;
  using Response = my_robot_interfaces::srv::CiberRatoServer_Response;
};

}  // namespace srv

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__CIBER_RATO_SERVER__STRUCT_HPP_
