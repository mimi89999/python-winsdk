# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Security.ExchangeActiveSyncProvisioning")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

class EasDisallowConvenienceLogonResult(enum.IntEnum):
    NOT_EVALUATED = 0
    COMPLIANT = 1
    CAN_BE_COMPLIANT = 2
    REQUESTED_POLICY_IS_STRICTER = 3

class EasEncryptionProviderType(enum.IntEnum):
    NOT_EVALUATED = 0
    WINDOWS_ENCRYPTION = 1
    OTHER_ENCRYPTION = 2

class EasMaxInactivityTimeLockResult(enum.IntEnum):
    NOT_EVALUATED = 0
    COMPLIANT = 1
    CAN_BE_COMPLIANT = 2
    REQUESTED_POLICY_IS_STRICTER = 3
    INVALID_PARAMETER = 4

class EasMaxPasswordFailedAttemptsResult(enum.IntEnum):
    NOT_EVALUATED = 0
    COMPLIANT = 1
    CAN_BE_COMPLIANT = 2
    REQUESTED_POLICY_IS_STRICTER = 3
    INVALID_PARAMETER = 4

class EasMinPasswordComplexCharactersResult(enum.IntEnum):
    NOT_EVALUATED = 0
    COMPLIANT = 1
    CAN_BE_COMPLIANT = 2
    REQUESTED_POLICY_IS_STRICTER = 3
    REQUESTED_POLICY_NOT_ENFORCEABLE = 4
    INVALID_PARAMETER = 5
    CURRENT_USER_HAS_BLANK_PASSWORD = 6
    ADMINS_HAVE_BLANK_PASSWORD = 7
    USER_CANNOT_CHANGE_PASSWORD = 8
    ADMINS_CANNOT_CHANGE_PASSWORD = 9
    LOCAL_CONTROLLED_USERS_CANNOT_CHANGE_PASSWORD = 10
    CONNECTED_ADMINS_PROVIDER_POLICY_IS_WEAK = 11
    CONNECTED_USER_PROVIDER_POLICY_IS_WEAK = 12
    CHANGE_CONNECTED_ADMINS_PASSWORD = 13
    CHANGE_CONNECTED_USER_PASSWORD = 14

class EasMinPasswordLengthResult(enum.IntEnum):
    NOT_EVALUATED = 0
    COMPLIANT = 1
    CAN_BE_COMPLIANT = 2
    REQUESTED_POLICY_IS_STRICTER = 3
    REQUESTED_POLICY_NOT_ENFORCEABLE = 4
    INVALID_PARAMETER = 5
    CURRENT_USER_HAS_BLANK_PASSWORD = 6
    ADMINS_HAVE_BLANK_PASSWORD = 7
    USER_CANNOT_CHANGE_PASSWORD = 8
    ADMINS_CANNOT_CHANGE_PASSWORD = 9
    LOCAL_CONTROLLED_USERS_CANNOT_CHANGE_PASSWORD = 10
    CONNECTED_ADMINS_PROVIDER_POLICY_IS_WEAK = 11
    CONNECTED_USER_PROVIDER_POLICY_IS_WEAK = 12
    CHANGE_CONNECTED_ADMINS_PASSWORD = 13
    CHANGE_CONNECTED_USER_PASSWORD = 14

class EasPasswordExpirationResult(enum.IntEnum):
    NOT_EVALUATED = 0
    COMPLIANT = 1
    CAN_BE_COMPLIANT = 2
    REQUESTED_POLICY_IS_STRICTER = 3
    REQUESTED_EXPIRATION_INCOMPATIBLE = 4
    INVALID_PARAMETER = 5
    USER_CANNOT_CHANGE_PASSWORD = 6
    ADMINS_CANNOT_CHANGE_PASSWORD = 7
    LOCAL_CONTROLLED_USERS_CANNOT_CHANGE_PASSWORD = 8

class EasPasswordHistoryResult(enum.IntEnum):
    NOT_EVALUATED = 0
    COMPLIANT = 1
    CAN_BE_COMPLIANT = 2
    REQUESTED_POLICY_IS_STRICTER = 3
    INVALID_PARAMETER = 4

class EasRequireEncryptionResult(enum.IntEnum):
    NOT_EVALUATED = 0
    COMPLIANT = 1
    CAN_BE_COMPLIANT = 2
    NOT_PROVISIONED_ON_ALL_VOLUMES = 3
    DE_FIXED_DATA_NOT_SUPPORTED = 4
    FIXED_DATA_NOT_SUPPORTED = 4
    DE_HARDWARE_NOT_COMPLIANT = 5
    HARDWARE_NOT_COMPLIANT = 5
    DE_WIN_RE_NOT_CONFIGURED = 6
    LOCK_NOT_CONFIGURED = 6
    DE_PROTECTION_SUSPENDED = 7
    PROTECTION_SUSPENDED = 7
    DE_OS_VOLUME_NOT_PROTECTED = 8
    OS_VOLUME_NOT_PROTECTED = 8
    DE_PROTECTION_NOT_YET_ENABLED = 9
    PROTECTION_NOT_YET_ENABLED = 9
    NO_FEATURE_LICENSE = 10
    OS_NOT_PROTECTED = 11
    UNEXPECTED_FAILURE = 12

_ns_module._register_EasDisallowConvenienceLogonResult(EasDisallowConvenienceLogonResult)
_ns_module._register_EasEncryptionProviderType(EasEncryptionProviderType)
_ns_module._register_EasMaxInactivityTimeLockResult(EasMaxInactivityTimeLockResult)
_ns_module._register_EasMaxPasswordFailedAttemptsResult(EasMaxPasswordFailedAttemptsResult)
_ns_module._register_EasMinPasswordComplexCharactersResult(EasMinPasswordComplexCharactersResult)
_ns_module._register_EasMinPasswordLengthResult(EasMinPasswordLengthResult)
_ns_module._register_EasPasswordExpirationResult(EasPasswordExpirationResult)
_ns_module._register_EasPasswordHistoryResult(EasPasswordHistoryResult)
_ns_module._register_EasRequireEncryptionResult(EasRequireEncryptionResult)

EasClientDeviceInformation = _ns_module.EasClientDeviceInformation
EasClientSecurityPolicy = _ns_module.EasClientSecurityPolicy
EasComplianceResults = _ns_module.EasComplianceResults
