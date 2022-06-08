# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.Perception")

try:
    import winsdk.windows.devices.enumeration
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.foundation.numerics
except ImportError:
    pass

try:
    import winsdk.windows.graphics.imaging
except ImportError:
    pass

try:
    import winsdk.windows.media
except ImportError:
    pass

try:
    import winsdk.windows.media.devices.core
except ImportError:
    pass

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

_ns_module._register_PerceptionFrameSourceAccessStatus(PerceptionFrameSourceAccessStatus)
_ns_module._register_PerceptionFrameSourcePropertyChangeStatus(PerceptionFrameSourcePropertyChangeStatus)

KnownCameraIntrinsicsProperties = _ns_module.KnownCameraIntrinsicsProperties
KnownPerceptionColorFrameSourceProperties = _ns_module.KnownPerceptionColorFrameSourceProperties
KnownPerceptionDepthFrameSourceProperties = _ns_module.KnownPerceptionDepthFrameSourceProperties
KnownPerceptionFrameSourceProperties = _ns_module.KnownPerceptionFrameSourceProperties
KnownPerceptionInfraredFrameSourceProperties = _ns_module.KnownPerceptionInfraredFrameSourceProperties
KnownPerceptionVideoFrameSourceProperties = _ns_module.KnownPerceptionVideoFrameSourceProperties
KnownPerceptionVideoProfileProperties = _ns_module.KnownPerceptionVideoProfileProperties
PerceptionColorFrame = _ns_module.PerceptionColorFrame
PerceptionColorFrameArrivedEventArgs = _ns_module.PerceptionColorFrameArrivedEventArgs
PerceptionColorFrameReader = _ns_module.PerceptionColorFrameReader
PerceptionColorFrameSource = _ns_module.PerceptionColorFrameSource
PerceptionColorFrameSourceAddedEventArgs = _ns_module.PerceptionColorFrameSourceAddedEventArgs
PerceptionColorFrameSourceRemovedEventArgs = _ns_module.PerceptionColorFrameSourceRemovedEventArgs
PerceptionColorFrameSourceWatcher = _ns_module.PerceptionColorFrameSourceWatcher
PerceptionControlSession = _ns_module.PerceptionControlSession
PerceptionDepthCorrelatedCameraIntrinsics = _ns_module.PerceptionDepthCorrelatedCameraIntrinsics
PerceptionDepthCorrelatedCoordinateMapper = _ns_module.PerceptionDepthCorrelatedCoordinateMapper
PerceptionDepthFrame = _ns_module.PerceptionDepthFrame
PerceptionDepthFrameArrivedEventArgs = _ns_module.PerceptionDepthFrameArrivedEventArgs
PerceptionDepthFrameReader = _ns_module.PerceptionDepthFrameReader
PerceptionDepthFrameSource = _ns_module.PerceptionDepthFrameSource
PerceptionDepthFrameSourceAddedEventArgs = _ns_module.PerceptionDepthFrameSourceAddedEventArgs
PerceptionDepthFrameSourceRemovedEventArgs = _ns_module.PerceptionDepthFrameSourceRemovedEventArgs
PerceptionDepthFrameSourceWatcher = _ns_module.PerceptionDepthFrameSourceWatcher
PerceptionFrameSourcePropertiesChangedEventArgs = _ns_module.PerceptionFrameSourcePropertiesChangedEventArgs
PerceptionFrameSourcePropertyChangeResult = _ns_module.PerceptionFrameSourcePropertyChangeResult
PerceptionInfraredFrame = _ns_module.PerceptionInfraredFrame
PerceptionInfraredFrameArrivedEventArgs = _ns_module.PerceptionInfraredFrameArrivedEventArgs
PerceptionInfraredFrameReader = _ns_module.PerceptionInfraredFrameReader
PerceptionInfraredFrameSource = _ns_module.PerceptionInfraredFrameSource
PerceptionInfraredFrameSourceAddedEventArgs = _ns_module.PerceptionInfraredFrameSourceAddedEventArgs
PerceptionInfraredFrameSourceRemovedEventArgs = _ns_module.PerceptionInfraredFrameSourceRemovedEventArgs
PerceptionInfraredFrameSourceWatcher = _ns_module.PerceptionInfraredFrameSourceWatcher
PerceptionVideoProfile = _ns_module.PerceptionVideoProfile
