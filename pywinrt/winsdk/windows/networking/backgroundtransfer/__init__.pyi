# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.background
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.credentials
import winsdk.windows.storage
import winsdk.windows.storage.streams
import winsdk.windows.ui.notifications
import winsdk.windows.web

class BackgroundTransferBehavior(enum.IntEnum):
    PARALLEL = 0
    SERIALIZED = 1

class BackgroundTransferCostPolicy(enum.IntEnum):
    DEFAULT = 0
    UNRESTRICTED_ONLY = 1
    ALWAYS = 2

class BackgroundTransferPriority(enum.IntEnum):
    DEFAULT = 0
    HIGH = 1
    LOW = 2

class BackgroundTransferStatus(enum.IntEnum):
    IDLE = 0
    RUNNING = 1
    PAUSED_BY_APPLICATION = 2
    PAUSED_COSTED_NETWORK = 3
    PAUSED_NO_NETWORK = 4
    COMPLETED = 5
    CANCELED = 6
    ERROR = 7
    PAUSED_RECOVERABLE_WEB_ERROR_STATUS = 8
    PAUSED_SYSTEM_POLICY = 32

Self = typing.TypeVar('Self')

class BackgroundDownloadProgress:
    bytes_received: winsdk.system.UInt64
    total_bytes_to_receive: winsdk.system.UInt64
    status: BackgroundTransferStatus
    has_response_changed: winsdk.system.Boolean
    has_restarted: winsdk.system.Boolean
    def __new__(cls: typing.Type[BackgroundDownloadProgress], bytes_received: winsdk.system.UInt64, total_bytes_to_receive: winsdk.system.UInt64, status: BackgroundTransferStatus, has_response_changed: winsdk.system.Boolean, has_restarted: winsdk.system.Boolean) -> BackgroundDownloadProgress: ...

class BackgroundTransferFileRange:
    offset: winsdk.system.UInt64
    length: winsdk.system.UInt64
    def __new__(cls: typing.Type[BackgroundTransferFileRange], offset: winsdk.system.UInt64, length: winsdk.system.UInt64) -> BackgroundTransferFileRange: ...

class BackgroundUploadProgress:
    bytes_received: winsdk.system.UInt64
    bytes_sent: winsdk.system.UInt64
    total_bytes_to_receive: winsdk.system.UInt64
    total_bytes_to_send: winsdk.system.UInt64
    status: BackgroundTransferStatus
    has_response_changed: winsdk.system.Boolean
    has_restarted: winsdk.system.Boolean
    def __new__(cls: typing.Type[BackgroundUploadProgress], bytes_received: winsdk.system.UInt64, bytes_sent: winsdk.system.UInt64, total_bytes_to_receive: winsdk.system.UInt64, total_bytes_to_send: winsdk.system.UInt64, status: BackgroundTransferStatus, has_response_changed: winsdk.system.Boolean, has_restarted: winsdk.system.Boolean) -> BackgroundUploadProgress: ...

class BackgroundDownloader(winsdk.system.Object):
    failure_toast_notification: typing.Optional[winsdk.windows.ui.notifications.ToastNotification]
    success_tile_notification: typing.Optional[winsdk.windows.ui.notifications.TileNotification]
    success_toast_notification: typing.Optional[winsdk.windows.ui.notifications.ToastNotification]
    transfer_group: typing.Optional[BackgroundTransferGroup]
    failure_tile_notification: typing.Optional[winsdk.windows.ui.notifications.TileNotification]
    completion_group: typing.Optional[BackgroundTransferCompletionGroup]
    cost_policy: BackgroundTransferCostPolicy
    group: str
    method: str
    proxy_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    server_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundDownloader: ...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundDownloader], completion_group: typing.Optional[BackgroundTransferCompletionGroup]) -> BackgroundDownloader:...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundDownloader]) -> BackgroundDownloader:...
    @typing.overload
    def create_download(self, uri: typing.Optional[winsdk.windows.foundation.Uri], result_file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[DownloadOperation]: ...
    @typing.overload
    def create_download(self, uri: typing.Optional[winsdk.windows.foundation.Uri], result_file: typing.Optional[winsdk.windows.storage.IStorageFile], request_body_file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[DownloadOperation]: ...
    def create_download_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], result_file: typing.Optional[winsdk.windows.storage.IStorageFile], request_body_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncOperation[DownloadOperation]: ...
    @typing.overload
    @staticmethod
    def get_current_downloads_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[DownloadOperation]]: ...
    @typing.overload
    @staticmethod
    def get_current_downloads_async(group: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[DownloadOperation]]: ...
    @staticmethod
    def get_current_downloads_for_transfer_group_async(group: typing.Optional[BackgroundTransferGroup]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[DownloadOperation]]: ...
    @staticmethod
    def request_unconstrained_downloads_async(operations: typing.Iterable[DownloadOperation]) -> winsdk.windows.foundation.IAsyncOperation[UnconstrainedTransferRequestResult]: ...
    def set_request_header(self, header_name: str, header_value: str) -> None: ...

