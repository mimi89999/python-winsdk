# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.ApplicationModel.Background")

try:
    import winsdk.windows.applicationmodel.activation
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.calls.background
except ImportError:
    pass

try:
    import winsdk.windows.devices.bluetooth
except ImportError:
    pass

try:
    import winsdk.windows.devices.bluetooth.advertisement
except ImportError:
    pass

try:
    import winsdk.windows.devices.bluetooth.background
except ImportError:
    pass

try:
    import winsdk.windows.devices.bluetooth.genericattributeprofile
except ImportError:
    pass

try:
    import winsdk.windows.devices.geolocation
except ImportError:
    pass

try:
    import winsdk.windows.devices.sensors
except ImportError:
    pass

try:
    import winsdk.windows.devices.smartcards
except ImportError:
    pass

try:
    import winsdk.windows.devices.sms
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.networking
except ImportError:
    pass

try:
    import winsdk.windows.networking.sockets
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

try:
    import winsdk.windows.storage.provider
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.ui.notifications
except ImportError:
    pass

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

_ns_module._register_ApplicationTriggerResult(ApplicationTriggerResult)
_ns_module._register_BackgroundAccessRequestKind(BackgroundAccessRequestKind)
_ns_module._register_BackgroundAccessStatus(BackgroundAccessStatus)
_ns_module._register_BackgroundTaskCancellationReason(BackgroundTaskCancellationReason)
_ns_module._register_BackgroundTaskThrottleCounter(BackgroundTaskThrottleCounter)
_ns_module._register_BackgroundWorkCostValue(BackgroundWorkCostValue)
_ns_module._register_CustomSystemEventTriggerRecurrence(CustomSystemEventTriggerRecurrence)
_ns_module._register_DeviceTriggerResult(DeviceTriggerResult)
_ns_module._register_LocationTriggerType(LocationTriggerType)
_ns_module._register_MediaProcessingTriggerResult(MediaProcessingTriggerResult)
_ns_module._register_SystemConditionType(SystemConditionType)
_ns_module._register_SystemTriggerType(SystemTriggerType)

