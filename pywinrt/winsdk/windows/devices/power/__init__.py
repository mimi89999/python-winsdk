# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Power")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.system.power
except ImportError:
    pass


Battery = _ns_module.Battery
BatteryReport = _ns_module.BatteryReport
