# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.devices.bluetooth
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams

class GattCharacteristicProperties(enum.IntFlag):
    NONE = 0
    BROADCAST = 0x1
    READ = 0x2
    WRITE_WITHOUT_RESPONSE = 0x4
    WRITE = 0x8
    NOTIFY = 0x10
    INDICATE = 0x20
    AUTHENTICATED_SIGNED_WRITES = 0x40
    EXTENDED_PROPERTIES = 0x80
    RELIABLE_WRITES = 0x100
    WRITABLE_AUXILIARIES = 0x200

class GattClientCharacteristicConfigurationDescriptorValue(enum.IntEnum):
    NONE = 0
    NOTIFY = 1
    INDICATE = 2

class GattCommunicationStatus(enum.IntEnum):
    SUCCESS = 0
    UNREACHABLE = 1
    PROTOCOL_ERROR = 2
    ACCESS_DENIED = 3

class GattOpenStatus(enum.IntEnum):
    UNSPECIFIED = 0
    SUCCESS = 1
    ALREADY_OPENED = 2
    NOT_FOUND = 3
    SHARING_VIOLATION = 4
    ACCESS_DENIED = 5

class GattProtectionLevel(enum.IntEnum):
    PLAIN = 0
    AUTHENTICATION_REQUIRED = 1
    ENCRYPTION_REQUIRED = 2
    ENCRYPTION_AND_AUTHENTICATION_REQUIRED = 3

class GattRequestState(enum.IntEnum):
    PENDING = 0
    COMPLETED = 1
    CANCELED = 2

class GattServiceProviderAdvertisementStatus(enum.IntEnum):
    CREATED = 0
    STOPPED = 1
    STARTED = 2
    ABORTED = 3
    STARTED_WITHOUT_ALL_ADVERTISEMENT_DATA = 4

class GattSessionStatus(enum.IntEnum):
    CLOSED = 0
    ACTIVE = 1

class GattSharingMode(enum.IntEnum):
    UNSPECIFIED = 0
    EXCLUSIVE = 1
    SHARED_READ_ONLY = 2
    SHARED_READ_AND_WRITE = 3

class GattWriteOption(enum.IntEnum):
    WRITE_WITH_RESPONSE = 0
    WRITE_WITHOUT_RESPONSE = 1

Self = typing.TypeVar('Self')

