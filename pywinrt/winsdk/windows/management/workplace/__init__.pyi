# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt

class MessagingSyncPolicy(enum.IntEnum):
    DISALLOWED = 0
    ALLOWED = 1
    REQUIRED = 2

Self = typing.TypeVar('Self')

class MdmPolicy(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> MdmPolicy: ...
    @staticmethod
    def get_messaging_sync_policy() -> MessagingSyncPolicy: ...
    @staticmethod
    def is_browser_allowed() -> _winrt.Boolean: ...
    @staticmethod
    def is_camera_allowed() -> _winrt.Boolean: ...
    @staticmethod
    def is_microsoft_account_allowed() -> _winrt.Boolean: ...
    @staticmethod
    def is_store_allowed() -> _winrt.Boolean: ...

class WorkplaceSettings(_winrt.Object):
    is_microsoft_account_optional: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> WorkplaceSettings: ...

