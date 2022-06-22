# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.system

Self = typing.TypeVar('Self')

class AppBroadcastingMonitor(_winrt.Object):
    is_current_app_broadcasting: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AppBroadcastingMonitor: ...
    def __new__(cls: typing.Type[AppBroadcastingMonitor]) -> AppBroadcastingMonitor:...
    def add_is_current_app_broadcasting_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AppBroadcastingMonitor, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_current_app_broadcasting_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AppBroadcastingStatus(_winrt.Object):
    can_start_broadcast: _winrt.Boolean
    details: typing.Optional[AppBroadcastingStatusDetails]
    @staticmethod
    def _from(obj: _winrt.Object) -> AppBroadcastingStatus: ...

class AppBroadcastingStatusDetails(_winrt.Object):
    is_any_app_broadcasting: _winrt.Boolean
    is_app_inactive: _winrt.Boolean
    is_blocked_for_app: _winrt.Boolean
    is_capture_resource_unavailable: _winrt.Boolean
    is_disabled_by_system: _winrt.Boolean
    is_disabled_by_user: _winrt.Boolean
    is_game_stream_in_progress: _winrt.Boolean
    is_gpu_constrained: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AppBroadcastingStatusDetails: ...

class AppBroadcastingUI(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> AppBroadcastingUI: ...
    @staticmethod
    def get_default() -> typing.Optional[AppBroadcastingUI]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[AppBroadcastingUI]: ...
    def get_status(self) -> typing.Optional[AppBroadcastingStatus]: ...
    def show_broadcast_u_i(self) -> None: ...

