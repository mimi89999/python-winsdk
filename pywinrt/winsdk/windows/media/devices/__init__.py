# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Media.Devices")

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
    import winsdk.windows.media.capture
except ImportError:
    pass

try:
    import winsdk.windows.media.devices.core
except ImportError:
    pass

try:
    import winsdk.windows.media.mediaproperties
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class AdvancedPhotoMode(enum.IntEnum):
    AUTO = 0
    STANDARD = 1
    HDR = 2
    LOW_LIGHT = 3

class AudioDeviceRole(enum.IntEnum):
    DEFAULT = 0
    COMMUNICATIONS = 1

class AutoFocusRange(enum.IntEnum):
    FULL_RANGE = 0
    MACRO = 1
    NORMAL = 2

class CameraOcclusionKind(enum.IntEnum):
    LID = 0
    CAMERA_HARDWARE = 1

class CameraStreamState(enum.IntEnum):
    NOT_STREAMING = 0
    STREAMING = 1
    BLOCKED_FOR_PRIVACY = 2
    SHUTDOWN = 3

class CaptureSceneMode(enum.IntEnum):
    AUTO = 0
    MANUAL = 1
    MACRO = 2
    PORTRAIT = 3
    SPORT = 4
    SNOW = 5
    NIGHT = 6
    BEACH = 7
    SUNSET = 8
    CANDLELIGHT = 9
    LANDSCAPE = 10
    NIGHT_PORTRAIT = 11
    BACKLIT = 12

class CaptureUse(enum.IntEnum):
    NONE = 0
    PHOTO = 1
    VIDEO = 2

class ColorTemperaturePreset(enum.IntEnum):
    AUTO = 0
    MANUAL = 1
    CLOUDY = 2
    DAYLIGHT = 3
    FLASH = 4
    FLUORESCENT = 5
    TUNGSTEN = 6
    CANDLELIGHT = 7

class DigitalWindowMode(enum.IntEnum):
    OFF = 0
    ON = 1
    AUTO = 2

class FocusMode(enum.IntEnum):
    AUTO = 0
    SINGLE = 1
    CONTINUOUS = 2
    MANUAL = 3

class FocusPreset(enum.IntEnum):
    AUTO = 0
    MANUAL = 1
    AUTO_MACRO = 2
    AUTO_NORMAL = 3
    AUTO_INFINITY = 4
    AUTO_HYPERFOCAL = 5

class HdrVideoMode(enum.IntEnum):
    OFF = 0
    ON = 1
    AUTO = 2

class InfraredTorchMode(enum.IntEnum):
    OFF = 0
    ON = 1
    ALTERNATING_FRAME_ILLUMINATION = 2

class IsoSpeedPreset(enum.IntEnum):
    AUTO = 0
    ISO50 = 1
    ISO80 = 2
    ISO100 = 3
    ISO200 = 4
    ISO400 = 5
    ISO800 = 6
    ISO1600 = 7
    ISO3200 = 8
    ISO6400 = 9
    ISO12800 = 10
    ISO25600 = 11

class ManualFocusDistance(enum.IntEnum):
    INFINITY = 0
    HYPERFOCAL = 1
    NEAREST = 2

class MediaCaptureFocusState(enum.IntEnum):
    UNINITIALIZED = 0
    LOST = 1
    SEARCHING = 2
    FOCUSED = 3
    FAILED = 4

class MediaCaptureOptimization(enum.IntEnum):
    DEFAULT = 0
    QUALITY = 1
    LATENCY = 2
    POWER = 3
    LATENCY_THEN_QUALITY = 4
    LATENCY_THEN_POWER = 5
    POWER_AND_QUALITY = 6

class MediaCapturePauseBehavior(enum.IntEnum):
    RETAIN_HARDWARE_RESOURCES = 0
    RELEASE_HARDWARE_RESOURCES = 1

class OpticalImageStabilizationMode(enum.IntEnum):
    OFF = 0
    ON = 1
    AUTO = 2

class RegionOfInterestType(enum.IntEnum):
    UNKNOWN = 0
    FACE = 1

class SendCommandStatus(enum.IntEnum):
    SUCCESS = 0
    DEVICE_NOT_AVAILABLE = 1

class VideoDeviceControllerGetDevicePropertyStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    BUFFER_TOO_SMALL = 2
    NOT_SUPPORTED = 3
    DEVICE_NOT_AVAILABLE = 4
    MAX_PROPERTY_VALUE_SIZE_TOO_SMALL = 5
    MAX_PROPERTY_VALUE_SIZE_REQUIRED = 6

class VideoDeviceControllerSetDevicePropertyStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    NOT_SUPPORTED = 2
    INVALID_VALUE = 3
    DEVICE_NOT_AVAILABLE = 4
    NOT_IN_CONTROL = 5

class VideoTemporalDenoisingMode(enum.IntEnum):
    OFF = 0
    ON = 1
    AUTO = 2

class ZoomTransitionMode(enum.IntEnum):
    AUTO = 0
    DIRECT = 1
    SMOOTH = 2

