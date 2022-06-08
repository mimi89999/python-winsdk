# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.networking.connectivity
import winsdk.windows.security.credentials

class WiFiAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED = 1
    DENIED_BY_USER = 2
    DENIED_BY_SYSTEM = 3

class WiFiConnectionMethod(enum.IntEnum):
    DEFAULT = 0
    WPS_PIN = 1
    WPS_PUSH_BUTTON = 2

class WiFiConnectionStatus(enum.IntEnum):
    UNSPECIFIED_FAILURE = 0
    SUCCESS = 1
    ACCESS_REVOKED = 2
    INVALID_CREDENTIAL = 3
    NETWORK_NOT_AVAILABLE = 4
    TIMEOUT = 5
    UNSUPPORTED_AUTHENTICATION_PROTOCOL = 6

class WiFiNetworkKind(enum.IntEnum):
    ANY = 0
    INFRASTRUCTURE = 1
    ADHOC = 2

class WiFiPhyKind(enum.IntEnum):
    UNKNOWN = 0
    FHSS = 1
    DSSS = 2
    I_R_BASEBAND = 3
    OFDM = 4
    HRDSSS = 5
    ERP = 6
    H_T = 7
    VHT = 8
    DMG = 9
    H_E = 10

class WiFiReconnectionKind(enum.IntEnum):
    AUTOMATIC = 0
    MANUAL = 1

class WiFiWpsConfigurationStatus(enum.IntEnum):
    UNSPECIFIED_FAILURE = 0
    SUCCESS = 1
    TIMEOUT = 2

class WiFiWpsKind(enum.IntEnum):
    UNKNOWN = 0
    PIN = 1
    PUSH_BUTTON = 2
    NFC = 3
    ETHERNET = 4
    USB = 5

Self = typing.TypeVar('Self')

class WiFiAdapter(_winrt.Object):
    network_adapter: typing.Optional[winsdk.windows.networking.connectivity.NetworkAdapter]
    network_report: typing.Optional[WiFiNetworkReport]
    @staticmethod
    def _from(obj: _winrt.Object) -> WiFiAdapter: ...
    @typing.overload
    def connect_async(self, available_network: typing.Optional[WiFiAvailableNetwork], reconnection_kind: WiFiReconnectionKind) -> winsdk.windows.foundation.IAsyncOperation[WiFiConnectionResult]: ...
    @typing.overload
    def connect_async(self, available_network: typing.Optional[WiFiAvailableNetwork], reconnection_kind: WiFiReconnectionKind, password_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]) -> winsdk.windows.foundation.IAsyncOperation[WiFiConnectionResult]: ...
    @typing.overload
    def connect_async(self, available_network: typing.Optional[WiFiAvailableNetwork], reconnection_kind: WiFiReconnectionKind, password_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential], ssid: str) -> winsdk.windows.foundation.IAsyncOperation[WiFiConnectionResult]: ...
    @typing.overload
    def connect_async(self, available_network: typing.Optional[WiFiAvailableNetwork], reconnection_kind: WiFiReconnectionKind, password_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential], ssid: str, connection_method: WiFiConnectionMethod) -> winsdk.windows.foundation.IAsyncOperation[WiFiConnectionResult]: ...
    def disconnect(self) -> None: ...
    @staticmethod
    def find_all_adapters_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[WiFiAdapter]]: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[WiFiAdapter]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def get_wps_configuration_async(self, available_network: typing.Optional[WiFiAvailableNetwork]) -> winsdk.windows.foundation.IAsyncOperation[WiFiWpsConfigurationResult]: ...
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[WiFiAccessStatus]: ...
    def scan_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def add_available_networks_changed(self, args: winsdk.windows.foundation.TypedEventHandler[WiFiAdapter, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_available_networks_changed(self, event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WiFiAvailableNetwork(_winrt.Object):
    beacon_interval: winsdk.windows.foundation.TimeSpan
    bssid: str
    channel_center_frequency_in_kilohertz: _winrt.Int32
    is_wi_fi_direct: _winrt.Boolean
    network_kind: WiFiNetworkKind
    network_rssi_in_decibel_milliwatts: _winrt.Double
    phy_kind: WiFiPhyKind
    security_settings: typing.Optional[winsdk.windows.networking.connectivity.NetworkSecuritySettings]
    signal_bars: _winrt.UInt8
    ssid: str
    uptime: winsdk.windows.foundation.TimeSpan
    @staticmethod
    def _from(obj: _winrt.Object) -> WiFiAvailableNetwork: ...

class WiFiConnectionResult(_winrt.Object):
    connection_status: WiFiConnectionStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> WiFiConnectionResult: ...

class WiFiNetworkReport(_winrt.Object):
    available_networks: typing.Optional[winsdk.windows.foundation.collections.IVectorView[WiFiAvailableNetwork]]
    timestamp: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> WiFiNetworkReport: ...

class WiFiWpsConfigurationResult(_winrt.Object):
    status: WiFiWpsConfigurationStatus
    supported_wps_kinds: typing.Optional[winsdk.windows.foundation.collections.IVectorView[WiFiWpsKind]]
    @staticmethod
    def _from(obj: _winrt.Object) -> WiFiWpsConfigurationResult: ...

