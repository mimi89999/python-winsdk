# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics.directx.direct3d11
import winsdk.windows.graphics.imaging
import winsdk.windows.media
import winsdk.windows.media.capture
import winsdk.windows.media.devices
import winsdk.windows.media.devices.core
import winsdk.windows.media.mediaproperties
import winsdk.windows.perception.spatial
import winsdk.windows.storage.streams
import winsdk.windows.ui.windowmanagement

class MediaFrameReaderAcquisitionMode(enum.IntEnum):
    REALTIME = 0
    BUFFERED = 1

class MediaFrameReaderStartStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    DEVICE_NOT_AVAILABLE = 2
    OUTPUT_FORMAT_NOT_SUPPORTED = 3
    EXCLUSIVE_CONTROL_NOT_AVAILABLE = 4

class MediaFrameSourceGetPropertyStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    NOT_SUPPORTED = 2
    DEVICE_NOT_AVAILABLE = 3
    MAX_PROPERTY_VALUE_SIZE_TOO_SMALL = 4
    MAX_PROPERTY_VALUE_SIZE_REQUIRED = 5

class MediaFrameSourceKind(enum.IntEnum):
    CUSTOM = 0
    COLOR = 1
    INFRARED = 2
    DEPTH = 3
    AUDIO = 4
    IMAGE = 5
    METADATA = 6

class MediaFrameSourceSetPropertyStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    NOT_SUPPORTED = 2
    INVALID_VALUE = 3
    DEVICE_NOT_AVAILABLE = 4
    NOT_IN_CONTROL = 5

class MultiSourceMediaFrameReaderStartStatus(enum.IntEnum):
    SUCCESS = 0
    NOT_SUPPORTED = 1
    INSUFFICIENT_RESOURCES = 2
    DEVICE_NOT_AVAILABLE = 3
    UNKNOWN_FAILURE = 4

Self = typing.TypeVar('Self')

class AudioMediaFrame(winsdk.system.Object):
    audio_encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.AudioEncodingProperties]
    frame_reference: typing.Optional[MediaFrameReference]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioMediaFrame: ...
    def get_audio_frame(self) -> typing.Optional[winsdk.windows.media.AudioFrame]: ...

class BufferMediaFrame(winsdk.system.Object):
    buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    frame_reference: typing.Optional[MediaFrameReference]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BufferMediaFrame: ...

class DepthMediaFrame(winsdk.system.Object):
    depth_format: typing.Optional[DepthMediaFrameFormat]
    frame_reference: typing.Optional[MediaFrameReference]
    video_media_frame: typing.Optional[VideoMediaFrame]
    max_reliable_depth: winsdk.system.UInt32
    min_reliable_depth: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DepthMediaFrame: ...
    def try_create_coordinate_mapper(self, camera_intrinsics: typing.Optional[winsdk.windows.media.devices.core.CameraIntrinsics], coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]) -> typing.Optional[winsdk.windows.media.devices.core.DepthCorrelatedCoordinateMapper]: ...

class DepthMediaFrameFormat(winsdk.system.Object):
    depth_scale_in_meters: winsdk.system.Double
    video_format: typing.Optional[VideoMediaFrameFormat]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DepthMediaFrameFormat: ...

class InfraredMediaFrame(winsdk.system.Object):
    frame_reference: typing.Optional[MediaFrameReference]
    is_illuminated: winsdk.system.Boolean
    video_media_frame: typing.Optional[VideoMediaFrame]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InfraredMediaFrame: ...

class MediaFrameArrivedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameArrivedEventArgs: ...

class MediaFrameFormat(winsdk.system.Object):
    frame_rate: typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]
    major_type: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]
    subtype: str
    video_format: typing.Optional[VideoMediaFrameFormat]
    audio_encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.AudioEncodingProperties]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameFormat: ...

