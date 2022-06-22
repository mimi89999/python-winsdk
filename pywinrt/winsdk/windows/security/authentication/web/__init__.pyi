# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class TokenBindingKeyType(enum.IntEnum):
    RSA2048 = 0
    ECDSA_P256 = 1
    ANY_EXISTING = 2

class WebAuthenticationOptions(enum.IntFlag):
    NONE = 0
    SILENT_MODE = 0x1
    USE_TITLE = 0x2
    USE_HTTP_POST = 0x4
    USE_CORPORATE_NETWORK = 0x8

class WebAuthenticationStatus(enum.IntEnum):
    SUCCESS = 0
    USER_CANCEL = 1
    ERROR_HTTP = 2

Self = typing.TypeVar('Self')

class WebAuthenticationBroker(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> WebAuthenticationBroker: ...
    @typing.overload
    @staticmethod
    def authenticate_and_continue(request_uri: typing.Optional[winsdk.windows.foundation.Uri]) -> None: ...
    @typing.overload
    @staticmethod
    def authenticate_and_continue(request_uri: typing.Optional[winsdk.windows.foundation.Uri], callback_uri: typing.Optional[winsdk.windows.foundation.Uri]) -> None: ...
    @typing.overload
    @staticmethod
    def authenticate_and_continue(request_uri: typing.Optional[winsdk.windows.foundation.Uri], callback_uri: typing.Optional[winsdk.windows.foundation.Uri], continuation_data: typing.Optional[winsdk.windows.foundation.collections.ValueSet], options: WebAuthenticationOptions) -> None: ...
    @typing.overload
    @staticmethod
    def authenticate_async(options: WebAuthenticationOptions, request_uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperation[WebAuthenticationResult]: ...
    @typing.overload
    @staticmethod
    def authenticate_async(options: WebAuthenticationOptions, request_uri: typing.Optional[winsdk.windows.foundation.Uri], callback_uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperation[WebAuthenticationResult]: ...
    @typing.overload
    @staticmethod
    def authenticate_silently_async(request_uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperation[WebAuthenticationResult]: ...
    @typing.overload
    @staticmethod
    def authenticate_silently_async(request_uri: typing.Optional[winsdk.windows.foundation.Uri], options: WebAuthenticationOptions) -> winsdk.windows.foundation.IAsyncOperation[WebAuthenticationResult]: ...
    @staticmethod
    def get_current_application_callback_uri() -> typing.Optional[winsdk.windows.foundation.Uri]: ...

class WebAuthenticationResult(_winrt.Object):
    response_data: str
    response_error_detail: _winrt.UInt32
    response_status: WebAuthenticationStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> WebAuthenticationResult: ...

