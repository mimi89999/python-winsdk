# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.email
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.cryptography.certificates

Self = typing.TypeVar('Self')

class EmailDataProviderConnection(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailDataProviderConnection: ...
    def start(self) -> None: ...
    def add_create_folder_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxCreateFolderRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_create_folder_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_delete_folder_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxDeleteFolderRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_delete_folder_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_download_attachment_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxDownloadAttachmentRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_download_attachment_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_download_message_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxDownloadMessageRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_download_message_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_empty_folder_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxEmptyFolderRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_empty_folder_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_forward_meeting_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxForwardMeetingRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_forward_meeting_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_get_auto_reply_settings_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxGetAutoReplySettingsRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_get_auto_reply_settings_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_mailbox_sync_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxSyncManagerSyncRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_mailbox_sync_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_move_folder_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxMoveFolderRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_move_folder_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_propose_new_time_for_meeting_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxProposeNewTimeForMeetingRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_propose_new_time_for_meeting_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_resolve_recipients_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxResolveRecipientsRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_resolve_recipients_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_server_search_read_batch_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxServerSearchReadBatchRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_server_search_read_batch_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_set_auto_reply_settings_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxSetAutoReplySettingsRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_set_auto_reply_settings_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_update_meeting_response_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxUpdateMeetingResponseRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_update_meeting_response_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_validate_certificates_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailDataProviderConnection, EmailMailboxValidateCertificatesRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_validate_certificates_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class EmailDataProviderTriggerDetails(winsdk.system.Object):
    connection: typing.Optional[EmailDataProviderConnection]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailDataProviderTriggerDetails: ...

class EmailMailboxCreateFolderRequest(winsdk.system.Object):
    email_mailbox_id: str
    name: str
    parent_folder_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxCreateFolderRequest: ...
    def report_completed_async(self, folder: typing.Optional[winsdk.windows.applicationmodel.email.EmailFolder]) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self, status: winsdk.windows.applicationmodel.email.EmailMailboxCreateFolderStatus) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxCreateFolderRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxCreateFolderRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxCreateFolderRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxDeleteFolderRequest(winsdk.system.Object):
    email_folder_id: str
    email_mailbox_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxDeleteFolderRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self, status: winsdk.windows.applicationmodel.email.EmailMailboxDeleteFolderStatus) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxDeleteFolderRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxDeleteFolderRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxDeleteFolderRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxDownloadAttachmentRequest(winsdk.system.Object):
    email_attachment_id: str
    email_mailbox_id: str
    email_message_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxDownloadAttachmentRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxDownloadAttachmentRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxDownloadAttachmentRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxDownloadAttachmentRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxDownloadMessageRequest(winsdk.system.Object):
    email_mailbox_id: str
    email_message_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxDownloadMessageRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxDownloadMessageRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxDownloadMessageRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxDownloadMessageRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxEmptyFolderRequest(winsdk.system.Object):
    email_folder_id: str
    email_mailbox_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxEmptyFolderRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self, status: winsdk.windows.applicationmodel.email.EmailMailboxEmptyFolderStatus) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxEmptyFolderRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxEmptyFolderRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxEmptyFolderRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxForwardMeetingRequest(winsdk.system.Object):
    comment: str
    email_mailbox_id: str
    email_message_id: str
    forward_header: str
    forward_header_type: winsdk.windows.applicationmodel.email.EmailMessageBodyKind
    recipients: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.applicationmodel.email.EmailRecipient]]
    subject: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxForwardMeetingRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxForwardMeetingRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxForwardMeetingRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxForwardMeetingRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxGetAutoReplySettingsRequest(winsdk.system.Object):
    email_mailbox_id: str
    requested_format: winsdk.windows.applicationmodel.email.EmailMailboxAutoReplyMessageResponseKind
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxGetAutoReplySettingsRequest: ...
    def report_completed_async(self, auto_reply_settings: typing.Optional[winsdk.windows.applicationmodel.email.EmailMailboxAutoReplySettings]) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxGetAutoReplySettingsRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxGetAutoReplySettingsRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxGetAutoReplySettingsRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxMoveFolderRequest(winsdk.system.Object):
    email_folder_id: str
    email_mailbox_id: str
    new_folder_name: str
    new_parent_folder_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxMoveFolderRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxMoveFolderRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxMoveFolderRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxMoveFolderRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxProposeNewTimeForMeetingRequest(winsdk.system.Object):
    comment: str
    email_mailbox_id: str
    email_message_id: str
    new_duration: datetime.timedelta
    new_start_time: datetime.datetime
    subject: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxProposeNewTimeForMeetingRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxProposeNewTimeForMeetingRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxProposeNewTimeForMeetingRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxProposeNewTimeForMeetingRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxResolveRecipientsRequest(winsdk.system.Object):
    email_mailbox_id: str
    recipients: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxResolveRecipientsRequest: ...
    def report_completed_async(self, resolution_results: typing.Iterable[winsdk.windows.applicationmodel.email.EmailRecipientResolutionResult]) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxResolveRecipientsRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxResolveRecipientsRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxResolveRecipientsRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxServerSearchReadBatchRequest(winsdk.system.Object):
    email_folder_id: str
    email_mailbox_id: str
    options: typing.Optional[winsdk.windows.applicationmodel.email.EmailQueryOptions]
    session_id: str
    suggested_batch_size: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxServerSearchReadBatchRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self, batch_status: winsdk.windows.applicationmodel.email.EmailBatchStatus) -> winsdk.windows.foundation.IAsyncAction: ...
    def save_message_async(self, message: typing.Optional[winsdk.windows.applicationmodel.email.EmailMessage]) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxServerSearchReadBatchRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxServerSearchReadBatchRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxServerSearchReadBatchRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxSetAutoReplySettingsRequest(winsdk.system.Object):
    auto_reply_settings: typing.Optional[winsdk.windows.applicationmodel.email.EmailMailboxAutoReplySettings]
    email_mailbox_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxSetAutoReplySettingsRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxSetAutoReplySettingsRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxSetAutoReplySettingsRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxSetAutoReplySettingsRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxSyncManagerSyncRequest(winsdk.system.Object):
    email_mailbox_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxSyncManagerSyncRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxSyncManagerSyncRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxSyncManagerSyncRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxSyncManagerSyncRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxUpdateMeetingResponseRequest(winsdk.system.Object):
    comment: str
    email_mailbox_id: str
    email_message_id: str
    response: winsdk.windows.applicationmodel.email.EmailMeetingResponseType
    send_update: winsdk.system.Boolean
    subject: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxUpdateMeetingResponseRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxUpdateMeetingResponseRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxUpdateMeetingResponseRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxUpdateMeetingResponseRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class EmailMailboxValidateCertificatesRequest(winsdk.system.Object):
    certificates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.security.cryptography.certificates.Certificate]]
    email_mailbox_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxValidateCertificatesRequest: ...
    def report_completed_async(self, validation_statuses: typing.Iterable[winsdk.windows.applicationmodel.email.EmailCertificateValidationStatus]) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMailboxValidateCertificatesRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[EmailMailboxValidateCertificatesRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxValidateCertificatesRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

