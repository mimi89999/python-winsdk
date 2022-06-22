# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.foundation.numerics
import winsdk.windows.graphics.directx
import winsdk.windows.graphics.directx.direct3d11
import winsdk.windows.perception
import winsdk.windows.perception.spatial
import winsdk.windows.ui.core

class HolographicDepthReprojectionMethod(enum.IntEnum):
    DEPTH_REPROJECTION = 0
    AUTO_PLANAR = 1

class HolographicFramePresentResult(enum.IntEnum):
    SUCCESS = 0
    DEVICE_REMOVED = 1

class HolographicFramePresentWaitBehavior(enum.IntEnum):
    WAIT_FOR_FRAME_TO_FINISH = 0
    DO_NOT_WAIT_FOR_FRAME_TO_FINISH = 1

class HolographicReprojectionMode(enum.IntEnum):
    POSITION_AND_ORIENTATION = 0
    ORIENTATION_ONLY = 1
    DISABLED = 2

class HolographicSpaceUserPresence(enum.IntEnum):
    ABSENT = 0
    PRESENT_PASSIVE = 1
    PRESENT_ACTIVE = 2

class HolographicViewConfigurationKind(enum.IntEnum):
    DISPLAY = 0
    PHOTO_VIDEO_CAMERA = 1

Self = typing.TypeVar('Self')

class HolographicAdapterId:
    low_part: _winrt.UInt32
    high_part: _winrt.Int32
    def __new__(cls: typing.Type[HolographicAdapterId], low_part: _winrt.UInt32, high_part: _winrt.Int32) -> HolographicAdapterId: ...

class HolographicFrameId:
    value: _winrt.UInt64
    def __new__(cls: typing.Type[HolographicFrameId], value: _winrt.UInt64) -> HolographicFrameId: ...

class HolographicStereoTransform:
    left: winsdk.windows.foundation.numerics.Matrix4x4
    right: winsdk.windows.foundation.numerics.Matrix4x4
    def __new__(cls: typing.Type[HolographicStereoTransform], left: winsdk.windows.foundation.numerics.Matrix4x4, right: winsdk.windows.foundation.numerics.Matrix4x4) -> HolographicStereoTransform: ...

class HolographicCamera(_winrt.Object):
    viewport_scale_factor: _winrt.Double
    id: _winrt.UInt32
    is_stereo: _winrt.Boolean
    render_target_size: winsdk.windows.foundation.Size
    display: typing.Optional[HolographicDisplay]
    left_viewport_parameters: typing.Optional[HolographicCameraViewportParameters]
    right_viewport_parameters: typing.Optional[HolographicCameraViewportParameters]
    is_primary_layer_enabled: _winrt.Boolean
    max_quad_layer_count: _winrt.UInt32
    quad_layers: typing.Optional[winsdk.windows.foundation.collections.IVector[HolographicQuadLayer]]
    can_override_viewport: _winrt.Boolean
    is_hardware_content_protection_enabled: _winrt.Boolean
    is_hardware_content_protection_supported: _winrt.Boolean
    view_configuration: typing.Optional[HolographicViewConfiguration]
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicCamera: ...
    def set_far_plane_distance(self, value: _winrt.Double) -> None: ...
    def set_near_plane_distance(self, value: _winrt.Double) -> None: ...

class HolographicCameraPose(_winrt.Object):
    far_plane_distance: _winrt.Double
    holographic_camera: typing.Optional[HolographicCamera]
    near_plane_distance: _winrt.Double
    projection_transform: HolographicStereoTransform
    viewport: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicCameraPose: ...
    def override_projection_transform(self, projection_transform: HolographicStereoTransform) -> None: ...
    def override_view_transform(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], coordinate_system_to_view_transform: HolographicStereoTransform) -> None: ...
    def override_viewport(self, left_viewport: winsdk.windows.foundation.Rect, right_viewport: winsdk.windows.foundation.Rect) -> None: ...
    def try_get_culling_frustum(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]) -> typing.Optional[typing.Optional[winsdk.windows.perception.spatial.SpatialBoundingFrustum]]: ...
    def try_get_view_transform(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]) -> typing.Optional[typing.Optional[HolographicStereoTransform]]: ...
    def try_get_visible_frustum(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]) -> typing.Optional[typing.Optional[winsdk.windows.perception.spatial.SpatialBoundingFrustum]]: ...

