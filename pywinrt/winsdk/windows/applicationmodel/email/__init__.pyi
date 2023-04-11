# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.appointments
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.cryptography.certificates
import winsdk.windows.storage.streams
import winsdk.windows.system

class EmailAttachmentDownloadState(enum.IntEnum):
    NOT_DOWNLOADED = 0
    DOWNLOADING = 1
    DOWNLOADED = 2
    FAILED = 3

class EmailBatchStatus(enum.IntEnum):
    SUCCESS = 0
    SERVER_SEARCH_SYNC_MANAGER_ERROR = 1
    SERVER_SEARCH_UNKNOWN_ERROR = 2

class EmailCertificateValidationStatus(enum.IntEnum):
    SUCCESS = 0
    NO_MATCH = 1
    INVALID_USAGE = 2
    INVALID_CERTIFICATE = 3
    REVOKED = 4
    CHAIN_REVOKED = 5
    REVOCATION_SERVER_FAILURE = 6
    EXPIRED = 7
    UNTRUSTED = 8
    SERVER_ERROR = 9
    UNKNOWN_FAILURE = 10

class EmailFlagState(enum.IntEnum):
    UNFLAGGED = 0
    FLAGGED = 1
    COMPLETED = 2
    CLEARED = 3

class EmailImportance(enum.IntEnum):
    NORMAL = 0
    HIGH = 1
    LOW = 2

class EmailMailboxActionKind(enum.IntEnum):
    MARK_MESSAGE_AS_SEEN = 0
    MARK_MESSAGE_READ = 1
    CHANGE_MESSAGE_FLAG_STATE = 2
    MOVE_MESSAGE = 3
    SAVE_DRAFT = 4
    SEND_MESSAGE = 5
    CREATE_RESPONSE_REPLY_MESSAGE = 6
    CREATE_RESPONSE_REPLY_ALL_MESSAGE = 7
    CREATE_RESPONSE_FORWARD_MESSAGE = 8
    MOVE_FOLDER = 9
    MARK_FOLDER_FOR_SYNC_ENABLED = 10

class EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation(enum.IntEnum):
    NONE = 0
    STRONG_ALGORITHM = 1
    ANY_ALGORITHM = 2

class EmailMailboxAutoReplyMessageResponseKind(enum.IntEnum):
    HTML = 0
    PLAIN_TEXT = 1

class EmailMailboxChangeType(enum.IntEnum):
    MESSAGE_CREATED = 0
    MESSAGE_MODIFIED = 1
    MESSAGE_DELETED = 2
    FOLDER_CREATED = 3
    FOLDER_MODIFIED = 4
    FOLDER_DELETED = 5
    CHANGE_TRACKING_LOST = 6

class EmailMailboxCreateFolderStatus(enum.IntEnum):
    SUCCESS = 0
    NETWORK_ERROR = 1
    PERMISSIONS_ERROR = 2
    SERVER_ERROR = 3
    UNKNOWN_FAILURE = 4
    NAME_COLLISION = 5
    SERVER_REJECTED = 6

class EmailMailboxDeleteFolderStatus(enum.IntEnum):
    SUCCESS = 0
    NETWORK_ERROR = 1
    PERMISSIONS_ERROR = 2
    SERVER_ERROR = 3
    UNKNOWN_FAILURE = 4
    COULD_NOT_DELETE_EVERYTHING = 5

class EmailMailboxEmptyFolderStatus(enum.IntEnum):
    SUCCESS = 0
    NETWORK_ERROR = 1
    PERMISSIONS_ERROR = 2
    SERVER_ERROR = 3
    UNKNOWN_FAILURE = 4
    COULD_NOT_DELETE_EVERYTHING = 5

class EmailMailboxOtherAppReadAccess(enum.IntEnum):
    SYSTEM_ONLY = 0
    FULL = 1
    NONE = 2

class EmailMailboxOtherAppWriteAccess(enum.IntEnum):
    NONE = 0
    LIMITED = 1