ActivitySensorTrigger = _ns_module.ActivitySensorTrigger
ApplicationTrigger = _ns_module.ApplicationTrigger
ApplicationTriggerDetails = _ns_module.ApplicationTriggerDetails
AppointmentStoreNotificationTrigger = _ns_module.AppointmentStoreNotificationTrigger
BackgroundExecutionManager = _ns_module.BackgroundExecutionManager
BackgroundTaskBuilder = _ns_module.BackgroundTaskBuilder
BackgroundTaskCompletedEventArgs = _ns_module.BackgroundTaskCompletedEventArgs
BackgroundTaskDeferral = _ns_module.BackgroundTaskDeferral
BackgroundTaskProgressEventArgs = _ns_module.BackgroundTaskProgressEventArgs
BackgroundTaskRegistration = _ns_module.BackgroundTaskRegistration
BackgroundTaskRegistrationGroup = _ns_module.BackgroundTaskRegistrationGroup
BackgroundWorkCost = _ns_module.BackgroundWorkCost
BluetoothLEAdvertisementPublisherTrigger = _ns_module.BluetoothLEAdvertisementPublisherTrigger
BluetoothLEAdvertisementWatcherTrigger = _ns_module.BluetoothLEAdvertisementWatcherTrigger
CachedFileUpdaterTrigger = _ns_module.CachedFileUpdaterTrigger
CachedFileUpdaterTriggerDetails = _ns_module.CachedFileUpdaterTriggerDetails
ChatMessageNotificationTrigger = _ns_module.ChatMessageNotificationTrigger
ChatMessageReceivedNotificationTrigger = _ns_module.ChatMessageReceivedNotificationTrigger
CommunicationBlockingAppSetAsActiveTrigger = _ns_module.CommunicationBlockingAppSetAsActiveTrigger
ContactStoreNotificationTrigger = _ns_module.ContactStoreNotificationTrigger
ContentPrefetchTrigger = _ns_module.ContentPrefetchTrigger
ConversationalAgentTrigger = _ns_module.ConversationalAgentTrigger
CustomSystemEventTrigger = _ns_module.CustomSystemEventTrigger
DeviceConnectionChangeTrigger = _ns_module.DeviceConnectionChangeTrigger
DeviceManufacturerNotificationTrigger = _ns_module.DeviceManufacturerNotificationTrigger
DeviceServicingTrigger = _ns_module.DeviceServicingTrigger
DeviceUseTrigger = _ns_module.DeviceUseTrigger
DeviceWatcherTrigger = _ns_module.DeviceWatcherTrigger
EmailStoreNotificationTrigger = _ns_module.EmailStoreNotificationTrigger
GattCharacteristicNotificationTrigger = _ns_module.GattCharacteristicNotificationTrigger
GattServiceProviderTrigger = _ns_module.GattServiceProviderTrigger
GattServiceProviderTriggerResult = _ns_module.GattServiceProviderTriggerResult
GeovisitTrigger = _ns_module.GeovisitTrigger
LocationTrigger = _ns_module.LocationTrigger
MaintenanceTrigger = _ns_module.MaintenanceTrigger
MediaProcessingTrigger = _ns_module.MediaProcessingTrigger
MobileBroadbandDeviceServiceNotificationTrigger = _ns_module.MobileBroadbandDeviceServiceNotificationTrigger
MobileBroadbandPcoDataChangeTrigger = _ns_module.MobileBroadbandPcoDataChangeTrigger
MobileBroadbandPinLockStateChangeTrigger = _ns_module.MobileBroadbandPinLockStateChangeTrigger
MobileBroadbandRadioStateChangeTrigger = _ns_module.MobileBroadbandRadioStateChangeTrigger
MobileBroadbandRegistrationStateChangeTrigger = _ns_module.MobileBroadbandRegistrationStateChangeTrigger
NetworkOperatorDataUsageTrigger = _ns_module.NetworkOperatorDataUsageTrigger
NetworkOperatorHotspotAuthenticationTrigger = _ns_module.NetworkOperatorHotspotAuthenticationTrigger
NetworkOperatorNotificationTrigger = _ns_module.NetworkOperatorNotificationTrigger
PaymentAppCanMakePaymentTrigger = _ns_module.PaymentAppCanMakePaymentTrigger
PhoneTrigger = _ns_module.PhoneTrigger
PushNotificationTrigger = _ns_module.PushNotificationTrigger
RcsEndUserMessageAvailableTrigger = _ns_module.RcsEndUserMessageAvailableTrigger
RfcommConnectionTrigger = _ns_module.RfcommConnectionTrigger
SecondaryAuthenticationFactorAuthenticationTrigger = _ns_module.SecondaryAuthenticationFactorAuthenticationTrigger
SensorDataThresholdTrigger = _ns_module.SensorDataThresholdTrigger
SmartCardTrigger = _ns_module.SmartCardTrigger
SmsMessageReceivedTrigger = _ns_module.SmsMessageReceivedTrigger
SocketActivityTrigger = _ns_module.SocketActivityTrigger
StorageLibraryChangeTrackerTrigger = _ns_module.StorageLibraryChangeTrackerTrigger
StorageLibraryContentChangedTrigger = _ns_module.StorageLibraryContentChangedTrigger
SystemCondition = _ns_module.SystemCondition
SystemTrigger = _ns_module.SystemTrigger
TetheringEntitlementCheckTrigger = _ns_module.TetheringEntitlementCheckTrigger
TimeTrigger = _ns_module.TimeTrigger
ToastNotificationActionTrigger = _ns_module.ToastNotificationActionTrigger
ToastNotificationHistoryChangedTrigger = _ns_module.ToastNotificationHistoryChangedTrigger
UserNotificationChangedTrigger = _ns_module.UserNotificationChangedTrigger
IBackgroundCondition = _ns_module.IBackgroundCondition
IBackgroundTask = _ns_module.IBackgroundTask
IBackgroundTaskInstance = _ns_module.IBackgroundTaskInstance
IBackgroundTaskInstance2 = _ns_module.IBackgroundTaskInstance2
IBackgroundTaskInstance4 = _ns_module.IBackgroundTaskInstance4
IBackgroundTaskRegistration = _ns_module.IBackgroundTaskRegistration
IBackgroundTaskRegistration2 = _ns_module.IBackgroundTaskRegistration2
IBackgroundTaskRegistration3 = _ns_module.IBackgroundTaskRegistration3
IBackgroundTrigger = _ns_module.IBackgroundTrigger
