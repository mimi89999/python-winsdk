# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices")

try:
    import winsdk.windows.devices.adc.provider
except ImportError:
    pass

try:
    import winsdk.windows.devices.gpio.provider
except ImportError:
    pass

try:
    import winsdk.windows.devices.i2c.provider
except ImportError:
    pass

try:
    import winsdk.windows.devices.pwm.provider
except ImportError:
    pass

try:
    import winsdk.windows.devices.spi.provider
except ImportError:
    pass


LowLevelDevicesAggregateProvider = _ns_module.LowLevelDevicesAggregateProvider
LowLevelDevicesController = _ns_module.LowLevelDevicesController
ILowLevelDevicesAggregateProvider = _ns_module.ILowLevelDevicesAggregateProvider
