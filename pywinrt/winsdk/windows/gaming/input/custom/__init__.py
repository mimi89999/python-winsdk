# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Gaming.Input.Custom")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.gaming.input
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class GipFirmwareUpdateStatus(enum.IntEnum):
    COMPLETED = 0
    UP_TO_DATE = 1
    FAILED = 2

class GipMessageClass(enum.IntEnum):
    COMMAND = 0
    LOW_LATENCY = 1
    STANDARD_LATENCY = 2

class XusbDeviceSubtype(enum.IntEnum):
    UNKNOWN = 0
    GAMEPAD = 1
    ARCADE_PAD = 2
    ARCADE_STICK = 3
    FLIGHT_STICK = 4
    WHEEL = 5
    GUITAR = 6
    GUITAR_ALTERNATE = 7
    GUITAR_BASS = 8
    DRUM_KIT = 9
    DANCE_PAD = 10

class XusbDeviceType(enum.IntEnum):
    UNKNOWN = 0
    GAMEPAD = 1

_ns_module._register_GipFirmwareUpdateStatus(GipFirmwareUpdateStatus)
_ns_module._register_GipMessageClass(GipMessageClass)
_ns_module._register_XusbDeviceSubtype(XusbDeviceSubtype)
_ns_module._register_XusbDeviceType(XusbDeviceType)

GameControllerVersionInfo = _ns_module.GameControllerVersionInfo
GipFirmwareUpdateProgress = _ns_module.GipFirmwareUpdateProgress
GameControllerFactoryManager = _ns_module.GameControllerFactoryManager
GipFirmwareUpdateResult = _ns_module.GipFirmwareUpdateResult
GipGameControllerProvider = _ns_module.GipGameControllerProvider
HidGameControllerProvider = _ns_module.HidGameControllerProvider
XusbGameControllerProvider = _ns_module.XusbGameControllerProvider
ICustomGameControllerFactory = _ns_module.ICustomGameControllerFactory
IGameControllerInputSink = _ns_module.IGameControllerInputSink
IGameControllerProvider = _ns_module.IGameControllerProvider
IGipGameControllerInputSink = _ns_module.IGipGameControllerInputSink
IHidGameControllerInputSink = _ns_module.IHidGameControllerInputSink
IXusbGameControllerInputSink = _ns_module.IXusbGameControllerInputSink
