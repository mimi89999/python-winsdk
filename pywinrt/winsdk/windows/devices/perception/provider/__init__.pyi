# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.devices.perception
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.foundation.numerics
import winsdk.windows.graphics.imaging
import winsdk.windows.media

Self = typing.TypeVar('Self')

class KnownPerceptionFrameKind(_winrt.Object):
    color: str
    depth: str
    infrared: str
    @staticmethod
    def _from(obj: _winrt.Object) -> KnownPerceptionFrameKind: ...

class PerceptionControlGroup(_winrt.Object):
    frame_provider_ids: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionControlGroup: ...
    def __new__(cls: typing.Type[PerceptionControlGroup], ids: typing.Iterable[str]) -> PerceptionControlGroup:...

class PerceptionCorrelation(_winrt.Object):
    orientation: winsdk.windows.foundation.numerics.Quaternion
    position: winsdk.windows.foundation.numerics.Vector3
    target_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionCorrelation: ...
    def __new__(cls: typing.Type[PerceptionCorrelation], target_id: str, position: winsdk.windows.foundation.numerics.Vector3, orientation: winsdk.windows.foundation.numerics.Quaternion) -> PerceptionCorrelation:...

class PerceptionCorrelationGroup(_winrt.Object):
    relative_locations: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PerceptionCorrelation]]
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionCorrelationGroup: ...
    def __new__(cls: typing.Type[PerceptionCorrelationGroup], relative_locations: typing.Iterable[PerceptionCorrelation]) -> PerceptionCorrelationGroup:...

class PerceptionFaceAuthenticationGroup(_winrt.Object):
    frame_provider_ids: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionFaceAuthenticationGroup: ...
    def __new__(cls: typing.Type[PerceptionFaceAuthenticationGroup], ids: typing.Iterable[str], start_handler: typing.Optional[PerceptionStartFaceAuthenticationHandler], stop_handler: typing.Optional[PerceptionStopFaceAuthenticationHandler]) -> PerceptionFaceAuthenticationGroup:...

class PerceptionFrame(_winrt.Object):
    relative_time: datetime.timedelta
    frame_data: typing.Optional[winsdk.windows.foundation.IMemoryBuffer]
    properties: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionFrame: ...

class PerceptionFrameProviderInfo(_winrt.Object):
    id: str
    hidden: _winrt.Boolean
    frame_kind: str
    display_name: str
    device_kind: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionFrameProviderInfo: ...
    def __new__(cls: typing.Type[PerceptionFrameProviderInfo]) -> PerceptionFrameProviderInfo:...

class PerceptionFrameProviderManagerService(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionFrameProviderManagerService: ...
    @staticmethod
    def publish_frame_for_provider(provider: typing.Optional[IPerceptionFrameProvider], frame: typing.Optional[PerceptionFrame]) -> None: ...
    @staticmethod
    def register_control_group(manager: typing.Optional[IPerceptionFrameProviderManager], control_group: typing.Optional[PerceptionControlGroup]) -> None: ...
    @staticmethod
    def register_correlation_group(manager: typing.Optional[IPerceptionFrameProviderManager], correlation_group: typing.Optional[PerceptionCorrelationGroup]) -> None: ...
    @staticmethod
    def register_face_authentication_group(manager: typing.Optional[IPerceptionFrameProviderManager], face_authentication_group: typing.Optional[PerceptionFaceAuthenticationGroup]) -> None: ...
    @staticmethod
    def register_frame_provider_info(manager: typing.Optional[IPerceptionFrameProviderManager], frame_provider_info: typing.Optional[PerceptionFrameProviderInfo]) -> None: ...
    @staticmethod
    def unregister_control_group(manager: typing.Optional[IPerceptionFrameProviderManager], control_group: typing.Optional[PerceptionControlGroup]) -> None: ...
    @staticmethod
    def unregister_correlation_group(manager: typing.Optional[IPerceptionFrameProviderManager], correlation_group: typing.Optional[PerceptionCorrelationGroup]) -> None: ...
    @staticmethod
    def unregister_face_authentication_group(manager: typing.Optional[IPerceptionFrameProviderManager], face_authentication_group: typing.Optional[PerceptionFaceAuthenticationGroup]) -> None: ...
    @staticmethod
    def unregister_frame_provider_info(manager: typing.Optional[IPerceptionFrameProviderManager], frame_provider_info: typing.Optional[PerceptionFrameProviderInfo]) -> None: ...
    @staticmethod
    def update_availability_for_provider(provider: typing.Optional[IPerceptionFrameProvider], available: _winrt.Boolean) -> None: ...

class PerceptionPropertyChangeRequest(_winrt.Object):
    status: winsdk.windows.devices.perception.PerceptionFrameSourcePropertyChangeStatus
    name: str
    value: typing.Optional[_winrt.Object]
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionPropertyChangeRequest: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class PerceptionVideoFrameAllocator(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PerceptionVideoFrameAllocator: ...
    def __new__(cls: typing.Type[PerceptionVideoFrameAllocator], max_outstanding_frame_count_for_write: _winrt.UInt32, format: winsdk.windows.graphics.imaging.BitmapPixelFormat, resolution: winsdk.windows.foundation.Size, alpha: winsdk.windows.graphics.imaging.BitmapAlphaMode) -> PerceptionVideoFrameAllocator:...
    def allocate_frame(self) -> typing.Optional[PerceptionFrame]: ...
    def close(self) -> None: ...
    def copy_from_video_frame(self, frame: typing.Optional[winsdk.windows.media.VideoFrame]) -> typing.Optional[PerceptionFrame]: ...

class IPerceptionFrameProvider(_winrt.Object):
    available: _winrt.Boolean
    frame_provider_info: typing.Optional[PerceptionFrameProviderInfo]
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IPerceptionFrameProvider: ...
    def close(self) -> None: ...
    def set_property(self, value: typing.Optional[PerceptionPropertyChangeRequest]) -> None: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

class IPerceptionFrameProviderManager(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IPerceptionFrameProviderManager: ...
    def close(self) -> None: ...
    def get_frame_provider(self, frame_provider_info: typing.Optional[PerceptionFrameProviderInfo]) -> typing.Optional[IPerceptionFrameProvider]: ...

PerceptionStartFaceAuthenticationHandler = typing.Callable[[typing.Optional[PerceptionFaceAuthenticationGroup]], _winrt.Boolean]

PerceptionStopFaceAuthenticationHandler = typing.Callable[[typing.Optional[PerceptionFaceAuthenticationGroup]], None]

