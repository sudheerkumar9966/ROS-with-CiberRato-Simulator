// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_robot_interfaces:srv/CiberRatoServer.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "my_robot_interfaces/srv/detail/ciber_rato_server__struct.h"
#include "my_robot_interfaces/srv/detail/ciber_rato_server__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_robot_interfaces__srv__ciber_rato_server__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("my_robot_interfaces.srv._ciber_rato_server.CiberRatoServer_Request", full_classname_dest, 66) == 0);
  }
  my_robot_interfaces__srv__CiberRatoServer_Request * ros_message = _ros_message;
  {  // set_visiting_led
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_visiting_led");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->set_visiting_led, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // set_returning_led
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_returning_led");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->set_returning_led, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // stopped_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "stopped_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->stopped_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lpow
    PyObject * field = PyObject_GetAttrString(_pymsg, "lpow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lpow = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rpow
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rpow = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initial_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->initial_state = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_robot_interfaces__srv__ciber_rato_server__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CiberRatoServer_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_robot_interfaces.srv._ciber_rato_server");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CiberRatoServer_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_robot_interfaces__srv__CiberRatoServer_Request * ros_message = (my_robot_interfaces__srv__CiberRatoServer_Request *)raw_ros_message;
  {  // set_visiting_led
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->set_visiting_led.data,
      strlen(ros_message->set_visiting_led.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_visiting_led", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_returning_led
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->set_returning_led.data,
      strlen(ros_message->set_returning_led.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_returning_led", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->state.data,
      strlen(ros_message->state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stopped_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->stopped_state.data,
      strlen(ros_message->stopped_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stopped_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lpow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lpow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lpow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rpow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rpow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->initial_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "my_robot_interfaces/srv/detail/ciber_rato_server__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/ciber_rato_server__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_robot_interfaces__srv__ciber_rato_server__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("my_robot_interfaces.srv._ciber_rato_server.CiberRatoServer_Response", full_classname_dest, 67) == 0);
  }
  my_robot_interfaces__srv__CiberRatoServer_Response * ros_message = _ros_message;
  {  // start_rob
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_rob");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->start_rob = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stop_rob
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_rob");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stop_rob = (Py_True == field);
    Py_DECREF(field);
  }
  {  // visiting_led
    PyObject * field = PyObject_GetAttrString(_pymsg, "visiting_led");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->visiting_led = (Py_True == field);
    Py_DECREF(field);
  }
  {  // returning_led
    PyObject * field = PyObject_GetAttrString(_pymsg, "returning_led");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->returning_led = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ground
    PyObject * field = PyObject_GetAttrString(_pymsg, "ground");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ground = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // center_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_id");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_id = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_id");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_id = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_id");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_id = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // back_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_id");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->back_id = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // stopped_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "stopped_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->stopped_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_robot_interfaces__srv__ciber_rato_server__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CiberRatoServer_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_robot_interfaces.srv._ciber_rato_server");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CiberRatoServer_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_robot_interfaces__srv__CiberRatoServer_Response * ros_message = (my_robot_interfaces__srv__CiberRatoServer_Response *)raw_ros_message;
  {  // start_rob
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->start_rob ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_rob", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_rob
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stop_rob ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_rob", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // visiting_led
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->visiting_led ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "visiting_led", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // returning_led
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->returning_led ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "returning_led", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ground
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->ground);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ground", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_id
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_id
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_id
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_id
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->back_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->state.data,
      strlen(ros_message->state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stopped_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->stopped_state.data,
      strlen(ros_message->stopped_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stopped_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
