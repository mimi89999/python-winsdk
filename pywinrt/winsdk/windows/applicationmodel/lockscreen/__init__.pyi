# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams

Self = typing.TypeVar('Self')

class LockApplicationHost(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LockApplicationHost: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[LockApplicationHost]: ...
    def request_unlock(self) -> None: ...
    def add_unlocking(self, handler: winsdk.windows.foundation.TypedEventHandler[LockApplicationHost, LockScreenUnlockingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_unlocking(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class LockScreenBadge(winsdk.system.Object):
    automation_name: str
    glyph: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]
    logo: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]
    number: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LockScreenBadge: ...
    def launch_app(self) -> None: ...

class LockScreenInfo(winsdk.system.Object):
    alarm_icon: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]
    badges: typing.Optional[winsdk.windows.foundation.collections.IVectorView[LockScreenBadge]]
    detail_text: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    lock_screen_image: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LockScreenInfo: ...
    def add_alarm_icon_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[LockScreenInfo, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_alarm_icon_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_badges_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[LockScreenInfo, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_badges_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_detail_text_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[LockScreenInfo, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_detail_text_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_lock_screen_image_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[LockScreenInfo, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_lock_screen_image_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class LockScreenUnlockingDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LockScreenUnlockingDeferral: ...
    def complete(self) -> None: ...

class LockScreenUnlockingEventArgs(winsdk.system.Object):
    deadline: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LockScreenUnlockingEventArgs: ...
    def get_deferral(self) -> typing.Optional[LockScreenUnlockingDeferral]: ...

