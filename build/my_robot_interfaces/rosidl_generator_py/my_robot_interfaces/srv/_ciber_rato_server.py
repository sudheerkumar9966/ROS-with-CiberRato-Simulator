# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_robot_interfaces:srv/CiberRatoServer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CiberRatoServer_Request(type):
    """Metaclass of message 'CiberRatoServer_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.CiberRatoServer_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ciber_rato_server__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ciber_rato_server__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ciber_rato_server__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ciber_rato_server__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ciber_rato_server__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CiberRatoServer_Request(metaclass=Metaclass_CiberRatoServer_Request):
    """Message class 'CiberRatoServer_Request'."""

    __slots__ = [
        '_set_visiting_led',
        '_set_returning_led',
        '_state',
        '_stopped_state',
        '_lpow',
        '_rpow',
        '_initial_state',
    ]

    _fields_and_field_types = {
        'set_visiting_led': 'string',
        'set_returning_led': 'string',
        'state': 'string',
        'stopped_state': 'string',
        'lpow': 'double',
        'rpow': 'double',
        'initial_state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.set_visiting_led = kwargs.get('set_visiting_led', str())
        self.set_returning_led = kwargs.get('set_returning_led', str())
        self.state = kwargs.get('state', str())
        self.stopped_state = kwargs.get('stopped_state', str())
        self.lpow = kwargs.get('lpow', float())
        self.rpow = kwargs.get('rpow', float())
        self.initial_state = kwargs.get('initial_state', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.set_visiting_led != other.set_visiting_led:
            return False
        if self.set_returning_led != other.set_returning_led:
            return False
        if self.state != other.state:
            return False
        if self.stopped_state != other.stopped_state:
            return False
        if self.lpow != other.lpow:
            return False
        if self.rpow != other.rpow:
            return False
        if self.initial_state != other.initial_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def set_visiting_led(self):
        """Message field 'set_visiting_led'."""
        return self._set_visiting_led

    @set_visiting_led.setter
    def set_visiting_led(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'set_visiting_led' field must be of type 'str'"
        self._set_visiting_led = value

    @builtins.property
    def set_returning_led(self):
        """Message field 'set_returning_led'."""
        return self._set_returning_led

    @set_returning_led.setter
    def set_returning_led(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'set_returning_led' field must be of type 'str'"
        self._set_returning_led = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def stopped_state(self):
        """Message field 'stopped_state'."""
        return self._stopped_state

    @stopped_state.setter
    def stopped_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stopped_state' field must be of type 'str'"
        self._stopped_state = value

    @builtins.property
    def lpow(self):
        """Message field 'lpow'."""
        return self._lpow

    @lpow.setter
    def lpow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lpow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lpow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lpow = value

    @builtins.property
    def rpow(self):
        """Message field 'rpow'."""
        return self._rpow

    @rpow.setter
    def rpow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rpow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rpow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rpow = value

    @builtins.property
    def initial_state(self):
        """Message field 'initial_state'."""
        return self._initial_state

    @initial_state.setter
    def initial_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'initial_state' field must be of type 'bool'"
        self._initial_state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_CiberRatoServer_Response(type):
    """Metaclass of message 'CiberRatoServer_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.CiberRatoServer_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ciber_rato_server__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ciber_rato_server__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ciber_rato_server__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ciber_rato_server__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ciber_rato_server__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CiberRatoServer_Response(metaclass=Metaclass_CiberRatoServer_Response):
    """Message class 'CiberRatoServer_Response'."""

    __slots__ = [
        '_start_rob',
        '_stop_rob',
        '_visiting_led',
        '_returning_led',
        '_ground',
        '_center_id',
        '_left_id',
        '_right_id',
        '_back_id',
        '_state',
        '_stopped_state',
    ]

    _fields_and_field_types = {
        'start_rob': 'boolean',
        'stop_rob': 'boolean',
        'visiting_led': 'boolean',
        'returning_led': 'boolean',
        'ground': 'int64',
        'center_id': 'double',
        'left_id': 'double',
        'right_id': 'double',
        'back_id': 'double',
        'state': 'string',
        'stopped_state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_rob = kwargs.get('start_rob', bool())
        self.stop_rob = kwargs.get('stop_rob', bool())
        self.visiting_led = kwargs.get('visiting_led', bool())
        self.returning_led = kwargs.get('returning_led', bool())
        self.ground = kwargs.get('ground', int())
        self.center_id = kwargs.get('center_id', float())
        self.left_id = kwargs.get('left_id', float())
        self.right_id = kwargs.get('right_id', float())
        self.back_id = kwargs.get('back_id', float())
        self.state = kwargs.get('state', str())
        self.stopped_state = kwargs.get('stopped_state', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.start_rob != other.start_rob:
            return False
        if self.stop_rob != other.stop_rob:
            return False
        if self.visiting_led != other.visiting_led:
            return False
        if self.returning_led != other.returning_led:
            return False
        if self.ground != other.ground:
            return False
        if self.center_id != other.center_id:
            return False
        if self.left_id != other.left_id:
            return False
        if self.right_id != other.right_id:
            return False
        if self.back_id != other.back_id:
            return False
        if self.state != other.state:
            return False
        if self.stopped_state != other.stopped_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_rob(self):
        """Message field 'start_rob'."""
        return self._start_rob

    @start_rob.setter
    def start_rob(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'start_rob' field must be of type 'bool'"
        self._start_rob = value

    @builtins.property
    def stop_rob(self):
        """Message field 'stop_rob'."""
        return self._stop_rob

    @stop_rob.setter
    def stop_rob(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stop_rob' field must be of type 'bool'"
        self._stop_rob = value

    @builtins.property
    def visiting_led(self):
        """Message field 'visiting_led'."""
        return self._visiting_led

    @visiting_led.setter
    def visiting_led(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'visiting_led' field must be of type 'bool'"
        self._visiting_led = value

    @builtins.property
    def returning_led(self):
        """Message field 'returning_led'."""
        return self._returning_led

    @returning_led.setter
    def returning_led(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'returning_led' field must be of type 'bool'"
        self._returning_led = value

    @builtins.property
    def ground(self):
        """Message field 'ground'."""
        return self._ground

    @ground.setter
    def ground(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ground' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ground' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ground = value

    @builtins.property
    def center_id(self):
        """Message field 'center_id'."""
        return self._center_id

    @center_id.setter
    def center_id(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_id' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'center_id' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._center_id = value

    @builtins.property
    def left_id(self):
        """Message field 'left_id'."""
        return self._left_id

    @left_id.setter
    def left_id(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_id' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_id' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_id = value

    @builtins.property
    def right_id(self):
        """Message field 'right_id'."""
        return self._right_id

    @right_id.setter
    def right_id(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_id' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_id' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_id = value

    @builtins.property
    def back_id(self):
        """Message field 'back_id'."""
        return self._back_id

    @back_id.setter
    def back_id(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'back_id' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'back_id' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._back_id = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def stopped_state(self):
        """Message field 'stopped_state'."""
        return self._stopped_state

    @stopped_state.setter
    def stopped_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stopped_state' field must be of type 'str'"
        self._stopped_state = value


class Metaclass_CiberRatoServer(type):
    """Metaclass of service 'CiberRatoServer'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.CiberRatoServer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ciber_rato_server

            from my_robot_interfaces.srv import _ciber_rato_server
            if _ciber_rato_server.Metaclass_CiberRatoServer_Request._TYPE_SUPPORT is None:
                _ciber_rato_server.Metaclass_CiberRatoServer_Request.__import_type_support__()
            if _ciber_rato_server.Metaclass_CiberRatoServer_Response._TYPE_SUPPORT is None:
                _ciber_rato_server.Metaclass_CiberRatoServer_Response.__import_type_support__()


class CiberRatoServer(metaclass=Metaclass_CiberRatoServer):
    from my_robot_interfaces.srv._ciber_rato_server import CiberRatoServer_Request as Request
    from my_robot_interfaces.srv._ciber_rato_server import CiberRatoServer_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
