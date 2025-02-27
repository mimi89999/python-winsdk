# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class ProviderI2cBusSpeed(enum.IntEnum):
    STANDARD_MODE = 0
    FAST_MODE = 1

class ProviderI2cSharingMode(enum.IntEnum):
    EXCLUSIVE = 0
    SHARED = 1

class ProviderI2cTransferStatus(enum.IntEnum):
    FULL_TRANSFER = 0
    PARTIAL_TRANSFER = 1
    SLAVE_ADDRESS_NOT_ACKNOWLEDGED = 2

Self = typing.TypeVar('Self')

class ProviderI2cTransferResult:
    status: ProviderI2cTransferStatus
    bytes_transferred: winsdk.system.UInt32
    def __new__(cls: typing.Type[ProviderI2cTransferResult], status: ProviderI2cTransferStatus, bytes_transferred: winsdk.system.UInt32) -> ProviderI2cTransferResult: ...

class ProviderI2cConnectionSettings(winsdk.system.Object):
    slave_address: winsdk.system.Int32
    sharing_mode: ProviderI2cSharingMode
    bus_speed: ProviderI2cBusSpeed
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProviderI2cConnectionSettings: ...

class II2cControllerProvider(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> II2cControllerProvider: ...
    def get_device_provider(self, settings: typing.Optional[ProviderI2cConnectionSettings]) -> typing.Optional[II2cDeviceProvider]: ...

class II2cDeviceProvider(winsdk.system.Object):
    device_id: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> II2cDeviceProvider: ...
    def close(self) -> None: ...
    def read(self, buffer: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def read_partial(self, buffer: winsdk.system.Array[winsdk.system.UInt8]) -> ProviderI2cTransferResult: ...
    def write(self, buffer: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def write_partial(self, buffer: winsdk.system.Array[winsdk.system.UInt8]) -> ProviderI2cTransferResult: ...
    def write_read(self, write_buffer: winsdk.system.Array[winsdk.system.UInt8], read_buffer: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def write_read_partial(self, write_buffer: winsdk.system.Array[winsdk.system.UInt8], read_buffer: winsdk.system.Array[winsdk.system.UInt8]) -> ProviderI2cTransferResult: ...

class II2cProvider(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> II2cProvider: ...
    def get_controllers_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[II2cControllerProvider]]: ...

