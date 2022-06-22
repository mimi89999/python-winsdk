# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.I2c")

try:
    import winsdk.windows.devices.i2c.provider
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

class I2cBusSpeed(enum.IntEnum):
    STANDARD_MODE = 0
    FAST_MODE = 1

class I2cSharingMode(enum.IntEnum):
    EXCLUSIVE = 0
    SHARED = 1

class I2cTransferStatus(enum.IntEnum):
    FULL_TRANSFER = 0
    PARTIAL_TRANSFER = 1
    SLAVE_ADDRESS_NOT_ACKNOWLEDGED = 2
    CLOCK_STRETCH_TIMEOUT = 3
    UNKNOWN_ERROR = 4

_ns_module._register_I2cBusSpeed(I2cBusSpeed)
_ns_module._register_I2cSharingMode(I2cSharingMode)
_ns_module._register_I2cTransferStatus(I2cTransferStatus)

I2cTransferResult = _ns_module.I2cTransferResult
I2cConnectionSettings = _ns_module.I2cConnectionSettings
I2cController = _ns_module.I2cController
I2cDevice = _ns_module.I2cDevice
II2cDeviceStatics = _ns_module.II2cDeviceStatics
