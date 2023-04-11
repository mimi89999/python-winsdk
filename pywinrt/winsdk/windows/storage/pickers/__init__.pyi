# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage
import winsdk.windows.system

class PickerLocationId(enum.IntEnum):
    DOCUMENTS_LIBRARY = 0
    COMPUTER_FOLDER = 1
    DESKTOP = 2
    DOWNLOADS = 3
    HOME_GROUP = 4
    MUSIC_LIBRARY = 5
    PICTURES_LIBRARY = 6
    VIDEOS_LIBRARY = 7
    OBJECTS3_D = 8
    UNSPECIFIED = 9

class PickerViewMode(enum.IntEnum):
    LIST = 0
    THUMBNAIL = 1

Self = typing.TypeVar('Self')

class FileExtensionVector(winsdk.system.Object, typing.MutableSequence[str]):
    size: winsdk.system.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> str: ...
    @typing.overload
    def __getitem__(self, index: slice) -> winsdk.system.Array[str]: ...
    def insert(self, index: int, value: str) -> None: ...
    @typing.overload
    def __delitem__(self, index: int) -> None: ...
    @typing.overload
    def __delitem__(self, index: slice) -> None: ...
    @typing.overload
    def __setitem__(self, index: int, value: str) -> None: ...
    @typing.overload
    def __setitem__(self, index: slice, value: typing.Iterable[str]) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FileExtensionVector: ...
    def append(self, value: str) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[str]]: ...
    def get_at(self, index: winsdk.system.UInt32) -> str: ...
    def get_many(self, start_index: winsdk.system.UInt32, items: winsdk.system.Array[str]) -> winsdk.system.UInt32: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]: ...
    def index_of(self, value: str) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt32]: ...
    def insert_at(self, index: winsdk.system.UInt32, value: str) -> None: ...
    def remove_at(self, index: winsdk.system.UInt32) -> None: ...
    def remove_at_end(self) -> None: ...
    def replace_all(self, items: winsdk.system.Array[str]) -> None: ...
    def set_at(self, index: winsdk.system.UInt32, value: str) -> None: ...

class FileOpenPicker(winsdk.system.Object):
    view_mode: PickerViewMode
    suggested_start_location: PickerLocationId
    settings_identifier: str
    commit_button_text: str
    file_type_filter: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    continuation_data: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FileOpenPicker: ...
    def __new__(cls: typing.Type[FileOpenPicker]) -> FileOpenPicker:...
    @staticmethod
    def create_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[FileOpenPicker]: ...
    def pick_multiple_files_and_continue(self) -> None: ...
    def pick_multiple_files_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.storage.StorageFile]]: ...
    def pick_single_file_and_continue(self) -> None: ...
    @typing.overload
    def pick_single_file_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...
    @typing.overload
    def pick_single_file_async(self, picker_operation_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...
    @staticmethod
    def resume_pick_single_file_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...

class FilePickerFileTypesOrderedMap(winsdk.system.Object, typing.MutableMapping[str, winsdk.windows.foundation.collections.IVector[str]]):
    size: winsdk.system.UInt32
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[str]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: str, value: winsdk.windows.foundation.collections.IVector[str]) -> None: ...
    def __getitem__(self, key: str) -> winsdk.windows.foundation.collections.IVector[str]: ...
    def __delitem__(self, key: str) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FilePickerFileTypesOrderedMap: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.windows.foundation.collections.IVector[str]]]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.windows.foundation.collections.IVector[str]]]: ...
    def has_key(self, key: str) -> winsdk.system.Boolean: ...
    def insert(self, key: str, value: winsdk.windows.foundation.collections.IVector[str]) -> winsdk.system.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    def remove(self, key: str) -> None: ...

class FilePickerSelectedFilesArray(winsdk.system.Object, typing.Sequence[winsdk.windows.storage.StorageFile]):
    size: winsdk.system.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> winsdk.windows.storage.StorageFile: ...
    @typing.overload
    def __getitem__(self, index: slice) -> winsdk.system.Array[winsdk.windows.storage.StorageFile]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FilePickerSelectedFilesArray: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.storage.StorageFile]]: ...
    def get_at(self, index: winsdk.system.UInt32) -> typing.Optional[winsdk.windows.storage.StorageFile]: ...
    def get_many(self, start_index: winsdk.system.UInt32, items: winsdk.system.Array[winsdk.windows.storage.StorageFile]) -> winsdk.system.UInt32: ...
    def index_of(self, value: typing.Optional[winsdk.windows.storage.StorageFile]) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt32]: ...

class FileSavePicker(winsdk.system.Object):
    suggested_start_location: PickerLocationId
    suggested_save_file: typing.Optional[winsdk.windows.storage.StorageFile]
    suggested_file_name: str
    settings_identifier: str
    default_file_extension: str
    commit_button_text: str
    file_type_choices: typing.Optional[winsdk.windows.foundation.collections.IMap[str, winsdk.windows.foundation.collections.IVector[str]]]
    continuation_data: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    enterprise_id: str
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FileSavePicker: ...
    def __new__(cls: typing.Type[FileSavePicker]) -> FileSavePicker:...
    @staticmethod
    def create_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[FileSavePicker]: ...
    def pick_save_file_and_continue(self) -> None: ...
    def pick_save_file_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...

class FolderPicker(winsdk.system.Object):
    view_mode: PickerViewMode
    suggested_start_location: PickerLocationId
    settings_identifier: str
    commit_button_text: str
    file_type_filter: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    continuation_data: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FolderPicker: ...
    def __new__(cls: typing.Type[FolderPicker]) -> FolderPicker:...
    @staticmethod
    def create_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[FolderPicker]: ...
    def pick_folder_and_continue(self) -> None: ...
    def pick_single_folder_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFolder]: ...