class GattCharacteristic(_winrt.Object):
    protection_level: GattProtectionLevel
    attribute_handle: _winrt.UInt16
    characteristic_properties: GattCharacteristicProperties
    presentation_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattPresentationFormat]]
    user_description: str
    uuid: _winrt.Guid
    service: typing.Optional[GattDeviceService]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattCharacteristic: ...
    @staticmethod
    def convert_short_id_to_uuid(short_id: _winrt.UInt16) -> _winrt.Guid: ...
    def get_all_descriptors(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDescriptor]]: ...
    def get_descriptors(self, descriptor_uuid: _winrt.Guid) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDescriptor]]: ...
    @typing.overload
    def get_descriptors_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattDescriptorsResult]: ...
    @typing.overload
    def get_descriptors_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> winsdk.windows.foundation.IAsyncOperation[GattDescriptorsResult]: ...
    @typing.overload
    def get_descriptors_for_uuid_async(self, descriptor_uuid: _winrt.Guid) -> winsdk.windows.foundation.IAsyncOperation[GattDescriptorsResult]: ...
    @typing.overload
    def get_descriptors_for_uuid_async(self, descriptor_uuid: _winrt.Guid, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> winsdk.windows.foundation.IAsyncOperation[GattDescriptorsResult]: ...
    def read_client_characteristic_configuration_descriptor_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattReadClientCharacteristicConfigurationDescriptorResult]: ...
    @typing.overload
    def read_value_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattReadResult]: ...
    @typing.overload
    def read_value_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> winsdk.windows.foundation.IAsyncOperation[GattReadResult]: ...
    def write_client_characteristic_configuration_descriptor_async(self, client_characteristic_configuration_descriptor_value: GattClientCharacteristicConfigurationDescriptorValue) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    def write_client_characteristic_configuration_descriptor_with_result_async(self, client_characteristic_configuration_descriptor_value: GattClientCharacteristicConfigurationDescriptorValue) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...
    @typing.overload
    def write_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    @typing.overload
    def write_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], write_option: GattWriteOption) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    @typing.overload
    def write_value_with_result_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...
    @typing.overload
    def write_value_with_result_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], write_option: GattWriteOption) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...
    def add_value_changed(self, value_changed_handler: winsdk.windows.foundation.TypedEventHandler[GattCharacteristic, GattValueChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_value_changed(self, value_changed_event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GattCharacteristicUuids(_winrt.Object):
    heart_rate_measurement: _winrt.Guid
    battery_level: _winrt.Guid
    blood_pressure_feature: _winrt.Guid
    blood_pressure_measurement: _winrt.Guid
    body_sensor_location: _winrt.Guid
    csc_feature: _winrt.Guid
    csc_measurement: _winrt.Guid
    glucose_feature: _winrt.Guid
    glucose_measurement: _winrt.Guid
    glucose_measurement_context: _winrt.Guid
    heart_rate_control_point: _winrt.Guid
    intermediate_cuff_pressure: _winrt.Guid
    intermediate_temperature: _winrt.Guid
    measurement_interval: _winrt.Guid
    record_access_control_point: _winrt.Guid
    rsc_feature: _winrt.Guid
    rsc_measurement: _winrt.Guid
    s_c_control_point: _winrt.Guid
    sensor_location: _winrt.Guid
    temperature_measurement: _winrt.Guid
    temperature_type: _winrt.Guid
    gap_peripheral_preferred_connection_parameters: _winrt.Guid
    gap_peripheral_privacy_flag: _winrt.Guid
    gap_reconnection_address: _winrt.Guid
    gatt_service_changed: _winrt.Guid
    hardware_revision_string: _winrt.Guid
    hid_control_point: _winrt.Guid
    hid_information: _winrt.Guid
    ieee1107320601_regulatory_certification_data_list: _winrt.Guid
    ln_control_point: _winrt.Guid
    ln_feature: _winrt.Guid
    local_time_information: _winrt.Guid
    location_and_speed: _winrt.Guid
    manufacturer_name_string: _winrt.Guid
    model_number_string: _winrt.Guid
    navigation: _winrt.Guid
    new_alert: _winrt.Guid
    pnp_id: _winrt.Guid
    position_quality: _winrt.Guid
    protocol_mode: _winrt.Guid
    cycling_power_feature: _winrt.Guid
    report: _winrt.Guid
    report_map: _winrt.Guid
    ringer_control_point: _winrt.Guid
    ringer_setting: _winrt.Guid
    scan_interval_window: _winrt.Guid
    scan_refresh: _winrt.Guid
    serial_number_string: _winrt.Guid
    software_revision_string: _winrt.Guid
    support_unread_alert_category: _winrt.Guid
    supported_new_alert_category: _winrt.Guid
    system_id: _winrt.Guid
    time_accuracy: _winrt.Guid
    time_source: _winrt.Guid
    time_update_control_point: _winrt.Guid
    time_update_state: _winrt.Guid
    time_with_dst: _winrt.Guid
    time_zone: _winrt.Guid
    tx_power_level: _winrt.Guid
    unread_alert_status: _winrt.Guid
    alert_category_id: _winrt.Guid
    alert_category_id_bit_mask: _winrt.Guid
    alert_level: _winrt.Guid
    alert_notification_control_point: _winrt.Guid
    alert_status: _winrt.Guid
    boot_keyboard_input_report: _winrt.Guid
    boot_keyboard_output_report: _winrt.Guid
    boot_mouse_input_report: _winrt.Guid
    current_time: _winrt.Guid
    cycling_power_control_point: _winrt.Guid
    reference_time_information: _winrt.Guid
    cycling_power_measurement: _winrt.Guid
    cycling_power_vector: _winrt.Guid
    date_time: _winrt.Guid
    day_date_time: _winrt.Guid
    day_of_week: _winrt.Guid
    dst_offset: _winrt.Guid
    exact_time256: _winrt.Guid
    firmware_revision_string: _winrt.Guid
    gap_appearance: _winrt.Guid
    gap_device_name: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> GattCharacteristicUuids: ...

class GattCharacteristicsResult(_winrt.Object):
    characteristics: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattCharacteristic]]
    protocol_error: typing.Optional[typing.Optional[_winrt.UInt8]]
    status: GattCommunicationStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> GattCharacteristicsResult: ...

class GattClientNotificationResult(_winrt.Object):
    protocol_error: typing.Optional[typing.Optional[_winrt.UInt8]]
    status: GattCommunicationStatus
    subscribed_client: typing.Optional[GattSubscribedClient]
    bytes_sent: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> GattClientNotificationResult: ...

class GattDescriptor(_winrt.Object):
    protection_level: GattProtectionLevel
    attribute_handle: _winrt.UInt16
    uuid: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> GattDescriptor: ...
    @staticmethod
    def convert_short_id_to_uuid(short_id: _winrt.UInt16) -> _winrt.Guid: ...
    @typing.overload
    def read_value_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattReadResult]: ...
    @typing.overload
    def read_value_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> winsdk.windows.foundation.IAsyncOperation[GattReadResult]: ...
    def write_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    def write_value_with_result_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...

