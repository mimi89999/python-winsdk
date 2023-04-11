# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Pwm")

try:
    import winsdk.windows.devices.pwm.provider
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class PwmPulsePolarity(enum.IntEnum):
    ACTIVE_HIGH = 0
    ACTIVE_LOW = 1

_ns_module._register_PwmPulsePolarity(PwmPulsePolarity)

PwmController = _ns_module.PwmController
PwmPin = _ns_module.PwmPin
