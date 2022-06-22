# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Networking.XboxLive")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.networking
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class XboxLiveEndpointPairCreationBehaviors(enum.IntFlag):
    NONE = 0
    REEVALUATE_PATH = 0x1

class XboxLiveEndpointPairCreationStatus(enum.IntEnum):
    SUCCEEDED = 0
    NO_LOCAL_NETWORKS = 1
    NO_COMPATIBLE_NETWORK_PATHS = 2
    LOCAL_SYSTEM_NOT_AUTHORIZED = 3
    CANCELED = 4
    TIMED_OUT = 5
    REMOTE_SYSTEM_NOT_AUTHORIZED = 6
    REFUSED_DUE_TO_CONFIGURATION = 7
    UNEXPECTED_INTERNAL_ERROR = 8

class XboxLiveEndpointPairState(enum.IntEnum):
    INVALID = 0
    CREATING_OUTBOUND = 1
    CREATING_INBOUND = 2
    READY = 3
    DELETING_LOCALLY = 4
    REMOTE_ENDPOINT_TERMINATING = 5
    DELETED = 6

class XboxLiveNetworkAccessKind(enum.IntEnum):
    OPEN = 0
    MODERATE = 1
    STRICT = 2

class XboxLiveQualityOfServiceMeasurementStatus(enum.IntEnum):
    NOT_STARTED = 0
    IN_PROGRESS = 1
    IN_PROGRESS_WITH_PROVISIONAL_RESULTS = 2
    SUCCEEDED = 3
    NO_LOCAL_NETWORKS = 4
    NO_COMPATIBLE_NETWORK_PATHS = 5
    LOCAL_SYSTEM_NOT_AUTHORIZED = 6
    CANCELED = 7
    TIMED_OUT = 8
    REMOTE_SYSTEM_NOT_AUTHORIZED = 9
    REFUSED_DUE_TO_CONFIGURATION = 10
    UNEXPECTED_INTERNAL_ERROR = 11

class XboxLiveQualityOfServiceMetric(enum.IntEnum):
    AVERAGE_LATENCY_IN_MILLISECONDS = 0
    MIN_LATENCY_IN_MILLISECONDS = 1
    MAX_LATENCY_IN_MILLISECONDS = 2
    AVERAGE_OUTBOUND_BITS_PER_SECOND = 3
    MIN_OUTBOUND_BITS_PER_SECOND = 4
    MAX_OUTBOUND_BITS_PER_SECOND = 5
    AVERAGE_INBOUND_BITS_PER_SECOND = 6
    MIN_INBOUND_BITS_PER_SECOND = 7
    MAX_INBOUND_BITS_PER_SECOND = 8

class XboxLiveSocketKind(enum.IntEnum):
    NONE = 0
    DATAGRAM = 1
    STREAM = 2

_ns_module._register_XboxLiveEndpointPairCreationBehaviors(XboxLiveEndpointPairCreationBehaviors)
_ns_module._register_XboxLiveEndpointPairCreationStatus(XboxLiveEndpointPairCreationStatus)
_ns_module._register_XboxLiveEndpointPairState(XboxLiveEndpointPairState)
_ns_module._register_XboxLiveNetworkAccessKind(XboxLiveNetworkAccessKind)
_ns_module._register_XboxLiveQualityOfServiceMeasurementStatus(XboxLiveQualityOfServiceMeasurementStatus)
_ns_module._register_XboxLiveQualityOfServiceMetric(XboxLiveQualityOfServiceMetric)
_ns_module._register_XboxLiveSocketKind(XboxLiveSocketKind)

XboxLiveDeviceAddress = _ns_module.XboxLiveDeviceAddress
XboxLiveEndpointPair = _ns_module.XboxLiveEndpointPair
XboxLiveEndpointPairCreationResult = _ns_module.XboxLiveEndpointPairCreationResult
XboxLiveEndpointPairStateChangedEventArgs = _ns_module.XboxLiveEndpointPairStateChangedEventArgs
XboxLiveEndpointPairTemplate = _ns_module.XboxLiveEndpointPairTemplate
XboxLiveInboundEndpointPairCreatedEventArgs = _ns_module.XboxLiveInboundEndpointPairCreatedEventArgs
XboxLiveQualityOfServiceMeasurement = _ns_module.XboxLiveQualityOfServiceMeasurement
XboxLiveQualityOfServiceMetricResult = _ns_module.XboxLiveQualityOfServiceMetricResult
XboxLiveQualityOfServicePrivatePayloadResult = _ns_module.XboxLiveQualityOfServicePrivatePayloadResult
