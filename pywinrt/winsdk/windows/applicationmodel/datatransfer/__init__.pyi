# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.enterprisedata
import winsdk.windows.storage
import winsdk.windows.storage.streams
import winsdk.windows.ui

class ClipboardHistoryItemsResultStatus(enum.IntEnum):
    SUCCESS = 0
    ACCESS_DENIED = 1
    CLIPBOARD_HISTORY_DISABLED = 2

class DataPackageOperation(enum.IntFlag):
    NONE = 0
    COPY = 0x1
    MOVE = 0x2
    LINK = 0x4

class SetHistoryItemAsContentStatus(enum.IntEnum):
    SUCCESS = 0
    ACCESS_DENIED = 1
    ITEM_DELETED = 2

class ShareUITheme(enum.IntEnum):
    DEFAULT = 0
    LIGHT = 1
    DARK = 2

Self = typing.TypeVar('Self')

class Clipboard(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> Clipboard: ...
    @staticmethod
    def clear() -> None: ...
    @staticmethod
    def clear_history() -> _winrt.Boolean: ...
    @staticmethod
    def delete_item_from_history(item: typing.Optional[ClipboardHistoryItem]) -> _winrt.Boolean: ...
    @staticmethod
    def flush() -> None: ...
    @staticmethod
    def get_content() -> typing.Optional[DataPackageView]: ...
    @staticmethod
    def get_history_items_async() -> winsdk.windows.foundation.IAsyncOperation[ClipboardHistoryItemsResult]: ...
    @staticmethod
    def is_history_enabled() -> _winrt.Boolean: ...
    @staticmethod
    def is_roaming_enabled() -> _winrt.Boolean: ...
    @staticmethod
    def set_content(content: typing.Optional[DataPackage]) -> None: ...
    @staticmethod
    def set_content_with_options(content: typing.Optional[DataPackage], options: typing.Optional[ClipboardContentOptions]) -> _winrt.Boolean: ...
    @staticmethod
    def set_history_item_as_content(item: typing.Optional[ClipboardHistoryItem]) -> SetHistoryItemAsContentStatus: ...
    @staticmethod
    def add_history_changed(handler: winsdk.windows.foundation.EventHandler[ClipboardHistoryChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_history_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_history_enabled_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_history_enabled_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_roaming_enabled_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_roaming_enabled_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_content_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_content_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ClipboardContentOptions(_winrt.Object):
    is_roamable: _winrt.Boolean
    is_allowed_in_history: _winrt.Boolean
    history_formats: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    roaming_formats: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ClipboardContentOptions: ...
    def __new__(cls: typing.Type[ClipboardContentOptions]) -> ClipboardContentOptions:...

class ClipboardHistoryChangedEventArgs(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ClipboardHistoryChangedEventArgs: ...

class ClipboardHistoryItem(_winrt.Object):
    content: typing.Optional[DataPackageView]
    id: str
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> ClipboardHistoryItem: ...

class ClipboardHistoryItemsResult(_winrt.Object):
    items: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ClipboardHistoryItem]]
    status: ClipboardHistoryItemsResultStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> ClipboardHistoryItemsResult: ...

class DataPackage(_winrt.Object):
    requested_operation: DataPackageOperation
    properties: typing.Optional[DataPackagePropertySet]
    resource_map: typing.Optional[winsdk.windows.foundation.collections.IMap[str, winsdk.windows.storage.streams.RandomAccessStreamReference]]
    @staticmethod
    def _from(obj: _winrt.Object) -> DataPackage: ...
    def __new__(cls: typing.Type[DataPackage]) -> DataPackage:...
    def get_view(self) -> typing.Optional[DataPackageView]: ...
    def set_application_link(self, value: typing.Optional[winsdk.windows.foundation.Uri]) -> None: ...
    def set_bitmap(self, value: typing.Optional[winsdk.windows.storage.streams.RandomAccessStreamReference]) -> None: ...
    def set_data(self, format_id: str, value: typing.Optional[_winrt.Object]) -> None: ...
    def set_data_provider(self, format_id: str, delay_renderer: typing.Optional[DataProviderHandler]) -> None: ...
    def set_html_format(self, value: str) -> None: ...
    def set_rtf(self, value: str) -> None: ...
    @typing.overload
    def set_storage_items(self, value: typing.Iterable[winsdk.windows.storage.IStorageItem]) -> None: ...
    @typing.overload
    def set_storage_items(self, value: typing.Iterable[winsdk.windows.storage.IStorageItem], read_only: _winrt.Boolean) -> None: ...
    def set_text(self, value: str) -> None: ...
    def set_uri(self, value: typing.Optional[winsdk.windows.foundation.Uri]) -> None: ...
    def set_web_link(self, value: typing.Optional[winsdk.windows.foundation.Uri]) -> None: ...
    def add_destroyed(self, handler: winsdk.windows.foundation.TypedEventHandler[DataPackage, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_destroyed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_operation_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[DataPackage, OperationCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_operation_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_share_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[DataPackage, ShareCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_share_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_share_canceled(self, handler: winsdk.windows.foundation.TypedEventHandler[DataPackage, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_share_canceled(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DataPackagePropertySet(_winrt.Object, typing.MutableMapping[str, _winrt.Object]):
    title: str
    thumbnail: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    description: str
    application_name: str
    application_listing_uri: typing.Optional[winsdk.windows.foundation.Uri]
    file_types: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    square30x30_logo: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    package_family_name: str
    logo_background_color: winsdk.windows.ui.Color
    content_source_web_link: typing.Optional[winsdk.windows.foundation.Uri]
    content_source_application_link: typing.Optional[winsdk.windows.foundation.Uri]
    enterprise_id: str
    content_source_user_activity_json: str
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[str]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: str, value: _winrt.Object) -> None: ...
    def __getitem__(self, key: str) -> _winrt.Object: ...
    def __delitem__(self, key: str) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> DataPackagePropertySet: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def insert(self, key: str, value: typing.Optional[_winrt.Object]) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[_winrt.Object]: ...
    def remove(self, key: str) -> None: ...

class DataPackagePropertySetView(_winrt.Object, typing.Mapping[str, _winrt.Object]):
    application_listing_uri: typing.Optional[winsdk.windows.foundation.Uri]
    application_name: str
    description: str
    file_types: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    thumbnail: typing.Optional[winsdk.windows.storage.streams.RandomAccessStreamReference]
    title: str
    content_source_application_link: typing.Optional[winsdk.windows.foundation.Uri]
    content_source_web_link: typing.Optional[winsdk.windows.foundation.Uri]
    logo_background_color: winsdk.windows.ui.Color
    package_family_name: str
    square30x30_logo: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    enterprise_id: str
    content_source_user_activity_json: str
    is_from_roaming_clipboard: _winrt.Boolean
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[str]: ...
    def __contains__(self, key: object) -> bool:...
    def __getitem__(self, key: str) -> _winrt.Object: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> DataPackagePropertySetView: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[_winrt.Object]: ...
    def split(self) -> typing.Tuple[typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]], typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]]: ...

class DataPackageView(_winrt.Object):
    available_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    properties: typing.Optional[DataPackagePropertySetView]
    requested_operation: DataPackageOperation
    @staticmethod
    def _from(obj: _winrt.Object) -> DataPackageView: ...
    def contains(self, format_id: str) -> _winrt.Boolean: ...
    def get_application_link_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.Uri]: ...
    def get_bitmap_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.RandomAccessStreamReference]: ...
    def get_data_async(self, format_id: str) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Object]: ...
    def get_html_format_async(self) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def get_resource_map_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMapView[str, winsdk.windows.storage.streams.RandomAccessStreamReference]]: ...
    def get_rtf_async(self) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def get_storage_items_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.storage.IStorageItem]]: ...
    @typing.overload
    def get_text_async(self) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def get_text_async(self, format_id: str) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def get_uri_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.Uri]: ...
    def get_web_link_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.Uri]: ...
    def report_operation_completed(self, value: DataPackageOperation) -> None: ...
    @typing.overload
    def request_access_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.enterprisedata.ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    def request_access_async(self, enterprise_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.enterprisedata.ProtectionPolicyEvaluationResult]: ...
    def set_accepted_format_id(self, format_id: str) -> None: ...
    def unlock_and_assume_enterprise_identity(self) -> winsdk.windows.security.enterprisedata.ProtectionPolicyEvaluationResult: ...

