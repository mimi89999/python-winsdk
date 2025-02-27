# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.system

Self = typing.TypeVar('Self')

class AppBroadcastingMonitor(winsdk.system.Object):
    is_current_app_broadcasting: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppBroadcastingMonitor: ...
    def __new__(cls: typing.Type[AppBroadcastingMonitor]) -> AppBroadcastingMonitor:...
    def add_is_current_app_broadcasting_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AppBroadcastingMonitor, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_current_app_broadcasting_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AppBroadcastingStatus(winsdk.system.Object):
    can_start_broadcast: winsdk.system.Boolean
    details: typing.Optional[AppBroadcastingStatusDetails]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppBroadcastingStatus: ...

class AppBroadcastingStatusDetails(winsdk.system.Object):
    is_any_app_broadcasting: winsdk.system.Boolean
    is_app_inactive: winsdk.system.Boolean
    is_blocked_for_app: winsdk.system.Boolean
    is_capture_resource_unavailable: winsdk.system.Boolean
    is_disabled_by_system: winsdk.system.Boolean
    is_disabled_by_user: winsdk.system.Boolean
    is_game_stream_in_progress: winsdk.system.Boolean
    is_gpu_constrained: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppBroadcastingStatusDetails: ...

class AppBroadcastingUI(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppBroadcastingUI: ...
    @staticmethod
    def get_default() -> typing.Optional[AppBroadcastingUI]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[AppBroadcastingUI]: ...
    def get_status(self) -> typing.Optional[AppBroadcastingStatus]: ...
    def show_broadcast_u_i(self) -> None: ...

