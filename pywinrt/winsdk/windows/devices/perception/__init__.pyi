# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.foundation.numerics
import winsdk.windows.graphics.imaging
import winsdk.windows.media
import winsdk.windows.media.devices.core

class PerceptionFrameSourceAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED = 1
    DENIED_BY_USER = 2
    DENIED_BY_SYSTEM = 3

class PerceptionFrameSourcePropertyChangeStatus(enum.IntEnum):
    UNKNOWN = 0
    ACCEPTED = 1
    LOST_CONTROL = 2
    PROPERTY_NOT_SUPPORTED = 3
    PROPERTY_READ_ONLY = 4
    VALUE_OUT_OF_RANGE = 5

Self = typing.TypeVar('Self')

class KnownCameraIntrinsicsProperties(winsdk.system.Object):
    focal_length: typing.ClassVar[str]
    principal_point: typing.ClassVar[str]
    radial_distortion: typing.ClassVar[str]
    tangential_distortion: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KnownCameraIntrinsicsProperties: ...

class KnownPerceptionColorFrameSourceProperties(winsdk.system.Object):
    auto_exposure_enabled: typing.ClassVar[str]
    exposure: typing.ClassVar[str]
    exposure_compensation: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KnownPerceptionColorFrameSourceProperties: ...

class KnownPerceptionDepthFrameSourceProperties(winsdk.system.Object):
    max_depth: typing.ClassVar[str]
    min_depth: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KnownPerceptionDepthFrameSourceProperties: ...

class KnownPerceptionFrameSourceProperties(winsdk.system.Object):
    device_model_version: typing.ClassVar[str]
    enclosure_location: typing.ClassVar[str]
    frame_kind: typing.ClassVar[str]
    id: typing.ClassVar[str]
    physical_device_ids: typing.ClassVar[str]
    device_id: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KnownPerceptionFrameSourceProperties: ...

class KnownPerceptionInfraredFrameSourceProperties(winsdk.system.Object):
    active_illumination_enabled: typing.ClassVar[str]
    ambient_subtraction_enabled: typing.ClassVar[str]
    auto_exposure_enabled: typing.ClassVar[str]
    exposure: typing.ClassVar[str]
    exposure_compensation: typing.ClassVar[str]
    interleaved_illumination_enabled: typing.ClassVar[str]
    structure_light_pattern_enabled: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KnownPerceptionInfraredFrameSourceProperties: ...

class KnownPerceptionVideoFrameSourceProperties(winsdk.system.Object):
    available_video_profiles: typing.ClassVar[str]
    camera_intrinsics: typing.ClassVar[str]
    is_mirrored: typing.ClassVar[str]
    supported_video_profiles: typing.ClassVar[str]
    video_profile: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KnownPerceptionVideoFrameSourceProperties: ...

class KnownPerceptionVideoProfileProperties(winsdk.system.Object):
    bitmap_alpha_mode: typing.ClassVar[str]
    bitmap_pixel_format: typing.ClassVar[str]
    frame_duration: typing.ClassVar[str]
    height: typing.ClassVar[str]
    width: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KnownPerceptionVideoProfileProperties: ...

class PerceptionColorFrame(winsdk.system.Object):
    video_frame: typing.Optional[winsdk.windows.media.VideoFrame]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionColorFrame: ...
    def close(self) -> None: ...

class PerceptionColorFrameArrivedEventArgs(winsdk.system.Object):
    relative_time: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionColorFrameArrivedEventArgs: ...
    def try_open_frame(self) -> typing.Optional[PerceptionColorFrame]: ...