_ns_module._register_AdvancedPhotoMode(AdvancedPhotoMode)
_ns_module._register_AudioDeviceRole(AudioDeviceRole)
_ns_module._register_AutoFocusRange(AutoFocusRange)
_ns_module._register_CameraOcclusionKind(CameraOcclusionKind)
_ns_module._register_CameraStreamState(CameraStreamState)
_ns_module._register_CaptureSceneMode(CaptureSceneMode)
_ns_module._register_CaptureUse(CaptureUse)
_ns_module._register_ColorTemperaturePreset(ColorTemperaturePreset)
_ns_module._register_DigitalWindowMode(DigitalWindowMode)
_ns_module._register_FocusMode(FocusMode)
_ns_module._register_FocusPreset(FocusPreset)
_ns_module._register_HdrVideoMode(HdrVideoMode)
_ns_module._register_InfraredTorchMode(InfraredTorchMode)
_ns_module._register_IsoSpeedPreset(IsoSpeedPreset)
_ns_module._register_ManualFocusDistance(ManualFocusDistance)
_ns_module._register_MediaCaptureFocusState(MediaCaptureFocusState)
_ns_module._register_MediaCaptureOptimization(MediaCaptureOptimization)
_ns_module._register_MediaCapturePauseBehavior(MediaCapturePauseBehavior)
_ns_module._register_OpticalImageStabilizationMode(OpticalImageStabilizationMode)
_ns_module._register_RegionOfInterestType(RegionOfInterestType)
_ns_module._register_SendCommandStatus(SendCommandStatus)
_ns_module._register_VideoDeviceControllerGetDevicePropertyStatus(VideoDeviceControllerGetDevicePropertyStatus)
_ns_module._register_VideoDeviceControllerSetDevicePropertyStatus(VideoDeviceControllerSetDevicePropertyStatus)
_ns_module._register_VideoTemporalDenoisingMode(VideoTemporalDenoisingMode)
_ns_module._register_ZoomTransitionMode(ZoomTransitionMode)

AdvancedPhotoCaptureSettings = _ns_module.AdvancedPhotoCaptureSettings
AdvancedPhotoControl = _ns_module.AdvancedPhotoControl
AudioDeviceController = _ns_module.AudioDeviceController
AudioDeviceModule = _ns_module.AudioDeviceModule
AudioDeviceModuleNotificationEventArgs = _ns_module.AudioDeviceModuleNotificationEventArgs
AudioDeviceModulesManager = _ns_module.AudioDeviceModulesManager
CameraOcclusionInfo = _ns_module.CameraOcclusionInfo
CameraOcclusionState = _ns_module.CameraOcclusionState
CameraOcclusionStateChangedEventArgs = _ns_module.CameraOcclusionStateChangedEventArgs
DefaultAudioCaptureDeviceChangedEventArgs = _ns_module.DefaultAudioCaptureDeviceChangedEventArgs
DefaultAudioRenderDeviceChangedEventArgs = _ns_module.DefaultAudioRenderDeviceChangedEventArgs
DigitalWindowBounds = _ns_module.DigitalWindowBounds
DigitalWindowCapability = _ns_module.DigitalWindowCapability
DigitalWindowControl = _ns_module.DigitalWindowControl
ExposureCompensationControl = _ns_module.ExposureCompensationControl
ExposureControl = _ns_module.ExposureControl
ExposurePriorityVideoControl = _ns_module.ExposurePriorityVideoControl
FlashControl = _ns_module.FlashControl
FocusControl = _ns_module.FocusControl
FocusSettings = _ns_module.FocusSettings
HdrVideoControl = _ns_module.HdrVideoControl
InfraredTorchControl = _ns_module.InfraredTorchControl
IsoSpeedControl = _ns_module.IsoSpeedControl
LowLagPhotoControl = _ns_module.LowLagPhotoControl
LowLagPhotoSequenceControl = _ns_module.LowLagPhotoSequenceControl
MediaDevice = _ns_module.MediaDevice
MediaDeviceControl = _ns_module.MediaDeviceControl
MediaDeviceControlCapabilities = _ns_module.MediaDeviceControlCapabilities
ModuleCommandResult = _ns_module.ModuleCommandResult
OpticalImageStabilizationControl = _ns_module.OpticalImageStabilizationControl
PanelBasedOptimizationControl = _ns_module.PanelBasedOptimizationControl
PhotoConfirmationControl = _ns_module.PhotoConfirmationControl
RegionOfInterest = _ns_module.RegionOfInterest
RegionsOfInterestControl = _ns_module.RegionsOfInterestControl
SceneModeControl = _ns_module.SceneModeControl
TorchControl = _ns_module.TorchControl
VideoDeviceController = _ns_module.VideoDeviceController
VideoDeviceControllerGetDevicePropertyResult = _ns_module.VideoDeviceControllerGetDevicePropertyResult
VideoTemporalDenoisingControl = _ns_module.VideoTemporalDenoisingControl
WhiteBalanceControl = _ns_module.WhiteBalanceControl
ZoomControl = _ns_module.ZoomControl
ZoomSettings = _ns_module.ZoomSettings
IDefaultAudioDeviceChangedEventArgs = _ns_module.IDefaultAudioDeviceChangedEventArgs
IMediaDeviceController = _ns_module.IMediaDeviceController
