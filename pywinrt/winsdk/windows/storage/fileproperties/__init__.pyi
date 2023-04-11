# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.geolocation
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage
import winsdk.windows.storage.streams

class PhotoOrientation(enum.IntEnum):
    UNSPECIFIED = 0
    NORMAL = 1
    FLIP_HORIZONTAL = 2
    ROTATE180 = 3
    FLIP_VERTICAL = 4
    TRANSPOSE = 5
    ROTATE270 = 6
    TRANSVERSE = 7
    ROTATE90 = 8

class PropertyPrefetchOptions(enum.IntFlag):
    NONE = 0
    MUSIC_PROPERTIES = 0x1
    VIDEO_PROPERTIES = 0x2
    IMAGE_PROPERTIES = 0x4
    DOCUMENT_PROPERTIES = 0x8
    BASIC_PROPERTIES = 0x10

class ThumbnailMode(enum.IntEnum):
    PICTURES_VIEW = 0
    VIDEOS_VIEW = 1
    MUSIC_VIEW = 2
    DOCUMENTS_VIEW = 3
    LIST_VIEW = 4
    SINGLE_ITEM = 5

class ThumbnailOptions(enum.IntFlag):
    NONE = 0
    RETURN_ONLY_IF_CACHED = 0x1
    RESIZE_THUMBNAIL = 0x2
    USE_CURRENT_SCALE = 0x4

class ThumbnailType(enum.IntEnum):
    IMAGE = 0
    ICON = 1

class VideoOrientation(enum.IntEnum):
    NORMAL = 0
    ROTATE90 = 90
    ROTATE180 = 180
    ROTATE270 = 270

Self = typing.TypeVar('Self')

class BasicProperties(winsdk.system.Object):
    date_modified: datetime.datetime
    item_date: datetime.datetime
    size: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BasicProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, winsdk.system.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.system.Object]]) -> winsdk.windows.foundation.IAsyncAction: ...

class DocumentProperties(winsdk.system.Object):
    title: str
    comment: str
    author: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    keywords: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DocumentProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, winsdk.system.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.system.Object]]) -> winsdk.windows.foundation.IAsyncAction: ...

class GeotagHelper(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GeotagHelper: ...
    @staticmethod
    def get_geotag_async(file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.devices.geolocation.Geopoint]: ...
    @staticmethod
    def set_geotag_async(file: typing.Optional[winsdk.windows.storage.IStorageFile], geopoint: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def set_geotag_from_geolocator_async(file: typing.Optional[winsdk.windows.storage.IStorageFile], geolocator: typing.Optional[winsdk.windows.devices.geolocation.Geolocator]) -> winsdk.windows.foundation.IAsyncAction: ...

class ImageProperties(winsdk.system.Object):
    title: str
    rating: winsdk.system.UInt32
    date_taken: datetime.datetime
    camera_model: str
    camera_manufacturer: str
    height: winsdk.system.UInt32
    keywords: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    latitude: typing.Optional[typing.Optional[winsdk.system.Double]]
    longitude: typing.Optional[typing.Optional[winsdk.system.Double]]
    orientation: PhotoOrientation
    people_names: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    width: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ImageProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, winsdk.system.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.system.Object]]) -> winsdk.windows.foundation.IAsyncAction: ...

class MusicProperties(winsdk.system.Object):
    year: winsdk.system.UInt32
    track_number: winsdk.system.UInt32
    title: str
    subtitle: str
    rating: winsdk.system.UInt32
    publisher: str
    artist: str
    album_artist: str
    album: str
    bitrate: winsdk.system.UInt32
    composers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    conductors: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    duration: datetime.timedelta
    genre: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    producers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    writers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MusicProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, winsdk.system.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.system.Object]]) -> winsdk.windows.foundation.IAsyncAction: ...

class StorageItemContentProperties(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> StorageItemContentProperties: ...
    def get_document_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[DocumentProperties]: ...
    def get_image_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[ImageProperties]: ...
    def get_music_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[MusicProperties]: ...
    def get_video_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[VideoProperties]: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, winsdk.system.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.system.Object]]) -> winsdk.windows.foundation.IAsyncAction: ...

class StorageItemThumbnail(winsdk.system.Object):
    original_height: winsdk.system.UInt32
    original_width: winsdk.system.UInt32
    returned_smaller_cached_size: winsdk.system.Boolean
    type: ThumbnailType
    content_type: str
    size: winsdk.system.UInt64
    can_read: winsdk.system.Boolean
    can_write: winsdk.system.Boolean
    position: winsdk.system.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> StorageItemThumbnail: ...
    def clone_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def get_input_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...
    def get_output_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], count: winsdk.system.UInt32, options: winsdk.windows.storage.streams.InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt32]: ...
    def seek(self, position: winsdk.system.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class VideoProperties(winsdk.system.Object):
    year: winsdk.system.UInt32
    title: str
    subtitle: str
    rating: winsdk.system.UInt32
    publisher: str
    bitrate: winsdk.system.UInt32
    directors: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    duration: datetime.timedelta
    height: winsdk.system.UInt32
    keywords: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    latitude: typing.Optional[typing.Optional[winsdk.system.Double]]
    longitude: typing.Optional[typing.Optional[winsdk.system.Double]]
    orientation: VideoOrientation
    producers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    width: winsdk.system.UInt32
    writers: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, winsdk.system.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.system.Object]]) -> winsdk.windows.foundation.IAsyncAction: ...

class IStorageItemExtraProperties(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IStorageItemExtraProperties: ...
    def retrieve_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMap[str, winsdk.system.Object]]: ...
    @typing.overload
    def save_properties_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def save_properties_async(self, properties_to_save: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.system.Object]]) -> winsdk.windows.foundation.IAsyncAction: ...