class EmailMailboxSmimeEncryptionAlgorithm(enum.IntEnum):
    ANY = 0
    TRIPLE_DES = 1
    DES = 2
    R_C2128_BIT = 3
    R_C264_BIT = 4
    R_C240_BIT = 5

class EmailMailboxSmimeSigningAlgorithm(enum.IntEnum):
    ANY = 0
    SHA1 = 1
    M_D5 = 2

class EmailMailboxSyncStatus(enum.IntEnum):
    IDLE = 0
    SYNCING = 1
    UP_TO_DATE = 2
    AUTHENTICATION_ERROR = 3
    POLICY_ERROR = 4
    UNKNOWN_ERROR = 5
    MANUAL_ACCOUNT_REMOVAL_REQUIRED = 6

class EmailMeetingResponseType(enum.IntEnum):
    ACCEPT = 0
    DECLINE = 1
    TENTATIVE = 2

class EmailMessageBodyKind(enum.IntEnum):
    HTML = 0
    PLAIN_TEXT = 1

class EmailMessageDownloadState(enum.IntEnum):
    PARTIALLY_DOWNLOADED = 0
    DOWNLOADING = 1
    DOWNLOADED = 2
    FAILED = 3

class EmailMessageResponseKind(enum.IntEnum):
    NONE = 0
    REPLY = 1
    REPLY_ALL = 2
    FORWARD = 3

class EmailMessageSmimeKind(enum.IntEnum):
    NONE = 0
    CLEAR_SIGNED = 1
    OPAQUE_SIGNED = 2
    ENCRYPTED = 3

class EmailQueryKind(enum.IntEnum):
    ALL = 0
    IMPORTANT = 1
    FLAGGED = 2
    UNREAD = 3
    READ = 4
    UNSEEN = 5

class EmailQuerySearchFields(enum.IntFlag):
    NONE = 0
    SUBJECT = 0x1
    SENDER = 0x2
    PREVIEW = 0x4
    RECIPIENTS = 0x8
    ALL = 0xffffffff

class EmailQuerySearchScope(enum.IntEnum):
    LOCAL = 0
    SERVER = 1

class EmailQuerySortDirection(enum.IntEnum):
    DESCENDING = 0
    ASCENDING = 1

class EmailQuerySortProperty(enum.IntEnum):
    DATE = 0

class EmailRecipientResolutionStatus(enum.IntEnum):
    SUCCESS = 0
    RECIPIENT_NOT_FOUND = 1
    AMBIGUOUS_RECIPIENT = 2
    NO_CERTIFICATE = 3
    CERTIFICATE_REQUEST_LIMIT_REACHED = 4
    CANNOT_RESOLVE_DISTRIBUTION_LIST = 5
    SERVER_ERROR = 6
    UNKNOWN_FAILURE = 7

class EmailSpecialFolderKind(enum.IntEnum):
    NONE = 0
    ROOT = 1
    INBOX = 2
    OUTBOX = 3
    DRAFTS = 4
    DELETED_ITEMS = 5
    SENT = 6

class EmailStoreAccessType(enum.IntEnum):
    APP_MAILBOXES_READ_WRITE = 0
    ALL_MAILBOXES_LIMITED_READ_WRITE = 1

Self = typing.TypeVar('Self')

class EmailAttachment(winsdk.system.Object):
    file_name: str
    data: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    mime_type: str
    is_inline: winsdk.system.Boolean
    estimated_download_size_in_bytes: winsdk.system.UInt64
    download_state: EmailAttachmentDownloadState
    content_location: str
    content_id: str
    id: str
    is_from_base_message: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailAttachment: ...
    @typing.overload
    def __new__(cls: typing.Type[EmailAttachment], file_name: str, data: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference], mime_type: str) -> EmailAttachment:...
    @typing.overload
    def __new__(cls: typing.Type[EmailAttachment], file_name: str, data: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]) -> EmailAttachment:...
    @typing.overload
    def __new__(cls: typing.Type[EmailAttachment]) -> EmailAttachment:...

