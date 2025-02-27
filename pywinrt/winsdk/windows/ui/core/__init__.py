# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.UI.Core")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.ui
except ImportError:
    pass

try:
    import winsdk.windows.ui.composition
except ImportError:
    pass

try:
    import winsdk.windows.ui.input
except ImportError:
    pass

try:
    import winsdk.windows.ui.popups
except ImportError:
    pass

class AppViewBackButtonVisibility(enum.IntEnum):
    VISIBLE = 0
    COLLAPSED = 1
    DISABLED = 2

class CoreAcceleratorKeyEventType(enum.IntEnum):
    CHARACTER = 2
    DEAD_CHARACTER = 3
    KEY_DOWN = 0
    KEY_UP = 1
    SYSTEM_CHARACTER = 6
    SYSTEM_DEAD_CHARACTER = 7
    SYSTEM_KEY_DOWN = 4
    SYSTEM_KEY_UP = 5
    UNICODE_CHARACTER = 8

class CoreCursorType(enum.IntEnum):
    ARROW = 0
    CROSS = 1
    CUSTOM = 2
    HAND = 3
    HELP = 4
    I_BEAM = 5
    SIZE_ALL = 6
    SIZE_NORTHEAST_SOUTHWEST = 7
    SIZE_NORTH_SOUTH = 8
    SIZE_NORTHWEST_SOUTHEAST = 9
    SIZE_WEST_EAST = 10
    UNIVERSAL_NO = 11
    UP_ARROW = 12
    WAIT = 13
    PIN = 14
    PERSON = 15

class CoreDispatcherPriority(enum.IntEnum):
    IDLE = -2
    LOW = -1
    NORMAL = 0
    HIGH = 1

class CoreIndependentInputFilters(enum.IntFlag):
    NONE = 0
    MOUSE_BUTTON = 0x1
    MOUSE_WHEEL = 0x2
    MOUSE_HOVER = 0x4
    PEN_WITH_BARREL = 0x8
    PEN_INVERTED = 0x10

class CoreInputDeviceTypes(enum.IntFlag):
    NONE = 0
    TOUCH = 0x1
    PEN = 0x2
    MOUSE = 0x4

class CoreProcessEventsOption(enum.IntEnum):
    PROCESS_ONE_AND_ALL_PENDING = 0
    PROCESS_ONE_IF_PRESENT = 1
    PROCESS_UNTIL_QUIT = 2
    PROCESS_ALL_IF_PRESENT = 3

class CoreProximityEvaluationScore(enum.IntEnum):
    CLOSEST = 0
    FARTHEST = 2147483647

class CoreVirtualKeyStates(enum.IntFlag):
    NONE = 0
    DOWN = 0x1
    LOCKED = 0x2

class CoreWindowActivationMode(enum.IntEnum):
    NONE = 0
    DEACTIVATED = 1
    ACTIVATED_NOT_FOREGROUND = 2
    ACTIVATED_IN_FOREGROUND = 3

class CoreWindowActivationState(enum.IntEnum):
    CODE_ACTIVATED = 0
    DEACTIVATED = 1
    POINTER_ACTIVATED = 2

class CoreWindowFlowDirection(enum.IntEnum):
    LEFT_TO_RIGHT = 0
    RIGHT_TO_LEFT = 1

_ns_module._register_AppViewBackButtonVisibility(AppViewBackButtonVisibility)
_ns_module._register_CoreAcceleratorKeyEventType(CoreAcceleratorKeyEventType)
_ns_module._register_CoreCursorType(CoreCursorType)
_ns_module._register_CoreDispatcherPriority(CoreDispatcherPriority)
_ns_module._register_CoreIndependentInputFilters(CoreIndependentInputFilters)
_ns_module._register_CoreInputDeviceTypes(CoreInputDeviceTypes)
_ns_module._register_CoreProcessEventsOption(CoreProcessEventsOption)
_ns_module._register_CoreProximityEvaluationScore(CoreProximityEvaluationScore)
_ns_module._register_CoreVirtualKeyStates(CoreVirtualKeyStates)
_ns_module._register_CoreWindowActivationMode(CoreWindowActivationMode)
_ns_module._register_CoreWindowActivationState(CoreWindowActivationState)
_ns_module._register_CoreWindowFlowDirection(CoreWindowFlowDirection)

CorePhysicalKeyStatus = _ns_module.CorePhysicalKeyStatus
CoreProximityEvaluation = _ns_module.CoreProximityEvaluation
AcceleratorKeyEventArgs = _ns_module.AcceleratorKeyEventArgs
AutomationProviderRequestedEventArgs = _ns_module.AutomationProviderRequestedEventArgs
BackRequestedEventArgs = _ns_module.BackRequestedEventArgs
CharacterReceivedEventArgs = _ns_module.CharacterReceivedEventArgs
ClosestInteractiveBoundsRequestedEventArgs = _ns_module.ClosestInteractiveBoundsRequestedEventArgs
CoreAcceleratorKeys = _ns_module.CoreAcceleratorKeys
CoreComponentInputSource = _ns_module.CoreComponentInputSource
CoreCursor = _ns_module.CoreCursor
CoreDispatcher = _ns_module.CoreDispatcher
CoreIndependentInputSource = _ns_module.CoreIndependentInputSource
CoreIndependentInputSourceController = _ns_module.CoreIndependentInputSourceController
CoreWindow = _ns_module.CoreWindow
CoreWindowDialog = _ns_module.CoreWindowDialog
CoreWindowEventArgs = _ns_module.CoreWindowEventArgs
CoreWindowFlyout = _ns_module.CoreWindowFlyout
CoreWindowPopupShowingEventArgs = _ns_module.CoreWindowPopupShowingEventArgs
CoreWindowResizeManager = _ns_module.CoreWindowResizeManager
IdleDispatchedHandlerArgs = _ns_module.IdleDispatchedHandlerArgs
InputEnabledEventArgs = _ns_module.InputEnabledEventArgs
KeyEventArgs = _ns_module.KeyEventArgs
PointerEventArgs = _ns_module.PointerEventArgs
SystemNavigationManager = _ns_module.SystemNavigationManager
TouchHitTestingEventArgs = _ns_module.TouchHitTestingEventArgs
VisibilityChangedEventArgs = _ns_module.VisibilityChangedEventArgs
WindowActivatedEventArgs = _ns_module.WindowActivatedEventArgs
WindowSizeChangedEventArgs = _ns_module.WindowSizeChangedEventArgs
ICoreAcceleratorKeys = _ns_module.ICoreAcceleratorKeys
ICoreInputSourceBase = _ns_module.ICoreInputSourceBase
ICorePointerInputSource = _ns_module.ICorePointerInputSource
ICorePointerInputSource2 = _ns_module.ICorePointerInputSource2
ICorePointerRedirector = _ns_module.ICorePointerRedirector
ICoreWindow = _ns_module.ICoreWindow
ICoreWindowEventArgs = _ns_module.ICoreWindowEventArgs
IInitializeWithCoreWindow = _ns_module.IInitializeWithCoreWindow
