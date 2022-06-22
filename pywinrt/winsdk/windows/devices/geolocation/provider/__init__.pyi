# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.devices.geolocation
import winsdk.windows.foundation

class LocationOverrideStatus(enum.IntEnum):
    SUCCESS = 0
    ACCESS_DENIED = 1
    ALREADY_STARTED = 2
    OTHER = 3

Self = typing.TypeVar('Self')

class GeolocationProvider(_winrt.Object):
    is_overridden: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> GeolocationProvider: ...
    def __new__(cls: typing.Type[GeolocationProvider]) -> GeolocationProvider:...
    def clear_override_position(self) -> None: ...
    def set_override_position(self, new_position: winsdk.windows.devices.geolocation.BasicGeoposition, position_source: winsdk.windows.devices.geolocation.PositionSource, accuracy_in_meters: _winrt.Double) -> LocationOverrideStatus: ...
    def add_is_overridden_changed(self, handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_overridden_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