class GattDescriptorUuids(_winrt.Object):
    characteristic_aggregate_format: _winrt.Guid
    characteristic_extended_properties: _winrt.Guid
    characteristic_presentation_format: _winrt.Guid
    characteristic_user_description: _winrt.Guid
    client_characteristic_configuration: _winrt.Guid
    server_characteristic_configuration: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> GattDescriptorUuids: ...

class GattDescriptorsResult(_winrt.Object):
    descriptors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDescriptor]]
    protocol_error: typing.Optional[typing.Optional[_winrt.UInt8]]
    status: GattCommunicationStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> GattDescriptorsResult: ...

class GattDeviceService(_winrt.Object):
    attribute_handle: _winrt.UInt16
    device_id: str
    uuid: _winrt.Guid
    device: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothLEDevice]
    parent_services: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDeviceService]]
    device_access_information: typing.Optional[winsdk.windows.devices.enumeration.DeviceAccessInformation]
    session: typing.Optional[GattSession]
    sharing_mode: GattSharingMode
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> GattDeviceService: ...
    def close(self) -> None: ...
    @staticmethod
    def convert_short_id_to_uuid(short_id: _winrt.UInt16) -> _winrt.Guid: ...
    @typing.overload
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceService]: ...
    @typing.overload
    @staticmethod
    def from_id_async(device_id: str, sharing_mode: GattSharingMode) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceService]: ...
    def get_all_characteristics(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattCharacteristic]]: ...
    def get_all_included_services(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDeviceService]]: ...
    def get_characteristics(self, characteristic_uuid: _winrt.Guid) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattCharacteristic]]: ...
    @typing.overload
    def get_characteristics_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattCharacteristicsResult]: ...
    @typing.overload
    def get_characteristics_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> winsdk.windows.foundation.IAsyncOperation[GattCharacteristicsResult]: ...
    @typing.overload
    def get_characteristics_for_uuid_async(self, characteristic_uuid: _winrt.Guid) -> winsdk.windows.foundation.IAsyncOperation[GattCharacteristicsResult]: ...
    @typing.overload
    def get_characteristics_for_uuid_async(self, characteristic_uuid: _winrt.Guid, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> winsdk.windows.foundation.IAsyncOperation[GattCharacteristicsResult]: ...
    @typing.overload
    @staticmethod
    def get_device_selector_for_bluetooth_device_id(bluetooth_device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId]) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector_for_bluetooth_device_id(bluetooth_device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId], cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector_for_bluetooth_device_id_and_uuid(bluetooth_device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId], service_uuid: _winrt.Guid) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector_for_bluetooth_device_id_and_uuid(bluetooth_device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId], service_uuid: _winrt.Guid, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> str: ...
    @staticmethod
    def get_device_selector_from_short_id(service_short_id: _winrt.UInt16) -> str: ...
    @staticmethod
    def get_device_selector_from_uuid(service_uuid: _winrt.Guid) -> str: ...
    def get_included_services(self, service_uuid: _winrt.Guid) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDeviceService]]: ...
    @typing.overload
    def get_included_services_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceServicesResult]: ...
    @typing.overload
    def get_included_services_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceServicesResult]: ...
    @typing.overload
    def get_included_services_for_uuid_async(self, service_uuid: _winrt.Guid) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceServicesResult]: ...
    @typing.overload
    def get_included_services_for_uuid_async(self, service_uuid: _winrt.Guid, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceServicesResult]: ...
    def open_async(self, sharing_mode: GattSharingMode) -> winsdk.windows.foundation.IAsyncOperation[GattOpenStatus]: ...
    def request_access_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.devices.enumeration.DeviceAccessStatus]: ...

