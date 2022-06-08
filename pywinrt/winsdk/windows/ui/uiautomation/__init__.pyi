# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

Self = typing.TypeVar('Self')

class AutomationConnection(_winrt.Object):
    app_user_model_id: str
    executable_file_name: str
    is_remote_system: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AutomationConnection: ...

class AutomationConnectionBoundObject(_winrt.Object):
    connection: typing.Optional[AutomationConnection]
    @staticmethod
    def _from(obj: _winrt.Object) -> AutomationConnectionBoundObject: ...

class AutomationElement(_winrt.Object):
    app_user_model_id: str
    executable_file_name: str
    is_remote_system: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AutomationElement: ...

class AutomationTextRange(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> AutomationTextRange: ...

