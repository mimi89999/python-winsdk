# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Bluetooth.Advertisement")

try:
    import winsdk.windows.devices.bluetooth
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

class BluetoothLEAdvertisementFlags(enum.IntFlag):
    NONE = 0
    LIMITED_DISCOVERABLE_MODE = 0x1
    GENERAL_DISCOVERABLE_MODE = 0x2
    CLASSIC_NOT_SUPPORTED = 0x4
    DUAL_MODE_CONTROLLER_CAPABLE = 0x8
    DUAL_MODE_HOST_CAPABLE = 0x10

class BluetoothLEAdvertisementPublisherStatus(enum.IntEnum):
    CREATED = 0
    WAITING = 1
    STARTED = 2
    STOPPING = 3
    STOPPED = 4
    ABORTED = 5

class BluetoothLEAdvertisementType(enum.IntEnum):
    CONNECTABLE_UNDIRECTED = 0
    CONNECTABLE_DIRECTED = 1
    SCANNABLE_UNDIRECTED = 2
    NON_CONNECTABLE_UNDIRECTED = 3
    SCAN_RESPONSE = 4
    EXTENDED = 5

class BluetoothLEAdvertisementWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    STOPPING = 2
    STOPPED = 3
    ABORTED = 4

class BluetoothLEScanningMode(enum.IntEnum):
    PASSIVE = 0
    ACTIVE = 1
    NONE = 2

_ns_module._register_BluetoothLEAdvertisementFlags(BluetoothLEAdvertisementFlags)
_ns_module._register_BluetoothLEAdvertisementPublisherStatus(BluetoothLEAdvertisementPublisherStatus)
_ns_module._register_BluetoothLEAdvertisementType(BluetoothLEAdvertisementType)
_ns_module._register_BluetoothLEAdvertisementWatcherStatus(BluetoothLEAdvertisementWatcherStatus)
_ns_module._register_BluetoothLEScanningMode(BluetoothLEScanningMode)

BluetoothLEAdvertisement = _ns_module.BluetoothLEAdvertisement
BluetoothLEAdvertisementBytePattern = _ns_module.BluetoothLEAdvertisementBytePattern
BluetoothLEAdvertisementDataSection = _ns_module.BluetoothLEAdvertisementDataSection
BluetoothLEAdvertisementDataTypes = _ns_module.BluetoothLEAdvertisementDataTypes
BluetoothLEAdvertisementFilter = _ns_module.BluetoothLEAdvertisementFilter
BluetoothLEAdvertisementPublisher = _ns_module.BluetoothLEAdvertisementPublisher
BluetoothLEAdvertisementPublisherStatusChangedEventArgs = _ns_module.BluetoothLEAdvertisementPublisherStatusChangedEventArgs
BluetoothLEAdvertisementReceivedEventArgs = _ns_module.BluetoothLEAdvertisementReceivedEventArgs
BluetoothLEAdvertisementWatcher = _ns_module.BluetoothLEAdvertisementWatcher
BluetoothLEAdvertisementWatcherStoppedEventArgs = _ns_module.BluetoothLEAdvertisementWatcherStoppedEventArgs
BluetoothLEManufacturerData = _ns_module.BluetoothLEManufacturerData
