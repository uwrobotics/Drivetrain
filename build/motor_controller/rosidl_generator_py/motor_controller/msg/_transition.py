# generated from rosidl_generator_py/resource/_idl.py.em
# with input from motor_controller:msg/Transition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Transition(type):
    """Metaclass of message 'Transition'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_A': 1,
        'TYPE_B': 2,
        'TYPE_C': 3,
        'TYPE_D': 4,
        'TRANSITION_CALIBRATE': 6,
        'TRANSITION_CALIBRATE_COMPLETE': 8,
        'TRANSITION_ACTIVATE_POS_CONTROL': 10,
        'TRANSITION_ACTIVATE_VEL_CONTROL': 12,
        'TRANSITION_SHUTDOWN': 14,
        'TRANSITION_SHUTDOWN_COMPLETE': 20,
        'TRANSITION_DEACTIVATE_POS_CONTROL': 22,
        'TRANSITION_DEACTIVATE_VEL_CONTROL': 24,
        'TRANSITION_CALIBRATE_ERROR': 30,
        'TRANSITION_ACTIVATE_POS_CONTROL_ERROR': 32,
        'TRANSITION_DEACTIVATE_POS_CONTROL_ERROR': 34,
        'TRANSITION_ACTIVATE_VEL_CONTROL_ERROR': 36,
        'TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR': 38,
        'TRANSITION_SHUTDOWN_ERROR': 40,
        'TRANSITION_ERR_PROCESSING_COMPLETE': 42,
        'TRANSITION_ERR_PROCESSING_ERROR': 44,
        'TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE': 50,
        'TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE': 51,
        'TRANSITION_RESET': 64,
        'TRANSITION_SUCCESS': 97,
        'TRANSITION_FAILURE': 98,
        'TRANSITION_ERROR': 99,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('motor_controller')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motor_controller.msg.Transition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__transition
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__transition
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__transition
            cls._TYPE_SUPPORT = module.type_support_msg__msg__transition
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__transition

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_A': cls.__constants['TYPE_A'],
            'TYPE_B': cls.__constants['TYPE_B'],
            'TYPE_C': cls.__constants['TYPE_C'],
            'TYPE_D': cls.__constants['TYPE_D'],
            'TRANSITION_CALIBRATE': cls.__constants['TRANSITION_CALIBRATE'],
            'TRANSITION_CALIBRATE_COMPLETE': cls.__constants['TRANSITION_CALIBRATE_COMPLETE'],
            'TRANSITION_ACTIVATE_POS_CONTROL': cls.__constants['TRANSITION_ACTIVATE_POS_CONTROL'],
            'TRANSITION_ACTIVATE_VEL_CONTROL': cls.__constants['TRANSITION_ACTIVATE_VEL_CONTROL'],
            'TRANSITION_SHUTDOWN': cls.__constants['TRANSITION_SHUTDOWN'],
            'TRANSITION_SHUTDOWN_COMPLETE': cls.__constants['TRANSITION_SHUTDOWN_COMPLETE'],
            'TRANSITION_DEACTIVATE_POS_CONTROL': cls.__constants['TRANSITION_DEACTIVATE_POS_CONTROL'],
            'TRANSITION_DEACTIVATE_VEL_CONTROL': cls.__constants['TRANSITION_DEACTIVATE_VEL_CONTROL'],
            'TRANSITION_CALIBRATE_ERROR': cls.__constants['TRANSITION_CALIBRATE_ERROR'],
            'TRANSITION_ACTIVATE_POS_CONTROL_ERROR': cls.__constants['TRANSITION_ACTIVATE_POS_CONTROL_ERROR'],
            'TRANSITION_DEACTIVATE_POS_CONTROL_ERROR': cls.__constants['TRANSITION_DEACTIVATE_POS_CONTROL_ERROR'],
            'TRANSITION_ACTIVATE_VEL_CONTROL_ERROR': cls.__constants['TRANSITION_ACTIVATE_VEL_CONTROL_ERROR'],
            'TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR': cls.__constants['TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR'],
            'TRANSITION_SHUTDOWN_ERROR': cls.__constants['TRANSITION_SHUTDOWN_ERROR'],
            'TRANSITION_ERR_PROCESSING_COMPLETE': cls.__constants['TRANSITION_ERR_PROCESSING_COMPLETE'],
            'TRANSITION_ERR_PROCESSING_ERROR': cls.__constants['TRANSITION_ERR_PROCESSING_ERROR'],
            'TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE': cls.__constants['TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE'],
            'TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE': cls.__constants['TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE'],
            'TRANSITION_RESET': cls.__constants['TRANSITION_RESET'],
            'TRANSITION_SUCCESS': cls.__constants['TRANSITION_SUCCESS'],
            'TRANSITION_FAILURE': cls.__constants['TRANSITION_FAILURE'],
            'TRANSITION_ERROR': cls.__constants['TRANSITION_ERROR'],
        }

    @property
    def TYPE_A(self):
        """Message constant 'TYPE_A'."""
        return Metaclass_Transition.__constants['TYPE_A']

    @property
    def TYPE_B(self):
        """Message constant 'TYPE_B'."""
        return Metaclass_Transition.__constants['TYPE_B']

    @property
    def TYPE_C(self):
        """Message constant 'TYPE_C'."""
        return Metaclass_Transition.__constants['TYPE_C']

    @property
    def TYPE_D(self):
        """Message constant 'TYPE_D'."""
        return Metaclass_Transition.__constants['TYPE_D']

    @property
    def TRANSITION_CALIBRATE(self):
        """Message constant 'TRANSITION_CALIBRATE'."""
        return Metaclass_Transition.__constants['TRANSITION_CALIBRATE']

    @property
    def TRANSITION_CALIBRATE_COMPLETE(self):
        """Message constant 'TRANSITION_CALIBRATE_COMPLETE'."""
        return Metaclass_Transition.__constants['TRANSITION_CALIBRATE_COMPLETE']

    @property
    def TRANSITION_ACTIVATE_POS_CONTROL(self):
        """Message constant 'TRANSITION_ACTIVATE_POS_CONTROL'."""
        return Metaclass_Transition.__constants['TRANSITION_ACTIVATE_POS_CONTROL']

    @property
    def TRANSITION_ACTIVATE_VEL_CONTROL(self):
        """Message constant 'TRANSITION_ACTIVATE_VEL_CONTROL'."""
        return Metaclass_Transition.__constants['TRANSITION_ACTIVATE_VEL_CONTROL']

    @property
    def TRANSITION_SHUTDOWN(self):
        """Message constant 'TRANSITION_SHUTDOWN'."""
        return Metaclass_Transition.__constants['TRANSITION_SHUTDOWN']

    @property
    def TRANSITION_SHUTDOWN_COMPLETE(self):
        """Message constant 'TRANSITION_SHUTDOWN_COMPLETE'."""
        return Metaclass_Transition.__constants['TRANSITION_SHUTDOWN_COMPLETE']

    @property
    def TRANSITION_DEACTIVATE_POS_CONTROL(self):
        """Message constant 'TRANSITION_DEACTIVATE_POS_CONTROL'."""
        return Metaclass_Transition.__constants['TRANSITION_DEACTIVATE_POS_CONTROL']

    @property
    def TRANSITION_DEACTIVATE_VEL_CONTROL(self):
        """Message constant 'TRANSITION_DEACTIVATE_VEL_CONTROL'."""
        return Metaclass_Transition.__constants['TRANSITION_DEACTIVATE_VEL_CONTROL']

    @property
    def TRANSITION_CALIBRATE_ERROR(self):
        """Message constant 'TRANSITION_CALIBRATE_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_CALIBRATE_ERROR']

    @property
    def TRANSITION_ACTIVATE_POS_CONTROL_ERROR(self):
        """Message constant 'TRANSITION_ACTIVATE_POS_CONTROL_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ACTIVATE_POS_CONTROL_ERROR']

    @property
    def TRANSITION_DEACTIVATE_POS_CONTROL_ERROR(self):
        """Message constant 'TRANSITION_DEACTIVATE_POS_CONTROL_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_DEACTIVATE_POS_CONTROL_ERROR']

    @property
    def TRANSITION_ACTIVATE_VEL_CONTROL_ERROR(self):
        """Message constant 'TRANSITION_ACTIVATE_VEL_CONTROL_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ACTIVATE_VEL_CONTROL_ERROR']

    @property
    def TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR(self):
        """Message constant 'TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR']

    @property
    def TRANSITION_SHUTDOWN_ERROR(self):
        """Message constant 'TRANSITION_SHUTDOWN_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_SHUTDOWN_ERROR']

    @property
    def TRANSITION_ERR_PROCESSING_COMPLETE(self):
        """Message constant 'TRANSITION_ERR_PROCESSING_COMPLETE'."""
        return Metaclass_Transition.__constants['TRANSITION_ERR_PROCESSING_COMPLETE']

    @property
    def TRANSITION_ERR_PROCESSING_ERROR(self):
        """Message constant 'TRANSITION_ERR_PROCESSING_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ERR_PROCESSING_ERROR']

    @property
    def TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE(self):
        """Message constant 'TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE'."""
        return Metaclass_Transition.__constants['TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE']

    @property
    def TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE(self):
        """Message constant 'TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE'."""
        return Metaclass_Transition.__constants['TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE']

    @property
    def TRANSITION_RESET(self):
        """Message constant 'TRANSITION_RESET'."""
        return Metaclass_Transition.__constants['TRANSITION_RESET']

    @property
    def TRANSITION_SUCCESS(self):
        """Message constant 'TRANSITION_SUCCESS'."""
        return Metaclass_Transition.__constants['TRANSITION_SUCCESS']

    @property
    def TRANSITION_FAILURE(self):
        """Message constant 'TRANSITION_FAILURE'."""
        return Metaclass_Transition.__constants['TRANSITION_FAILURE']

    @property
    def TRANSITION_ERROR(self):
        """Message constant 'TRANSITION_ERROR'."""
        return Metaclass_Transition.__constants['TRANSITION_ERROR']


