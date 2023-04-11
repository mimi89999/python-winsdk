# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Security.Credentials")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.security.cryptography.core
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

class KeyCredentialAttestationStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    NOT_SUPPORTED = 2
    TEMPORARY_FAILURE = 3

class KeyCredentialCreationOption(enum.IntEnum):
    REPLACE_EXISTING = 0
    FAIL_IF_EXISTS = 1

class KeyCredentialStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    NOT_FOUND = 2
    USER_CANCELED = 3
    USER_PREFERS_PASSWORD = 4
    CREDENTIAL_ALREADY_EXISTS = 5
    SECURITY_DEVICE_LOCKED = 6

class WebAccountPictureSize(enum.IntEnum):
    SIZE64X64 = 64
    SIZE208X208 = 208
    SIZE424X424 = 424
    SIZE1080X1080 = 1080

class WebAccountState(enum.IntEnum):
    NONE = 0
    CONNECTED = 1
    ERROR = 2

_ns_module._register_KeyCredentialAttestationStatus(KeyCredentialAttestationStatus)
_ns_module._register_KeyCredentialCreationOption(KeyCredentialCreationOption)
_ns_module._register_KeyCredentialStatus(KeyCredentialStatus)
_ns_module._register_WebAccountPictureSize(WebAccountPictureSize)
_ns_module._register_WebAccountState(WebAccountState)

KeyCredential = _ns_module.KeyCredential
KeyCredentialAttestationResult = _ns_module.KeyCredentialAttestationResult
KeyCredentialManager = _ns_module.KeyCredentialManager
KeyCredentialOperationResult = _ns_module.KeyCredentialOperationResult
KeyCredentialRetrievalResult = _ns_module.KeyCredentialRetrievalResult
PasswordCredential = _ns_module.PasswordCredential
PasswordCredentialPropertyStore = _ns_module.PasswordCredentialPropertyStore
PasswordVault = _ns_module.PasswordVault
WebAccount = _ns_module.WebAccount
WebAccountProvider = _ns_module.WebAccountProvider
IWebAccount = _ns_module.IWebAccount
