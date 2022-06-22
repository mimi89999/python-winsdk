# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.networking
import winsdk.windows.storage
import winsdk.windows.storage.streams

class DataProtectionStatus(enum.IntEnum):
    PROTECTED_TO_OTHER_IDENTITY = 0
    PROTECTED = 1
    REVOKED = 2
    UNPROTECTED = 3
    LICENSE_EXPIRED = 4
    ACCESS_SUSPENDED = 5

class EnforcementLevel(enum.IntEnum):
    NO_PROTECTION = 0
    SILENT = 1
    OVERRIDE = 2
    BLOCK = 3

class FileProtectionStatus(enum.IntEnum):
    UNDETERMINED = 0
    UNKNOWN = 0
    UNPROTECTED = 1
    REVOKED = 2
    PROTECTED = 3
    PROTECTED_BY_OTHER_USER = 4
    PROTECTED_TO_OTHER_ENTERPRISE = 5
    NOT_PROTECTABLE = 6
    PROTECTED_TO_OTHER_IDENTITY = 7
    LICENSE_EXPIRED = 8
    ACCESS_SUSPENDED = 9
    FILE_IN_USE = 10

class ProtectedImportExportStatus(enum.IntEnum):
    OK = 0
    UNDETERMINED = 1
    UNPROTECTED = 2
    REVOKED = 3
    NOT_ROAMABLE = 4
    PROTECTED_TO_OTHER_IDENTITY = 5
    LICENSE_EXPIRED = 6
    ACCESS_SUSPENDED = 7

class ProtectionPolicyAuditAction(enum.IntEnum):
    DECRYPT = 0
    COPY_TO_LOCATION = 1
    SEND_TO_RECIPIENT = 2
    OTHER = 3

class ProtectionPolicyEvaluationResult(enum.IntEnum):
    ALLOWED = 0
    BLOCKED = 1
    CONSENT_REQUIRED = 2

class ProtectionPolicyRequestAccessBehavior(enum.IntEnum):
    DECRYPT = 0
    TREAT_OVERRIDE_POLICY_AS_BLOCK = 1

Self = typing.TypeVar('Self')

class BufferProtectUnprotectResult(_winrt.Object):
    buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    protection_info: typing.Optional[DataProtectionInfo]
    @staticmethod
    def _from(obj: _winrt.Object) -> BufferProtectUnprotectResult: ...

class DataProtectionInfo(_winrt.Object):
    identity: str
    status: DataProtectionStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> DataProtectionInfo: ...

class DataProtectionManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> DataProtectionManager: ...
    @staticmethod
    def get_protection_info_async(protected_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[DataProtectionInfo]: ...
    @staticmethod
    def get_stream_protection_info_async(protected_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncOperation[DataProtectionInfo]: ...
    @staticmethod
    def protect_async(data: typing.Optional[winsdk.windows.storage.streams.IBuffer], identity: str) -> winsdk.windows.foundation.IAsyncOperation[BufferProtectUnprotectResult]: ...
    @staticmethod
    def protect_stream_async(unprotected_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream], identity: str, protected_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperation[DataProtectionInfo]: ...
    @staticmethod
    def unprotect_async(data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[BufferProtectUnprotectResult]: ...
    @staticmethod
    def unprotect_stream_async(protected_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream], unprotected_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperation[DataProtectionInfo]: ...

class FileProtectionInfo(_winrt.Object):
    identity: str
    is_roamable: _winrt.Boolean
    status: FileProtectionStatus
    is_protect_while_open_supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FileProtectionInfo: ...

class FileProtectionManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> FileProtectionManager: ...
    @staticmethod
    def copy_protection_async(source: typing.Optional[winsdk.windows.storage.IStorageItem], target: typing.Optional[winsdk.windows.storage.IStorageItem]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @staticmethod
    def create_protected_and_open_async(parent_folder: typing.Optional[winsdk.windows.storage.IStorageFolder], desired_name: str, identity: str, collision_option: winsdk.windows.storage.CreationCollisionOption) -> winsdk.windows.foundation.IAsyncOperation[ProtectedFileCreateResult]: ...
    @staticmethod
    def get_protection_info_async(source: typing.Optional[winsdk.windows.storage.IStorageItem]) -> winsdk.windows.foundation.IAsyncOperation[FileProtectionInfo]: ...
    @staticmethod
    def is_container_async(file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @typing.overload
    @staticmethod
    def load_file_from_container_async(container_file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> winsdk.windows.foundation.IAsyncOperation[ProtectedContainerImportResult]: ...
    @typing.overload
    @staticmethod
    def load_file_from_container_async(container_file: typing.Optional[winsdk.windows.storage.IStorageFile], target: typing.Optional[winsdk.windows.storage.IStorageItem]) -> winsdk.windows.foundation.IAsyncOperation[ProtectedContainerImportResult]: ...
    @typing.overload
    @staticmethod
    def load_file_from_container_async(container_file: typing.Optional[winsdk.windows.storage.IStorageFile], target: typing.Optional[winsdk.windows.storage.IStorageItem], collision_option: winsdk.windows.storage.NameCollisionOption) -> winsdk.windows.foundation.IAsyncOperation[ProtectedContainerImportResult]: ...
    @staticmethod
    def protect_async(target: typing.Optional[winsdk.windows.storage.IStorageItem], identity: str) -> winsdk.windows.foundation.IAsyncOperation[FileProtectionInfo]: ...
    @typing.overload
    @staticmethod
    def save_file_as_container_async(protected_file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> winsdk.windows.foundation.IAsyncOperation[ProtectedContainerExportResult]: ...
    @typing.overload
    @staticmethod
    def save_file_as_container_async(protected_file: typing.Optional[winsdk.windows.storage.IStorageFile], shared_with_identities: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[ProtectedContainerExportResult]: ...
    @typing.overload
    @staticmethod
    def unprotect_async(target: typing.Optional[winsdk.windows.storage.IStorageItem]) -> winsdk.windows.foundation.IAsyncOperation[FileProtectionInfo]: ...
    @typing.overload
    @staticmethod
    def unprotect_async(target: typing.Optional[winsdk.windows.storage.IStorageItem], options: typing.Optional[FileUnprotectOptions]) -> winsdk.windows.foundation.IAsyncOperation[FileProtectionInfo]: ...

class FileRevocationManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> FileRevocationManager: ...
    @staticmethod
    def copy_protection_async(source_storage_item: typing.Optional[winsdk.windows.storage.IStorageItem], target_storage_item: typing.Optional[winsdk.windows.storage.IStorageItem]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @staticmethod
    def get_status_async(storage_item: typing.Optional[winsdk.windows.storage.IStorageItem]) -> winsdk.windows.foundation.IAsyncOperation[FileProtectionStatus]: ...
    @staticmethod
    def protect_async(storage_item: typing.Optional[winsdk.windows.storage.IStorageItem], enterprise_identity: str) -> winsdk.windows.foundation.IAsyncOperation[FileProtectionStatus]: ...
    @staticmethod
    def revoke(enterprise_identity: str) -> None: ...

class FileUnprotectOptions(_winrt.Object):
    audit: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FileUnprotectOptions: ...
    def __new__(cls: typing.Type[FileUnprotectOptions], audit: _winrt.Boolean) -> FileUnprotectOptions:...

class ProtectedAccessResumedEventArgs(_winrt.Object):
    identities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProtectedAccessResumedEventArgs: ...

class ProtectedAccessSuspendingEventArgs(_winrt.Object):
    deadline: datetime.datetime
    identities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProtectedAccessSuspendingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class ProtectedContainerExportResult(_winrt.Object):
    file: typing.Optional[winsdk.windows.storage.StorageFile]
    status: ProtectedImportExportStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> ProtectedContainerExportResult: ...

class ProtectedContainerImportResult(_winrt.Object):
    file: typing.Optional[winsdk.windows.storage.StorageFile]
    status: ProtectedImportExportStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> ProtectedContainerImportResult: ...

class ProtectedContentRevokedEventArgs(_winrt.Object):
    identities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProtectedContentRevokedEventArgs: ...

class ProtectedFileCreateResult(_winrt.Object):
    file: typing.Optional[winsdk.windows.storage.StorageFile]
    protection_info: typing.Optional[FileProtectionInfo]
    stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProtectedFileCreateResult: ...

class ProtectionPolicyAuditInfo(_winrt.Object):
    target_description: str
    source_description: str
    data_description: str
    action: ProtectionPolicyAuditAction
    @staticmethod
    def _from(obj: _winrt.Object) -> ProtectionPolicyAuditInfo: ...
    @typing.overload
    def __new__(cls: typing.Type[ProtectionPolicyAuditInfo], action: ProtectionPolicyAuditAction, data_description: str, source_description: str, target_description: str) -> ProtectionPolicyAuditInfo:...
    @typing.overload
    def __new__(cls: typing.Type[ProtectionPolicyAuditInfo], action: ProtectionPolicyAuditAction, data_description: str) -> ProtectionPolicyAuditInfo:...

class ProtectionPolicyManager(_winrt.Object):
    identity: str
    show_enterprise_indicator: _winrt.Boolean
    is_protection_enabled: _winrt.Boolean
    primary_managed_identity: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ProtectionPolicyManager: ...
    @staticmethod
    def check_access(source_identity: str, target_identity: str) -> ProtectionPolicyEvaluationResult: ...
    @staticmethod
    def check_access_for_app(source_identity: str, app_package_family_name: str) -> ProtectionPolicyEvaluationResult: ...
    @staticmethod
    def clear_process_u_i_policy() -> None: ...
    @staticmethod
    def create_current_thread_network_context(identity: str) -> typing.Optional[ThreadNetworkContext]: ...
    @staticmethod
    def get_enforcement_level(identity: str) -> EnforcementLevel: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[ProtectionPolicyManager]: ...
    @staticmethod
    def get_primary_managed_identity_for_identity(identity: str) -> str: ...
    @staticmethod
    def get_primary_managed_identity_for_network_endpoint_async(endpoint_host: typing.Optional[winsdk.windows.networking.HostName]) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def has_content_been_revoked_since(identity: str, since: datetime.datetime) -> _winrt.Boolean: ...
    @staticmethod
    def is_file_protection_required_async(target: typing.Optional[winsdk.windows.storage.IStorageItem], identity: str) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @staticmethod
    def is_file_protection_required_for_new_file_async(parent_folder: typing.Optional[winsdk.windows.storage.IStorageFolder], identity: str, desired_name: str) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @staticmethod
    def is_identity_managed(identity: str) -> _winrt.Boolean: ...
    @staticmethod
    def is_protection_under_lock_required(identity: str) -> _winrt.Boolean: ...
    @staticmethod
    def is_roamable_protection_enabled(identity: str) -> _winrt.Boolean: ...
    @staticmethod
    def is_user_decryption_allowed(identity: str) -> _winrt.Boolean: ...
    @staticmethod
    def log_audit_event(source_identity: str, target_identity: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo]) -> None: ...
    @typing.overload
    @staticmethod
    def request_access_async(source_identity: str, target_identity: str) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_async(source_identity: str, target_identity: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo]) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_async(source_identity: str, target_identity: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo], message_from_app: str) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_async(source_identity: str, target_identity: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo], message_from_app: str, behavior: ProtectionPolicyRequestAccessBehavior) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_for_app_async(source_identity: str, app_package_family_name: str) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_for_app_async(source_identity: str, app_package_family_name: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo]) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_for_app_async(source_identity: str, app_package_family_name: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo], message_from_app: str) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_for_app_async(source_identity: str, app_package_family_name: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo], message_from_app: str, behavior: ProtectionPolicyRequestAccessBehavior) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_to_files_for_app_async(source_item_list: typing.Iterable[winsdk.windows.storage.IStorageItem], app_package_family_name: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo]) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_to_files_for_app_async(source_item_list: typing.Iterable[winsdk.windows.storage.IStorageItem], app_package_family_name: str, audit_info: typing.Optional[ProtectionPolicyAuditInfo], message_from_app: str, behavior: ProtectionPolicyRequestAccessBehavior) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_to_files_for_process_async(source_item_list: typing.Iterable[winsdk.windows.storage.IStorageItem], process_id: _winrt.UInt32, audit_info: typing.Optional[ProtectionPolicyAuditInfo]) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @typing.overload
    @staticmethod
    def request_access_to_files_for_process_async(source_item_list: typing.Iterable[winsdk.windows.storage.IStorageItem], process_id: _winrt.UInt32, audit_info: typing.Optional[ProtectionPolicyAuditInfo], message_from_app: str, behavior: ProtectionPolicyRequestAccessBehavior) -> winsdk.windows.foundation.IAsyncOperation[ProtectionPolicyEvaluationResult]: ...
    @staticmethod
    def revoke_content(identity: str) -> None: ...
    @staticmethod
    def try_apply_process_u_i_policy(identity: str) -> _winrt.Boolean: ...
    @staticmethod
    def add_policy_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_policy_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_protected_access_resumed(handler: winsdk.windows.foundation.EventHandler[ProtectedAccessResumedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_protected_access_resumed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_protected_access_suspending(handler: winsdk.windows.foundation.EventHandler[ProtectedAccessSuspendingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_protected_access_suspending(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_protected_content_revoked(handler: winsdk.windows.foundation.EventHandler[ProtectedContentRevokedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_protected_content_revoked(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ThreadNetworkContext(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> ThreadNetworkContext: ...
    def close(self) -> None: ...

