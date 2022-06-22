# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Security.DataProtection")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

class UserDataAvailability(enum.IntEnum):
    ALWAYS = 0
    AFTER_FIRST_UNLOCK = 1
    WHILE_UNLOCKED = 2

class UserDataBufferUnprotectStatus(enum.IntEnum):
    SUCCEEDED = 0
    UNAVAILABLE = 1

class UserDataStorageItemProtectionStatus(enum.IntEnum):
    SUCCEEDED = 0
    NOT_PROTECTABLE = 1
    DATA_UNAVAILABLE = 2

_ns_module._register_UserDataAvailability(UserDataAvailability)
_ns_module._register_UserDataBufferUnprotectStatus(UserDataBufferUnprotectStatus)
_ns_module._register_UserDataStorageItemProtectionStatus(UserDataStorageItemProtectionStatus)

UserDataAvailabilityStateChangedEventArgs = _ns_module.UserDataAvailabilityStateChangedEventArgs
UserDataBufferUnprotectResult = _ns_module.UserDataBufferUnprotectResult
UserDataProtectionManager = _ns_module.UserDataProtectionManager
UserDataStorageItemProtectionInfo = _ns_module.UserDataStorageItemProtectionInfo