class GattDeviceServicesResult(_winrt.Object):
    protocol_error: typing.Optional[typing.Optional[_winrt.UInt8]]
    services: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDeviceService]]
    status: GattCommunicationStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> GattDeviceServicesResult: ...

class GattLocalCharacteristic(_winrt.Object):
    characteristic_properties: GattCharacteristicProperties
    descriptors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattLocalDescriptor]]
    presentation_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattPresentationFormat]]
    read_protection_level: GattProtectionLevel
    static_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    subscribed_clients: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattSubscribedClient]]
    user_description: str
    uuid: _winrt.Guid
    write_protection_level: GattProtectionLevel
    @staticmethod
    def _from(obj: _winrt.Object) -> GattLocalCharacteristic: ...
    def create_descriptor_async(self, descriptor_uuid: _winrt.Guid, parameters: typing.Optional[GattLocalDescriptorParameters]) -> winsdk.windows.foundation.IAsyncOperation[GattLocalDescriptorResult]: ...
    @typing.overload
    def notify_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[GattClientNotificationResult]]: ...
    @typing.overload
    def notify_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], subscribed_client: typing.Optional[GattSubscribedClient]) -> winsdk.windows.foundation.IAsyncOperation[GattClientNotificationResult]: ...
    def add_read_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalCharacteristic, GattReadRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_read_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_subscribed_clients_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalCharacteristic, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_subscribed_clients_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_write_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalCharacteristic, GattWriteRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_write_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GattLocalCharacteristicParameters(_winrt.Object):
    write_protection_level: GattProtectionLevel
    user_description: str
    static_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    read_protection_level: GattProtectionLevel
    characteristic_properties: GattCharacteristicProperties
    presentation_formats: typing.Optional[winsdk.windows.foundation.collections.IVector[GattPresentationFormat]]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattLocalCharacteristicParameters: ...
    def __new__(cls: typing.Type[GattLocalCharacteristicParameters]) -> GattLocalCharacteristicParameters:...

class GattLocalCharacteristicResult(_winrt.Object):
    characteristic: typing.Optional[GattLocalCharacteristic]
    error: winsdk.windows.devices.bluetooth.BluetoothError
    @staticmethod
    def _from(obj: _winrt.Object) -> GattLocalCharacteristicResult: ...

class GattLocalDescriptor(_winrt.Object):
    read_protection_level: GattProtectionLevel
    static_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    uuid: _winrt.Guid
    write_protection_level: GattProtectionLevel
    @staticmethod
    def _from(obj: _winrt.Object) -> GattLocalDescriptor: ...
    def add_read_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalDescriptor, GattReadRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_read_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_write_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalDescriptor, GattWriteRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_write_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GattLocalDescriptorParameters(_winrt.Object):
    write_protection_level: GattProtectionLevel
    static_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    read_protection_level: GattProtectionLevel
    @staticmethod
    def _from(obj: _winrt.Object) -> GattLocalDescriptorParameters: ...
    def __new__(cls: typing.Type[GattLocalDescriptorParameters]) -> GattLocalDescriptorParameters:...

class GattLocalDescriptorResult(_winrt.Object):
    descriptor: typing.Optional[GattLocalDescriptor]
    error: winsdk.windows.devices.bluetooth.BluetoothError
    @staticmethod
    def _from(obj: _winrt.Object) -> GattLocalDescriptorResult: ...

class GattLocalService(_winrt.Object):
    characteristics: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattLocalCharacteristic]]
    uuid: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> GattLocalService: ...
    def create_characteristic_async(self, characteristic_uuid: _winrt.Guid, parameters: typing.Optional[GattLocalCharacteristicParameters]) -> winsdk.windows.foundation.IAsyncOperation[GattLocalCharacteristicResult]: ...

