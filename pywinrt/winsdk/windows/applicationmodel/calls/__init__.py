# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.Calls")

try:
    import winsdk.windows.applicationmodel.contacts
except ImportError:
    pass

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
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.ui
except ImportError:
    pass

class CellularDtmfMode(enum.IntEnum):
    CONTINUOUS = 0
    BURST = 1

class DtmfKey(enum.IntEnum):
    D0 = 0
    D1 = 1
    D2 = 2
    D3 = 3
    D4 = 4
    D5 = 5
    D6 = 6
    D7 = 7
    D8 = 8
    D9 = 9
    STAR = 10
    POUND = 11

class DtmfToneAudioPlayback(enum.IntEnum):
    PLAY = 0
    DO_NOT_PLAY = 1

class PhoneAudioRoutingEndpoint(enum.IntEnum):
    DEFAULT = 0
    BLUETOOTH = 1
    SPEAKERPHONE = 2

class PhoneCallAudioDevice(enum.IntEnum):
    UNKNOWN = 0
    LOCAL_DEVICE = 1
    REMOTE_DEVICE = 2

class PhoneCallDirection(enum.IntEnum):
    UNKNOWN = 0
    INCOMING = 1
    OUTGOING = 2

class PhoneCallHistoryEntryMedia(enum.IntEnum):
    AUDIO = 0
    VIDEO = 1

class PhoneCallHistoryEntryOtherAppReadAccess(enum.IntEnum):
    FULL = 0
    SYSTEM_ONLY = 1

class PhoneCallHistoryEntryQueryDesiredMedia(enum.IntFlag):
    NONE = 0
    AUDIO = 0x1
    VIDEO = 0x2
    ALL = 0xffffffff

class PhoneCallHistoryEntryRawAddressKind(enum.IntEnum):
    PHONE_NUMBER = 0
    CUSTOM = 1

class PhoneCallHistorySourceIdKind(enum.IntEnum):
    CELLULAR_PHONE_LINE_ID = 0
    PACKAGE_FAMILY_NAME = 1

class PhoneCallHistoryStoreAccessType(enum.IntEnum):
    APP_ENTRIES_READ_WRITE = 0
    ALL_ENTRIES_LIMITED_READ_WRITE = 1
    ALL_ENTRIES_READ_WRITE = 2

class PhoneCallMedia(enum.IntEnum):
    AUDIO = 0
    AUDIO_AND_VIDEO = 1
    AUDIO_AND_REAL_TIME_TEXT = 2

class PhoneCallOperationStatus(enum.IntEnum):
    SUCCEEDED = 0
    OTHER_FAILURE = 1
    TIMED_OUT = 2
    CONNECTION_LOST = 3
    INVALID_CALL_STATE = 4

class PhoneCallStatus(enum.IntEnum):
    LOST = 0
    INCOMING = 1
    DIALING = 2
    TALKING = 3
    HELD = 4
    ENDED = 5

class PhoneLineNetworkOperatorDisplayTextLocation(enum.IntEnum):
    DEFAULT = 0
    TILE = 1
    DIALER = 2
    IN_CALL_U_I = 3

class PhoneLineOperationStatus(enum.IntEnum):
    SUCCEEDED = 0
    OTHER_FAILURE = 1
    TIMED_OUT = 2
    CONNECTION_LOST = 3
    INVALID_CALL_STATE = 4

class PhoneLineTransport(enum.IntEnum):
    CELLULAR = 0
    VOIP_APP = 1
    BLUETOOTH = 2

class PhoneLineWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    ENUMERATION_COMPLETED = 2
    STOPPED = 3

class PhoneNetworkState(enum.IntEnum):
    UNKNOWN = 0
    NO_SIGNAL = 1
    DEREGISTERED = 2
    DENIED = 3
    SEARCHING = 4
    HOME = 5
    ROAMING_INTERNATIONAL = 6
    ROAMING_DOMESTIC = 7

class PhoneSimState(enum.IntEnum):
    UNKNOWN = 0
    PIN_NOT_REQUIRED = 1
    PIN_UNLOCKED = 2
    PIN_LOCKED = 3
    PUK_LOCKED = 4
    NOT_INSERTED = 5
    INVALID = 6
    DISABLED = 7

class PhoneVoicemailType(enum.IntEnum):
    NONE = 0
    TRADITIONAL = 1
    VISUAL = 2

class TransportDeviceAudioRoutingStatus(enum.IntEnum):
    UNKNOWN = 0
    CAN_ROUTE_TO_LOCAL_DEVICE = 1
    CANNOT_ROUTE_TO_LOCAL_DEVICE = 2

class VoipPhoneCallMedia(enum.IntFlag):
    NONE = 0
    AUDIO = 0x1
    VIDEO = 0x2

class VoipPhoneCallRejectReason(enum.IntEnum):
    USER_IGNORED = 0
    TIMED_OUT = 1
    OTHER_INCOMING_CALL = 2
    EMERGENCY_CALL_EXISTS = 3
    INVALID_CALL_STATE = 4

class VoipPhoneCallResourceReservationStatus(enum.IntEnum):
    SUCCESS = 0
    RESOURCES_NOT_AVAILABLE = 1

