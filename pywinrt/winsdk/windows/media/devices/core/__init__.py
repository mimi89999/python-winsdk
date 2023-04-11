# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Media.Devices.Core")

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
    import winsdk.windows.media.mediaproperties
except ImportError:
    pass

try:
    import winsdk.windows.perception.spatial
except ImportError:
    pass

class FrameFlashMode(enum.IntEnum):
    DISABLE = 0
    ENABLE = 1
    GLOBAL = 2

_ns_module._register_FrameFlashMode(FrameFlashMode)

CameraIntrinsics = _ns_module.CameraIntrinsics
DepthCorrelatedCoordinateMapper = _ns_module.DepthCorrelatedCoordinateMapper
FrameControlCapabilities = _ns_module.FrameControlCapabilities
FrameController = _ns_module.FrameController
FrameExposureCapabilities = _ns_module.FrameExposureCapabilities
FrameExposureCompensationCapabilities = _ns_module.FrameExposureCompensationCapabilities
FrameExposureCompensationControl = _ns_module.FrameExposureCompensationControl
FrameExposureControl = _ns_module.FrameExposureControl
FrameFlashCapabilities = _ns_module.FrameFlashCapabilities
FrameFlashControl = _ns_module.FrameFlashControl
FrameFocusCapabilities = _ns_module.FrameFocusCapabilities
FrameFocusControl = _ns_module.FrameFocusControl
FrameIsoSpeedCapabilities = _ns_module.FrameIsoSpeedCapabilities
FrameIsoSpeedControl = _ns_module.FrameIsoSpeedControl
VariablePhotoSequenceController = _ns_module.VariablePhotoSequenceController