class BackgroundTransferCompletionGroup(winsdk.system.Object):
    is_enabled: winsdk.system.Boolean
    trigger: typing.Optional[winsdk.windows.applicationmodel.background.IBackgroundTrigger]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTransferCompletionGroup: ...
    def __new__(cls: typing.Type[BackgroundTransferCompletionGroup]) -> BackgroundTransferCompletionGroup:...
    def enable(self) -> None: ...

class BackgroundTransferCompletionGroupTriggerDetails(winsdk.system.Object):
    downloads: typing.Optional[winsdk.windows.foundation.collections.IVectorView[DownloadOperation]]
    uploads: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UploadOperation]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTransferCompletionGroupTriggerDetails: ...

class BackgroundTransferContentPart(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTransferContentPart: ...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundTransferContentPart], name: str) -> BackgroundTransferContentPart:...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundTransferContentPart], name: str, file_name: str) -> BackgroundTransferContentPart:...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundTransferContentPart]) -> BackgroundTransferContentPart:...
    def set_file(self, value: typing.Optional[winsdk.windows.storage.IStorageFile]) -> None: ...
    def set_header(self, header_name: str, header_value: str) -> None: ...
    def set_text(self, value: str) -> None: ...

class BackgroundTransferError(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTransferError: ...
    @staticmethod
    def get_status(hresult: winsdk.system.Int32) -> winsdk.windows.web.WebErrorStatus: ...

class BackgroundTransferGroup(winsdk.system.Object):
    transfer_behavior: BackgroundTransferBehavior
    name: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTransferGroup: ...
    @staticmethod
    def create_group(name: str) -> typing.Optional[BackgroundTransferGroup]: ...

class BackgroundTransferRangesDownloadedEventArgs(winsdk.system.Object):
    added_ranges: typing.Optional[winsdk.windows.foundation.collections.IVector[BackgroundTransferFileRange]]
    was_download_restarted: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTransferRangesDownloadedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BackgroundUploader(winsdk.system.Object):
    server_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    proxy_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    method: str
    group: str
    cost_policy: BackgroundTransferCostPolicy
    failure_tile_notification: typing.Optional[winsdk.windows.ui.notifications.TileNotification]
    transfer_group: typing.Optional[BackgroundTransferGroup]
    success_toast_notification: typing.Optional[winsdk.windows.ui.notifications.ToastNotification]
    success_tile_notification: typing.Optional[winsdk.windows.ui.notifications.TileNotification]
    failure_toast_notification: typing.Optional[winsdk.windows.ui.notifications.ToastNotification]
    completion_group: typing.Optional[BackgroundTransferCompletionGroup]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundUploader: ...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundUploader], completion_group: typing.Optional[BackgroundTransferCompletionGroup]) -> BackgroundUploader:...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundUploader]) -> BackgroundUploader:...
    def create_upload(self, uri: typing.Optional[winsdk.windows.foundation.Uri], source_file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[UploadOperation]: ...
    @typing.overload
    def create_upload_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], parts: typing.Iterable[BackgroundTransferContentPart]) -> winsdk.windows.foundation.IAsyncOperation[UploadOperation]: ...
    @typing.overload
    def create_upload_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], parts: typing.Iterable[BackgroundTransferContentPart], sub_type: str) -> winsdk.windows.foundation.IAsyncOperation[UploadOperation]: ...
    @typing.overload
    def create_upload_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], parts: typing.Iterable[BackgroundTransferContentPart], sub_type: str, boundary: str) -> winsdk.windows.foundation.IAsyncOperation[UploadOperation]: ...
    def create_upload_from_stream_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], source_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncOperation[UploadOperation]: ...
    @typing.overload
    @staticmethod
    def get_current_uploads_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[UploadOperation]]: ...
    @typing.overload
    @staticmethod
    def get_current_uploads_async(group: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[UploadOperation]]: ...
    @staticmethod
    def get_current_uploads_for_transfer_group_async(group: typing.Optional[BackgroundTransferGroup]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[UploadOperation]]: ...
    @staticmethod
    def request_unconstrained_uploads_async(operations: typing.Iterable[UploadOperation]) -> winsdk.windows.foundation.IAsyncOperation[UnconstrainedTransferRequestResult]: ...
    def set_request_header(self, header_name: str, header_value: str) -> None: ...

