# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.UI.Input.Preview.Injection")

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.gaming.input
except ImportError:
    pass

class InjectedInputButtonChangeKind(enum.IntEnum):
    NONE = 0
    FIRST_BUTTON_DOWN = 1
    FIRST_BUTTON_UP = 2
    SECOND_BUTTON_DOWN = 3
    SECOND_BUTTON_UP = 4
    THIRD_BUTTON_DOWN = 5
    THIRD_BUTTON_UP = 6
    FOURTH_BUTTON_DOWN = 7
    FOURTH_BUTTON_UP = 8
    FIFTH_BUTTON_DOWN = 9
    FIFTH_BUTTON_UP = 10

class InjectedInputKeyOptions(enum.IntFlag):
    NONE = 0
    EXTENDED_KEY = 0x1
    KEY_UP = 0x2
    SCAN_CODE = 0x8
    UNICODE = 0x4

class InjectedInputMouseOptions(enum.IntFlag):
    NONE = 0
    MOVE = 0x1
    LEFT_DOWN = 0x2
    LEFT_UP = 0x4
    RIGHT_DOWN = 0x8
    RIGHT_UP = 0x10
    MIDDLE_DOWN = 0x20
    MIDDLE_UP = 0x40
    X_DOWN = 0x80
    X_UP = 0x100
    WHEEL = 0x800
    H_WHEEL = 0x1000
    MOVE_NO_COALESCE = 0x2000
    VIRTUAL_DESK = 0x4000
    ABSOLUTE = 0x8000

class InjectedInputPenButtons(enum.IntFlag):
    NONE = 0
    BARREL = 0x1
    INVERTED = 0x2
    ERASER = 0x4

class InjectedInputPenParameters(enum.IntFlag):
    NONE = 0
    PRESSURE = 0x1
    ROTATION = 0x2
    TILT_X = 0x4
    TILT_Y = 0x8

class InjectedInputPointerOptions(enum.IntFlag):
    NONE = 0
    NEW = 0x1
    IN_RANGE = 0x2
    IN_CONTACT = 0x4
    FIRST_BUTTON = 0x10
    SECOND_BUTTON = 0x20
    PRIMARY = 0x2000
    CONFIDENCE = 0x4000
    CANCELED = 0x8000
    POINTER_DOWN = 0x10000
    UPDATE = 0x20000
    POINTER_UP = 0x40000
    CAPTURE_CHANGED = 0x200000

class InjectedInputShortcut(enum.IntEnum):
    BACK = 0
    START = 1
    SEARCH = 2

class InjectedInputTouchParameters(enum.IntFlag):
    NONE = 0
    CONTACT = 0x1
    ORIENTATION = 0x2
    PRESSURE = 0x4

class InjectedInputVisualizationMode(enum.IntEnum):
    NONE = 0
    DEFAULT = 1
    INDIRECT = 2

_ns_module._register_InjectedInputButtonChangeKind(InjectedInputButtonChangeKind)
_ns_module._register_InjectedInputKeyOptions(InjectedInputKeyOptions)
_ns_module._register_InjectedInputMouseOptions(InjectedInputMouseOptions)
_ns_module._register_InjectedInputPenButtons(InjectedInputPenButtons)
_ns_module._register_InjectedInputPenParameters(InjectedInputPenParameters)
_ns_module._register_InjectedInputPointerOptions(InjectedInputPointerOptions)
_ns_module._register_InjectedInputShortcut(InjectedInputShortcut)
_ns_module._register_InjectedInputTouchParameters(InjectedInputTouchParameters)
_ns_module._register_InjectedInputVisualizationMode(InjectedInputVisualizationMode)

InjectedInputPoint = _ns_module.InjectedInputPoint
InjectedInputPointerInfo = _ns_module.InjectedInputPointerInfo
InjectedInputRectangle = _ns_module.InjectedInputRectangle
InjectedInputGamepadInfo = _ns_module.InjectedInputGamepadInfo
InjectedInputKeyboardInfo = _ns_module.InjectedInputKeyboardInfo
InjectedInputMouseInfo = _ns_module.InjectedInputMouseInfo
InjectedInputPenInfo = _ns_module.InjectedInputPenInfo
InjectedInputTouchInfo = _ns_module.InjectedInputTouchInfo
InputInjector = _ns_module.InputInjector
