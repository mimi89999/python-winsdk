# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Bluetooth.GenericAttributeProfile")

try:
    import winsdk.windows.devices.bluetooth
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
    import winsdk.windows.storage.streams
except ImportError:
    pass

class GattCharacteristicProperties(enum.IntFlag):
    NONE = 0
    BROADCAST = 0x1
    READ = 0x2
    WRITE_WITHOUT_RESPONSE = 0x4
    WRITE = 0x8
    NOTIFY = 0x10
    INDICATE = 0x20
    AUTHENTICATED_SIGNED_WRITES = 0x40
    EXTENDED_PROPERTIES = 0x80
    RELIABLE_WRITES = 0x100
    WRITABLE_AUXILIARIES = 0x200

class GattClientCharacteristicConfigurationDescriptorValue(enum.IntEnum):
    NONE = 0
    NOTIFY = 1
    INDICATE = 2

class GattCommunicationStatus(enum.IntEnum):
    SUCCESS = 0
    UNREACHABLE = 1
    PROTOCOL_ERROR = 2
    ACCESS_DENIED = 3

class GattOpenStatus(enum.IntEnum):
    UNSPECIFIED = 0
    SUCCESS = 1
    ALREADY_OPENED = 2
    NOT_FOUND = 3
    SHARING_VIOLATION = 4
    ACCESS_DENIED = 5

class GattProtectionLevel(enum.IntEnum):
    PLAIN = 0
    AUTHENTICATION_REQUIRED = 1
    ENCRYPTION_REQUIRED = 2
    ENCRYPTION_AND_AUTHENTICATION_REQUIRED = 3

class GattRequestState(enum.IntEnum):
    PENDING = 0
    COMPLETED = 1
    CANCELED = 2

class GattServiceProviderAdvertisementStatus(enum.IntEnum):
    CREATED = 0
    STOPPED = 1
    STARTED = 2
    ABORTED = 3
    STARTED_WITHOUT_ALL_ADVERTISEMENT_DATA = 4

class GattSessionStatus(enum.IntEnum):
    CLOSED = 0
    ACTIVE = 1

class GattSharingMode(enum.IntEnum):
    UNSPECIFIED = 0
    EXCLUSIVE = 1
    SHARED_READ_ONLY = 2
    SHARED_READ_AND_WRITE = 3

class GattWriteOption(enum.IntEnum):
    WRITE_WITH_RESPONSE = 0
    WRITE_WITHOUT_RESPONSE = 1

_ns_module._register_GattCharacteristicProperties(GattCharacteristicProperties)
_ns_module._register_GattClientCharacteristicConfigurationDescriptorValue(GattClientCharacteristicConfigurationDescriptorValue)
_ns_module._register_GattCommunicationStatus(GattCommunicationStatus)
_ns_module._register_GattOpenStatus(GattOpenStatus)
_ns_module._register_GattProtectionLevel(GattProtectionLevel)
_ns_module._register_GattRequestState(GattRequestState)
_ns_module._register_GattServiceProviderAdvertisementStatus(GattServiceProviderAdvertisementStatus)
_ns_module._register_GattSessionStatus(GattSessionStatus)
_ns_module._register_GattSharingMode(GattSharingMode)
_ns_module._register_GattWriteOption(GattWriteOption)

GattCharacteristic = _ns_module.GattCharacteristic
GattCharacteristicUuids = _ns_module.GattCharacteristicUuids
GattCharacteristicsResult = _ns_module.GattCharacteristicsResult
GattClientNotificationResult = _ns_module.GattClientNotificationResult
GattDescriptor = _ns_module.GattDescriptor
GattDescriptorUuids = _ns_module.GattDescriptorUuids
GattDescriptorsResult = _ns_module.GattDescriptorsResult
GattDeviceService = _ns_module.GattDeviceService
GattDeviceServicesResult = _ns_module.GattDeviceServicesResult
GattLocalCharacteristic = _ns_module.GattLocalCharacteristic
GattLocalCharacteristicParameters = _ns_module.GattLocalCharacteristicParameters
GattLocalCharacteristicResult = _ns_module.GattLocalCharacteristicResult
GattLocalDescriptor = _ns_module.GattLocalDescriptor
GattLocalDescriptorParameters = _ns_module.GattLocalDescriptorParameters
GattLocalDescriptorResult = _ns_module.GattLocalDescriptorResult
GattLocalService = _ns_module.GattLocalService
GattPresentationFormat = _ns_module.GattPresentationFormat
GattPresentationFormatTypes = _ns_module.GattPresentationFormatTypes
GattProtocolError = _ns_module.GattProtocolError
GattReadClientCharacteristicConfigurationDescriptorResult = _ns_module.GattReadClientCharacteristicConfigurationDescriptorResult
GattReadRequest = _ns_module.GattReadRequest
GattReadRequestedEventArgs = _ns_module.GattReadRequestedEventArgs
GattReadResult = _ns_module.GattReadResult
GattReliableWriteTransaction = _ns_module.GattReliableWriteTransaction
GattRequestStateChangedEventArgs = _ns_module.GattRequestStateChangedEventArgs
GattServiceProvider = _ns_module.GattServiceProvider
GattServiceProviderAdvertisementStatusChangedEventArgs = _ns_module.GattServiceProviderAdvertisementStatusChangedEventArgs
GattServiceProviderAdvertisingParameters = _ns_module.GattServiceProviderAdvertisingParameters
GattServiceProviderResult = _ns_module.GattServiceProviderResult
GattServiceUuids = _ns_module.GattServiceUuids
GattSession = _ns_module.GattSession
GattSessionStatusChangedEventArgs = _ns_module.GattSessionStatusChangedEventArgs
GattSubscribedClient = _ns_module.GattSubscribedClient
GattValueChangedEventArgs = _ns_module.GattValueChangedEventArgs
GattWriteRequest = _ns_module.GattWriteRequest
GattWriteRequestedEventArgs = _ns_module.GattWriteRequestedEventArgs
GattWriteResult = _ns_module.GattWriteResult
