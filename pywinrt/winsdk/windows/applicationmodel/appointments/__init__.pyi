# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.system
import winsdk.windows.ui
import winsdk.windows.ui.popups

class AppointmentBusyStatus(enum.IntEnum):
    BUSY = 0
    TENTATIVE = 1
    FREE = 2
    OUT_OF_OFFICE = 3
    WORKING_ELSEWHERE = 4

class AppointmentCalendarOtherAppReadAccess(enum.IntEnum):
    SYSTEM_ONLY = 0
    LIMITED = 1
    FULL = 2
    NONE = 3

class AppointmentCalendarOtherAppWriteAccess(enum.IntEnum):
    NONE = 0
    SYSTEM_ONLY = 1
    LIMITED = 2

class AppointmentCalendarSyncStatus(enum.IntEnum):
    IDLE = 0
    SYNCING = 1
    UP_TO_DATE = 2
    AUTHENTICATION_ERROR = 3
    POLICY_ERROR = 4
    UNKNOWN_ERROR = 5
    MANUAL_ACCOUNT_REMOVAL_REQUIRED = 6

class AppointmentConflictType(enum.IntEnum):
    NONE = 0
    ADJACENT = 1
    OVERLAP = 2

class AppointmentDaysOfWeek(enum.IntFlag):
    NONE = 0
    SUNDAY = 0x1
    MONDAY = 0x2
    TUESDAY = 0x4
    WEDNESDAY = 0x8
    THURSDAY = 0x10
    FRIDAY = 0x20
    SATURDAY = 0x40

class AppointmentDetailsKind(enum.IntEnum):
    PLAIN_TEXT = 0
    HTML = 1

class AppointmentParticipantResponse(enum.IntEnum):
    NONE = 0
    TENTATIVE = 1
    ACCEPTED = 2
    DECLINED = 3
    UNKNOWN = 4

class AppointmentParticipantRole(enum.IntEnum):
    REQUIRED_ATTENDEE = 0
    OPTIONAL_ATTENDEE = 1
    RESOURCE = 2

class AppointmentRecurrenceUnit(enum.IntEnum):
    DAILY = 0
    WEEKLY = 1
    MONTHLY = 2
    MONTHLY_ON_DAY = 3
    YEARLY = 4
    YEARLY_ON_DAY = 5

class AppointmentSensitivity(enum.IntEnum):
    PUBLIC = 0
    PRIVATE = 1

class AppointmentStoreAccessType(enum.IntEnum):
    APP_CALENDARS_READ_WRITE = 0
    ALL_CALENDARS_READ_ONLY = 1
    ALL_CALENDARS_READ_WRITE = 2

class AppointmentStoreChangeType(enum.IntEnum):
    APPOINTMENT_CREATED = 0
    APPOINTMENT_MODIFIED = 1
    APPOINTMENT_DELETED = 2
    CHANGE_TRACKING_LOST = 3
    CALENDAR_CREATED = 4
    CALENDAR_MODIFIED = 5
    CALENDAR_DELETED = 6

class AppointmentSummaryCardView(enum.IntEnum):
    SYSTEM = 0
    APP = 1

class AppointmentWeekOfMonth(enum.IntEnum):
    FIRST = 0
    SECOND = 1
    THIRD = 2
    FOURTH = 3
    LAST = 4

class FindAppointmentCalendarsOptions(enum.IntFlag):
    NONE = 0
    INCLUDE_HIDDEN = 0x1

class RecurrenceType(enum.IntEnum):
    MASTER = 0
    INSTANCE = 1
    EXCEPTION_INSTANCE = 2

Self = typing.TypeVar('Self')

class Appointment(winsdk.system.Object):
    location: str
    all_day: winsdk.system.Boolean
    organizer: typing.Optional[AppointmentOrganizer]
    duration: datetime.timedelta
    details: str
    busy_status: AppointmentBusyStatus
    recurrence: typing.Optional[AppointmentRecurrence]
    subject: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    start_time: datetime.datetime
    sensitivity: AppointmentSensitivity
    reminder: typing.Optional[typing.Optional[datetime.timedelta]]
    invitees: typing.Optional[winsdk.windows.foundation.collections.IVector[AppointmentInvitee]]
    allow_new_time_proposal: winsdk.system.Boolean
    user_response: AppointmentParticipantResponse
    roaming_id: str
    reply_time: typing.Optional[typing.Optional[datetime.datetime]]
    is_response_requested: winsdk.system.Boolean
    is_organized_by_user: winsdk.system.Boolean
    is_canceled_meeting: winsdk.system.Boolean
    online_meeting_link: str
    has_invitees: winsdk.system.Boolean
    calendar_id: str
    local_id: str
    original_start_time: typing.Optional[typing.Optional[datetime.datetime]]
    remote_change_number: winsdk.system.UInt64
    details_kind: AppointmentDetailsKind
    change_number: winsdk.system.UInt64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Appointment: ...
    def __new__(cls: typing.Type[Appointment]) -> Appointment:...