class PerceptionColorFrameReader(winsdk.system.Object):
    is_paused: winsdk.system.Boolean
    source: typing.Optional[PerceptionColorFrameSource]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionColorFrameReader: ...
    def close(self) -> None: ...
    def try_read_latest_frame(self) -> typing.Optional[PerceptionColorFrame]: ...
    def add_frame_arrived(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameReader, PerceptionColorFrameArrivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_arrived(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionColorFrameSource(winsdk.system.Object):
    active: winsdk.system.Boolean
    available: winsdk.system.Boolean
    available_video_profiles: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PerceptionVideoProfile]]
    camera_intrinsics: typing.Optional[winsdk.windows.media.devices.core.CameraIntrinsics]
    device_kind: str
    display_name: str
    id: str
    is_controlled: winsdk.system.Boolean
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    supported_video_profiles: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PerceptionVideoProfile]]
    video_profile: typing.Optional[PerceptionVideoProfile]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionColorFrameSource: ...
    def acquire_control_session(self) -> typing.Optional[PerceptionControlSession]: ...
    def can_control_independently_from(self, target_id: str) -> winsdk.system.Boolean: ...
    @staticmethod
    def create_watcher() -> typing.Optional[PerceptionColorFrameSourceWatcher]: ...
    @staticmethod
    def find_all_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PerceptionColorFrameSource]]: ...
    @staticmethod
    def from_id_async(id: str) -> winsdk.windows.foundation.IAsyncOperation[PerceptionColorFrameSource]: ...
    def is_correlated_with(self, target_id: str) -> winsdk.system.Boolean: ...
    def open_reader(self) -> typing.Optional[PerceptionColorFrameReader]: ...
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[PerceptionFrameSourceAccessStatus]: ...
    def try_get_depth_correlated_camera_intrinsics_async(self, correlated_depth_frame_source: typing.Optional[PerceptionDepthFrameSource]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionDepthCorrelatedCameraIntrinsics]: ...
    def try_get_depth_correlated_coordinate_mapper_async(self, target_source_id: str, correlated_depth_frame_source: typing.Optional[PerceptionDepthFrameSource]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionDepthCorrelatedCoordinateMapper]: ...
    def try_get_transform_to(self, target_id: str) -> typing.Tuple[winsdk.system.Boolean, winsdk.windows.foundation.numerics.Matrix4x4]: ...
    def try_set_video_profile_async(self, control_session: typing.Optional[PerceptionControlSession], profile: typing.Optional[PerceptionVideoProfile]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionFrameSourcePropertyChangeResult]: ...
    def add_active_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_active_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_available_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_available_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_camera_intrinsics_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_camera_intrinsics_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_properties_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSource, PerceptionFrameSourcePropertiesChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_properties_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_video_profile_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_video_profile_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionColorFrameSourceAddedEventArgs(winsdk.system.Object):
    frame_source: typing.Optional[PerceptionColorFrameSource]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionColorFrameSourceAddedEventArgs: ...

class PerceptionColorFrameSourceRemovedEventArgs(winsdk.system.Object):
    frame_source: typing.Optional[PerceptionColorFrameSource]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionColorFrameSourceRemovedEventArgs: ...

