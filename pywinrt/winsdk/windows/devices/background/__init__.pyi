# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation

Self = typing.TypeVar('Self')

class DeviceServicingDetails(winsdk.system.Object):
    arguments: str
    device_id: str
    expected_duration: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceServicingDetails: ...

class DeviceUseDetails(winsdk.system.Object):
    arguments: str
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceUseDetails: ...

