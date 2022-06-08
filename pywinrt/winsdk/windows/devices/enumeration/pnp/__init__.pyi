# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class PnpObjectType(enum.IntEnum):
    UNKNOWN = 0
    DEVICE_INTERFACE = 1
    DEVICE_CONTAINER = 2
    DEVICE = 3
    DEVICE_INTERFACE_CLASS = 4
    ASSOCIATION_ENDPOINT = 5
    ASSOCIATION_ENDPOINT_CONTAINER = 6
    ASSOCIATION_ENDPOINT_SERVICE = 7
    DEVICE_PANEL = 8

Self = typing.TypeVar('Self')

class PnpObject(_winrt.Object):
    id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    type: PnpObjectType
    @staticmethod
    def _from(obj: _winrt.Object) -> PnpObject: ...
    @staticmethod
    def create_from_id_async(type: PnpObjectType, id: str, requested_properties: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[PnpObject]: ...
    @typing.overload
    @staticmethod
    def create_watcher(type: PnpObjectType, requested_properties: typing.Iterable[str]) -> typing.Optional[PnpObjectWatcher]: ...
    @typing.overload
    @staticmethod
    def create_watcher(type: PnpObjectType, requested_properties: typing.Iterable[str], aqs_filter: str) -> typing.Optional[PnpObjectWatcher]: ...
    @typing.overload
    @staticmethod
    def find_all_async(type: PnpObjectType, requested_properties: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[PnpObjectCollection]: ...
    @typing.overload
    @staticmethod
    def find_all_async(type: PnpObjectType, requested_properties: typing.Iterable[str], aqs_filter: str) -> winsdk.windows.foundation.IAsyncOperation[PnpObjectCollection]: ...
    def update(self, update_info: typing.Optional[PnpObjectUpdate]) -> None: ...

class PnpObjectCollection(_winrt.Object, typing.Sequence[PnpObject]):
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> PnpObject: ...
    @typing.overload
    def __getitem__(self, index: slice) -> typing.Sequence[PnpObject]: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PnpObjectCollection: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[PnpObject]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[PnpObject]: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[PnpObject]]: ...
    def index_of(self, value: typing.Optional[PnpObject]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...

class PnpObjectUpdate(_winrt.Object):
    id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    type: PnpObjectType
    @staticmethod
    def _from(obj: _winrt.Object) -> PnpObjectUpdate: ...

class PnpObjectWatcher(_winrt.Object):
    status: winsdk.windows.devices.enumeration.DeviceWatcherStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> PnpObjectWatcher: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_added(self, handler: winsdk.windows.foundation.TypedEventHandler[PnpObjectWatcher, PnpObject]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_added(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_enumeration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[PnpObjectWatcher, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enumeration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[PnpObjectWatcher, PnpObjectUpdate]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stopped(self, handler: winsdk.windows.foundation.TypedEventHandler[PnpObjectWatcher, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stopped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_updated(self, handler: winsdk.windows.foundation.TypedEventHandler[PnpObjectWatcher, PnpObjectUpdate]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_updated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

