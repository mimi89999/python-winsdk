# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class WindowsUpdateAdministratorOptions(enum.IntFlag):
    NONE = 0
    REQUIRE_ADMINISTRATOR_APPROVAL_FOR_SCANS = 0x1
    REQUIRE_ADMINISTRATOR_APPROVAL_FOR_UPDATES = 0x2
    REQUIRE_ADMINISTRATOR_APPROVAL_FOR_ACTIONS = 0x4

class WindowsUpdateAdministratorStatus(enum.IntEnum):
    SUCCEEDED = 0
    NO_ADMINISTRATOR_REGISTERED = 1
    OTHER_ADMINISTRATOR_IS_REGISTERED = 2

class WindowsUpdateAttentionRequiredReason(enum.IntEnum):
    NONE = 0
    SEEKER_UPDATE = 1
    READY_TO_REBOOT = 2
    NEED_NON_METERED_NETWORK = 3
    NEED_USER_AGREEMENT_FOR_METERED_NETWORK = 4
    NEED_NETWORK = 5
    NEED_MORE_SPACE = 6
    BATTERY_SAVER_ENABLED = 7
    NEED_USER_INTERACTION = 8
    NEED_USER_AGREEMENT_FOR_POLICY = 9
    COMPATIBILITY_ERROR = 10
    NEED_USER_INTERACTION_FOR_EULA = 11
    NEED_USER_INTERACTION_FOR_CTA = 12
    REGULATED = 13
    EXTERNAL_REBOOT = 14
    OTHER_UPDATE = 15
    BLOCKED_BY_PROVIDER = 16
    BLOCKED_BY_POST_REBOOT_FAILURE = 17
    USER_ENGAGED = 18
    BLOCKED_BY_BATTERY = 19
    EXCLUSIVITY = 20
    BLOCKED_BY_SERIALIZATION = 21
    CONFLICT_CLASS = 22
    BLOCKED_BY_ADMIN_APPROVAL = 23
    BLOCKED_BY_TOO_MANY_ATTEMPTS = 24
    BLOCKED_BY_FAILURE = 25
    DEMOTION = 26
    BLOCKED_BY_ACTIVE_HOURS = 27
    SCHEDULED_FOR_MAINTENANCE = 28
    POLICY_SCHEDULED_INSTALL_TIME = 29
    BLOCKED_BY_OOBE = 30
    DEFERRED_DURING_OOBE = 31
    DEFERRED_FOR_SUSTAINABLE_TIME = 32

Self = typing.TypeVar('Self')

class PreviewBuildsManager(winsdk.system.Object):
    are_preview_builds_allowed: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PreviewBuildsManager: ...
    def get_current_state(self) -> typing.Optional[PreviewBuildsState]: ...
    @staticmethod
    def get_default() -> typing.Optional[PreviewBuildsManager]: ...
    @staticmethod
    def is_supported() -> winsdk.system.Boolean: ...
    def sync_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class PreviewBuildsState(winsdk.system.Object):
    properties: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PreviewBuildsState: ...

class WindowsUpdate(winsdk.system.Object):
    action_progress: typing.Optional[WindowsUpdateActionProgress]
    action_result: typing.Optional[WindowsUpdateActionResult]
    attention_required_info: typing.Optional[WindowsUpdateAttentionRequiredInfo]
    current_action: str
    deadline: typing.Optional[typing.Optional[datetime.datetime]]
    description: str
    eula_text: str
    is_critical: winsdk.system.Boolean
    is_driver: winsdk.system.Boolean
    is_eula_accepted: winsdk.system.Boolean
    is_feature_update: winsdk.system.Boolean
    is_for_o_s: winsdk.system.Boolean
    is_mandatory: winsdk.system.Boolean
    is_minor_impact: winsdk.system.Boolean
    is_security: winsdk.system.Boolean
    is_seeker: winsdk.system.Boolean
    is_urgent: winsdk.system.Boolean
    more_info_url: typing.Optional[winsdk.windows.foundation.Uri]
    provider_id: str
    support_url: typing.Optional[winsdk.windows.foundation.Uri]
    title: str
    update_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdate: ...
    def accept_eula(self) -> None: ...
    def get_property_value(self, property_name: str) -> typing.Optional[winsdk.system.Object]: ...

class WindowsUpdateActionCompletedEventArgs(winsdk.system.Object):
    action: str
    extended_error: winsdk.windows.foundation.HResult
    succeeded: winsdk.system.Boolean
    update: typing.Optional[WindowsUpdate]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateActionCompletedEventArgs: ...

class WindowsUpdateActionProgress(winsdk.system.Object):
    action: str
    progress: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateActionProgress: ...

class WindowsUpdateActionResult(winsdk.system.Object):
    action: str
    extended_error: winsdk.windows.foundation.HResult
    succeeded: winsdk.system.Boolean
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateActionResult: ...

