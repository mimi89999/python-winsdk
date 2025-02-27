# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams
import winsdk.windows.ui.popups

class CastingConnectionErrorStatus(enum.IntEnum):
    SUCCEEDED = 0
    DEVICE_DID_NOT_RESPOND = 1
    DEVICE_ERROR = 2
    DEVICE_LOCKED = 3
    PROTECTED_PLAYBACK_FAILED = 4
    INVALID_CASTING_SOURCE = 5
    UNKNOWN = 6

class CastingConnectionState(enum.IntEnum):
    DISCONNECTED = 0
    CONNECTED = 1
    RENDERING = 2
    DISCONNECTING = 3
    CONNECTING = 4

class CastingPlaybackTypes(enum.IntFlag):
    NONE = 0
    AUDIO = 0x1
    VIDEO = 0x2
    PICTURE = 0x4

Self = typing.TypeVar('Self')

class CastingConnection(winsdk.system.Object):
    source: typing.Optional[CastingSource]
    device: typing.Optional[CastingDevice]
    state: CastingConnectionState
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CastingConnection: ...
    def close(self) -> None: ...
    def disconnect_async(self) -> winsdk.windows.foundation.IAsyncOperation[CastingConnectionErrorStatus]: ...
    def request_start_casting_async(self, value: typing.Optional[CastingSource]) -> winsdk.windows.foundation.IAsyncOperation[CastingConnectionErrorStatus]: ...
    def add_error_occurred(self, handler: winsdk.windows.foundation.TypedEventHandler[CastingConnection, CastingConnectionErrorOccurredEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_error_occurred(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[CastingConnection, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CastingConnectionErrorOccurredEventArgs(winsdk.system.Object):
    error_status: CastingConnectionErrorStatus
    message: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CastingConnectionErrorOccurredEventArgs: ...

class CastingDevice(winsdk.system.Object):
    friendly_name: str
    icon: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]
    id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CastingDevice: ...
    def create_casting_connection(self) -> typing.Optional[CastingConnection]: ...
    @staticmethod
    def device_info_supports_casting_async(device: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @staticmethod
    def from_id_async(value: str) -> winsdk.windows.foundation.IAsyncOperation[CastingDevice]: ...
    @staticmethod
    def get_device_selector(type: CastingPlaybackTypes) -> str: ...
    @staticmethod
    def get_device_selector_from_casting_source_async(casting_source: typing.Optional[CastingSource]) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def get_supported_casting_playback_types_async(self) -> winsdk.windows.foundation.IAsyncOperation[CastingPlaybackTypes]: ...

class CastingDevicePicker(winsdk.system.Object):
    appearance: typing.Optional[winsdk.windows.devices.enumeration.DevicePickerAppearance]
    filter: typing.Optional[CastingDevicePickerFilter]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CastingDevicePicker: ...
    def __new__(cls: typing.Type[CastingDevicePicker]) -> CastingDevicePicker:...
    def hide(self) -> None: ...
    @typing.overload
    def show(self, selection: winsdk.windows.foundation.Rect) -> None: ...
    @typing.overload
    def show(self, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> None: ...
    def add_casting_device_picker_dismissed(self, handler: winsdk.windows.foundation.TypedEventHandler[CastingDevicePicker, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_casting_device_picker_dismissed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_casting_device_selected(self, handler: winsdk.windows.foundation.TypedEventHandler[CastingDevicePicker, CastingDeviceSelectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_casting_device_selected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CastingDevicePickerFilter(winsdk.system.Object):
    supports_video: winsdk.system.Boolean
    supports_pictures: winsdk.system.Boolean
    supports_audio: winsdk.system.Boolean
    supported_casting_sources: typing.Optional[winsdk.windows.foundation.collections.IVector[CastingSource]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CastingDevicePickerFilter: ...

class CastingDeviceSelectedEventArgs(winsdk.system.Object):
    selected_casting_device: typing.Optional[CastingDevice]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CastingDeviceSelectedEventArgs: ...

class CastingSource(winsdk.system.Object):
    preferred_source_uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CastingSource: ...

