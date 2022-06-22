# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation

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

Self = typing.TypeVar('Self')

class EasClientDeviceInformation(_winrt.Object):
    friendly_name: str
    id: _winrt.Guid
    operating_system: str
    system_manufacturer: str
    system_product_name: str
    system_sku: str
    system_firmware_version: str
    system_hardware_version: str
    @staticmethod
    def _from(obj: _winrt.Object) -> EasClientDeviceInformation: ...
    def __new__(cls: typing.Type[EasClientDeviceInformation]) -> EasClientDeviceInformation:...

class EasClientSecurityPolicy(_winrt.Object):
    require_encryption: _winrt.Boolean
    password_history: _winrt.UInt32
    password_expiration: datetime.timedelta
    min_password_length: _winrt.UInt8
    min_password_complex_characters: _winrt.UInt8
    max_password_failed_attempts: _winrt.UInt8
    max_inactivity_time_lock: datetime.timedelta
    disallow_convenience_logon: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> EasClientSecurityPolicy: ...
    def __new__(cls: typing.Type[EasClientSecurityPolicy]) -> EasClientSecurityPolicy:...
    def apply_async(self) -> winsdk.windows.foundation.IAsyncOperation[EasComplianceResults]: ...
    def check_compliance(self) -> typing.Optional[EasComplianceResults]: ...

class EasComplianceResults(_winrt.Object):
    compliant: _winrt.Boolean
    disallow_convenience_logon_result: EasDisallowConvenienceLogonResult
    max_inactivity_time_lock_result: EasMaxInactivityTimeLockResult
    max_password_failed_attempts_result: EasMaxPasswordFailedAttemptsResult
    min_password_complex_characters_result: EasMinPasswordComplexCharactersResult
    min_password_length_result: EasMinPasswordLengthResult
    password_expiration_result: EasPasswordExpirationResult
    password_history_result: EasPasswordHistoryResult
    require_encryption_result: EasRequireEncryptionResult
    encryption_provider_type: EasEncryptionProviderType
    @staticmethod
    def _from(obj: _winrt.Object) -> EasComplianceResults: ...