class WindowsUpdateAdministrator(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateAdministrator: ...
    def approve_windows_update(self, update_id: str, approval_data: typing.Optional[WindowsUpdateApprovalData]) -> None: ...
    def approve_windows_update_action(self, update_id: str, action: str) -> None: ...
    @staticmethod
    def cancel_restart_request(request_restart_token: str) -> None: ...
    @staticmethod
    def get_registered_administrator(organization_name: str) -> typing.Optional[WindowsUpdateGetAdministratorResult]: ...
    @staticmethod
    def get_registered_administrator_name() -> str: ...
    def get_updates(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[WindowsUpdate]]: ...
    @staticmethod
    def register_for_administration(organization_name: str, options: WindowsUpdateAdministratorOptions) -> WindowsUpdateAdministratorStatus: ...
    @staticmethod
    def request_restart(restart_options: typing.Optional[WindowsUpdateRestartRequestOptions]) -> str: ...
    def revoke_windows_update_action_approval(self, update_id: str, action: str) -> None: ...
    def revoke_windows_update_approval(self, update_id: str) -> None: ...
    def start_administrator_scan(self) -> None: ...
    @staticmethod
    def unregister_for_administration(organization_name: str) -> WindowsUpdateAdministratorStatus: ...

class WindowsUpdateApprovalData(winsdk.system.Object):
    seeker: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    opt_out_of_auto_reboot: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    compliance_grace_period_in_days: typing.Optional[typing.Optional[winsdk.system.Int32]]
    compliance_deadline_in_days: typing.Optional[typing.Optional[winsdk.system.Int32]]
    allow_download_on_metered: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateApprovalData: ...
    def __new__(cls: typing.Type[WindowsUpdateApprovalData]) -> WindowsUpdateApprovalData:...

class WindowsUpdateAttentionRequiredInfo(winsdk.system.Object):
    reason: WindowsUpdateAttentionRequiredReason
    timestamp: typing.Optional[typing.Optional[datetime.datetime]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateAttentionRequiredInfo: ...

class WindowsUpdateAttentionRequiredReasonChangedEventArgs(winsdk.system.Object):
    reason: WindowsUpdateAttentionRequiredReason
    update: typing.Optional[WindowsUpdate]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateAttentionRequiredReasonChangedEventArgs: ...

class WindowsUpdateGetAdministratorResult(winsdk.system.Object):
    administrator: typing.Optional[WindowsUpdateAdministrator]
    status: WindowsUpdateAdministratorStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateGetAdministratorResult: ...

class WindowsUpdateItem(winsdk.system.Object):
    category: str
    description: str
    more_info_url: typing.Optional[winsdk.windows.foundation.Uri]
    operation: str
    provider_id: str
    timestamp: datetime.datetime
    title: str
    update_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateItem: ...

class WindowsUpdateManager(winsdk.system.Object):
    is_scanning: winsdk.system.Boolean
    is_working: winsdk.system.Boolean
    last_successful_scan_timestamp: typing.Optional[typing.Optional[datetime.datetime]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateManager: ...
    def __new__(cls: typing.Type[WindowsUpdateManager], client_id: str) -> WindowsUpdateManager:...
    def get_applicable_updates(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[WindowsUpdate]]: ...
    def get_most_recent_completed_updates(self, count: winsdk.system.Int32) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[WindowsUpdateItem]]: ...
    def get_most_recent_completed_updates_async(self, count: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[WindowsUpdateItem]]: ...
    def start_scan(self, user_initiated: winsdk.system.Boolean) -> None: ...
    def add_action_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[WindowsUpdateManager, WindowsUpdateActionCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_action_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_attention_required_reason_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[WindowsUpdateManager, WindowsUpdateAttentionRequiredReasonChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_attention_required_reason_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_progress_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[WindowsUpdateManager, WindowsUpdateProgressChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_progress_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_scan_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[WindowsUpdateManager, WindowsUpdateScanCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_scan_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_scanning_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[WindowsUpdateManager, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_scanning_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_working_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[WindowsUpdateManager, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_working_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WindowsUpdateProgressChangedEventArgs(winsdk.system.Object):
    action_progress: typing.Optional[WindowsUpdateActionProgress]
    update: typing.Optional[WindowsUpdate]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateProgressChangedEventArgs: ...

class WindowsUpdateRestartRequestOptions(winsdk.system.Object):
    title: str
    organization_name: str
    opt_out_of_auto_reboot: winsdk.system.Boolean
    more_info_url: typing.Optional[winsdk.windows.foundation.Uri]
    description: str
    compliance_grace_period_in_days: winsdk.system.Int32
    compliance_deadline_in_days: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateRestartRequestOptions: ...
    @typing.overload
    def __new__(cls: typing.Type[WindowsUpdateRestartRequestOptions], title: str, description: str, more_info_url: typing.Optional[winsdk.windows.foundation.Uri], compliance_deadline_in_days: winsdk.system.Int32, compliance_grace_period_in_days: winsdk.system.Int32) -> WindowsUpdateRestartRequestOptions:...
    @typing.overload
    def __new__(cls: typing.Type[WindowsUpdateRestartRequestOptions]) -> WindowsUpdateRestartRequestOptions:...

class WindowsUpdateScanCompletedEventArgs(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    provider_id: str
    succeeded: winsdk.system.Boolean
    updates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[WindowsUpdate]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WindowsUpdateScanCompletedEventArgs: ...