class ContentPrefetcher(winsdk.system.Object):
    indirect_content_uri: typing.ClassVar[typing.Optional[winsdk.windows.foundation.Uri]]
    content_uris: typing.ClassVar[typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.foundation.Uri]]]
    last_successful_prefetch_time: typing.ClassVar[typing.Optional[typing.Optional[datetime.datetime]]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ContentPrefetcher: ...

class DownloadOperation(winsdk.system.Object):
    cost_policy: BackgroundTransferCostPolicy
    requested_uri: typing.Optional[winsdk.windows.foundation.Uri]
    method: str
    group: str
    guid: winsdk.system.Guid
    priority: BackgroundTransferPriority
    progress: BackgroundDownloadProgress
    result_file: typing.Optional[winsdk.windows.storage.IStorageFile]
    transfer_group: typing.Optional[BackgroundTransferGroup]
    is_random_access_required: winsdk.system.Boolean
    current_web_error_status: typing.Optional[typing.Optional[winsdk.windows.web.WebErrorStatus]]
    recoverable_web_error_statuses: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.web.WebErrorStatus]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DownloadOperation: ...
    def attach_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[DownloadOperation, DownloadOperation]: ...
    def get_downloaded_ranges(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[BackgroundTransferFileRange]]: ...
    def get_response_information(self) -> typing.Optional[ResponseInformation]: ...
    def get_result_random_access_stream_reference(self) -> typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]: ...
    def get_result_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...
    def make_current_in_transfer_group(self) -> None: ...
    def pause(self) -> None: ...
    def remove_request_header(self, header_name: str) -> None: ...
    def resume(self) -> None: ...
    def set_request_header(self, header_name: str, header_value: str) -> None: ...
    def start_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[DownloadOperation, DownloadOperation]: ...
    def add_ranges_downloaded(self, event_handler: winsdk.windows.foundation.TypedEventHandler[DownloadOperation, BackgroundTransferRangesDownloadedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_ranges_downloaded(self, event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ResponseInformation(winsdk.system.Object):
    actual_uri: typing.Optional[winsdk.windows.foundation.Uri]
    headers: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, str]]
    is_resumable: winsdk.system.Boolean
    status_code: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ResponseInformation: ...

class UnconstrainedTransferRequestResult(winsdk.system.Object):
    is_unconstrained: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UnconstrainedTransferRequestResult: ...

class UploadOperation(winsdk.system.Object):
    cost_policy: BackgroundTransferCostPolicy
    group: str
    guid: winsdk.system.Guid
    method: str
    requested_uri: typing.Optional[winsdk.windows.foundation.Uri]
    priority: BackgroundTransferPriority
    progress: BackgroundUploadProgress
    source_file: typing.Optional[winsdk.windows.storage.IStorageFile]
    transfer_group: typing.Optional[BackgroundTransferGroup]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UploadOperation: ...
    def attach_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[UploadOperation, UploadOperation]: ...
    def get_response_information(self) -> typing.Optional[ResponseInformation]: ...
    def get_result_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...
    def make_current_in_transfer_group(self) -> None: ...
    def remove_request_header(self, header_name: str) -> None: ...
    def set_request_header(self, header_name: str, header_value: str) -> None: ...
    def start_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[UploadOperation, UploadOperation]: ...

class IBackgroundTransferBase(winsdk.system.Object):
    cost_policy: BackgroundTransferCostPolicy
    group: str
    method: str
    proxy_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    server_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTransferBase: ...
    def set_request_header(self, header_name: str, header_value: str) -> None: ...

class IBackgroundTransferContentPartFactory(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTransferContentPartFactory: ...
    def create_with_name(self, name: str) -> typing.Optional[BackgroundTransferContentPart]: ...
    def create_with_name_and_file_name(self, name: str, file_name: str) -> typing.Optional[BackgroundTransferContentPart]: ...

class IBackgroundTransferOperation(winsdk.system.Object):
    cost_policy: BackgroundTransferCostPolicy
    group: str
    guid: winsdk.system.Guid
    method: str
    requested_uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTransferOperation: ...
    def get_response_information(self) -> typing.Optional[ResponseInformation]: ...
    def get_result_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...

class IBackgroundTransferOperationPriority(winsdk.system.Object):
    priority: BackgroundTransferPriority
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTransferOperationPriority: ...

