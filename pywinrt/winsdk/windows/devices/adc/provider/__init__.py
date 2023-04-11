# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Adc.Provider")

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class ProviderAdcChannelMode(enum.IntEnum):
    SINGLE_ENDED = 0
    DIFFERENTIAL = 1

_ns_module._register_ProviderAdcChannelMode(ProviderAdcChannelMode)

IAdcControllerProvider = _ns_module.IAdcControllerProvider
IAdcProvider = _ns_module.IAdcProvider