class HolographicCameraRenderingParameters(_winrt.Object):
    direct3_d11_back_buffer: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]
    direct3_d11_device: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DDevice]
    reprojection_mode: HolographicReprojectionMode
    is_content_protection_enabled: _winrt.Boolean
    depth_reprojection_method: HolographicDepthReprojectionMethod
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicCameraRenderingParameters: ...
    def commit_direct3_d11_depth_buffer(self, value: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]) -> None: ...
    @typing.overload
    def set_focus_point(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], position: winsdk.windows.foundation.numerics.Vector3) -> None: ...
    @typing.overload
    def set_focus_point(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], position: winsdk.windows.foundation.numerics.Vector3, normal: winsdk.windows.foundation.numerics.Vector3) -> None: ...
    @typing.overload
    def set_focus_point(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], position: winsdk.windows.foundation.numerics.Vector3, normal: winsdk.windows.foundation.numerics.Vector3, linear_velocity: winsdk.windows.foundation.numerics.Vector3) -> None: ...

class HolographicCameraViewportParameters(_winrt.Object):
    hidden_area_mesh: winsdk.windows.foundation.numerics.Vector2
    visible_area_mesh: winsdk.windows.foundation.numerics.Vector2
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicCameraViewportParameters: ...

class HolographicDisplay(_winrt.Object):
    adapter_id: HolographicAdapterId
    display_name: str
    is_opaque: _winrt.Boolean
    is_stereo: _winrt.Boolean
    max_viewport_size: winsdk.windows.foundation.Size
    spatial_locator: typing.Optional[winsdk.windows.perception.spatial.SpatialLocator]
    refresh_rate: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicDisplay: ...
    @staticmethod
    def get_default() -> typing.Optional[HolographicDisplay]: ...
    def try_get_view_configuration(self, kind: HolographicViewConfigurationKind) -> typing.Optional[HolographicViewConfiguration]: ...

class HolographicFrame(_winrt.Object):
    added_cameras: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HolographicCamera]]
    current_prediction: typing.Optional[HolographicFramePrediction]
    duration: datetime.timedelta
    removed_cameras: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HolographicCamera]]
    id: HolographicFrameId
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicFrame: ...
    def get_quad_layer_update_parameters(self, layer: typing.Optional[HolographicQuadLayer]) -> typing.Optional[HolographicQuadLayerUpdateParameters]: ...
    def get_rendering_parameters(self, camera_pose: typing.Optional[HolographicCameraPose]) -> typing.Optional[HolographicCameraRenderingParameters]: ...
    @typing.overload
    def present_using_current_prediction(self) -> HolographicFramePresentResult: ...
    @typing.overload
    def present_using_current_prediction(self, wait_behavior: HolographicFramePresentWaitBehavior) -> HolographicFramePresentResult: ...
    def update_current_prediction(self) -> None: ...
    def wait_for_frame_to_finish(self) -> None: ...

class HolographicFramePrediction(_winrt.Object):
    camera_poses: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HolographicCameraPose]]
    timestamp: typing.Optional[winsdk.windows.perception.PerceptionTimestamp]
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicFramePrediction: ...

