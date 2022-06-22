# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.devices.humaninterfacedevice
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class GazeDeviceConfigurationStatePreview(enum.IntEnum):
    UNKNOWN = 0
    READY = 1
    CONFIGURING = 2
    SCREEN_SETUP_NEEDED = 3
    USER_CALIBRATION_NEEDED = 4

Self = typing.TypeVar('Self')

class GazeDevicePreview(_winrt.Object):
    can_track_eyes: _winrt.Boolean
    can_track_head: _winrt.Boolean
    configuration_state: GazeDeviceConfigurationStatePreview
    id: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeDevicePreview: ...
    def get_boolean_control_descriptions(self, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.devices.humaninterfacedevice.HidBooleanControlDescription]]: ...
    def get_numeric_control_descriptions(self, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.devices.humaninterfacedevice.HidNumericControlDescription]]: ...
    def request_calibration_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...

class GazeDeviceWatcherAddedPreviewEventArgs(_winrt.Object):
    device: typing.Optional[GazeDevicePreview]
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeDeviceWatcherAddedPreviewEventArgs: ...

class GazeDeviceWatcherPreview(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeDeviceWatcherPreview: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_added(self, handler: winsdk.windows.foundation.TypedEventHandler[GazeDeviceWatcherPreview, GazeDeviceWatcherAddedPreviewEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_added(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_enumeration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[GazeDeviceWatcherPreview, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enumeration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[GazeDeviceWatcherPreview, GazeDeviceWatcherRemovedPreviewEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_updated(self, handler: winsdk.windows.foundation.TypedEventHandler[GazeDeviceWatcherPreview, GazeDeviceWatcherUpdatedPreviewEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_updated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GazeDeviceWatcherRemovedPreviewEventArgs(_winrt.Object):
    device: typing.Optional[GazeDevicePreview]
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeDeviceWatcherRemovedPreviewEventArgs: ...

class GazeDeviceWatcherUpdatedPreviewEventArgs(_winrt.Object):
    device: typing.Optional[GazeDevicePreview]
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeDeviceWatcherUpdatedPreviewEventArgs: ...

class GazeEnteredPreviewEventArgs(_winrt.Object):
    handled: _winrt.Boolean
    current_point: typing.Optional[GazePointPreview]
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeEnteredPreviewEventArgs: ...

class GazeExitedPreviewEventArgs(_winrt.Object):
    handled: _winrt.Boolean
    current_point: typing.Optional[GazePointPreview]
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeExitedPreviewEventArgs: ...

class GazeInputSourcePreview(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeInputSourcePreview: ...
    @staticmethod
    def create_watcher() -> typing.Optional[GazeDeviceWatcherPreview]: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[GazeInputSourcePreview]: ...
    def add_gaze_entered(self, handler: winsdk.windows.foundation.TypedEventHandler[GazeInputSourcePreview, GazeEnteredPreviewEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_gaze_entered(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_gaze_exited(self, handler: winsdk.windows.foundation.TypedEventHandler[GazeInputSourcePreview, GazeExitedPreviewEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_gaze_exited(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_gaze_moved(self, handler: winsdk.windows.foundation.TypedEventHandler[GazeInputSourcePreview, GazeMovedPreviewEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_gaze_moved(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GazeMovedPreviewEventArgs(_winrt.Object):
    handled: _winrt.Boolean
    current_point: typing.Optional[GazePointPreview]
    @staticmethod
    def _from(obj: _winrt.Object) -> GazeMovedPreviewEventArgs: ...
    def get_intermediate_points(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[GazePointPreview]]: ...

class GazePointPreview(_winrt.Object):
    eye_gaze_position: typing.Optional[typing.Optional[winsdk.windows.foundation.Point]]
    head_gaze_position: typing.Optional[typing.Optional[winsdk.windows.foundation.Point]]
    hid_input_report: typing.Optional[winsdk.windows.devices.humaninterfacedevice.HidInputReport]
    source_device: typing.Optional[GazeDevicePreview]
    timestamp: _winrt.UInt64
    @staticmethod
    def _from(obj: _winrt.Object) -> GazePointPreview: ...

