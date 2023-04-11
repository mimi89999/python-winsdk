# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Networking.Proximity")

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
    import winsdk.windows.networking.sockets
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class PeerDiscoveryTypes(enum.IntFlag):
    NONE = 0
    BROWSE = 0x1
    TRIGGERED = 0x2

class PeerRole(enum.IntEnum):
    PEER = 0
    HOST = 1
    CLIENT = 2

class PeerWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    ENUMERATION_COMPLETED = 2
    STOPPING = 3
    STOPPED = 4
    ABORTED = 5

class TriggeredConnectState(enum.IntEnum):
    PEER_FOUND = 0
    LISTENING = 1
    CONNECTING = 2
    COMPLETED = 3
    CANCELED = 4
    FAILED = 5

_ns_module._register_PeerDiscoveryTypes(PeerDiscoveryTypes)
_ns_module._register_PeerRole(PeerRole)
_ns_module._register_PeerWatcherStatus(PeerWatcherStatus)
_ns_module._register_TriggeredConnectState(TriggeredConnectState)

ConnectionRequestedEventArgs = _ns_module.ConnectionRequestedEventArgs
PeerFinder = _ns_module.PeerFinder
PeerInformation = _ns_module.PeerInformation
PeerWatcher = _ns_module.PeerWatcher
ProximityDevice = _ns_module.ProximityDevice
ProximityMessage = _ns_module.ProximityMessage
TriggeredConnectionStateChangedEventArgs = _ns_module.TriggeredConnectionStateChangedEventArgs