class GattPresentationFormat(_winrt.Object):
    description: _winrt.UInt16
    exponent: _winrt.Int32
    format_type: _winrt.UInt8
    namespace: _winrt.UInt8
    unit: _winrt.UInt16
    bluetooth_sig_assigned_numbers: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> GattPresentationFormat: ...
    @staticmethod
    def from_parts(format_type: _winrt.UInt8, exponent: _winrt.Int32, unit: _winrt.UInt16, namespace_id: _winrt.UInt8, description: _winrt.UInt16) -> typing.Optional[GattPresentationFormat]: ...

class GattPresentationFormatTypes(_winrt.Object):
    bit2: _winrt.UInt8
    boolean: _winrt.UInt8
    d_uint16: _winrt.UInt8
    float: _winrt.UInt8
    float32: _winrt.UInt8
    float64: _winrt.UInt8
    nibble: _winrt.UInt8
    s_float: _winrt.UInt8
    s_int12: _winrt.UInt8
    s_int128: _winrt.UInt8
    s_int16: _winrt.UInt8
    s_int24: _winrt.UInt8
    s_int32: _winrt.UInt8
    s_int48: _winrt.UInt8
    s_int64: _winrt.UInt8
    s_int8: _winrt.UInt8
    struct: _winrt.UInt8
    uint12: _winrt.UInt8
    uint128: _winrt.UInt8
    uint16: _winrt.UInt8
    uint24: _winrt.UInt8
    uint32: _winrt.UInt8
    uint48: _winrt.UInt8
    uint64: _winrt.UInt8
    uint8: _winrt.UInt8
    utf16: _winrt.UInt8
    utf8: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> GattPresentationFormatTypes: ...

class GattProtocolError(_winrt.Object):
    attribute_not_found: _winrt.UInt8
    attribute_not_long: _winrt.UInt8
    insufficient_authentication: _winrt.UInt8
    insufficient_authorization: _winrt.UInt8
    insufficient_encryption: _winrt.UInt8
    insufficient_encryption_key_size: _winrt.UInt8
    insufficient_resources: _winrt.UInt8
    invalid_attribute_value_length: _winrt.UInt8
    invalid_handle: _winrt.UInt8
    invalid_offset: _winrt.UInt8
    invalid_pdu: _winrt.UInt8
    prepare_queue_full: _winrt.UInt8
    read_not_permitted: _winrt.UInt8
    request_not_supported: _winrt.UInt8
    unlikely_error: _winrt.UInt8
    unsupported_group_type: _winrt.UInt8
    write_not_permitted: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> GattProtocolError: ...

class GattReadClientCharacteristicConfigurationDescriptorResult(_winrt.Object):
    client_characteristic_configuration_descriptor: GattClientCharacteristicConfigurationDescriptorValue
    status: GattCommunicationStatus
    protocol_error: typing.Optional[typing.Optional[_winrt.UInt8]]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattReadClientCharacteristicConfigurationDescriptorResult: ...

class GattReadRequest(_winrt.Object):
    length: _winrt.UInt32
    offset: _winrt.UInt32
    state: GattRequestState
    @staticmethod
    def _from(obj: _winrt.Object) -> GattReadRequest: ...
    def respond_with_protocol_error(self, protocol_error: _winrt.UInt8) -> None: ...
    def respond_with_value(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattReadRequest, GattRequestStateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GattReadRequestedEventArgs(_winrt.Object):
    session: typing.Optional[GattSession]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattReadRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def get_request_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattReadRequest]: ...

class GattReadResult(_winrt.Object):
    status: GattCommunicationStatus
    value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    protocol_error: typing.Optional[typing.Optional[_winrt.UInt8]]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattReadResult: ...