class PerceptionColorFrameSourceWatcher(winsdk.system.Object):
    status: winsdk.windows.devices.enumeration.DeviceWatcherStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionColorFrameSourceWatcher: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_enumeration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSourceWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enumeration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_source_added(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSourceWatcher, PerceptionColorFrameSourceAddedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_source_added(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_source_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSourceWatcher, PerceptionColorFrameSourceRemovedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_source_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stopped(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionColorFrameSourceWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stopped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionControlSession(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionControlSession: ...
    def close(self) -> None: ...
    def try_set_property_async(self, name: str, value: typing.Optional[winsdk.system.Object]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionFrameSourcePropertyChangeResult]: ...
    def add_control_lost(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionControlSession, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_control_lost(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionDepthCorrelatedCameraIntrinsics(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthCorrelatedCameraIntrinsics: ...
    def unproject_all_pixels_at_correlated_depth_async(self, depth_frame: typing.Optional[PerceptionDepthFrame], results: winsdk.system.Array[winsdk.windows.foundation.numerics.Vector3]) -> winsdk.windows.foundation.IAsyncAction: ...
    def unproject_pixel_at_correlated_depth(self, pixel_coordinate: winsdk.windows.foundation.Point, depth_frame: typing.Optional[PerceptionDepthFrame]) -> winsdk.windows.foundation.numerics.Vector3: ...
    def unproject_pixels_at_correlated_depth(self, source_coordinates: winsdk.system.Array[winsdk.windows.foundation.Point], depth_frame: typing.Optional[PerceptionDepthFrame], results: winsdk.system.Array[winsdk.windows.foundation.numerics.Vector3]) -> None: ...
    def unproject_region_pixels_at_correlated_depth_async(self, region: winsdk.windows.foundation.Rect, depth_frame: typing.Optional[PerceptionDepthFrame], results: winsdk.system.Array[winsdk.windows.foundation.numerics.Vector3]) -> winsdk.windows.foundation.IAsyncAction: ...

class PerceptionDepthCorrelatedCoordinateMapper(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthCorrelatedCoordinateMapper: ...
    def map_all_pixels_to_target_async(self, depth_frame: typing.Optional[PerceptionDepthFrame], target_coordinates: winsdk.system.Array[winsdk.windows.foundation.Point]) -> winsdk.windows.foundation.IAsyncAction: ...
    def map_pixel_to_target(self, source_pixel_coordinate: winsdk.windows.foundation.Point, depth_frame: typing.Optional[PerceptionDepthFrame]) -> winsdk.windows.foundation.Point: ...
    def map_pixels_to_target(self, source_coordinates: winsdk.system.Array[winsdk.windows.foundation.Point], depth_frame: typing.Optional[PerceptionDepthFrame], results: winsdk.system.Array[winsdk.windows.foundation.Point]) -> None: ...
    def map_region_of_pixels_to_target_async(self, region: winsdk.windows.foundation.Rect, depth_frame: typing.Optional[PerceptionDepthFrame], target_coordinates: winsdk.system.Array[winsdk.windows.foundation.Point]) -> winsdk.windows.foundation.IAsyncAction: ...

class PerceptionDepthFrame(winsdk.system.Object):
    video_frame: typing.Optional[winsdk.windows.media.VideoFrame]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthFrame: ...
    def close(self) -> None: ...

class PerceptionDepthFrameArrivedEventArgs(winsdk.system.Object):
    relative_time: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthFrameArrivedEventArgs: ...
    def try_open_frame(self) -> typing.Optional[PerceptionDepthFrame]: ...

class PerceptionDepthFrameReader(winsdk.system.Object):
    is_paused: winsdk.system.Boolean
    source: typing.Optional[PerceptionDepthFrameSource]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthFrameReader: ...
    def close(self) -> None: ...
    def try_read_latest_frame(self) -> typing.Optional[PerceptionDepthFrame]: ...
    def add_frame_arrived(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameReader, PerceptionDepthFrameArrivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_arrived(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionDepthFrameSource(winsdk.system.Object):
    active: winsdk.system.Boolean
    available: winsdk.system.Boolean
    available_video_profiles: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PerceptionVideoProfile]]
    camera_intrinsics: typing.Optional[winsdk.windows.media.devices.core.CameraIntrinsics]
    device_kind: str
    display_name: str
    id: str
    is_controlled: winsdk.system.Boolean
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    supported_video_profiles: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PerceptionVideoProfile]]
    video_profile: typing.Optional[PerceptionVideoProfile]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthFrameSource: ...
    def acquire_control_session(self) -> typing.Optional[PerceptionControlSession]: ...
    def can_control_independently_from(self, target_id: str) -> winsdk.system.Boolean: ...
    @staticmethod
    def create_watcher() -> typing.Optional[PerceptionDepthFrameSourceWatcher]: ...
    @staticmethod
    def find_all_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PerceptionDepthFrameSource]]: ...
    @staticmethod
    def from_id_async(id: str) -> winsdk.windows.foundation.IAsyncOperation[PerceptionDepthFrameSource]: ...
    def is_correlated_with(self, target_id: str) -> winsdk.system.Boolean: ...
    def open_reader(self) -> typing.Optional[PerceptionDepthFrameReader]: ...
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[PerceptionFrameSourceAccessStatus]: ...
    def try_get_depth_correlated_camera_intrinsics_async(self, target: typing.Optional[PerceptionDepthFrameSource]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionDepthCorrelatedCameraIntrinsics]: ...
    def try_get_depth_correlated_coordinate_mapper_async(self, target_id: str, depth_frame_source_to_map_with: typing.Optional[PerceptionDepthFrameSource]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionDepthCorrelatedCoordinateMapper]: ...
    def try_get_transform_to(self, target_id: str) -> typing.Tuple[winsdk.system.Boolean, winsdk.windows.foundation.numerics.Matrix4x4]: ...
    def try_set_video_profile_async(self, control_session: typing.Optional[PerceptionControlSession], profile: typing.Optional[PerceptionVideoProfile]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionFrameSourcePropertyChangeResult]: ...
    def add_active_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_active_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_available_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_available_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_camera_intrinsics_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_camera_intrinsics_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_properties_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSource, PerceptionFrameSourcePropertiesChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_properties_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_video_profile_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_video_profile_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionDepthFrameSourceAddedEventArgs(winsdk.system.Object):
    frame_source: typing.Optional[PerceptionDepthFrameSource]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthFrameSourceAddedEventArgs: ...

class PerceptionDepthFrameSourceRemovedEventArgs(winsdk.system.Object):
    frame_source: typing.Optional[PerceptionDepthFrameSource]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthFrameSourceRemovedEventArgs: ...

class PerceptionDepthFrameSourceWatcher(winsdk.system.Object):
    status: winsdk.windows.devices.enumeration.DeviceWatcherStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionDepthFrameSourceWatcher: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_enumeration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSourceWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enumeration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_source_added(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSourceWatcher, PerceptionDepthFrameSourceAddedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_source_added(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_source_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSourceWatcher, PerceptionDepthFrameSourceRemovedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_source_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stopped(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionDepthFrameSourceWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stopped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionFrameSourcePropertiesChangedEventArgs(winsdk.system.Object):
    collection_change: winsdk.windows.foundation.collections.CollectionChange
    key: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionFrameSourcePropertiesChangedEventArgs: ...

class PerceptionFrameSourcePropertyChangeResult(winsdk.system.Object):
    new_value: typing.Optional[winsdk.system.Object]
    status: PerceptionFrameSourcePropertyChangeStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionFrameSourcePropertyChangeResult: ...

class PerceptionInfraredFrame(winsdk.system.Object):
    video_frame: typing.Optional[winsdk.windows.media.VideoFrame]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionInfraredFrame: ...
    def close(self) -> None: ...

class PerceptionInfraredFrameArrivedEventArgs(winsdk.system.Object):
    relative_time: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionInfraredFrameArrivedEventArgs: ...
    def try_open_frame(self) -> typing.Optional[PerceptionInfraredFrame]: ...

class PerceptionInfraredFrameReader(winsdk.system.Object):
    is_paused: winsdk.system.Boolean
    source: typing.Optional[PerceptionInfraredFrameSource]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionInfraredFrameReader: ...
    def close(self) -> None: ...
    def try_read_latest_frame(self) -> typing.Optional[PerceptionInfraredFrame]: ...
    def add_frame_arrived(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameReader, PerceptionInfraredFrameArrivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_arrived(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionInfraredFrameSource(winsdk.system.Object):
    active: winsdk.system.Boolean
    available: winsdk.system.Boolean
    available_video_profiles: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PerceptionVideoProfile]]
    camera_intrinsics: typing.Optional[winsdk.windows.media.devices.core.CameraIntrinsics]
    device_kind: str
    display_name: str
    id: str
    is_controlled: winsdk.system.Boolean
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    supported_video_profiles: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PerceptionVideoProfile]]
    video_profile: typing.Optional[PerceptionVideoProfile]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionInfraredFrameSource: ...
    def acquire_control_session(self) -> typing.Optional[PerceptionControlSession]: ...
    def can_control_independently_from(self, target_id: str) -> winsdk.system.Boolean: ...
    @staticmethod
    def create_watcher() -> typing.Optional[PerceptionInfraredFrameSourceWatcher]: ...
    @staticmethod
    def find_all_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PerceptionInfraredFrameSource]]: ...
    @staticmethod
    def from_id_async(id: str) -> winsdk.windows.foundation.IAsyncOperation[PerceptionInfraredFrameSource]: ...
    def is_correlated_with(self, target_id: str) -> winsdk.system.Boolean: ...
    def open_reader(self) -> typing.Optional[PerceptionInfraredFrameReader]: ...
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[PerceptionFrameSourceAccessStatus]: ...
    def try_get_depth_correlated_camera_intrinsics_async(self, target: typing.Optional[PerceptionDepthFrameSource]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionDepthCorrelatedCameraIntrinsics]: ...
    def try_get_depth_correlated_coordinate_mapper_async(self, target_id: str, depth_frame_source_to_map_with: typing.Optional[PerceptionDepthFrameSource]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionDepthCorrelatedCoordinateMapper]: ...
    def try_get_transform_to(self, target_id: str) -> typing.Tuple[winsdk.system.Boolean, winsdk.windows.foundation.numerics.Matrix4x4]: ...
    def try_set_video_profile_async(self, control_session: typing.Optional[PerceptionControlSession], profile: typing.Optional[PerceptionVideoProfile]) -> winsdk.windows.foundation.IAsyncOperation[PerceptionFrameSourcePropertyChangeResult]: ...
    def add_active_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_active_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_available_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_available_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_camera_intrinsics_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_camera_intrinsics_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_properties_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSource, PerceptionFrameSourcePropertiesChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_properties_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_video_profile_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_video_profile_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionInfraredFrameSourceAddedEventArgs(winsdk.system.Object):
    frame_source: typing.Optional[PerceptionInfraredFrameSource]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionInfraredFrameSourceAddedEventArgs: ...

class PerceptionInfraredFrameSourceRemovedEventArgs(winsdk.system.Object):
    frame_source: typing.Optional[PerceptionInfraredFrameSource]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionInfraredFrameSourceRemovedEventArgs: ...

class PerceptionInfraredFrameSourceWatcher(winsdk.system.Object):
    status: winsdk.windows.devices.enumeration.DeviceWatcherStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionInfraredFrameSourceWatcher: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_enumeration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSourceWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enumeration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_source_added(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSourceWatcher, PerceptionInfraredFrameSourceAddedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_source_added(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_source_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSourceWatcher, PerceptionInfraredFrameSourceRemovedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_source_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stopped(self, handler: winsdk.windows.foundation.TypedEventHandler[PerceptionInfraredFrameSourceWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stopped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PerceptionVideoProfile(winsdk.system.Object):
    bitmap_alpha_mode: winsdk.windows.graphics.imaging.BitmapAlphaMode
    bitmap_pixel_format: winsdk.windows.graphics.imaging.BitmapPixelFormat
    frame_duration: datetime.timedelta
    height: winsdk.system.Int32
    width: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PerceptionVideoProfile: ...
    def is_equal(self, other: typing.Optional[PerceptionVideoProfile]) -> winsdk.system.Boolean: ...