class Transition(metaclass=Metaclass_Transition):
    """
    Message class 'Transition'.

    Constants:
      TYPE_A
      TYPE_B
      TYPE_C
      TYPE_D
      TRANSITION_CALIBRATE
      TRANSITION_CALIBRATE_COMPLETE
      TRANSITION_ACTIVATE_POS_CONTROL
      TRANSITION_ACTIVATE_VEL_CONTROL
      TRANSITION_SHUTDOWN
      TRANSITION_SHUTDOWN_COMPLETE
      TRANSITION_DEACTIVATE_POS_CONTROL
      TRANSITION_DEACTIVATE_VEL_CONTROL
      TRANSITION_CALIBRATE_ERROR
      TRANSITION_ACTIVATE_POS_CONTROL_ERROR
      TRANSITION_DEACTIVATE_POS_CONTROL_ERROR
      TRANSITION_ACTIVATE_VEL_CONTROL_ERROR
      TRANSITION_DEACTIVATE_VEL_CONTROL_ERROR
      TRANSITION_SHUTDOWN_ERROR
      TRANSITION_ERR_PROCESSING_COMPLETE
      TRANSITION_ERR_PROCESSING_ERROR
      TRANSITION_ACTIVATE_ARCADE_CONTROL_COMPLETE
      TRANSITION_DEACTIVATE_ARCADE_CONTROL_COMPLETE
      TRANSITION_RESET
      TRANSITION_SUCCESS
      TRANSITION_FAILURE
      TRANSITION_ERROR
    """

    __slots__ = [
        '_id',
        '_label',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'label': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.label = kwargs.get('label', str())

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
        if self.id != other.id:
            return False
        if self.label != other.label:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value