class VoipPhoneCallState(enum.IntEnum):
    ENDED = 0
    HELD = 1
    ACTIVE = 2
    INCOMING = 3
    OUTGOING = 4

_ns_module._register_CellularDtmfMode(CellularDtmfMode)
_ns_module._register_DtmfKey(DtmfKey)
_ns_module._register_DtmfToneAudioPlayback(DtmfToneAudioPlayback)
_ns_module._register_PhoneAudioRoutingEndpoint(PhoneAudioRoutingEndpoint)
_ns_module._register_PhoneCallAudioDevice(PhoneCallAudioDevice)
_ns_module._register_PhoneCallDirection(PhoneCallDirection)
_ns_module._register_PhoneCallHistoryEntryMedia(PhoneCallHistoryEntryMedia)
_ns_module._register_PhoneCallHistoryEntryOtherAppReadAccess(PhoneCallHistoryEntryOtherAppReadAccess)
_ns_module._register_PhoneCallHistoryEntryQueryDesiredMedia(PhoneCallHistoryEntryQueryDesiredMedia)
_ns_module._register_PhoneCallHistoryEntryRawAddressKind(PhoneCallHistoryEntryRawAddressKind)
_ns_module._register_PhoneCallHistorySourceIdKind(PhoneCallHistorySourceIdKind)
_ns_module._register_PhoneCallHistoryStoreAccessType(PhoneCallHistoryStoreAccessType)
_ns_module._register_PhoneCallMedia(PhoneCallMedia)
_ns_module._register_PhoneCallOperationStatus(PhoneCallOperationStatus)
_ns_module._register_PhoneCallStatus(PhoneCallStatus)
_ns_module._register_PhoneLineNetworkOperatorDisplayTextLocation(PhoneLineNetworkOperatorDisplayTextLocation)
_ns_module._register_PhoneLineOperationStatus(PhoneLineOperationStatus)
_ns_module._register_PhoneLineTransport(PhoneLineTransport)
_ns_module._register_PhoneLineWatcherStatus(PhoneLineWatcherStatus)
_ns_module._register_PhoneNetworkState(PhoneNetworkState)
_ns_module._register_PhoneSimState(PhoneSimState)
_ns_module._register_PhoneVoicemailType(PhoneVoicemailType)
_ns_module._register_TransportDeviceAudioRoutingStatus(TransportDeviceAudioRoutingStatus)
_ns_module._register_VoipPhoneCallMedia(VoipPhoneCallMedia)
_ns_module._register_VoipPhoneCallRejectReason(VoipPhoneCallRejectReason)
_ns_module._register_VoipPhoneCallResourceReservationStatus(VoipPhoneCallResourceReservationStatus)
_ns_module._register_VoipPhoneCallState(VoipPhoneCallState)

CallAnswerEventArgs = _ns_module.CallAnswerEventArgs
CallRejectEventArgs = _ns_module.CallRejectEventArgs
CallStateChangeEventArgs = _ns_module.CallStateChangeEventArgs
LockScreenCallEndCallDeferral = _ns_module.LockScreenCallEndCallDeferral
LockScreenCallEndRequestedEventArgs = _ns_module.LockScreenCallEndRequestedEventArgs
LockScreenCallUI = _ns_module.LockScreenCallUI
MuteChangeEventArgs = _ns_module.MuteChangeEventArgs
PhoneCall = _ns_module.PhoneCall
PhoneCallBlocking = _ns_module.PhoneCallBlocking
PhoneCallHistoryEntry = _ns_module.PhoneCallHistoryEntry
PhoneCallHistoryEntryAddress = _ns_module.PhoneCallHistoryEntryAddress
PhoneCallHistoryEntryQueryOptions = _ns_module.PhoneCallHistoryEntryQueryOptions
PhoneCallHistoryEntryReader = _ns_module.PhoneCallHistoryEntryReader
PhoneCallHistoryManager = _ns_module.PhoneCallHistoryManager
PhoneCallHistoryManagerForUser = _ns_module.PhoneCallHistoryManagerForUser
PhoneCallHistoryStore = _ns_module.PhoneCallHistoryStore
PhoneCallInfo = _ns_module.PhoneCallInfo
PhoneCallManager = _ns_module.PhoneCallManager
PhoneCallStore = _ns_module.PhoneCallStore
PhoneCallVideoCapabilities = _ns_module.PhoneCallVideoCapabilities
PhoneCallVideoCapabilitiesManager = _ns_module.PhoneCallVideoCapabilitiesManager
PhoneCallsResult = _ns_module.PhoneCallsResult
PhoneDialOptions = _ns_module.PhoneDialOptions
PhoneLine = _ns_module.PhoneLine
PhoneLineCellularDetails = _ns_module.PhoneLineCellularDetails
PhoneLineConfiguration = _ns_module.PhoneLineConfiguration
PhoneLineDialResult = _ns_module.PhoneLineDialResult
PhoneLineTransportDevice = _ns_module.PhoneLineTransportDevice
PhoneLineWatcher = _ns_module.PhoneLineWatcher
PhoneLineWatcherEventArgs = _ns_module.PhoneLineWatcherEventArgs
PhoneVoicemail = _ns_module.PhoneVoicemail
VoipCallCoordinator = _ns_module.VoipCallCoordinator
VoipPhoneCall = _ns_module.VoipPhoneCall
