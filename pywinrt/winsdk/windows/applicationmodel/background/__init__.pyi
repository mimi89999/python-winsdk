# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.activation
import winsdk.windows.applicationmodel.calls.background
import winsdk.windows.devices.bluetooth
import winsdk.windows.devices.bluetooth.advertisement
import winsdk.windows.devices.bluetooth.background
import winsdk.windows.devices.bluetooth.genericattributeprofile
import winsdk.windows.devices.geolocation
import winsdk.windows.devices.sensors
import winsdk.windows.devices.smartcards
import winsdk.windows.devices.sms
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.networking
import winsdk.windows.networking.sockets
import winsdk.windows.storage
import winsdk.windows.storage.provider
import winsdk.windows.system
import winsdk.windows.ui.notifications

class AlarmAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED_WITH_WAKEUP_CAPABILITY = 1
    ALLOWED_WITHOUT_WAKEUP_CAPABILITY = 2
    DENIED = 3

class ApplicationTriggerResult(enum.IntEnum):
    ALLOWED = 0
    CURRENTLY_RUNNING = 1
    DISABLED_BY_POLICY = 2
    UNKNOWN_ERROR = 3

class BackgroundAccessRequestKind(enum.IntEnum):
    ALWAYS_ALLOWED = 0
    ALLOWED_SUBJECT_TO_SYSTEM_POLICY = 1

class BackgroundAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED_WITH_ALWAYS_ON_REAL_TIME_CONNECTIVITY = 1
    ALLOWED_MAY_USE_ACTIVE_REAL_TIME_CONNECTIVITY = 2
    DENIED = 3
    ALWAYS_ALLOWED = 4
    ALLOWED_SUBJECT_TO_SYSTEM_POLICY = 5
    DENIED_BY_SYSTEM_POLICY = 6
    DENIED_BY_USER = 7

class BackgroundTaskCancellationReason(enum.IntEnum):
    ABORT = 0
    TERMINATING = 1
    LOGGING_OFF = 2
    SERVICING_UPDATE = 3
    IDLE_TASK = 4
    UNINSTALL = 5
    CONDITION_LOSS = 6
    SYSTEM_POLICY = 7
    QUIET_HOURS_ENTERED = 8
    EXECUTION_TIME_EXCEEDED = 9
    RESOURCE_REVOCATION = 10
    ENERGY_SAVER = 11

class BackgroundTaskThrottleCounter(enum.IntEnum):
    ALL = 0
    CPU = 1
    NETWORK = 2

class BackgroundWorkCostValue(enum.IntEnum):
    LOW = 0
    MEDIUM = 1
    HIGH = 2

class CustomSystemEventTriggerRecurrence(enum.IntEnum):
    ONCE = 0
    ALWAYS = 1

class DeviceTriggerResult(enum.IntEnum):
    ALLOWED = 0
    DENIED_BY_USER = 1
    DENIED_BY_SYSTEM = 2
    LOW_BATTERY = 3

class LocationTriggerType(enum.IntEnum):
    GEOFENCE = 0

class MediaProcessingTriggerResult(enum.IntEnum):
    ALLOWED = 0
    CURRENTLY_RUNNING = 1
    DISABLED_BY_POLICY = 2
    UNKNOWN_ERROR = 3

class SystemConditionType(enum.IntEnum):
    INVALID = 0
    USER_PRESENT = 1
    USER_NOT_PRESENT = 2
    INTERNET_AVAILABLE = 3
    INTERNET_NOT_AVAILABLE = 4
    SESSION_CONNECTED = 5
    SESSION_DISCONNECTED = 6
    FREE_NETWORK_AVAILABLE = 7
    BACKGROUND_WORK_COST_NOT_HIGH = 8