class HolographicFramePresentationMonitor(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicFramePresentationMonitor: ...
    def close(self) -> None: ...
    def read_reports(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[HolographicFramePresentationReport]]: ...

class HolographicFramePresentationReport(_winrt.Object):
    app_gpu_duration: datetime.timedelta
    app_gpu_overrun: datetime.timedelta
    compositor_gpu_duration: datetime.timedelta
    missed_presentation_opportunity_count: _winrt.UInt32
    presentation_count: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicFramePresentationReport: ...

class HolographicFrameRenderingReport(_winrt.Object):
    frame_id: HolographicFrameId
    missed_latch_count: _winrt.UInt32
    system_relative_actual_gpu_finish_time: datetime.timedelta
    system_relative_frame_ready_time: datetime.timedelta
    system_relative_target_latch_time: datetime.timedelta
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicFrameRenderingReport: ...

class HolographicFrameScanoutMonitor(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicFrameScanoutMonitor: ...
    def close(self) -> None: ...
    def read_reports(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[HolographicFrameScanoutReport]]: ...

class HolographicFrameScanoutReport(_winrt.Object):
    missed_scanout_count: _winrt.UInt32
    rendering_report: typing.Optional[HolographicFrameRenderingReport]
    system_relative_latch_time: datetime.timedelta
    system_relative_photon_time: datetime.timedelta
    system_relative_scanout_start_time: datetime.timedelta
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicFrameScanoutReport: ...

class HolographicQuadLayer(_winrt.Object):
    pixel_format: winsdk.windows.graphics.directx.DirectXPixelFormat
    size: winsdk.windows.foundation.Size
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicQuadLayer: ...
    @typing.overload
    def __new__(cls: typing.Type[HolographicQuadLayer], size: winsdk.windows.foundation.Size) -> HolographicQuadLayer:...
    @typing.overload
    def __new__(cls: typing.Type[HolographicQuadLayer], size: winsdk.windows.foundation.Size, pixel_format: winsdk.windows.graphics.directx.DirectXPixelFormat) -> HolographicQuadLayer:...
    def close(self) -> None: ...

class HolographicQuadLayerUpdateParameters(_winrt.Object):
    can_acquire_with_hardware_protection: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicQuadLayerUpdateParameters: ...
    def acquire_buffer_to_update_content(self) -> typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]: ...
    def acquire_buffer_to_update_content_with_hardware_protection(self) -> typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]: ...
    def update_content_protection_enabled(self, value: _winrt.Boolean) -> None: ...
    def update_extents(self, value: winsdk.windows.foundation.numerics.Vector2) -> None: ...
    def update_location_with_display_relative_mode(self, position: winsdk.windows.foundation.numerics.Vector3, orientation: winsdk.windows.foundation.numerics.Quaternion) -> None: ...
    def update_location_with_stationary_mode(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], position: winsdk.windows.foundation.numerics.Vector3, orientation: winsdk.windows.foundation.numerics.Quaternion) -> None: ...
    def update_viewport(self, value: winsdk.windows.foundation.Rect) -> None: ...

class HolographicSpace(_winrt.Object):
    primary_adapter_id: HolographicAdapterId
    user_presence: HolographicSpaceUserPresence
    is_available: _winrt.Boolean
    is_supported: _winrt.Boolean
    is_configured: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicSpace: ...
    @staticmethod
    def create_for_core_window(window: typing.Optional[winsdk.windows.ui.core.CoreWindow]) -> typing.Optional[HolographicSpace]: ...
    def create_frame_presentation_monitor(self, max_queued_reports: _winrt.UInt32) -> typing.Optional[HolographicFramePresentationMonitor]: ...
    def create_frame_scanout_monitor(self, max_queued_reports: _winrt.UInt32) -> typing.Optional[HolographicFrameScanoutMonitor]: ...
    def create_next_frame(self) -> typing.Optional[HolographicFrame]: ...
    def set_direct3_d11_device(self, value: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DDevice]) -> None: ...
    def wait_for_next_frame_ready(self) -> None: ...
    def wait_for_next_frame_ready_with_head_start(self, requested_head_start_duration: datetime.timedelta) -> None: ...
    def add_camera_added(self, handler: winsdk.windows.foundation.TypedEventHandler[HolographicSpace, HolographicSpaceCameraAddedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_camera_added(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_camera_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[HolographicSpace, HolographicSpaceCameraRemovedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_camera_removed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_user_presence_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[HolographicSpace, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_user_presence_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_is_available_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_is_available_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HolographicSpaceCameraAddedEventArgs(_winrt.Object):
    camera: typing.Optional[HolographicCamera]
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicSpaceCameraAddedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class HolographicSpaceCameraRemovedEventArgs(_winrt.Object):
    camera: typing.Optional[HolographicCamera]
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicSpaceCameraRemovedEventArgs: ...

class HolographicViewConfiguration(_winrt.Object):
    pixel_format: winsdk.windows.graphics.directx.DirectXPixelFormat
    is_enabled: _winrt.Boolean
    display: typing.Optional[HolographicDisplay]
    is_stereo: _winrt.Boolean
    kind: HolographicViewConfigurationKind
    native_render_target_size: winsdk.windows.foundation.Size
    refresh_rate: _winrt.Double
    render_target_size: winsdk.windows.foundation.Size
    supported_pixel_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.graphics.directx.DirectXPixelFormat]]
    supported_depth_reprojection_methods: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HolographicDepthReprojectionMethod]]
    @staticmethod
    def _from(obj: _winrt.Object) -> HolographicViewConfiguration: ...
    def request_render_target_size(self, size: winsdk.windows.foundation.Size) -> winsdk.windows.foundation.Size: ...

