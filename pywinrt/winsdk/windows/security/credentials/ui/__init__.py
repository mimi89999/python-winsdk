# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Security.Credentials.UI")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class AuthenticationProtocol(enum.IntEnum):
    BASIC = 0
    DIGEST = 1
    NTLM = 2
    KERBEROS = 3
    NEGOTIATE = 4
    CRED_SSP = 5
    CUSTOM = 6

class CredentialSaveOption(enum.IntEnum):
    UNSELECTED = 0
    SELECTED = 1
    HIDDEN = 2

class UserConsentVerificationResult(enum.IntEnum):
    VERIFIED = 0
    DEVICE_NOT_PRESENT = 1
    NOT_CONFIGURED_FOR_USER = 2
    DISABLED_BY_POLICY = 3
    DEVICE_BUSY = 4
    RETRIES_EXHAUSTED = 5
    CANCELED = 6

class UserConsentVerifierAvailability(enum.IntEnum):
    AVAILABLE = 0
    DEVICE_NOT_PRESENT = 1
    NOT_CONFIGURED_FOR_USER = 2
    DISABLED_BY_POLICY = 3
    DEVICE_BUSY = 4

_ns_module._register_AuthenticationProtocol(AuthenticationProtocol)
_ns_module._register_CredentialSaveOption(CredentialSaveOption)
_ns_module._register_UserConsentVerificationResult(UserConsentVerificationResult)
_ns_module._register_UserConsentVerifierAvailability(UserConsentVerifierAvailability)

CredentialPicker = _ns_module.CredentialPicker
CredentialPickerOptions = _ns_module.CredentialPickerOptions
CredentialPickerResults = _ns_module.CredentialPickerResults
UserConsentVerifier = _ns_module.UserConsentVerifier
