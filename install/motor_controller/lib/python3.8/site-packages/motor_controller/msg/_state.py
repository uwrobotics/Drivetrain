# generated from rosidl_generator_py/resource/_idl.py.em
# with input from motor_controller:msg/State.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_State(type):
    """Metaclass of message 'State'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNINIT': 0,
        'TRANSITION_STATE_PRE_CAL': 1,
        'IDLE': 2,
        'TRANSITION_STATE_ACTIVATING_POS_CONTROL': 3,
        'POS_CONTROL': 4,
        'TRANSITION_STATE_DEACTIVATING_POS_CONTROL': 5,
        'TRANSITION_STATE_ACTIVATING_VEL_CONTROL': 6,
        'VEL_CONTROL': 7,
        'TRANSITION_STATE_DEACTIVATING_VEL_CONTROL': 8,
        'TRANSITION_STATE_SHUTTING_DOWN': 9,
        'TRANSITION_STATE_ERR_PROCESSING': 10,
        'FINALIZED': 11,
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
                'motor_controller.msg.State')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNINIT': cls.__constants['UNINIT'],
            'TRANSITION_STATE_PRE_CAL': cls.__constants['TRANSITION_STATE_PRE_CAL'],
            'IDLE': cls.__constants['IDLE'],
            'TRANSITION_STATE_ACTIVATING_POS_CONTROL': cls.__constants['TRANSITION_STATE_ACTIVATING_POS_CONTROL'],
            'POS_CONTROL': cls.__constants['POS_CONTROL'],
            'TRANSITION_STATE_DEACTIVATING_POS_CONTROL': cls.__constants['TRANSITION_STATE_DEACTIVATING_POS_CONTROL'],
            'TRANSITION_STATE_ACTIVATING_VEL_CONTROL': cls.__constants['TRANSITION_STATE_ACTIVATING_VEL_CONTROL'],
            'VEL_CONTROL': cls.__constants['VEL_CONTROL'],
            'TRANSITION_STATE_DEACTIVATING_VEL_CONTROL': cls.__constants['TRANSITION_STATE_DEACTIVATING_VEL_CONTROL'],
            'TRANSITION_STATE_SHUTTING_DOWN': cls.__constants['TRANSITION_STATE_SHUTTING_DOWN'],
            'TRANSITION_STATE_ERR_PROCESSING': cls.__constants['TRANSITION_STATE_ERR_PROCESSING'],
            'FINALIZED': cls.__constants['FINALIZED'],
        }

    @property
    def UNINIT(self):
        """Message constant 'UNINIT'."""
        return Metaclass_State.__constants['UNINIT']

    @property
    def TRANSITION_STATE_PRE_CAL(self):
        """Message constant 'TRANSITION_STATE_PRE_CAL'."""
        return Metaclass_State.__constants['TRANSITION_STATE_PRE_CAL']

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_State.__constants['IDLE']

    @property
    def TRANSITION_STATE_ACTIVATING_POS_CONTROL(self):
        """Message constant 'TRANSITION_STATE_ACTIVATING_POS_CONTROL'."""
        return Metaclass_State.__constants['TRANSITION_STATE_ACTIVATING_POS_CONTROL']

    @property
    def POS_CONTROL(self):
        """Message constant 'POS_CONTROL'."""
        return Metaclass_State.__constants['POS_CONTROL']

    @property
    def TRANSITION_STATE_DEACTIVATING_POS_CONTROL(self):
        """Message constant 'TRANSITION_STATE_DEACTIVATING_POS_CONTROL'."""
        return Metaclass_State.__constants['TRANSITION_STATE_DEACTIVATING_POS_CONTROL']

    @property
    def TRANSITION_STATE_ACTIVATING_VEL_CONTROL(self):
        """Message constant 'TRANSITION_STATE_ACTIVATING_VEL_CONTROL'."""
        return Metaclass_State.__constants['TRANSITION_STATE_ACTIVATING_VEL_CONTROL']

    @property
    def VEL_CONTROL(self):
        """Message constant 'VEL_CONTROL'."""
        return Metaclass_State.__constants['VEL_CONTROL']

    @property
    def TRANSITION_STATE_DEACTIVATING_VEL_CONTROL(self):
        """Message constant 'TRANSITION_STATE_DEACTIVATING_VEL_CONTROL'."""
        return Metaclass_State.__constants['TRANSITION_STATE_DEACTIVATING_VEL_CONTROL']

    @property
    def TRANSITION_STATE_SHUTTING_DOWN(self):
        """Message constant 'TRANSITION_STATE_SHUTTING_DOWN'."""
        return Metaclass_State.__constants['TRANSITION_STATE_SHUTTING_DOWN']

    @property
    def TRANSITION_STATE_ERR_PROCESSING(self):
        """Message constant 'TRANSITION_STATE_ERR_PROCESSING'."""
        return Metaclass_State.__constants['TRANSITION_STATE_ERR_PROCESSING']

    @property
    def FINALIZED(self):
        """Message constant 'FINALIZED'."""
        return Metaclass_State.__constants['FINALIZED']


class State(metaclass=Metaclass_State):
    """
    Message class 'State'.

    Constants:
      UNINIT
      TRANSITION_STATE_PRE_CAL
      IDLE
      TRANSITION_STATE_ACTIVATING_POS_CONTROL
      POS_CONTROL
      TRANSITION_STATE_DEACTIVATING_POS_CONTROL
      TRANSITION_STATE_ACTIVATING_VEL_CONTROL
      VEL_CONTROL
      TRANSITION_STATE_DEACTIVATING_VEL_CONTROL
      TRANSITION_STATE_SHUTTING_DOWN
      TRANSITION_STATE_ERR_PROCESSING
      FINALIZED
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
