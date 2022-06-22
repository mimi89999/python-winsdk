# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation

Self = typing.TypeVar('Self')

class DeviceServicingDetails(_winrt.Object):
    arguments: str
    device_id: str
    expected_duration: datetime.timedelta
    @staticmethod
    def _from(obj: _winrt.Object) -> DeviceServicingDetails: ...

class DeviceUseDetails(_winrt.Object):
    arguments: str
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> DeviceUseDetails: ...

