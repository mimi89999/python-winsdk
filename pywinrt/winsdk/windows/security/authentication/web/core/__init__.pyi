# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.credentials
import winsdk.windows.system

class FindAllWebAccountsStatus(enum.IntEnum):
    SUCCESS = 0
    NOT_ALLOWED_BY_PROVIDER = 1
    NOT_SUPPORTED_BY_PROVIDER = 2
    PROVIDER_ERROR = 3

class WebTokenRequestPromptType(enum.IntEnum):
    DEFAULT = 0
    FORCE_AUTHENTICATION = 1

class WebTokenRequestStatus(enum.IntEnum):
    SUCCESS = 0
    USER_CANCEL = 1
    ACCOUNT_SWITCH = 2
    USER_INTERACTION_REQUIRED = 3
    ACCOUNT_PROVIDER_NOT_AVAILABLE = 4
    PROVIDER_ERROR = 5

Self = typing.TypeVar('Self')

class FindAllAccountsResult(winsdk.system.Object):
    accounts: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.security.credentials.WebAccount]]
    provider_error: typing.Optional[WebProviderError]
    status: FindAllWebAccountsStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FindAllAccountsResult: ...

class WebAccountEventArgs(winsdk.system.Object):
    account: typing.Optional[winsdk.windows.security.credentials.WebAccount]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebAccountEventArgs: ...

class WebAccountMonitor(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebAccountMonitor: ...
    def add_default_sign_in_account_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[WebAccountMonitor, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_default_sign_in_account_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[WebAccountMonitor, WebAccountEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_updated(self, handler: winsdk.windows.foundation.TypedEventHandler[WebAccountMonitor, WebAccountEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_updated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_account_picture_updated(self, handler: winsdk.windows.foundation.TypedEventHandler[WebAccountMonitor, WebAccountEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_account_picture_updated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebAuthenticationCoreManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebAuthenticationCoreManager: ...
    @staticmethod
    def create_web_account_monitor(web_accounts: typing.Iterable[winsdk.windows.security.credentials.WebAccount]) -> typing.Optional[WebAccountMonitor]: ...
    @staticmethod
    def find_account_async(provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider], web_account_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.credentials.WebAccount]: ...
    @typing.overload
    @staticmethod
    def find_account_provider_async(web_account_provider_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.credentials.WebAccountProvider]: ...
    @typing.overload
    @staticmethod
    def find_account_provider_async(web_account_provider_id: str, authority: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.credentials.WebAccountProvider]: ...
    @typing.overload
    @staticmethod
    def find_account_provider_async(web_account_provider_id: str, authority: str, user: typing.Optional[winsdk.windows.system.User]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.credentials.WebAccountProvider]: ...
    @typing.overload
    @staticmethod
    def find_all_accounts_async(provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider]) -> winsdk.windows.foundation.IAsyncOperation[FindAllAccountsResult]: ...
    @typing.overload
    @staticmethod
    def find_all_accounts_async(provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider], client_id: str) -> winsdk.windows.foundation.IAsyncOperation[FindAllAccountsResult]: ...
    @typing.overload
    @staticmethod
    def find_system_account_provider_async(web_account_provider_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.credentials.WebAccountProvider]: ...
    @typing.overload
    @staticmethod
    def find_system_account_provider_async(web_account_provider_id: str, authority: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.credentials.WebAccountProvider]: ...
    @typing.overload
    @staticmethod
    def find_system_account_provider_async(web_account_provider_id: str, authority: str, user: typing.Optional[winsdk.windows.system.User]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.credentials.WebAccountProvider]: ...
    @typing.overload
    @staticmethod
    def get_token_silently_async(request: typing.Optional[WebTokenRequest]) -> winsdk.windows.foundation.IAsyncOperation[WebTokenRequestResult]: ...
    @typing.overload
    @staticmethod
    def get_token_silently_async(request: typing.Optional[WebTokenRequest], web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount]) -> winsdk.windows.foundation.IAsyncOperation[WebTokenRequestResult]: ...
    @typing.overload
    @staticmethod
    def request_token_async(request: typing.Optional[WebTokenRequest]) -> winsdk.windows.foundation.IAsyncOperation[WebTokenRequestResult]: ...
    @typing.overload
    @staticmethod
    def request_token_async(request: typing.Optional[WebTokenRequest], web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount]) -> winsdk.windows.foundation.IAsyncOperation[WebTokenRequestResult]: ...

class WebProviderError(winsdk.system.Object):
    error_code: winsdk.system.UInt32
    error_message: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebProviderError: ...
    def __new__(cls: typing.Type[WebProviderError], error_code: winsdk.system.UInt32, error_message: str) -> WebProviderError:...

class WebTokenRequest(winsdk.system.Object):
    client_id: str
    prompt_type: WebTokenRequestPromptType
    properties: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    scope: str
    web_account_provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider]
    app_properties: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    correlation_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebTokenRequest: ...
    @typing.overload
    def __new__(cls: typing.Type[WebTokenRequest], provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider], scope: str, client_id: str) -> WebTokenRequest:...
    @typing.overload
    def __new__(cls: typing.Type[WebTokenRequest], provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider], scope: str, client_id: str, prompt_type: WebTokenRequestPromptType) -> WebTokenRequest:...
    @typing.overload
    def __new__(cls: typing.Type[WebTokenRequest], provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider]) -> WebTokenRequest:...
    @typing.overload
    def __new__(cls: typing.Type[WebTokenRequest], provider: typing.Optional[winsdk.windows.security.credentials.WebAccountProvider], scope: str) -> WebTokenRequest:...

class WebTokenRequestResult(winsdk.system.Object):
    response_data: typing.Optional[winsdk.windows.foundation.collections.IVectorView[WebTokenResponse]]
    response_error: typing.Optional[WebProviderError]
    response_status: WebTokenRequestStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebTokenRequestResult: ...
    def invalidate_cache_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class WebTokenResponse(winsdk.system.Object):
    properties: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    provider_error: typing.Optional[WebProviderError]
    token: str
    web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebTokenResponse: ...
    @typing.overload
    def __new__(cls: typing.Type[WebTokenResponse], token: str) -> WebTokenResponse:...
    @typing.overload
    def __new__(cls: typing.Type[WebTokenResponse], token: str, web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount]) -> WebTokenResponse:...
    @typing.overload
    def __new__(cls: typing.Type[WebTokenResponse], token: str, web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount], error: typing.Optional[WebProviderError]) -> WebTokenResponse:...
    @typing.overload
    def __new__(cls: typing.Type[WebTokenResponse]) -> WebTokenResponse:...

