# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Phone.Media.Devices")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

class AudioRoutingEndpoint(enum.IntEnum):
    DEFAULT = 0
    EARPIECE = 1
    SPEAKERPHONE = 2
    BLUETOOTH = 3
    WIRED_HEADSET = 4
    WIRED_HEADSET_SPEAKER_ONLY = 5
    BLUETOOTH_WITH_NOISE_AND_ECHO_CANCELLATION = 6
    BLUETOOTH_PREFERRED = 7

class AvailableAudioRoutingEndpoints(enum.IntFlag):
    NONE = 0
    EARPIECE = 0x1
    SPEAKERPHONE = 0x2
    BLUETOOTH = 0x4

_ns_module._register_AudioRoutingEndpoint(AudioRoutingEndpoint)
_ns_module._register_AvailableAudioRoutingEndpoints(AvailableAudioRoutingEndpoints)

AudioRoutingManager = _ns_module.AudioRoutingManager