class SystemTriggerType(enum.IntEnum):
    INVALID = 0
    SMS_RECEIVED = 1
    USER_PRESENT = 2
    USER_AWAY = 3
    NETWORK_STATE_CHANGE = 4
    CONTROL_CHANNEL_RESET = 5
    INTERNET_AVAILABLE = 6
    SESSION_CONNECTED = 7
    SERVICING_COMPLETE = 8
    LOCK_SCREEN_APPLICATION_ADDED = 9
    LOCK_SCREEN_APPLICATION_REMOVED = 10
    TIME_ZONE_CHANGE = 11
    ONLINE_ID_CONNECTED_STATE_CHANGE = 12
    BACKGROUND_WORK_COST_CHANGE = 13
    POWER_STATE_CHANGE = 14
    DEFAULT_SIGN_IN_ACCOUNT_CHANGE = 15

Self = typing.TypeVar('Self')

class ActivitySensorTrigger(winsdk.system.Object):
    minimum_report_interval: winsdk.system.UInt32
    report_interval: winsdk.system.UInt32
    subscribed_activities: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.devices.sensors.ActivityType]]
    supported_activities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.devices.sensors.ActivityType]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ActivitySensorTrigger: ...
    def __new__(cls: typing.Type[ActivitySensorTrigger], report_interval_in_milliseconds: winsdk.system.UInt32) -> ActivitySensorTrigger:...

class AlarmApplicationManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AlarmApplicationManager: ...
    @staticmethod
    def get_access_status() -> AlarmAccessStatus: ...
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[AlarmAccessStatus]: ...

class AppBroadcastTrigger(winsdk.system.Object):
    provider_info: typing.Optional[AppBroadcastTriggerProviderInfo]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppBroadcastTrigger: ...
    def __new__(cls: typing.Type[AppBroadcastTrigger], provider_key: str) -> AppBroadcastTrigger:...

class AppBroadcastTriggerProviderInfo(winsdk.system.Object):
    video_key_frame_interval: datetime.timedelta
    max_video_width: winsdk.system.UInt32
    max_video_height: winsdk.system.UInt32
    max_video_bitrate: winsdk.system.UInt32
    logo_resource: str
    display_name_resource: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppBroadcastTriggerProviderInfo: ...

class ApplicationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ApplicationTrigger: ...
    def __new__(cls: typing.Type[ApplicationTrigger]) -> ApplicationTrigger:...
    @typing.overload
    def request_async(self) -> winsdk.windows.foundation.IAsyncOperation[ApplicationTriggerResult]: ...
    @typing.overload
    def request_async(self, arguments: typing.Optional[winsdk.windows.foundation.collections.ValueSet]) -> winsdk.windows.foundation.IAsyncOperation[ApplicationTriggerResult]: ...

class ApplicationTriggerDetails(winsdk.system.Object):
    arguments: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ApplicationTriggerDetails: ...

class AppointmentStoreNotificationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppointmentStoreNotificationTrigger: ...
    def __new__(cls: typing.Type[AppointmentStoreNotificationTrigger]) -> AppointmentStoreNotificationTrigger:...

class BackgroundExecutionManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundExecutionManager: ...
    @typing.overload
    @staticmethod
    def get_access_status() -> BackgroundAccessStatus: ...
    @typing.overload
    @staticmethod
    def get_access_status(application_id: str) -> BackgroundAccessStatus: ...
    @typing.overload
    @staticmethod
    def get_access_status_for_modern_standby() -> BackgroundAccessStatus: ...
    @typing.overload
    @staticmethod
    def get_access_status_for_modern_standby(application_id: str) -> BackgroundAccessStatus: ...
    @typing.overload
    @staticmethod
    def remove_access() -> None: ...
    @typing.overload
    @staticmethod
    def remove_access(application_id: str) -> None: ...
    @typing.overload
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[BackgroundAccessStatus]: ...
    @typing.overload
    @staticmethod
    def request_access_async(application_id: str) -> winsdk.windows.foundation.IAsyncOperation[BackgroundAccessStatus]: ...
    @staticmethod
    def request_access_kind_async(requested_access: BackgroundAccessRequestKind, reason: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @staticmethod
    def request_access_kind_for_modern_standby_async(requested_access: BackgroundAccessRequestKind, reason: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class BackgroundTaskBuilder(winsdk.system.Object):
    task_entry_point: str
    name: str
    cancel_on_condition_loss: winsdk.system.Boolean
    is_network_requested: winsdk.system.Boolean
    task_group: typing.Optional[BackgroundTaskRegistrationGroup]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTaskBuilder: ...
    def __new__(cls: typing.Type[BackgroundTaskBuilder]) -> BackgroundTaskBuilder:...
    def add_condition(self, condition: typing.Optional[IBackgroundCondition]) -> None: ...
    def register(self) -> typing.Optional[BackgroundTaskRegistration]: ...
    def set_task_entry_point_clsid(self, task_entry_point: winsdk.system.Guid) -> None: ...
    def set_trigger(self, trigger: typing.Optional[IBackgroundTrigger]) -> None: ...

class BackgroundTaskCompletedEventArgs(winsdk.system.Object):
    instance_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTaskCompletedEventArgs: ...
    def check_result(self) -> None: ...

class BackgroundTaskDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTaskDeferral: ...
    def complete(self) -> None: ...

class BackgroundTaskProgressEventArgs(winsdk.system.Object):
    instance_id: winsdk.system.Guid
    progress: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTaskProgressEventArgs: ...

class BackgroundTaskRegistration(winsdk.system.Object):
    name: str
    task_id: winsdk.system.Guid
    trigger: typing.Optional[IBackgroundTrigger]
    task_group: typing.Optional[BackgroundTaskRegistrationGroup]
    all_tasks: typing.ClassVar[typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, IBackgroundTaskRegistration]]]
    all_task_groups: typing.ClassVar[typing.Optional[winsdk.windows.foundation.collections.IMapView[str, BackgroundTaskRegistrationGroup]]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTaskRegistration: ...
    @staticmethod
    def get_task_group(group_id: str) -> typing.Optional[BackgroundTaskRegistrationGroup]: ...
    def unregister(self, cancel_task: winsdk.system.Boolean) -> None: ...
    def add_completed(self, handler: typing.Optional[BackgroundTaskCompletedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_completed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_progress(self, handler: typing.Optional[BackgroundTaskProgressEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_progress(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class BackgroundTaskRegistrationGroup(winsdk.system.Object):
    all_tasks: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, BackgroundTaskRegistration]]
    id: str
    name: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundTaskRegistrationGroup: ...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundTaskRegistrationGroup], id: str) -> BackgroundTaskRegistrationGroup:...
    @typing.overload
    def __new__(cls: typing.Type[BackgroundTaskRegistrationGroup], id: str, name: str) -> BackgroundTaskRegistrationGroup:...
    def add_background_activated(self, handler: winsdk.windows.foundation.TypedEventHandler[BackgroundTaskRegistrationGroup, winsdk.windows.applicationmodel.activation.BackgroundActivatedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_background_activated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class BackgroundWorkCost(winsdk.system.Object):
    current_background_work_cost: typing.ClassVar[BackgroundWorkCostValue]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BackgroundWorkCost: ...

class BluetoothLEAdvertisementPublisherTrigger(winsdk.system.Object):
    advertisement: typing.Optional[winsdk.windows.devices.bluetooth.advertisement.BluetoothLEAdvertisement]
    use_extended_format: winsdk.system.Boolean
    preferred_transmit_power_level_in_d_bm: typing.Optional[typing.Optional[winsdk.system.Int16]]
    is_anonymous: winsdk.system.Boolean
    include_transmit_power_level: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BluetoothLEAdvertisementPublisherTrigger: ...
    def __new__(cls: typing.Type[BluetoothLEAdvertisementPublisherTrigger]) -> BluetoothLEAdvertisementPublisherTrigger:...

class BluetoothLEAdvertisementWatcherTrigger(winsdk.system.Object):
    signal_strength_filter: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothSignalStrengthFilter]
    advertisement_filter: typing.Optional[winsdk.windows.devices.bluetooth.advertisement.BluetoothLEAdvertisementFilter]
    max_out_of_range_timeout: datetime.timedelta
    max_sampling_interval: datetime.timedelta
    min_out_of_range_timeout: datetime.timedelta
    min_sampling_interval: datetime.timedelta
    allow_extended_advertisements: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BluetoothLEAdvertisementWatcherTrigger: ...
    def __new__(cls: typing.Type[BluetoothLEAdvertisementWatcherTrigger]) -> BluetoothLEAdvertisementWatcherTrigger:...

class CachedFileUpdaterTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CachedFileUpdaterTrigger: ...
    def __new__(cls: typing.Type[CachedFileUpdaterTrigger]) -> CachedFileUpdaterTrigger:...

class CachedFileUpdaterTriggerDetails(winsdk.system.Object):
    can_request_user_input: winsdk.system.Boolean
    update_request: typing.Optional[winsdk.windows.storage.provider.FileUpdateRequest]
    update_target: winsdk.windows.storage.provider.CachedFileTarget
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CachedFileUpdaterTriggerDetails: ...

class ChatMessageNotificationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ChatMessageNotificationTrigger: ...
    def __new__(cls: typing.Type[ChatMessageNotificationTrigger]) -> ChatMessageNotificationTrigger:...

class ChatMessageReceivedNotificationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ChatMessageReceivedNotificationTrigger: ...
    def __new__(cls: typing.Type[ChatMessageReceivedNotificationTrigger]) -> ChatMessageReceivedNotificationTrigger:...

class CommunicationBlockingAppSetAsActiveTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CommunicationBlockingAppSetAsActiveTrigger: ...
    def __new__(cls: typing.Type[CommunicationBlockingAppSetAsActiveTrigger]) -> CommunicationBlockingAppSetAsActiveTrigger:...

class ContactStoreNotificationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ContactStoreNotificationTrigger: ...
    def __new__(cls: typing.Type[ContactStoreNotificationTrigger]) -> ContactStoreNotificationTrigger:...

class ContentPrefetchTrigger(winsdk.system.Object):
    wait_interval: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ContentPrefetchTrigger: ...
    @typing.overload
    def __new__(cls: typing.Type[ContentPrefetchTrigger], wait_interval: datetime.timedelta) -> ContentPrefetchTrigger:...
    @typing.overload
    def __new__(cls: typing.Type[ContentPrefetchTrigger]) -> ContentPrefetchTrigger:...

class ConversationalAgentTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ConversationalAgentTrigger: ...
    def __new__(cls: typing.Type[ConversationalAgentTrigger]) -> ConversationalAgentTrigger:...

class CustomSystemEventTrigger(winsdk.system.Object):
    recurrence: CustomSystemEventTriggerRecurrence
    trigger_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CustomSystemEventTrigger: ...
    def __new__(cls: typing.Type[CustomSystemEventTrigger], trigger_id: str, recurrence: CustomSystemEventTriggerRecurrence) -> CustomSystemEventTrigger:...

class DeviceConnectionChangeTrigger(winsdk.system.Object):
    maintain_connection: winsdk.system.Boolean
    can_maintain_connection: winsdk.system.Boolean
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceConnectionChangeTrigger: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[DeviceConnectionChangeTrigger]: ...

class DeviceManufacturerNotificationTrigger(winsdk.system.Object):
    one_shot: winsdk.system.Boolean
    trigger_qualifier: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceManufacturerNotificationTrigger: ...
    def __new__(cls: typing.Type[DeviceManufacturerNotificationTrigger], trigger_qualifier: str, one_shot: winsdk.system.Boolean) -> DeviceManufacturerNotificationTrigger:...

class DeviceServicingTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceServicingTrigger: ...
    def __new__(cls: typing.Type[DeviceServicingTrigger]) -> DeviceServicingTrigger:...
    @typing.overload
    def request_async(self, device_id: str, expected_duration: datetime.timedelta) -> winsdk.windows.foundation.IAsyncOperation[DeviceTriggerResult]: ...
    @typing.overload
    def request_async(self, device_id: str, expected_duration: datetime.timedelta, arguments: str) -> winsdk.windows.foundation.IAsyncOperation[DeviceTriggerResult]: ...

class DeviceUseTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceUseTrigger: ...
    def __new__(cls: typing.Type[DeviceUseTrigger]) -> DeviceUseTrigger:...
    @typing.overload
    def request_async(self, device_id: str) -> winsdk.windows.foundation.IAsyncOperation[DeviceTriggerResult]: ...
    @typing.overload
    def request_async(self, device_id: str, arguments: str) -> winsdk.windows.foundation.IAsyncOperation[DeviceTriggerResult]: ...

class DeviceWatcherTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceWatcherTrigger: ...

class EmailStoreNotificationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EmailStoreNotificationTrigger: ...
    def __new__(cls: typing.Type[EmailStoreNotificationTrigger]) -> EmailStoreNotificationTrigger:...

class GattCharacteristicNotificationTrigger(winsdk.system.Object):
    characteristic: typing.Optional[winsdk.windows.devices.bluetooth.genericattributeprofile.GattCharacteristic]
    event_triggering_mode: winsdk.windows.devices.bluetooth.background.BluetoothEventTriggeringMode
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GattCharacteristicNotificationTrigger: ...
    @typing.overload
    def __new__(cls: typing.Type[GattCharacteristicNotificationTrigger], characteristic: typing.Optional[winsdk.windows.devices.bluetooth.genericattributeprofile.GattCharacteristic], event_triggering_mode: winsdk.windows.devices.bluetooth.background.BluetoothEventTriggeringMode) -> GattCharacteristicNotificationTrigger:...
    @typing.overload
    def __new__(cls: typing.Type[GattCharacteristicNotificationTrigger], characteristic: typing.Optional[winsdk.windows.devices.bluetooth.genericattributeprofile.GattCharacteristic]) -> GattCharacteristicNotificationTrigger:...

class GattServiceProviderTrigger(winsdk.system.Object):
    advertising_parameters: typing.Optional[winsdk.windows.devices.bluetooth.genericattributeprofile.GattServiceProviderAdvertisingParameters]
    service: typing.Optional[winsdk.windows.devices.bluetooth.genericattributeprofile.GattLocalService]
    trigger_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GattServiceProviderTrigger: ...
    @staticmethod
    def create_async(trigger_id: str, service_uuid: winsdk.system.Guid) -> winsdk.windows.foundation.IAsyncOperation[GattServiceProviderTriggerResult]: ...

class GattServiceProviderTriggerResult(winsdk.system.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    trigger: typing.Optional[GattServiceProviderTrigger]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GattServiceProviderTriggerResult: ...

class GeovisitTrigger(winsdk.system.Object):
    monitoring_scope: winsdk.windows.devices.geolocation.VisitMonitoringScope
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GeovisitTrigger: ...
    def __new__(cls: typing.Type[GeovisitTrigger]) -> GeovisitTrigger:...

class LocationTrigger(winsdk.system.Object):
    trigger_type: LocationTriggerType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LocationTrigger: ...
    def __new__(cls: typing.Type[LocationTrigger], trigger_type: LocationTriggerType) -> LocationTrigger:...

class MaintenanceTrigger(winsdk.system.Object):
    freshness_time: winsdk.system.UInt32
    one_shot: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MaintenanceTrigger: ...
    def __new__(cls: typing.Type[MaintenanceTrigger], freshness_time: winsdk.system.UInt32, one_shot: winsdk.system.Boolean) -> MaintenanceTrigger:...

class MediaProcessingTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaProcessingTrigger: ...
    def __new__(cls: typing.Type[MediaProcessingTrigger]) -> MediaProcessingTrigger:...
    @typing.overload
    def request_async(self) -> winsdk.windows.foundation.IAsyncOperation[MediaProcessingTriggerResult]: ...
    @typing.overload
    def request_async(self, arguments: typing.Optional[winsdk.windows.foundation.collections.ValueSet]) -> winsdk.windows.foundation.IAsyncOperation[MediaProcessingTriggerResult]: ...

class MobileBroadbandDeviceServiceNotificationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MobileBroadbandDeviceServiceNotificationTrigger: ...
    def __new__(cls: typing.Type[MobileBroadbandDeviceServiceNotificationTrigger]) -> MobileBroadbandDeviceServiceNotificationTrigger:...

class MobileBroadbandPcoDataChangeTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MobileBroadbandPcoDataChangeTrigger: ...
    def __new__(cls: typing.Type[MobileBroadbandPcoDataChangeTrigger]) -> MobileBroadbandPcoDataChangeTrigger:...

class MobileBroadbandPinLockStateChangeTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MobileBroadbandPinLockStateChangeTrigger: ...
    def __new__(cls: typing.Type[MobileBroadbandPinLockStateChangeTrigger]) -> MobileBroadbandPinLockStateChangeTrigger:...

class MobileBroadbandRadioStateChangeTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MobileBroadbandRadioStateChangeTrigger: ...
    def __new__(cls: typing.Type[MobileBroadbandRadioStateChangeTrigger]) -> MobileBroadbandRadioStateChangeTrigger:...

class MobileBroadbandRegistrationStateChangeTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MobileBroadbandRegistrationStateChangeTrigger: ...
    def __new__(cls: typing.Type[MobileBroadbandRegistrationStateChangeTrigger]) -> MobileBroadbandRegistrationStateChangeTrigger:...

class NetworkOperatorDataUsageTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkOperatorDataUsageTrigger: ...
    def __new__(cls: typing.Type[NetworkOperatorDataUsageTrigger]) -> NetworkOperatorDataUsageTrigger:...

class NetworkOperatorHotspotAuthenticationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkOperatorHotspotAuthenticationTrigger: ...
    def __new__(cls: typing.Type[NetworkOperatorHotspotAuthenticationTrigger]) -> NetworkOperatorHotspotAuthenticationTrigger:...

class NetworkOperatorNotificationTrigger(winsdk.system.Object):
    network_account_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NetworkOperatorNotificationTrigger: ...
    def __new__(cls: typing.Type[NetworkOperatorNotificationTrigger], network_account_id: str) -> NetworkOperatorNotificationTrigger:...

class PaymentAppCanMakePaymentTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PaymentAppCanMakePaymentTrigger: ...
    def __new__(cls: typing.Type[PaymentAppCanMakePaymentTrigger]) -> PaymentAppCanMakePaymentTrigger:...

class PhoneTrigger(winsdk.system.Object):
    one_shot: winsdk.system.Boolean
    trigger_type: winsdk.windows.applicationmodel.calls.background.PhoneTriggerType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhoneTrigger: ...
    def __new__(cls: typing.Type[PhoneTrigger], type: winsdk.windows.applicationmodel.calls.background.PhoneTriggerType, one_shot: winsdk.system.Boolean) -> PhoneTrigger:...

class PushNotificationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PushNotificationTrigger: ...
    @typing.overload
    def __new__(cls: typing.Type[PushNotificationTrigger], application_id: str) -> PushNotificationTrigger:...
    @typing.overload
    def __new__(cls: typing.Type[PushNotificationTrigger]) -> PushNotificationTrigger:...

class RcsEndUserMessageAvailableTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RcsEndUserMessageAvailableTrigger: ...
    def __new__(cls: typing.Type[RcsEndUserMessageAvailableTrigger]) -> RcsEndUserMessageAvailableTrigger:...

class RfcommConnectionTrigger(winsdk.system.Object):
    remote_host_name: typing.Optional[winsdk.windows.networking.HostName]
    protection_level: winsdk.windows.networking.sockets.SocketProtectionLevel
    allow_multiple_connections: winsdk.system.Boolean
    inbound_connection: typing.Optional[winsdk.windows.devices.bluetooth.background.RfcommInboundConnectionInformation]
    outbound_connection: typing.Optional[winsdk.windows.devices.bluetooth.background.RfcommOutboundConnectionInformation]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RfcommConnectionTrigger: ...
    def __new__(cls: typing.Type[RfcommConnectionTrigger]) -> RfcommConnectionTrigger:...

class SecondaryAuthenticationFactorAuthenticationTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SecondaryAuthenticationFactorAuthenticationTrigger: ...
    def __new__(cls: typing.Type[SecondaryAuthenticationFactorAuthenticationTrigger]) -> SecondaryAuthenticationFactorAuthenticationTrigger:...

class SensorDataThresholdTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SensorDataThresholdTrigger: ...
    def __new__(cls: typing.Type[SensorDataThresholdTrigger], threshold: typing.Optional[winsdk.windows.devices.sensors.ISensorDataThreshold]) -> SensorDataThresholdTrigger:...

class SmartCardTrigger(winsdk.system.Object):
    trigger_type: winsdk.windows.devices.smartcards.SmartCardTriggerType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SmartCardTrigger: ...
    def __new__(cls: typing.Type[SmartCardTrigger], trigger_type: winsdk.windows.devices.smartcards.SmartCardTriggerType) -> SmartCardTrigger:...

class SmsMessageReceivedTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SmsMessageReceivedTrigger: ...
    def __new__(cls: typing.Type[SmsMessageReceivedTrigger], filter_rules: typing.Optional[winsdk.windows.devices.sms.SmsFilterRules]) -> SmsMessageReceivedTrigger:...

class SocketActivityTrigger(winsdk.system.Object):
    is_wake_from_low_power_supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SocketActivityTrigger: ...
    def __new__(cls: typing.Type[SocketActivityTrigger]) -> SocketActivityTrigger:...

class StorageLibraryChangeTrackerTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> StorageLibraryChangeTrackerTrigger: ...
    def __new__(cls: typing.Type[StorageLibraryChangeTrackerTrigger], tracker: typing.Optional[winsdk.windows.storage.StorageLibraryChangeTracker]) -> StorageLibraryChangeTrackerTrigger:...

class StorageLibraryContentChangedTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> StorageLibraryContentChangedTrigger: ...
    @staticmethod
    def create(storage_library: typing.Optional[winsdk.windows.storage.StorageLibrary]) -> typing.Optional[StorageLibraryContentChangedTrigger]: ...
    @staticmethod
    def create_from_libraries(storage_libraries: typing.Iterable[winsdk.windows.storage.StorageLibrary]) -> typing.Optional[StorageLibraryContentChangedTrigger]: ...

class SystemCondition(winsdk.system.Object):
    condition_type: SystemConditionType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SystemCondition: ...
    def __new__(cls: typing.Type[SystemCondition], condition_type: SystemConditionType) -> SystemCondition:...

class SystemTrigger(winsdk.system.Object):
    one_shot: winsdk.system.Boolean
    trigger_type: SystemTriggerType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SystemTrigger: ...
    def __new__(cls: typing.Type[SystemTrigger], trigger_type: SystemTriggerType, one_shot: winsdk.system.Boolean) -> SystemTrigger:...

class TetheringEntitlementCheckTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TetheringEntitlementCheckTrigger: ...
    def __new__(cls: typing.Type[TetheringEntitlementCheckTrigger]) -> TetheringEntitlementCheckTrigger:...

class TimeTrigger(winsdk.system.Object):
    freshness_time: winsdk.system.UInt32
    one_shot: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TimeTrigger: ...
    def __new__(cls: typing.Type[TimeTrigger], freshness_time: winsdk.system.UInt32, one_shot: winsdk.system.Boolean) -> TimeTrigger:...

class ToastNotificationActionTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ToastNotificationActionTrigger: ...
    @typing.overload
    def __new__(cls: typing.Type[ToastNotificationActionTrigger], application_id: str) -> ToastNotificationActionTrigger:...
    @typing.overload
    def __new__(cls: typing.Type[ToastNotificationActionTrigger]) -> ToastNotificationActionTrigger:...

class ToastNotificationHistoryChangedTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ToastNotificationHistoryChangedTrigger: ...
    @typing.overload
    def __new__(cls: typing.Type[ToastNotificationHistoryChangedTrigger], application_id: str) -> ToastNotificationHistoryChangedTrigger:...
    @typing.overload
    def __new__(cls: typing.Type[ToastNotificationHistoryChangedTrigger]) -> ToastNotificationHistoryChangedTrigger:...

class UserNotificationChangedTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserNotificationChangedTrigger: ...
    def __new__(cls: typing.Type[UserNotificationChangedTrigger], notification_kinds: winsdk.windows.ui.notifications.NotificationKinds) -> UserNotificationChangedTrigger:...

class WiFiOnDemandHotspotConnectTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WiFiOnDemandHotspotConnectTrigger: ...
    def __new__(cls: typing.Type[WiFiOnDemandHotspotConnectTrigger]) -> WiFiOnDemandHotspotConnectTrigger:...

class WiFiOnDemandHotspotUpdateMetadataTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WiFiOnDemandHotspotUpdateMetadataTrigger: ...
    def __new__(cls: typing.Type[WiFiOnDemandHotspotUpdateMetadataTrigger]) -> WiFiOnDemandHotspotUpdateMetadataTrigger:...

class IBackgroundCondition(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundCondition: ...

class IBackgroundTask(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTask: ...
    def run(self, task_instance: typing.Optional[IBackgroundTaskInstance]) -> None: ...

class IBackgroundTaskInstance(winsdk.system.Object):
    instance_id: winsdk.system.Guid
    progress: winsdk.system.UInt32
    suspended_count: winsdk.system.UInt32
    task: typing.Optional[BackgroundTaskRegistration]
    trigger_details: typing.Optional[winsdk.system.Object]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTaskInstance: ...
    def get_deferral(self) -> typing.Optional[BackgroundTaskDeferral]: ...
    def add_canceled(self, cancel_handler: typing.Optional[BackgroundTaskCanceledEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_canceled(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IBackgroundTaskInstance2(winsdk.system.Object):
    instance_id: winsdk.system.Guid
    progress: winsdk.system.UInt32
    suspended_count: winsdk.system.UInt32
    task: typing.Optional[BackgroundTaskRegistration]
    trigger_details: typing.Optional[winsdk.system.Object]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTaskInstance2: ...
    def get_deferral(self) -> typing.Optional[BackgroundTaskDeferral]: ...
    def get_throttle_count(self, counter: BackgroundTaskThrottleCounter) -> winsdk.system.UInt32: ...
    def add_canceled(self, cancel_handler: typing.Optional[BackgroundTaskCanceledEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_canceled(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IBackgroundTaskInstance4(winsdk.system.Object):
    user: typing.Optional[winsdk.windows.system.User]
    instance_id: winsdk.system.Guid
    progress: winsdk.system.UInt32
    suspended_count: winsdk.system.UInt32
    task: typing.Optional[BackgroundTaskRegistration]
    trigger_details: typing.Optional[winsdk.system.Object]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTaskInstance4: ...
    def get_deferral(self) -> typing.Optional[BackgroundTaskDeferral]: ...
    def add_canceled(self, cancel_handler: typing.Optional[BackgroundTaskCanceledEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_canceled(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IBackgroundTaskRegistration(winsdk.system.Object):
    name: str
    task_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTaskRegistration: ...
    def unregister(self, cancel_task: winsdk.system.Boolean) -> None: ...
    def add_completed(self, handler: typing.Optional[BackgroundTaskCompletedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_completed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_progress(self, handler: typing.Optional[BackgroundTaskProgressEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_progress(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IBackgroundTaskRegistration2(winsdk.system.Object):
    trigger: typing.Optional[IBackgroundTrigger]
    name: str
    task_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTaskRegistration2: ...
    def unregister(self, cancel_task: winsdk.system.Boolean) -> None: ...
    def add_completed(self, handler: typing.Optional[BackgroundTaskCompletedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_completed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_progress(self, handler: typing.Optional[BackgroundTaskProgressEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_progress(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IBackgroundTaskRegistration3(winsdk.system.Object):
    task_group: typing.Optional[BackgroundTaskRegistrationGroup]
    name: str
    task_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTaskRegistration3: ...
    def unregister(self, cancel_task: winsdk.system.Boolean) -> None: ...
    def add_completed(self, handler: typing.Optional[BackgroundTaskCompletedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_completed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_progress(self, handler: typing.Optional[BackgroundTaskProgressEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_progress(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IBackgroundTrigger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IBackgroundTrigger: ...

BackgroundTaskCanceledEventHandler = typing.Callable[[typing.Optional[IBackgroundTaskInstance], BackgroundTaskCancellationReason], None]

BackgroundTaskCompletedEventHandler = typing.Callable[[typing.Optional[BackgroundTaskRegistration], typing.Optional[BackgroundTaskCompletedEventArgs]], None]

BackgroundTaskProgressEventHandler = typing.Callable[[typing.Optional[BackgroundTaskRegistration], typing.Optional[BackgroundTaskProgressEventArgs]], None]

