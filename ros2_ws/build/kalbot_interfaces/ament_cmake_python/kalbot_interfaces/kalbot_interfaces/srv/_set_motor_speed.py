# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kalbot_interfaces:srv/SetMotorSpeed.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMotorSpeed_Request(type):
    """Metaclass of message 'SetMotorSpeed_Request'."""

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
            module = import_type_support('kalbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kalbot_interfaces.srv.SetMotorSpeed_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_motor_speed__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_motor_speed__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_motor_speed__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_motor_speed__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_motor_speed__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMotorSpeed_Request(metaclass=Metaclass_SetMotorSpeed_Request):
    """Message class 'SetMotorSpeed_Request'."""

    __slots__ = [
        '_left_speed',
        '_right_speed',
    ]

    _fields_and_field_types = {
        'left_speed': 'int64',
        'right_speed': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_speed = kwargs.get('left_speed', int())
        self.right_speed = kwargs.get('right_speed', int())

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
        if self.left_speed != other.left_speed:
            return False
        if self.right_speed != other.right_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_speed(self):
        """Message field 'left_speed'."""
        return self._left_speed

    @left_speed.setter
    def left_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_speed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'left_speed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._left_speed = value

    @builtins.property
    def right_speed(self):
        """Message field 'right_speed'."""
        return self._right_speed

    @right_speed.setter
    def right_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_speed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'right_speed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._right_speed = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMotorSpeed_Response(type):
    """Metaclass of message 'SetMotorSpeed_Response'."""

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
            module = import_type_support('kalbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kalbot_interfaces.srv.SetMotorSpeed_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_motor_speed__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_motor_speed__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_motor_speed__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_motor_speed__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_motor_speed__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMotorSpeed_Response(metaclass=Metaclass_SetMotorSpeed_Response):
    """Message class 'SetMotorSpeed_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetMotorSpeed(type):
    """Metaclass of service 'SetMotorSpeed'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('kalbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kalbot_interfaces.srv.SetMotorSpeed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_motor_speed

            from kalbot_interfaces.srv import _set_motor_speed
            if _set_motor_speed.Metaclass_SetMotorSpeed_Request._TYPE_SUPPORT is None:
                _set_motor_speed.Metaclass_SetMotorSpeed_Request.__import_type_support__()
            if _set_motor_speed.Metaclass_SetMotorSpeed_Response._TYPE_SUPPORT is None:
                _set_motor_speed.Metaclass_SetMotorSpeed_Response.__import_type_support__()


class SetMotorSpeed(metaclass=Metaclass_SetMotorSpeed):
    from kalbot_interfaces.srv._set_motor_speed import SetMotorSpeed_Request as Request
    from kalbot_interfaces.srv._set_motor_speed import SetMotorSpeed_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