class GattReliableWriteTransaction(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> GattReliableWriteTransaction: ...
    def __new__(cls: typing.Type[GattReliableWriteTransaction]) -> GattReliableWriteTransaction:...
    def commit_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    def commit_with_result_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...
    def write_value(self, characteristic: typing.Optional[GattCharacteristic], value: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...

class GattRequestStateChangedEventArgs(_winrt.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    state: GattRequestState
    @staticmethod
    def _from(obj: _winrt.Object) -> GattRequestStateChangedEventArgs: ...

class GattServiceProvider(_winrt.Object):
    advertisement_status: GattServiceProviderAdvertisementStatus
    service: typing.Optional[GattLocalService]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattServiceProvider: ...
    @staticmethod
    def create_async(service_uuid: _winrt.Guid) -> winsdk.windows.foundation.IAsyncOperation[GattServiceProviderResult]: ...
    @typing.overload
    def start_advertising(self) -> None: ...
    @typing.overload
    def start_advertising(self, parameters: typing.Optional[GattServiceProviderAdvertisingParameters]) -> None: ...
    def stop_advertising(self) -> None: ...
    def add_advertisement_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattServiceProvider, GattServiceProviderAdvertisementStatusChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_advertisement_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GattServiceProviderAdvertisementStatusChangedEventArgs(_winrt.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    status: GattServiceProviderAdvertisementStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> GattServiceProviderAdvertisementStatusChangedEventArgs: ...

class GattServiceProviderAdvertisingParameters(_winrt.Object):
    is_discoverable: _winrt.Boolean
    is_connectable: _winrt.Boolean
    service_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattServiceProviderAdvertisingParameters: ...
    def __new__(cls: typing.Type[GattServiceProviderAdvertisingParameters]) -> GattServiceProviderAdvertisingParameters:...

class GattServiceProviderResult(_winrt.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    service_provider: typing.Optional[GattServiceProvider]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattServiceProviderResult: ...

class GattServiceUuids(_winrt.Object):
    battery: _winrt.Guid
    blood_pressure: _winrt.Guid
    cycling_speed_and_cadence: _winrt.Guid
    generic_access: _winrt.Guid
    generic_attribute: _winrt.Guid
    glucose: _winrt.Guid
    health_thermometer: _winrt.Guid
    heart_rate: _winrt.Guid
    running_speed_and_cadence: _winrt.Guid
    alert_notification: _winrt.Guid
    current_time: _winrt.Guid
    cycling_power: _winrt.Guid
    device_information: _winrt.Guid
    human_interface_device: _winrt.Guid
    immediate_alert: _winrt.Guid
    link_loss: _winrt.Guid
    location_and_navigation: _winrt.Guid
    next_dst_change: _winrt.Guid
    phone_alert_status: _winrt.Guid
    reference_time_update: _winrt.Guid
    scan_parameters: _winrt.Guid
    tx_power: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> GattServiceUuids: ...

class GattSession(_winrt.Object):
    maintain_connection: _winrt.Boolean
    can_maintain_connection: _winrt.Boolean
    device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId]
    max_pdu_size: _winrt.UInt16
    session_status: GattSessionStatus
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> GattSession: ...
    def close(self) -> None: ...
    @staticmethod
    def from_device_id_async(device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId]) -> winsdk.windows.foundation.IAsyncOperation[GattSession]: ...
    def add_max_pdu_size_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattSession, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_max_pdu_size_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_session_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattSession, GattSessionStatusChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_session_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GattSessionStatusChangedEventArgs(_winrt.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    status: GattSessionStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> GattSessionStatusChangedEventArgs: ...

class GattSubscribedClient(_winrt.Object):
    max_notification_size: _winrt.UInt16
    session: typing.Optional[GattSession]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattSubscribedClient: ...
    def add_max_notification_size_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattSubscribedClient, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_max_notification_size_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GattValueChangedEventArgs(_winrt.Object):
    characteristic_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: _winrt.Object) -> GattValueChangedEventArgs: ...

class GattWriteRequest(_winrt.Object):
    offset: _winrt.UInt32
    option: GattWriteOption
    state: GattRequestState
    value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattWriteRequest: ...
    def respond(self) -> None: ...
    def respond_with_protocol_error(self, protocol_error: _winrt.UInt8) -> None: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattWriteRequest, GattRequestStateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GattWriteRequestedEventArgs(_winrt.Object):
    session: typing.Optional[GattSession]
    @staticmethod
    def _from(obj: _winrt.Object) -> GattWriteRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def get_request_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattWriteRequest]: ...

class GattWriteResult(_winrt.Object):
    protocol_error: typing.Optional[typing.Optional[_winrt.UInt8]]
    status: GattCommunicationStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> GattWriteResult: ...