class MediaFrameReader(winsdk.system.Object):
    acquisition_mode: MediaFrameReaderAcquisitionMode
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameReader: ...
    def close(self) -> None: ...
    def start_async(self) -> winsdk.windows.foundation.IAsyncOperation[MediaFrameReaderStartStatus]: ...
    def stop_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def try_acquire_latest_frame(self) -> typing.Optional[MediaFrameReference]: ...
    def add_frame_arrived(self, handler: winsdk.windows.foundation.TypedEventHandler[MediaFrameReader, MediaFrameArrivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_arrived(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MediaFrameReference(winsdk.system.Object):
    buffer_media_frame: typing.Optional[BufferMediaFrame]
    coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]
    duration: datetime.timedelta
    format: typing.Optional[MediaFrameFormat]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]
    source_kind: MediaFrameSourceKind
    system_relative_time: typing.Optional[typing.Optional[datetime.timedelta]]
    video_media_frame: typing.Optional[VideoMediaFrame]
    audio_media_frame: typing.Optional[AudioMediaFrame]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameReference: ...
    def close(self) -> None: ...

class MediaFrameSource(winsdk.system.Object):
    controller: typing.Optional[MediaFrameSourceController]
    current_format: typing.Optional[MediaFrameFormat]
    info: typing.Optional[MediaFrameSourceInfo]
    supported_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MediaFrameFormat]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameSource: ...
    def set_format_async(self, format: typing.Optional[MediaFrameFormat]) -> winsdk.windows.foundation.IAsyncAction: ...
    def try_get_camera_intrinsics(self, format: typing.Optional[MediaFrameFormat]) -> typing.Optional[winsdk.windows.media.devices.core.CameraIntrinsics]: ...
    def add_format_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[MediaFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_format_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MediaFrameSourceController(winsdk.system.Object):
    video_device_controller: typing.Optional[winsdk.windows.media.devices.VideoDeviceController]
    audio_device_controller: typing.Optional[winsdk.windows.media.devices.AudioDeviceController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameSourceController: ...
    def get_property_async(self, property_id: str) -> winsdk.windows.foundation.IAsyncOperation[MediaFrameSourceGetPropertyResult]: ...
    def get_property_by_extended_id_async(self, extended_property_id: winsdk.system.Array[winsdk.system.UInt8], max_property_value_size: typing.Optional[winsdk.system.UInt32]) -> winsdk.windows.foundation.IAsyncOperation[MediaFrameSourceGetPropertyResult]: ...
    def set_property_async(self, property_id: str, property_value: typing.Optional[winsdk.system.Object]) -> winsdk.windows.foundation.IAsyncOperation[MediaFrameSourceSetPropertyStatus]: ...
    def set_property_by_extended_id_async(self, extended_property_id: winsdk.system.Array[winsdk.system.UInt8], property_value: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[MediaFrameSourceSetPropertyStatus]: ...

class MediaFrameSourceGetPropertyResult(winsdk.system.Object):
    status: MediaFrameSourceGetPropertyStatus
    value: typing.Optional[winsdk.system.Object]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameSourceGetPropertyResult: ...

class MediaFrameSourceGroup(winsdk.system.Object):
    display_name: str
    id: str
    source_infos: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MediaFrameSourceInfo]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameSourceGroup: ...
    @staticmethod
    def find_all_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[MediaFrameSourceGroup]]: ...
    @staticmethod
    def from_id_async(id: str) -> winsdk.windows.foundation.IAsyncOperation[MediaFrameSourceGroup]: ...
    @staticmethod
    def get_device_selector() -> str: ...

class MediaFrameSourceInfo(winsdk.system.Object):
    coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]
    device_information: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]
    id: str
    media_stream_type: winsdk.windows.media.capture.MediaStreamType
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]
    source_group: typing.Optional[MediaFrameSourceGroup]
    source_kind: MediaFrameSourceKind
    profile_id: str
    video_profile_media_description: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.capture.MediaCaptureVideoProfileMediaDescription]]
    is_shareable: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaFrameSourceInfo: ...
    def get_relative_panel(self, display_region: typing.Optional[winsdk.windows.ui.windowmanagement.DisplayRegion]) -> winsdk.windows.devices.enumeration.Panel: ...

class MultiSourceMediaFrameArrivedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MultiSourceMediaFrameArrivedEventArgs: ...

class MultiSourceMediaFrameReader(winsdk.system.Object):
    acquisition_mode: MediaFrameReaderAcquisitionMode
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MultiSourceMediaFrameReader: ...
    def close(self) -> None: ...
    def start_async(self) -> winsdk.windows.foundation.IAsyncOperation[MultiSourceMediaFrameReaderStartStatus]: ...
    def stop_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def try_acquire_latest_frame(self) -> typing.Optional[MultiSourceMediaFrameReference]: ...
    def add_frame_arrived(self, handler: winsdk.windows.foundation.TypedEventHandler[MultiSourceMediaFrameReader, MultiSourceMediaFrameArrivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_arrived(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MultiSourceMediaFrameReference(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MultiSourceMediaFrameReference: ...
    def close(self) -> None: ...
    def try_get_frame_reference_by_source_id(self, source_id: str) -> typing.Optional[MediaFrameReference]: ...

class VideoMediaFrame(winsdk.system.Object):
    camera_intrinsics: typing.Optional[winsdk.windows.media.devices.core.CameraIntrinsics]
    depth_media_frame: typing.Optional[DepthMediaFrame]
    direct3_d_surface: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]
    frame_reference: typing.Optional[MediaFrameReference]
    infrared_media_frame: typing.Optional[InfraredMediaFrame]
    software_bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]
    video_format: typing.Optional[VideoMediaFrameFormat]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoMediaFrame: ...
    def get_video_frame(self) -> typing.Optional[winsdk.windows.media.VideoFrame]: ...

class VideoMediaFrameFormat(winsdk.system.Object):
    depth_format: typing.Optional[DepthMediaFrameFormat]
    height: winsdk.system.UInt32
    media_frame_format: typing.Optional[MediaFrameFormat]
    width: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoMediaFrameFormat: ...

