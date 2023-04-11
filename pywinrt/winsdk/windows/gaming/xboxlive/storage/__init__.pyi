# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams
import winsdk.windows.system

class GameSaveErrorStatus(enum.IntEnum):
    OK = 0
    ABORT = -2147467260
    INVALID_CONTAINER_NAME = -2138898431
    NO_ACCESS = -2138898430
    OUT_OF_LOCAL_STORAGE = -2138898429
    USER_CANCELED = -2138898428
    UPDATE_TOO_BIG = -2138898427
    QUOTA_EXCEEDED = -2138898426
    PROVIDED_BUFFER_TOO_SMALL = -2138898425
    BLOB_NOT_FOUND = -2138898424
    NO_XBOX_LIVE_INFO = -2138898423
    CONTAINER_NOT_IN_SYNC = -2138898422
    CONTAINER_SYNC_FAILED = -2138898421
    USER_HAS_NO_XBOX_LIVE_INFO = -2138898420
    OBJECT_EXPIRED = -2138898419

Self = typing.TypeVar('Self')

class GameSaveBlobGetResult(winsdk.system.Object):
    status: GameSaveErrorStatus
    value: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.windows.storage.streams.IBuffer]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveBlobGetResult: ...

class GameSaveBlobInfo(winsdk.system.Object):
    name: str
    size: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveBlobInfo: ...

class GameSaveBlobInfoGetResult(winsdk.system.Object):
    status: GameSaveErrorStatus
    value: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GameSaveBlobInfo]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveBlobInfoGetResult: ...

class GameSaveBlobInfoQuery(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveBlobInfoQuery: ...
    @typing.overload
    def get_blob_info_async(self) -> winsdk.windows.foundation.IAsyncOperation[GameSaveBlobInfoGetResult]: ...
    @typing.overload
    def get_blob_info_async(self, start_index: winsdk.system.UInt32, max_number_of_items: winsdk.system.UInt32) -> winsdk.windows.foundation.IAsyncOperation[GameSaveBlobInfoGetResult]: ...
    def get_item_count_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.UInt32]: ...

class GameSaveContainer(winsdk.system.Object):
    name: str
    provider: typing.Optional[GameSaveProvider]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveContainer: ...
    def create_blob_info_query(self, blob_name_prefix: str) -> typing.Optional[GameSaveBlobInfoQuery]: ...
    def get_async(self, blobs_to_read: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[GameSaveBlobGetResult]: ...
    def read_async(self, blobs_to_read: winsdk.windows.foundation.collections.IMapView[str, winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[GameSaveOperationResult]: ...
    def submit_property_set_updates_async(self, blobs_to_write: typing.Optional[winsdk.windows.foundation.collections.IPropertySet], blobs_to_delete: typing.Iterable[str], display_name: str) -> winsdk.windows.foundation.IAsyncOperation[GameSaveOperationResult]: ...
    def submit_updates_async(self, blobs_to_write: winsdk.windows.foundation.collections.IMapView[str, winsdk.windows.storage.streams.IBuffer], blobs_to_delete: typing.Iterable[str], display_name: str) -> winsdk.windows.foundation.IAsyncOperation[GameSaveOperationResult]: ...

class GameSaveContainerInfo(winsdk.system.Object):
    display_name: str
    last_modified_time: datetime.datetime
    name: str
    needs_sync: winsdk.system.Boolean
    total_size: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveContainerInfo: ...

class GameSaveContainerInfoGetResult(winsdk.system.Object):
    status: GameSaveErrorStatus
    value: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GameSaveContainerInfo]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveContainerInfoGetResult: ...

class GameSaveContainerInfoQuery(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveContainerInfoQuery: ...
    @typing.overload
    def get_container_info_async(self) -> winsdk.windows.foundation.IAsyncOperation[GameSaveContainerInfoGetResult]: ...
    @typing.overload
    def get_container_info_async(self, start_index: winsdk.system.UInt32, max_number_of_items: winsdk.system.UInt32) -> winsdk.windows.foundation.IAsyncOperation[GameSaveContainerInfoGetResult]: ...
    def get_item_count_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.UInt32]: ...

class GameSaveOperationResult(winsdk.system.Object):
    status: GameSaveErrorStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveOperationResult: ...

class GameSaveProvider(winsdk.system.Object):
    containers_changed_since_last_sync: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveProvider: ...
    def create_container(self, name: str) -> typing.Optional[GameSaveContainer]: ...
    @typing.overload
    def create_container_info_query(self) -> typing.Optional[GameSaveContainerInfoQuery]: ...
    @typing.overload
    def create_container_info_query(self, container_name_prefix: str) -> typing.Optional[GameSaveContainerInfoQuery]: ...
    def delete_container_async(self, name: str) -> winsdk.windows.foundation.IAsyncOperation[GameSaveOperationResult]: ...
    @staticmethod
    def get_for_user_async(user: typing.Optional[winsdk.windows.system.User], service_config_id: str) -> winsdk.windows.foundation.IAsyncOperation[GameSaveProviderGetResult]: ...
    def get_remaining_bytes_in_quota_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Int64]: ...
    @staticmethod
    def get_sync_on_demand_for_user_async(user: typing.Optional[winsdk.windows.system.User], service_config_id: str) -> winsdk.windows.foundation.IAsyncOperation[GameSaveProviderGetResult]: ...

class GameSaveProviderGetResult(winsdk.system.Object):
    status: GameSaveErrorStatus
    value: typing.Optional[GameSaveProvider]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GameSaveProviderGetResult: ...

