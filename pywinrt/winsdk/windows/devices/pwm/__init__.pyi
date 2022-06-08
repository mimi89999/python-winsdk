# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.devices.pwm.provider
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class PwmPulsePolarity(enum.IntEnum):
    ACTIVE_HIGH = 0
    ACTIVE_LOW = 1

Self = typing.TypeVar('Self')

class PwmController(_winrt.Object):
    actual_frequency: _winrt.Double
    max_frequency: _winrt.Double
    min_frequency: _winrt.Double
    pin_count: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> PwmController: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[PwmController]: ...
    @staticmethod
    def get_controllers_async(provider: typing.Optional[winsdk.windows.devices.pwm.provider.IPwmProvider]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PwmController]]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[PwmController]: ...
    @typing.overload
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(friendly_name: str) -> str: ...
    def open_pin(self, pin_number: _winrt.Int32) -> typing.Optional[PwmPin]: ...
    def set_desired_frequency(self, desired_frequency: _winrt.Double) -> _winrt.Double: ...

class PwmPin(_winrt.Object):
    polarity: PwmPulsePolarity
    controller: typing.Optional[PwmController]
    is_started: _winrt.Boolean
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PwmPin: ...
    def close(self) -> None: ...
    def get_active_duty_cycle_percentage(self) -> _winrt.Double: ...
    def set_active_duty_cycle_percentage(self, duty_cycle_percentage: _winrt.Double) -> None: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

