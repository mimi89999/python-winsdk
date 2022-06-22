# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics.display

class AccelerometerReadingType(enum.IntEnum):
    STANDARD = 0
    LINEAR = 1
    GRAVITY = 2

class ActivitySensorReadingConfidence(enum.IntEnum):
    HIGH = 0
    LOW = 1

class ActivityType(enum.IntEnum):
    UNKNOWN = 0
    IDLE = 1
    STATIONARY = 2
    FIDGETING = 3
    WALKING = 4
    RUNNING = 5
    IN_VEHICLE = 6
    BIKING = 7

class HumanEngagement(enum.IntEnum):
    UNKNOWN = 0
    ENGAGED = 1
    UNENGAGED = 2

class HumanPresence(enum.IntEnum):
    UNKNOWN = 0
    PRESENT = 1
    NOT_PRESENT = 2

class MagnetometerAccuracy(enum.IntEnum):
    UNKNOWN = 0
    UNRELIABLE = 1
    APPROXIMATE = 2
    HIGH = 3

class PedometerStepKind(enum.IntEnum):
    UNKNOWN = 0
    WALKING = 1
    RUNNING = 2

class SensorOptimizationGoal(enum.IntEnum):
    PRECISION = 0
    POWER_EFFICIENCY = 1

class SensorReadingType(enum.IntEnum):
    ABSOLUTE = 0
    RELATIVE = 1

class SensorType(enum.IntEnum):
    ACCELEROMETER = 0
    ACTIVITY_SENSOR = 1
    BAROMETER = 2
    COMPASS = 3
    CUSTOM_SENSOR = 4
    GYROSCOPE = 5
    PROXIMITY_SENSOR = 6
    INCLINOMETER = 7
    LIGHT_SENSOR = 8
    ORIENTATION_SENSOR = 9
    PEDOMETER = 10
    RELATIVE_INCLINOMETER = 11
    RELATIVE_ORIENTATION_SENSOR = 12
    SIMPLE_ORIENTATION_SENSOR = 13

class SimpleOrientation(enum.IntEnum):
    NOT_ROTATED = 0
    ROTATED90_DEGREES_COUNTERCLOCKWISE = 1
    ROTATED180_DEGREES_COUNTERCLOCKWISE = 2
    ROTATED270_DEGREES_COUNTERCLOCKWISE = 3
    FACEUP = 4
    FACEDOWN = 5

Self = typing.TypeVar('Self')

class Accelerometer(_winrt.Object):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    reading_type: AccelerometerReadingType
    report_threshold: typing.Optional[AccelerometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Accelerometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Accelerometer]: ...
    def get_current_reading(self) -> typing.Optional[AccelerometerReading]: ...
    @typing.overload
    @staticmethod
    def get_default() -> typing.Optional[Accelerometer]: ...
    @typing.overload
    @staticmethod
    def get_default(reading_type: AccelerometerReadingType) -> typing.Optional[Accelerometer]: ...
    @staticmethod
    def get_device_selector(reading_type: AccelerometerReadingType) -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Accelerometer, AccelerometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_shaken(self, handler: winsdk.windows.foundation.TypedEventHandler[Accelerometer, AccelerometerShakenEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_shaken(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AccelerometerDataThreshold(_winrt.Object):
    z_axis_in_g_force: _winrt.Double
    y_axis_in_g_force: _winrt.Double
    x_axis_in_g_force: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> AccelerometerDataThreshold: ...

class AccelerometerReading(_winrt.Object):
    acceleration_x: _winrt.Double
    acceleration_y: _winrt.Double
    acceleration_z: _winrt.Double
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AccelerometerReading: ...

class AccelerometerReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[AccelerometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> AccelerometerReadingChangedEventArgs: ...

class AccelerometerShakenEventArgs(_winrt.Object):
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> AccelerometerShakenEventArgs: ...

class ActivitySensor(_winrt.Object):
    device_id: str
    minimum_report_interval: _winrt.UInt32
    power_in_milliwatts: _winrt.Double
    subscribed_activities: typing.Optional[winsdk.windows.foundation.collections.IVector[ActivityType]]
    supported_activities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ActivityType]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[ActivitySensor]: ...
    def get_current_reading_async(self) -> winsdk.windows.foundation.IAsyncOperation[ActivitySensorReading]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[ActivitySensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReading]]: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: datetime.datetime, duration: datetime.timedelta) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReading]]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ActivitySensor, ActivitySensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ActivitySensorReading(_winrt.Object):
    activity: ActivityType
    confidence: ActivitySensorReadingConfidence
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensorReading: ...