class AppointmentCalendar(winsdk.system.Object):
    summary_card_view: AppointmentSummaryCardView
    other_app_write_access: AppointmentCalendarOtherAppWriteAccess
    display_color: winsdk.windows.ui.Color
    is_hidden: winsdk.system.Boolean
    display_name: str
    other_app_read_access: AppointmentCalendarOtherAppReadAccess
    local_id: str
    source_display_name: str
    can_cancel_meetings: winsdk.system.Boolean
    can_notify_invitees: winsdk.system.Boolean
    remote_id: str
    must_nofity_invitees: winsdk.system.Boolean
    can_update_meeting_responses: winsdk.system.Boolean
    can_propose_new_time_for_meetings: winsdk.system.Boolean
    can_create_or_update_appointments: winsdk.system.Boolean
    can_forward_meetings: winsdk.system.Boolean
    sync_manager: typing.Optional[AppointmentCalendarSyncManager]
    user_data_account_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentCalendar: ...
    def delete_appointment_async(self, local_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    def delete_appointment_instance_async(self, local_id: str, instance_start_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncAction: ...
    def delete_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def find_all_instances_async(self, master_local_id: str, range_start: datetime.datetime, range_length: datetime.timedelta) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Appointment]]: ...
    @typing.overload
    def find_all_instances_async(self, master_local_id: str, range_start: datetime.datetime, range_length: datetime.timedelta, p_options: typing.Optional[FindAppointmentsOptions]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Appointment]]: ...
    @typing.overload
    def find_appointments_async(self, range_start: datetime.datetime, range_length: datetime.timedelta) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Appointment]]: ...
    @typing.overload
    def find_appointments_async(self, range_start: datetime.datetime, range_length: datetime.timedelta, options: typing.Optional[FindAppointmentsOptions]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Appointment]]: ...
    def find_exceptions_from_master_async(self, master_local_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[AppointmentException]]: ...
    @typing.overload
    def find_unexpanded_appointments_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Appointment]]: ...
    @typing.overload
    def find_unexpanded_appointments_async(self, options: typing.Optional[FindAppointmentsOptions]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Appointment]]: ...
    def get_appointment_async(self, local_id: str) -> winsdk.windows.foundation.IAsyncOperation[Appointment]: ...
    def get_appointment_instance_async(self, local_id: str, instance_start_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[Appointment]: ...
    def register_sync_manager_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def save_appointment_async(self, p_appointment: typing.Optional[Appointment]) -> winsdk.windows.foundation.IAsyncAction: ...
    def save_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def try_cancel_meeting_async(self, meeting: typing.Optional[Appointment], subject: str, comment: str, notify_invitees: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_create_or_update_appointment_async(self, appointment: typing.Optional[Appointment], notify_invitees: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_forward_meeting_async(self, meeting: typing.Optional[Appointment], invitees: typing.Iterable[AppointmentInvitee], subject: str, forward_header: str, comment: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_propose_new_time_for_meeting_async(self, meeting: typing.Optional[Appointment], new_start_time: datetime.datetime, new_duration: datetime.timedelta, subject: str, comment: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_update_meeting_response_async(self, meeting: typing.Optional[Appointment], response: AppointmentParticipantResponse, subject: str, comment: str, send_update: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class AppointmentCalendarSyncManager(winsdk.system.Object):
    status: AppointmentCalendarSyncStatus
    last_successful_sync_time: datetime.datetime
    last_attempted_sync_time: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentCalendarSyncManager: ...
    def sync_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def add_sync_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AppointmentCalendarSyncManager, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_sync_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AppointmentConflictResult(winsdk.system.Object):
    date: datetime.datetime
    type: AppointmentConflictType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentConflictResult: ...

class AppointmentException(winsdk.system.Object):
    appointment: typing.Optional[Appointment]
    exception_properties: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    is_deleted: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentException: ...

class AppointmentInvitee(winsdk.system.Object):
    role: AppointmentParticipantRole
    response: AppointmentParticipantResponse
    display_name: str
    address: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentInvitee: ...
    def __new__(cls: typing.Type[AppointmentInvitee]) -> AppointmentInvitee:...

class AppointmentManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentManager: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[AppointmentManagerForUser]: ...
    @staticmethod
    def request_store_async(options: AppointmentStoreAccessType) -> winsdk.windows.foundation.IAsyncOperation[AppointmentStore]: ...
    @typing.overload
    @staticmethod
    def show_add_appointment_async(appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def show_add_appointment_async(appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def show_appointment_details_async(appointment_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    @staticmethod
    def show_appointment_details_async(appointment_id: str, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def show_edit_new_appointment_async(appointment: typing.Optional[Appointment]) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def show_remove_appointment_async(appointment_id: str, selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def show_remove_appointment_async(appointment_id: str, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def show_remove_appointment_async(appointment_id: str, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def show_replace_appointment_async(appointment_id: str, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def show_replace_appointment_async(appointment_id: str, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def show_replace_appointment_async(appointment_id: str, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def show_time_frame_async(time_to_show: datetime.datetime, duration: datetime.timedelta) -> winsdk.windows.foundation.IAsyncAction: ...

class AppointmentManagerForUser(winsdk.system.Object):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentManagerForUser: ...
    def request_store_async(self, options: AppointmentStoreAccessType) -> winsdk.windows.foundation.IAsyncOperation[AppointmentStore]: ...
    @typing.overload
    def show_add_appointment_async(self, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def show_add_appointment_async(self, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def show_appointment_details_async(self, appointment_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_appointment_details_async(self, appointment_id: str, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncAction: ...
    def show_edit_new_appointment_async(self, appointment: typing.Optional[Appointment]) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def show_remove_appointment_async(self, appointment_id: str, selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def show_remove_appointment_async(self, appointment_id: str, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def show_remove_appointment_async(self, appointment_id: str, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def show_replace_appointment_async(self, appointment_id: str, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def show_replace_appointment_async(self, appointment_id: str, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def show_replace_appointment_async(self, appointment_id: str, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def show_time_frame_async(self, time_to_show: datetime.datetime, duration: datetime.timedelta) -> winsdk.windows.foundation.IAsyncAction: ...

class AppointmentOrganizer(winsdk.system.Object):
    display_name: str
    address: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentOrganizer: ...
    def __new__(cls: typing.Type[AppointmentOrganizer]) -> AppointmentOrganizer:...

class AppointmentProperties(winsdk.system.Object):
    has_invitees: typing.ClassVar[str]
    all_day: typing.ClassVar[str]
    allow_new_time_proposal: typing.ClassVar[str]
    busy_status: typing.ClassVar[str]
    default_properties: typing.ClassVar[typing.Optional[winsdk.windows.foundation.collections.IVector[str]]]
    details: typing.ClassVar[str]
    duration: typing.ClassVar[str]
    recurrence: typing.ClassVar[str]
    invitees: typing.ClassVar[str]
    is_canceled_meeting: typing.ClassVar[str]
    is_organized_by_user: typing.ClassVar[str]
    is_response_requested: typing.ClassVar[str]
    location: typing.ClassVar[str]
    online_meeting_link: typing.ClassVar[str]
    organizer: typing.ClassVar[str]
    original_start_time: typing.ClassVar[str]
    reminder: typing.ClassVar[str]
    reply_time: typing.ClassVar[str]
    sensitivity: typing.ClassVar[str]
    start_time: typing.ClassVar[str]
    subject: typing.ClassVar[str]
    uri: typing.ClassVar[str]
    user_response: typing.ClassVar[str]
    details_kind: typing.ClassVar[str]
    remote_change_number: typing.ClassVar[str]
    change_number: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentProperties: ...

class AppointmentRecurrence(winsdk.system.Object):
    unit: AppointmentRecurrenceUnit
    occurrences: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    month: winsdk.system.UInt32
    interval: winsdk.system.UInt32
    days_of_week: AppointmentDaysOfWeek
    day: winsdk.system.UInt32
    week_of_month: AppointmentWeekOfMonth
    until: typing.Optional[typing.Optional[datetime.datetime]]
    time_zone: str
    recurrence_type: RecurrenceType
    calendar_identifier: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentRecurrence: ...
    def __new__(cls: typing.Type[AppointmentRecurrence]) -> AppointmentRecurrence:...

class AppointmentStore(winsdk.system.Object):
    change_tracker: typing.Optional[AppointmentStoreChangeTracker]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentStore: ...
    @typing.overload
    def create_appointment_calendar_async(self, name: str) -> winsdk.windows.foundation.IAsyncOperation[AppointmentCalendar]: ...
    @typing.overload
    def create_appointment_calendar_async(self, name: str, user_data_account_id: str) -> winsdk.windows.foundation.IAsyncOperation[AppointmentCalendar]: ...
    @typing.overload
    def find_appointment_calendars_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[AppointmentCalendar]]: ...
    @typing.overload
    def find_appointment_calendars_async(self, options: FindAppointmentCalendarsOptions) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[AppointmentCalendar]]: ...
    @typing.overload
    def find_appointments_async(self, range_start: datetime.datetime, range_length: datetime.timedelta) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Appointment]]: ...
    @typing.overload
    def find_appointments_async(self, range_start: datetime.datetime, range_length: datetime.timedelta, options: typing.Optional[FindAppointmentsOptions]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Appointment]]: ...
    @typing.overload
    def find_conflict_async(self, appointment: typing.Optional[Appointment]) -> winsdk.windows.foundation.IAsyncOperation[AppointmentConflictResult]: ...
    @typing.overload
    def find_conflict_async(self, appointment: typing.Optional[Appointment], instance_start_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[AppointmentConflictResult]: ...
    def find_local_ids_from_roaming_id_async(self, roaming_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[str]]: ...
    def get_appointment_async(self, local_id: str) -> winsdk.windows.foundation.IAsyncOperation[Appointment]: ...
    def get_appointment_calendar_async(self, calendar_id: str) -> winsdk.windows.foundation.IAsyncOperation[AppointmentCalendar]: ...
    def get_appointment_instance_async(self, local_id: str, instance_start_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[Appointment]: ...
    def get_change_tracker(self, identity: str) -> typing.Optional[AppointmentStoreChangeTracker]: ...
    def move_appointment_async(self, appointment: typing.Optional[Appointment], destination_calendar: typing.Optional[AppointmentCalendar]) -> winsdk.windows.foundation.IAsyncAction: ...
    def show_add_appointment_async(self, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def show_appointment_details_async(self, local_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_appointment_details_async(self, local_id: str, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncAction: ...
    def show_edit_new_appointment_async(self, appointment: typing.Optional[Appointment]) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def show_remove_appointment_async(self, local_id: str, selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def show_remove_appointment_async(self, local_id: str, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def show_replace_appointment_async(self, local_id: str, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def show_replace_appointment_async(self, local_id: str, appointment: typing.Optional[Appointment], selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement, instance_start_date: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def add_store_changed(self, p_handler: winsdk.windows.foundation.TypedEventHandler[AppointmentStore, AppointmentStoreChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_store_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AppointmentStoreChange(winsdk.system.Object):
    appointment: typing.Optional[Appointment]
    change_type: AppointmentStoreChangeType
    appointment_calendar: typing.Optional[AppointmentCalendar]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentStoreChange: ...

class AppointmentStoreChangeReader(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentStoreChangeReader: ...
    def accept_changes(self) -> None: ...
    def accept_changes_through(self, last_change_to_accept: typing.Optional[AppointmentStoreChange]) -> None: ...
    def read_batch_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[AppointmentStoreChange]]: ...

class AppointmentStoreChangeTracker(winsdk.system.Object):
    is_tracking: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentStoreChangeTracker: ...
    def enable(self) -> None: ...
    def get_change_reader(self) -> typing.Optional[AppointmentStoreChangeReader]: ...
    def reset(self) -> None: ...

class AppointmentStoreChangedDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentStoreChangedDeferral: ...
    def complete(self) -> None: ...

class AppointmentStoreChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentStoreChangedEventArgs: ...
    def get_deferral(self) -> typing.Optional[AppointmentStoreChangedDeferral]: ...

class AppointmentStoreNotificationTriggerDetails(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentStoreNotificationTriggerDetails: ...

class FindAppointmentsOptions(winsdk.system.Object):
    max_count: winsdk.system.UInt32
    include_hidden: winsdk.system.Boolean
    calendar_ids: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    fetch_properties: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FindAppointmentsOptions: ...
    def __new__(cls: typing.Type[FindAppointmentsOptions]) -> FindAppointmentsOptions:...

class IAppointmentParticipant(winsdk.system.Object):
    address: str
    display_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IAppointmentParticipant: ...