class DataProviderDeferral(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> DataProviderDeferral: ...
    def complete(self) -> None: ...

class DataProviderRequest(_winrt.Object):
    deadline: datetime.datetime
    format_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> DataProviderRequest: ...
    def get_deferral(self) -> typing.Optional[DataProviderDeferral]: ...
    def set_data(self, value: typing.Optional[_winrt.Object]) -> None: ...

class DataRequest(_winrt.Object):
    data: typing.Optional[DataPackage]
    deadline: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> DataRequest: ...
    def fail_with_display_text(self, value: str) -> None: ...
    def get_deferral(self) -> typing.Optional[DataRequestDeferral]: ...

class DataRequestDeferral(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> DataRequestDeferral: ...
    def complete(self) -> None: ...

class DataRequestedEventArgs(_winrt.Object):
    request: typing.Optional[DataRequest]
    @staticmethod
    def _from(obj: _winrt.Object) -> DataRequestedEventArgs: ...

class DataTransferManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> DataTransferManager: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[DataTransferManager]: ...
    @staticmethod
    def is_supported() -> _winrt.Boolean: ...
    @typing.overload
    @staticmethod
    def show_share_u_i() -> None: ...
    @typing.overload
    @staticmethod
    def show_share_u_i(options: typing.Optional[ShareUIOptions]) -> None: ...
    def add_data_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[DataTransferManager, DataRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_data_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_target_application_chosen(self, handler: winsdk.windows.foundation.TypedEventHandler[DataTransferManager, TargetApplicationChosenEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_target_application_chosen(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_share_providers_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[DataTransferManager, ShareProvidersRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_share_providers_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HtmlFormatHelper(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> HtmlFormatHelper: ...
    @staticmethod
    def create_html_format(html_fragment: str) -> str: ...
    @staticmethod
    def get_static_fragment(html_format: str) -> str: ...

class OperationCompletedEventArgs(_winrt.Object):
    operation: DataPackageOperation
    accepted_format_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> OperationCompletedEventArgs: ...

class ShareCompletedEventArgs(_winrt.Object):
    share_target: typing.Optional[ShareTargetInfo]
    @staticmethod
    def _from(obj: _winrt.Object) -> ShareCompletedEventArgs: ...

class ShareProvider(_winrt.Object):
    tag: typing.Optional[_winrt.Object]
    background_color: winsdk.windows.ui.Color
    display_icon: typing.Optional[winsdk.windows.storage.streams.RandomAccessStreamReference]
    title: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ShareProvider: ...
    def __new__(cls: typing.Type[ShareProvider], title: str, display_icon: typing.Optional[winsdk.windows.storage.streams.RandomAccessStreamReference], background_color: winsdk.windows.ui.Color, handler: typing.Optional[ShareProviderHandler]) -> ShareProvider:...

class ShareProviderOperation(_winrt.Object):
    data: typing.Optional[DataPackageView]
    provider: typing.Optional[ShareProvider]
    @staticmethod
    def _from(obj: _winrt.Object) -> ShareProviderOperation: ...
    def report_completed(self) -> None: ...

class ShareProvidersRequestedEventArgs(_winrt.Object):
    data: typing.Optional[DataPackageView]
    providers: typing.Optional[winsdk.windows.foundation.collections.IVector[ShareProvider]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ShareProvidersRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class ShareTargetInfo(_winrt.Object):
    app_user_model_id: str
    share_provider: typing.Optional[ShareProvider]
    @staticmethod
    def _from(obj: _winrt.Object) -> ShareTargetInfo: ...

class ShareUIOptions(_winrt.Object):
    theme: ShareUITheme
    selection_rect: typing.Optional[typing.Optional[winsdk.windows.foundation.Rect]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ShareUIOptions: ...
    def __new__(cls: typing.Type[ShareUIOptions]) -> ShareUIOptions:...

class SharedStorageAccessManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> SharedStorageAccessManager: ...
    @staticmethod
    def add_file(file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> str: ...
    @staticmethod
    def redeem_token_for_file_async(token: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...
    @staticmethod
    def remove_file(token: str) -> None: ...

class StandardDataFormats(_winrt.Object):
    bitmap: str
    html: str
    rtf: str
    storage_items: str
    text: str
    uri: str
    application_link: str
    web_link: str
    user_activity_json_array: str
    @staticmethod
    def _from(obj: _winrt.Object) -> StandardDataFormats: ...

class TargetApplicationChosenEventArgs(_winrt.Object):
    application_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> TargetApplicationChosenEventArgs: ...

DataProviderHandler = typing.Callable[[typing.Optional[DataProviderRequest]], None]

ShareProviderHandler = typing.Callable[[typing.Optional[ShareProviderOperation]], None]