class ActivitySensorReadingChangeReport(_winrt.Object):
    reading: typing.Optional[ActivitySensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensorReadingChangeReport: ...

class ActivitySensorReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[ActivitySensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensorReadingChangedEventArgs: ...

class ActivitySensorTriggerDetails(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensorTriggerDetails: ...
    def read_reports(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReadingChangeReport]]: ...

class Altimeter(_winrt.Object):
    report_interval: _winrt.UInt32
    device_id: str
    minimum_report_interval: _winrt.UInt32
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> Altimeter: ...
    def get_current_reading(self) -> typing.Optional[AltimeterReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Altimeter]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Altimeter, AltimeterReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AltimeterReading(_winrt.Object):
    altitude_change_in_meters: _winrt.Double
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AltimeterReading: ...

class AltimeterReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[AltimeterReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> AltimeterReadingChangedEventArgs: ...

class Barometer(_winrt.Object):
    report_interval: _winrt.UInt32
    device_id: str
    minimum_report_interval: _winrt.UInt32
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[BarometerDataThreshold]
    @staticmethod
    def _from(obj: _winrt.Object) -> Barometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Barometer]: ...
    def get_current_reading(self) -> typing.Optional[BarometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Barometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Barometer, BarometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class BarometerDataThreshold(_winrt.Object):
    hectopascals: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> BarometerDataThreshold: ...

class BarometerReading(_winrt.Object):
    station_pressure_in_hectopascals: _winrt.Double
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> BarometerReading: ...

class BarometerReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[BarometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> BarometerReadingChangedEventArgs: ...

class Compass(_winrt.Object):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[CompassDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Compass: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Compass]: ...
    def get_current_reading(self) -> typing.Optional[CompassReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Compass]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Compass, CompassReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CompassDataThreshold(_winrt.Object):
    degrees: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> CompassDataThreshold: ...

class CompassReading(_winrt.Object):
    heading_magnetic_north: _winrt.Double
    heading_true_north: typing.Optional[typing.Optional[_winrt.Double]]
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    heading_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: _winrt.Object) -> CompassReading: ...

class CompassReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[CompassReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> CompassReadingChangedEventArgs: ...

class Gyrometer(_winrt.Object):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[GyrometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Gyrometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Gyrometer]: ...
    def get_current_reading(self) -> typing.Optional[GyrometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Gyrometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Gyrometer, GyrometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GyrometerDataThreshold(_winrt.Object):
    z_axis_in_degrees_per_second: _winrt.Double
    y_axis_in_degrees_per_second: _winrt.Double
    x_axis_in_degrees_per_second: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> GyrometerDataThreshold: ...

class GyrometerReading(_winrt.Object):
    angular_velocity_x: _winrt.Double
    angular_velocity_y: _winrt.Double
    angular_velocity_z: _winrt.Double
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> GyrometerReading: ...

class GyrometerReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[GyrometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> GyrometerReadingChangedEventArgs: ...

class HingeAngleReading(_winrt.Object):
    angle_in_degrees: _winrt.Double
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> HingeAngleReading: ...

class HingeAngleSensor(_winrt.Object):
    report_threshold_in_degrees: _winrt.Double
    device_id: str
    min_report_threshold_in_degrees: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> HingeAngleSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[HingeAngleSensor]: ...
    def get_current_reading_async(self) -> winsdk.windows.foundation.IAsyncOperation[HingeAngleReading]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[HingeAngleSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @staticmethod
    def get_related_to_adjacent_panels_async(first_panel_id: str, second_panel_id: str) -> winsdk.windows.foundation.IAsyncOperation[HingeAngleSensor]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[HingeAngleSensor, HingeAngleSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HingeAngleSensorReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[HingeAngleReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> HingeAngleSensorReadingChangedEventArgs: ...

class HumanPresenceFeatures(_winrt.Object):
    is_attention_aware_dimming_supported: _winrt.Boolean
    is_lock_on_leave_supported: _winrt.Boolean
    is_wake_on_approach_supported: _winrt.Boolean
    sensor_id: str
    supported_wake_or_lock_distances_in_millimeters: typing.Optional[winsdk.windows.foundation.collections.IVectorView[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> HumanPresenceFeatures: ...

class HumanPresenceSensor(_winrt.Object):
    device_id: str
    max_detectable_distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    min_detectable_distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> HumanPresenceSensor: ...
    @staticmethod
    def from_id_async(sensor_id: str) -> winsdk.windows.foundation.IAsyncOperation[HumanPresenceSensor]: ...
    def get_current_reading(self) -> typing.Optional[HumanPresenceSensorReading]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[HumanPresenceSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[HumanPresenceSensor, HumanPresenceSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HumanPresenceSensorReading(_winrt.Object):
    distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    engagement: HumanEngagement
    presence: HumanPresence
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> HumanPresenceSensorReading: ...

class HumanPresenceSensorReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[HumanPresenceSensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> HumanPresenceSensorReadingChangedEventArgs: ...

class HumanPresenceSettings(_winrt.Object):
    wake_on_approach_distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    sensor_id: str
    lock_on_leave_timeout: datetime.timedelta
    lock_on_leave_distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    is_wake_on_approach_enabled: _winrt.Boolean
    is_lock_on_leave_enabled: _winrt.Boolean
    is_attention_aware_dimming_enabled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> HumanPresenceSettings: ...
    @staticmethod
    def get_current_settings() -> typing.Optional[HumanPresenceSettings]: ...
    @staticmethod
    def get_current_settings_async() -> winsdk.windows.foundation.IAsyncOperation[HumanPresenceSettings]: ...
    @staticmethod
    def get_supported_features_for_sensor_id(sensor_id: str) -> typing.Optional[HumanPresenceFeatures]: ...
    @staticmethod
    def get_supported_features_for_sensor_id_async(sensor_id: str) -> winsdk.windows.foundation.IAsyncOperation[HumanPresenceFeatures]: ...
    @staticmethod
    def get_supported_lock_on_leave_timeouts() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[datetime.timedelta]]: ...
    @staticmethod
    def update_settings(settings: typing.Optional[HumanPresenceSettings]) -> None: ...
    @staticmethod
    def update_settings_async(settings: typing.Optional[HumanPresenceSettings]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def add_settings_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_settings_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class Inclinometer(_winrt.Object):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    reading_type: SensorReadingType
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[InclinometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Inclinometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Inclinometer]: ...
    def get_current_reading(self) -> typing.Optional[InclinometerReading]: ...
    @typing.overload
    @staticmethod
    def get_default() -> typing.Optional[Inclinometer]: ...
    @typing.overload
    @staticmethod
    def get_default(sensor_readingtype: SensorReadingType) -> typing.Optional[Inclinometer]: ...
    @staticmethod
    def get_default_for_relative_readings() -> typing.Optional[Inclinometer]: ...
    @staticmethod
    def get_device_selector(reading_type: SensorReadingType) -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Inclinometer, InclinometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class InclinometerDataThreshold(_winrt.Object):
    yaw_in_degrees: _winrt.Single
    roll_in_degrees: _winrt.Single
    pitch_in_degrees: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> InclinometerDataThreshold: ...

class InclinometerReading(_winrt.Object):
    pitch_degrees: _winrt.Single
    roll_degrees: _winrt.Single
    timestamp: datetime.datetime
    yaw_degrees: _winrt.Single
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    yaw_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: _winrt.Object) -> InclinometerReading: ...

class InclinometerReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[InclinometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> InclinometerReadingChangedEventArgs: ...

class LightSensor(_winrt.Object):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[LightSensorDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> LightSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[LightSensor]: ...
    def get_current_reading(self) -> typing.Optional[LightSensorReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[LightSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[LightSensor, LightSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class LightSensorDataThreshold(_winrt.Object):
    lux_percentage: _winrt.Single
    absolute_lux: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> LightSensorDataThreshold: ...

class LightSensorReading(_winrt.Object):
    illuminance_in_lux: _winrt.Single
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> LightSensorReading: ...

class LightSensorReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[LightSensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> LightSensorReadingChangedEventArgs: ...

class Magnetometer(_winrt.Object):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[MagnetometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Magnetometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Magnetometer]: ...
    def get_current_reading(self) -> typing.Optional[MagnetometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Magnetometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Magnetometer, MagnetometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MagnetometerDataThreshold(_winrt.Object):
    z_axis_microteslas: _winrt.Single
    y_axis_microteslas: _winrt.Single
    x_axis_microteslas: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> MagnetometerDataThreshold: ...

class MagnetometerReading(_winrt.Object):
    directional_accuracy: MagnetometerAccuracy
    magnetic_field_x: _winrt.Single
    magnetic_field_y: _winrt.Single
    magnetic_field_z: _winrt.Single
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> MagnetometerReading: ...

class MagnetometerReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[MagnetometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> MagnetometerReadingChangedEventArgs: ...

class OrientationSensor(_winrt.Object):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    reading_type: SensorReadingType
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> OrientationSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[OrientationSensor]: ...
    def get_current_reading(self) -> typing.Optional[OrientationSensorReading]: ...
    @typing.overload
    @staticmethod
    def get_default() -> typing.Optional[OrientationSensor]: ...
    @typing.overload
    @staticmethod
    def get_default(sensor_readingtype: SensorReadingType) -> typing.Optional[OrientationSensor]: ...
    @typing.overload
    @staticmethod
    def get_default(sensor_reading_type: SensorReadingType, optimization_goal: SensorOptimizationGoal) -> typing.Optional[OrientationSensor]: ...
    @staticmethod
    def get_default_for_relative_readings() -> typing.Optional[OrientationSensor]: ...
    @typing.overload
    @staticmethod
    def get_device_selector(reading_type: SensorReadingType) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(reading_type: SensorReadingType, optimization_goal: SensorOptimizationGoal) -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[OrientationSensor, OrientationSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class OrientationSensorReading(_winrt.Object):
    quaternion: typing.Optional[SensorQuaternion]
    rotation_matrix: typing.Optional[SensorRotationMatrix]
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    yaw_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: _winrt.Object) -> OrientationSensorReading: ...

class OrientationSensorReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[OrientationSensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> OrientationSensorReadingChangedEventArgs: ...

class Pedometer(_winrt.Object):
    report_interval: _winrt.UInt32
    device_id: str
    minimum_report_interval: _winrt.UInt32
    power_in_milliwatts: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> Pedometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Pedometer]: ...
    def get_current_readings(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[PedometerStepKind, PedometerReading]]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[Pedometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @staticmethod
    def get_readings_from_trigger_details(trigger_details: typing.Optional[SensorDataThresholdTriggerDetails]) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[PedometerReading]]: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PedometerReading]]: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: datetime.datetime, duration: datetime.timedelta) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PedometerReading]]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Pedometer, PedometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PedometerDataThreshold(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PedometerDataThreshold: ...
    def __new__(cls: typing.Type[PedometerDataThreshold], sensor: typing.Optional[Pedometer], step_goal: _winrt.Int32) -> PedometerDataThreshold:...

class PedometerReading(_winrt.Object):
    cumulative_steps: _winrt.Int32
    cumulative_steps_duration: datetime.timedelta
    step_kind: PedometerStepKind
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> PedometerReading: ...

class PedometerReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[PedometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> PedometerReadingChangedEventArgs: ...

class ProximitySensor(_winrt.Object):
    device_id: str
    max_distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    min_distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensor: ...
    def create_display_on_off_controller(self) -> typing.Optional[ProximitySensorDisplayOnOffController]: ...
    @staticmethod
    def from_id(sensor_id: str) -> typing.Optional[ProximitySensor]: ...
    def get_current_reading(self) -> typing.Optional[ProximitySensorReading]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @staticmethod
    def get_readings_from_trigger_details(trigger_details: typing.Optional[SensorDataThresholdTriggerDetails]) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ProximitySensorReading]]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ProximitySensor, ProximitySensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ProximitySensorDataThreshold(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensorDataThreshold: ...
    def __new__(cls: typing.Type[ProximitySensorDataThreshold], sensor: typing.Optional[ProximitySensor]) -> ProximitySensorDataThreshold:...

class ProximitySensorDisplayOnOffController(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensorDisplayOnOffController: ...
    def close(self) -> None: ...

class ProximitySensorReading(_winrt.Object):
    distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    is_detected: _winrt.Boolean
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensorReading: ...

class ProximitySensorReadingChangedEventArgs(_winrt.Object):
    reading: typing.Optional[ProximitySensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensorReadingChangedEventArgs: ...

class SensorDataThresholdTriggerDetails(_winrt.Object):
    device_id: str
    sensor_type: SensorType
    @staticmethod
    def _from(obj: _winrt.Object) -> SensorDataThresholdTriggerDetails: ...

class SensorQuaternion(_winrt.Object):
    w: _winrt.Single
    x: _winrt.Single
    y: _winrt.Single
    z: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> SensorQuaternion: ...

class SensorRotationMatrix(_winrt.Object):
    m11: _winrt.Single
    m12: _winrt.Single
    m13: _winrt.Single
    m21: _winrt.Single
    m22: _winrt.Single
    m23: _winrt.Single
    m31: _winrt.Single
    m32: _winrt.Single
    m33: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> SensorRotationMatrix: ...

class SimpleOrientationSensor(_winrt.Object):
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> SimpleOrientationSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[SimpleOrientationSensor]: ...
    def get_current_orientation(self) -> SimpleOrientation: ...
    @staticmethod
    def get_default() -> typing.Optional[SimpleOrientationSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_orientation_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[SimpleOrientationSensor, SimpleOrientationSensorOrientationChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_orientation_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SimpleOrientationSensorOrientationChangedEventArgs(_winrt.Object):
    orientation: SimpleOrientation
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> SimpleOrientationSensorOrientationChangedEventArgs: ...

class ISensorDataThreshold(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ISensorDataThreshold: ...