class EmailConversation(winsdk.system.Object):
    flag_state: EmailFlagState
    has_attachment: winsdk.system.Boolean
    id: str
    importance: EmailImportance
    last_email_response_kind: EmailMessageResponseKind
    latest_sender: typing.Optional[EmailRecipient]
    mailbox_id: str
    message_count: winsdk.system.UInt32
    most_recent_message_id: str
    most_recent_message_time: datetime.datetime
    preview: str
    subject: str
    unread_message_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailConversation: ...
    @typing.overload
    def find_messages_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[EmailMessage]]: ...
    @typing.overload
    def find_messages_async(self, count: winsdk.system.UInt32) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[EmailMessage]]: ...

class EmailConversationBatch(winsdk.system.Object):
    conversations: typing.Optional[winsdk.windows.foundation.collections.IVectorView[EmailConversation]]
    status: EmailBatchStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailConversationBatch: ...

class EmailConversationReader(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailConversationReader: ...
    def read_batch_async(self) -> winsdk.windows.foundation.IAsyncOperation[EmailConversationBatch]: ...

class EmailFolder(winsdk.system.Object):
    remote_id: str
    last_successful_sync_time: datetime.datetime
    is_sync_enabled: winsdk.system.Boolean
    display_name: str
    id: str
    kind: EmailSpecialFolderKind
    mailbox_id: str
    parent_folder_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailFolder: ...
    def create_folder_async(self, name: str) -> winsdk.windows.foundation.IAsyncOperation[EmailFolder]: ...
    def delete_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def find_child_folders_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[EmailFolder]]: ...
    @typing.overload
    def get_conversation_reader(self) -> typing.Optional[EmailConversationReader]: ...
    @typing.overload
    def get_conversation_reader(self, options: typing.Optional[EmailQueryOptions]) -> typing.Optional[EmailConversationReader]: ...
    def get_message_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMessage]: ...
    def get_message_counts_async(self) -> winsdk.windows.foundation.IAsyncOperation[EmailItemCounts]: ...
    @typing.overload
    def get_message_reader(self) -> typing.Optional[EmailMessageReader]: ...
    @typing.overload
    def get_message_reader(self, options: typing.Optional[EmailQueryOptions]) -> typing.Optional[EmailMessageReader]: ...
    def save_message_async(self, message: typing.Optional[EmailMessage]) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def try_move_async(self, new_parent_folder: typing.Optional[EmailFolder]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def try_move_async(self, new_parent_folder: typing.Optional[EmailFolder], new_folder_name: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_save_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class EmailIrmInfo(winsdk.system.Object):
    can_remove_irm_on_response: winsdk.system.Boolean
    can_print_data: winsdk.system.Boolean
    can_modify_recipients_on_response: winsdk.system.Boolean
    can_forward: winsdk.system.Boolean
    can_extract_data: winsdk.system.Boolean
    can_reply: winsdk.system.Boolean
    can_edit: winsdk.system.Boolean
    template: typing.Optional[EmailIrmTemplate]
    is_programatic_access_allowed: winsdk.system.Boolean
    is_irm_originator: winsdk.system.Boolean
    expiration_date: datetime.datetime
    can_reply_all: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailIrmInfo: ...
    @typing.overload
    def __new__(cls: typing.Type[EmailIrmInfo], expiration: datetime.datetime, irm_template: typing.Optional[EmailIrmTemplate]) -> EmailIrmInfo:...
    @typing.overload
    def __new__(cls: typing.Type[EmailIrmInfo]) -> EmailIrmInfo:...

class EmailIrmTemplate(winsdk.system.Object):
    name: str
    id: str
    description: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailIrmTemplate: ...
    @typing.overload
    def __new__(cls: typing.Type[EmailIrmTemplate], id: str, name: str, description: str) -> EmailIrmTemplate:...
    @typing.overload
    def __new__(cls: typing.Type[EmailIrmTemplate]) -> EmailIrmTemplate:...

class EmailItemCounts(winsdk.system.Object):
    flagged: winsdk.system.UInt32
    important: winsdk.system.UInt32
    total: winsdk.system.UInt32
    unread: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailItemCounts: ...

class EmailMailbox(winsdk.system.Object):
    other_app_write_access: EmailMailboxOtherAppWriteAccess
    mail_address: str
    other_app_read_access: EmailMailboxOtherAppReadAccess
    display_name: str
    id: str
    is_data_encrypted_under_lock: winsdk.system.Boolean
    is_owned_by_current_app: winsdk.system.Boolean
    mail_address_aliases: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    capabilities: typing.Optional[EmailMailboxCapabilities]
    change_tracker: typing.Optional[EmailMailboxChangeTracker]
    policies: typing.Optional[EmailMailboxPolicies]
    source_display_name: str
    sync_manager: typing.Optional[EmailMailboxSyncManager]
    user_data_account_id: str
    linked_mailbox_id: str
    network_account_id: str
    network_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailbox: ...
    def change_message_flag_state_async(self, message_id: str, flag_state: EmailFlagState) -> winsdk.windows.foundation.IAsyncAction: ...
    def create_response_message_async(self, message_id: str, response_type: EmailMessageResponseKind, subject: str, response_header_type: EmailMessageBodyKind, response_header: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMessage]: ...
    def delete_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def delete_message_async(self, message_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    def download_attachment_async(self, attachment_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    def download_message_async(self, message_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    def get_change_tracker(self, identity: str) -> typing.Optional[EmailMailboxChangeTracker]: ...
    def get_conversation_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailConversation]: ...
    @typing.overload
    def get_conversation_reader(self) -> typing.Optional[EmailConversationReader]: ...
    @typing.overload
    def get_conversation_reader(self, options: typing.Optional[EmailQueryOptions]) -> typing.Optional[EmailConversationReader]: ...
    def get_folder_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailFolder]: ...
    def get_message_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMessage]: ...
    @typing.overload
    def get_message_reader(self) -> typing.Optional[EmailMessageReader]: ...
    @typing.overload
    def get_message_reader(self, options: typing.Optional[EmailQueryOptions]) -> typing.Optional[EmailMessageReader]: ...
    def get_special_folder_async(self, folder_type: EmailSpecialFolderKind) -> winsdk.windows.foundation.IAsyncOperation[EmailFolder]: ...
    def mark_folder_as_seen_async(self, folder_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    def mark_folder_sync_enabled_async(self, folder_id: str, is_sync_enabled: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncAction: ...
    def mark_message_as_seen_async(self, message_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    def mark_message_read_async(self, message_id: str, is_read: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncAction: ...
    def register_sync_manager_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def resolve_recipients_async(self, recipients: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[EmailRecipientResolutionResult]]: ...
    def save_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def save_draft_async(self, message: typing.Optional[EmailMessage]) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def send_message_async(self, message: typing.Optional[EmailMessage]) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def send_message_async(self, message: typing.Optional[EmailMessage], smart_send: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncAction: ...
    def try_create_folder_async(self, parent_folder_id: str, name: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMailboxCreateFolderResult]: ...
    def try_delete_folder_async(self, folder_id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMailboxDeleteFolderStatus]: ...
    def try_empty_folder_async(self, folder_id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMailboxEmptyFolderStatus]: ...
    def try_forward_meeting_async(self, meeting: typing.Optional[EmailMessage], recipients: typing.Iterable[EmailRecipient], subject: str, forward_header_type: EmailMessageBodyKind, forward_header: str, comment: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_get_auto_reply_settings_async(self, requested_format: EmailMailboxAutoReplyMessageResponseKind) -> winsdk.windows.foundation.IAsyncOperation[EmailMailboxAutoReplySettings]: ...
    @typing.overload
    def try_move_folder_async(self, folder_id: str, new_parent_folder_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def try_move_folder_async(self, folder_id: str, new_parent_folder_id: str, new_folder_name: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_move_message_async(self, message_id: str, new_parent_folder_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_propose_new_time_for_meeting_async(self, meeting: typing.Optional[EmailMessage], new_start_time: datetime.datetime, new_duration: datetime.timedelta, subject: str, comment: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_set_auto_reply_settings_async(self, auto_reply_settings: typing.Optional[EmailMailboxAutoReplySettings]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_update_meeting_response_async(self, meeting: typing.Optional[EmailMessage], response: EmailMeetingResponseType, subject: str, comment: str, send_update: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def validate_certificates_async(self, certificates: typing.Iterable[winsdk.windows.security.cryptography.certificates.Certificate]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[EmailCertificateValidationStatus]]: ...
    def add_mailbox_changed(self, p_handler: winsdk.windows.foundation.TypedEventHandler[EmailMailbox, EmailMailboxChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_mailbox_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class EmailMailboxAction(winsdk.system.Object):
    change_number: winsdk.system.UInt64
    kind: EmailMailboxActionKind
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxAction: ...

class EmailMailboxAutoReply(winsdk.system.Object):
    response: str
    is_enabled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxAutoReply: ...

class EmailMailboxAutoReplySettings(winsdk.system.Object):
    start_time: typing.Optional[typing.Optional[datetime.datetime]]
    response_kind: EmailMailboxAutoReplyMessageResponseKind
    is_enabled: winsdk.system.Boolean
    end_time: typing.Optional[typing.Optional[datetime.datetime]]
    internal_reply: typing.Optional[EmailMailboxAutoReply]
    known_external_reply: typing.Optional[EmailMailboxAutoReply]
    unknown_external_reply: typing.Optional[EmailMailboxAutoReply]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxAutoReplySettings: ...
    def __new__(cls: typing.Type[EmailMailboxAutoReplySettings]) -> EmailMailboxAutoReplySettings:...

class EmailMailboxCapabilities(winsdk.system.Object):
    can_smart_send: winsdk.system.Boolean
    can_update_meeting_responses: winsdk.system.Boolean
    can_server_search_mailbox: winsdk.system.Boolean
    can_server_search_folders: winsdk.system.Boolean
    can_forward_meetings: winsdk.system.Boolean
    can_propose_new_time_for_meetings: winsdk.system.Boolean
    can_get_and_set_internal_auto_replies: winsdk.system.Boolean
    can_get_and_set_external_auto_replies: winsdk.system.Boolean
    can_validate_certificates: winsdk.system.Boolean
    can_resolve_recipients: winsdk.system.Boolean
    can_move_folder: winsdk.system.Boolean
    can_empty_folder: winsdk.system.Boolean
    can_delete_folder: winsdk.system.Boolean
    can_create_folder: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxCapabilities: ...

class EmailMailboxChange(winsdk.system.Object):
    change_type: EmailMailboxChangeType
    folder: typing.Optional[EmailFolder]
    mailbox_actions: typing.Optional[winsdk.windows.foundation.collections.IVector[EmailMailboxAction]]
    message: typing.Optional[EmailMessage]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxChange: ...

class EmailMailboxChangeReader(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxChangeReader: ...
    def accept_changes(self) -> None: ...
    def accept_changes_through(self, last_change_to_acknowledge: typing.Optional[EmailMailboxChange]) -> None: ...
    def read_batch_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[EmailMailboxChange]]: ...

class EmailMailboxChangeTracker(winsdk.system.Object):
    is_tracking: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxChangeTracker: ...
    def enable(self) -> None: ...
    def get_change_reader(self) -> typing.Optional[EmailMailboxChangeReader]: ...
    def reset(self) -> None: ...

class EmailMailboxChangedDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxChangedDeferral: ...
    def complete(self) -> None: ...

class EmailMailboxChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxChangedEventArgs: ...
    def get_deferral(self) -> typing.Optional[EmailMailboxChangedDeferral]: ...

class EmailMailboxCreateFolderResult(winsdk.system.Object):
    folder: typing.Optional[EmailFolder]
    status: EmailMailboxCreateFolderStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxCreateFolderResult: ...

class EmailMailboxPolicies(winsdk.system.Object):
    required_smime_signing_algorithm: typing.Optional[typing.Optional[EmailMailboxSmimeSigningAlgorithm]]
    required_smime_encryption_algorithm: typing.Optional[typing.Optional[EmailMailboxSmimeEncryptionAlgorithm]]
    allowed_smime_encryption_algorithm_negotiation: EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation
    allow_smime_soft_certificates: winsdk.system.Boolean
    must_sign_smime_messages: winsdk.system.Boolean
    must_encrypt_smime_messages: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxPolicies: ...

class EmailMailboxSyncManager(winsdk.system.Object):
    status: EmailMailboxSyncStatus
    last_successful_sync_time: datetime.datetime
    last_attempted_sync_time: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMailboxSyncManager: ...
    def sync_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def add_sync_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[EmailMailboxSyncManager, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_sync_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class EmailManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailManager: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[EmailManagerForUser]: ...
    @staticmethod
    def request_store_async(access_type: EmailStoreAccessType) -> winsdk.windows.foundation.IAsyncOperation[EmailStore]: ...
    @staticmethod
    def show_compose_new_email_async(message: typing.Optional[EmailMessage]) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailManagerForUser(winsdk.system.Object):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailManagerForUser: ...
    def request_store_async(self, access_type: EmailStoreAccessType) -> winsdk.windows.foundation.IAsyncOperation[EmailStore]: ...
    def show_compose_new_email_async(self, message: typing.Optional[EmailMessage]) -> winsdk.windows.foundation.IAsyncAction: ...

class EmailMeetingInfo(winsdk.system.Object):
    location: str
    is_response_requested: winsdk.system.Boolean
    is_all_day: winsdk.system.Boolean
    allow_new_time_proposal: winsdk.system.Boolean
    duration: datetime.timedelta
    appointment_roaming_id: str
    appointment_original_start_time: typing.Optional[typing.Optional[datetime.datetime]]
    proposed_duration: typing.Optional[typing.Optional[datetime.timedelta]]
    remote_change_number: winsdk.system.UInt64
    start_time: datetime.datetime
    recurrence_start_time: typing.Optional[typing.Optional[datetime.datetime]]
    recurrence: typing.Optional[winsdk.windows.applicationmodel.appointments.AppointmentRecurrence]
    proposed_start_time: typing.Optional[typing.Optional[datetime.datetime]]
    is_reported_out_of_date_by_server: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMeetingInfo: ...
    def __new__(cls: typing.Type[EmailMeetingInfo]) -> EmailMeetingInfo:...

class EmailMessage(winsdk.system.Object):
    subject: str
    body: str
    bcc: typing.Optional[winsdk.windows.foundation.collections.IVector[EmailRecipient]]
    c_c: typing.Optional[winsdk.windows.foundation.collections.IVector[EmailRecipient]]
    attachments: typing.Optional[winsdk.windows.foundation.collections.IVector[EmailAttachment]]
    to: typing.Optional[winsdk.windows.foundation.collections.IVector[EmailRecipient]]
    allow_internet_images: winsdk.system.Boolean
    flag_state: EmailFlagState
    estimated_download_size_in_bytes: winsdk.system.UInt32
    download_state: EmailMessageDownloadState
    importance: EmailImportance
    irm_info: typing.Optional[EmailIrmInfo]
    original_code_page: winsdk.system.Int32
    sent_time: typing.Optional[typing.Optional[datetime.datetime]]
    sender: typing.Optional[EmailRecipient]
    remote_id: str
    preview: str
    message_class: str
    meeting_info: typing.Optional[EmailMeetingInfo]
    last_response_kind: EmailMessageResponseKind
    is_seen: winsdk.system.Boolean
    is_read: winsdk.system.Boolean
    is_server_search_message: winsdk.system.Boolean
    is_smart_sendable: winsdk.system.Boolean
    mailbox_id: str
    change_number: winsdk.system.UInt64
    conversation_id: str
    normalized_subject: str
    folder_id: str
    has_partial_bodies: winsdk.system.Boolean
    id: str
    in_response_to_message_id: str
    is_draft_message: winsdk.system.Boolean
    smime_kind: EmailMessageSmimeKind
    smime_data: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    sent_representing: typing.Optional[EmailRecipient]
    reply_to: typing.Optional[winsdk.windows.foundation.collections.IVector[EmailRecipient]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMessage: ...
    def __new__(cls: typing.Type[EmailMessage]) -> EmailMessage:...
    def get_body_stream(self, type: EmailMessageBodyKind) -> typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]: ...
    def set_body_stream(self, type: EmailMessageBodyKind, stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]) -> None: ...

class EmailMessageBatch(winsdk.system.Object):
    messages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[EmailMessage]]
    status: EmailBatchStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMessageBatch: ...

class EmailMessageReader(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailMessageReader: ...
    def read_batch_async(self) -> winsdk.windows.foundation.IAsyncOperation[EmailMessageBatch]: ...

class EmailQueryOptions(winsdk.system.Object):
    sort_property: EmailQuerySortProperty
    sort_direction: EmailQuerySortDirection
    kind: EmailQueryKind
    folder_ids: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    text_search: typing.Optional[EmailQueryTextSearch]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailQueryOptions: ...
    @typing.overload
    def __new__(cls: typing.Type[EmailQueryOptions], text: str) -> EmailQueryOptions:...
    @typing.overload
    def __new__(cls: typing.Type[EmailQueryOptions], text: str, fields: EmailQuerySearchFields) -> EmailQueryOptions:...
    @typing.overload
    def __new__(cls: typing.Type[EmailQueryOptions]) -> EmailQueryOptions:...

class EmailQueryTextSearch(winsdk.system.Object):
    text: str
    search_scope: EmailQuerySearchScope
    fields: EmailQuerySearchFields
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailQueryTextSearch: ...

class EmailRecipient(winsdk.system.Object):
    name: str
    address: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailRecipient: ...
    @typing.overload
    def __new__(cls: typing.Type[EmailRecipient], address: str) -> EmailRecipient:...
    @typing.overload
    def __new__(cls: typing.Type[EmailRecipient], address: str, name: str) -> EmailRecipient:...
    @typing.overload
    def __new__(cls: typing.Type[EmailRecipient]) -> EmailRecipient:...

class EmailRecipientResolutionResult(winsdk.system.Object):
    status: EmailRecipientResolutionStatus
    public_keys: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.security.cryptography.certificates.Certificate]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailRecipientResolutionResult: ...
    def __new__(cls: typing.Type[EmailRecipientResolutionResult]) -> EmailRecipientResolutionResult:...
    def set_public_keys(self, value: typing.Iterable[winsdk.windows.security.cryptography.certificates.Certificate]) -> None: ...

class EmailStore(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailStore: ...
    @typing.overload
    def create_mailbox_async(self, account_name: str, account_address: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMailbox]: ...
    @typing.overload
    def create_mailbox_async(self, account_name: str, account_address: str, user_data_account_id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMailbox]: ...
    def find_mailboxes_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[EmailMailbox]]: ...
    def get_conversation_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailConversation]: ...
    @typing.overload
    def get_conversation_reader(self) -> typing.Optional[EmailConversationReader]: ...
    @typing.overload
    def get_conversation_reader(self, options: typing.Optional[EmailQueryOptions]) -> typing.Optional[EmailConversationReader]: ...
    def get_folder_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailFolder]: ...
    def get_mailbox_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMailbox]: ...
    def get_message_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[EmailMessage]: ...
    @typing.overload
    def get_message_reader(self) -> typing.Optional[EmailMessageReader]: ...
    @typing.overload
    def get_message_reader(self, options: typing.Optional[EmailQueryOptions]) -> typing.Optional[EmailMessageReader]: ...

class EmailStoreNotificationTriggerDetails(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailStoreNotificationTriggerDetails: ...

