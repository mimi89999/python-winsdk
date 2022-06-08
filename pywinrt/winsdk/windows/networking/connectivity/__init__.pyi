# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.networking
import winsdk.windows.storage.streams

class CellularApnAuthenticationType(enum.IntEnum):
    NONE = 0
    PAP = 1
    CHAP = 2
    MSCHAPV2 = 3

class ConnectionProfileDeleteStatus(enum.IntEnum):
    SUCCESS = 0
    DENIED_BY_USER = 1
    DENIED_BY_SYSTEM = 2
    UNKNOWN_ERROR = 3

class DataUsageGranularity(enum.IntEnum):
    PER_MINUTE = 0
    PER_HOUR = 1
    PER_DAY = 2
    TOTAL = 3

class DomainConnectivityLevel(enum.IntEnum):
    NONE = 0
    UNAUTHENTICATED = 1
    AUTHENTICATED = 2

class NetworkAuthenticationType(enum.IntEnum):
    NONE = 0
    UNKNOWN = 1
    OPEN80211 = 2
    SHARED_KEY80211 = 3
    WPA = 4
    WPA_PSK = 5
    WPA_NONE = 6
    RSNA = 7
    RSNA_PSK = 8
    IHV = 9
    WPA3 = 10
    WPA3_ENTERPRISE192_BITS = 10
    WPA3_SAE = 11
    OWE = 12
    WPA3_ENTERPRISE = 13

class NetworkConnectivityLevel(enum.IntEnum):
    NONE = 0
    LOCAL_ACCESS = 1
    CONSTRAINED_INTERNET_ACCESS = 2
    INTERNET_ACCESS = 3

class NetworkCostType(enum.IntEnum):
    UNKNOWN = 0
    UNRESTRICTED = 1
    FIXED = 2
    VARIABLE = 3

class NetworkEncryptionType(enum.IntEnum):
    NONE = 0
    UNKNOWN = 1
    WEP = 2
    WEP40 = 3
    WEP104 = 4
    TKIP = 5
    CCMP = 6
    WPA_USE_GROUP = 7
    RSN_USE_GROUP = 8
    IHV = 9
    GCMP = 10
    GCMP256 = 11

class NetworkTypes(enum.IntFlag):
    NONE = 0
    INTERNET = 0x1
    PRIVATE_NETWORK = 0x2

class RoamingStates(enum.IntFlag):
    NONE = 0
    NOT_ROAMING = 0x1
    ROAMING = 0x2

class TriStates(enum.IntEnum):
    DO_NOT_CARE = 0
    NO = 1
    YES = 2

class WwanDataClass(enum.IntFlag):
    NONE = 0
    GPRS = 0x1
    EDGE = 0x2
    UMTS = 0x4
    HSDPA = 0x8
    HSUPA = 0x10
    LTE_ADVANCED = 0x20
    CDMA1X_RTT = 0x10000
    CDMA1X_EVDO = 0x20000
    CDMA1X_EVDO_REV_A = 0x40000
    CDMA1X_EVDV = 0x80000
    CDMA3X_RTT = 0x100000
    CDMA1X_EVDO_REV_B = 0x200000
    CDMA_UMB = 0x400000
    CUSTOM = 0x80000000

class WwanNetworkIPKind(enum.IntEnum):
    NONE = 0
    IPV4 = 1
    IPV6 = 2
    IPV4V6 = 3
    IPV4V6V4_XLAT = 4

class WwanNetworkRegistrationState(enum.IntEnum):
    NONE = 0
    DEREGISTERED = 1
    SEARCHING = 2
    HOME = 3
    ROAMING = 4
    PARTNER = 5
    DENIED = 6

Self = typing.TypeVar('Self')

class NetworkUsageStates:
    roaming: TriStates
    shared: TriStates
    def __init__(self, roaming: TriStates, shared: TriStates) -> None: ...

class AttributedNetworkUsage(_winrt.Object):
    attribution_id: str
    attribution_name: str
    attribution_thumbnail: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    bytes_received: _winrt.UInt64
    bytes_sent: _winrt.UInt64
    @staticmethod
    def _from(obj: _winrt.Object) -> AttributedNetworkUsage: ...

class CellularApnContext(_winrt.Object):
    user_name: str
    provider_id: str
    password: str
    is_compression_enabled: _winrt.Boolean
    authentication_type: CellularApnAuthenticationType
    access_point_name: str
    profile_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> CellularApnContext: ...
    def __init__(self) -> None: ...

class ConnectionCost(_winrt.Object):
    approaching_data_limit: _winrt.Boolean
    network_cost_type: NetworkCostType
    over_data_limit: _winrt.Boolean
    roaming: _winrt.Boolean
    background_data_usage_restricted: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ConnectionCost: ...

class ConnectionProfile(_winrt.Object):
    network_adapter: typing.Optional[NetworkAdapter]
    network_security_settings: typing.Optional[NetworkSecuritySettings]
    profile_name: str
    is_wlan_connection_profile: _winrt.Boolean
    is_wwan_connection_profile: _winrt.Boolean
    service_provider_guid: typing.Optional[typing.Optional[uuid.UUID]]
    wlan_connection_profile_details: typing.Optional[WlanConnectionProfileDetails]
    wwan_connection_profile_details: typing.Optional[WwanConnectionProfileDetails]
    can_delete: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ConnectionProfile: ...
    def get_attributed_network_usage_async(self, start_time: winsdk.windows.foundation.DateTime, end_time: winsdk.windows.foundation.DateTime, states: NetworkUsageStates) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[AttributedNetworkUsage]]: ...
    def get_connection_cost(self) -> typing.Optional[ConnectionCost]: ...
    def get_connectivity_intervals_async(self, start_time: winsdk.windows.foundation.DateTime, end_time: winsdk.windows.foundation.DateTime, states: NetworkUsageStates) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ConnectivityInterval]]: ...
    def get_data_plan_status(self) -> typing.Optional[DataPlanStatus]: ...
    def get_domain_connectivity_level(self) -> DomainConnectivityLevel: ...
    @typing.overload
    def get_local_usage(self, start_time: winsdk.windows.foundation.DateTime, end_time: winsdk.windows.foundation.DateTime) -> typing.Optional[DataUsage]: ...
    @typing.overload
    def get_local_usage(self, start_time: winsdk.windows.foundation.DateTime, end_time: winsdk.windows.foundation.DateTime, states: RoamingStates) -> typing.Optional[DataUsage]: ...
    def get_network_connectivity_level(self) -> NetworkConnectivityLevel: ...
    def get_network_names(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]: ...
    def get_network_usage_async(self, start_time: winsdk.windows.foundation.DateTime, end_time: winsdk.windows.foundation.DateTime, granularity: DataUsageGranularity, states: NetworkUsageStates) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[NetworkUsage]]: ...
    def get_provider_network_usage_async(self, start_time: winsdk.windows.foundation.DateTime, end_time: winsdk.windows.foundation.DateTime, states: NetworkUsageStates) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ProviderNetworkUsage]]: ...
    def get_signal_bars(self) -> typing.Optional[typing.Optional[_winrt.UInt8]]: ...
    def try_delete_async(self) -> winsdk.windows.foundation.IAsyncOperation[ConnectionProfileDeleteStatus]: ...

class ConnectionProfileFilter(_winrt.Object):
    service_provider_guid: typing.Optional[typing.Optional[uuid.UUID]]
    network_cost_type: NetworkCostType
    is_wwan_connection_profile: _winrt.Boolean
    is_wlan_connection_profile: _winrt.Boolean
    is_connected: _winrt.Boolean
    is_roaming: typing.Optional[typing.Optional[_winrt.Boolean]]
    is_over_data_limit: typing.Optional[typing.Optional[_winrt.Boolean]]
    is_background_data_usage_restricted: typing.Optional[typing.Optional[_winrt.Boolean]]
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    purpose_guid: typing.Optional[typing.Optional[uuid.UUID]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ConnectionProfileFilter: ...
    def __init__(self) -> None: ...

class ConnectionSession(_winrt.Object):
    connection_profile: typing.Optional[ConnectionProfile]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> ConnectionSession: ...
    def close(self) -> None: ...

class ConnectivityInterval(_winrt.Object):
    connection_duration: winsdk.windows.foundation.TimeSpan
    start_time: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> ConnectivityInterval: ...

class ConnectivityManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ConnectivityManager: ...
    @staticmethod
    def acquire_connection_async(cellular_apn_context: typing.Optional[CellularApnContext]) -> winsdk.windows.foundation.IAsyncOperation[ConnectionSession]: ...
    @staticmethod
    def add_http_route_policy(route_policy: typing.Optional[RoutePolicy]) -> None: ...
    @staticmethod
    def remove_http_route_policy(route_policy: typing.Optional[RoutePolicy]) -> None: ...

class DataPlanStatus(_winrt.Object):
    data_limit_in_megabytes: typing.Optional[typing.Optional[_winrt.UInt32]]
    data_plan_usage: typing.Optional[DataPlanUsage]
    inbound_bits_per_second: typing.Optional[typing.Optional[_winrt.UInt64]]
    max_transfer_size_in_megabytes: typing.Optional[typing.Optional[_winrt.UInt32]]
    next_billing_cycle: typing.Optional[typing.Optional[winsdk.windows.foundation.DateTime]]
    outbound_bits_per_second: typing.Optional[typing.Optional[_winrt.UInt64]]
    @staticmethod
    def _from(obj: _winrt.Object) -> DataPlanStatus: ...

class DataPlanUsage(_winrt.Object):
    last_sync_time: winsdk.windows.foundation.DateTime
    megabytes_used: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> DataPlanUsage: ...

class DataUsage(_winrt.Object):
    bytes_received: _winrt.UInt64
    bytes_sent: _winrt.UInt64
    @staticmethod
    def _from(obj: _winrt.Object) -> DataUsage: ...

class IPInformation(_winrt.Object):
    network_adapter: typing.Optional[NetworkAdapter]
    prefix_length: typing.Optional[typing.Optional[_winrt.UInt8]]
    @staticmethod
    def _from(obj: _winrt.Object) -> IPInformation: ...

class LanIdentifier(_winrt.Object):
    infrastructure_id: typing.Optional[LanIdentifierData]
    network_adapter_id: uuid.UUID
    port_id: typing.Optional[LanIdentifierData]
    @staticmethod
    def _from(obj: _winrt.Object) -> LanIdentifier: ...

class LanIdentifierData(_winrt.Object):
    type: _winrt.UInt32
    value: typing.Optional[winsdk.windows.foundation.collections.IVectorView[_winrt.UInt8]]
    @staticmethod
    def _from(obj: _winrt.Object) -> LanIdentifierData: ...

class NetworkAdapter(_winrt.Object):
    iana_interface_type: _winrt.UInt32
    inbound_max_bits_per_second: _winrt.UInt64
    network_adapter_id: uuid.UUID
    network_item: typing.Optional[NetworkItem]
    outbound_max_bits_per_second: _winrt.UInt64
    @staticmethod
    def _from(obj: _winrt.Object) -> NetworkAdapter: ...
    def get_connected_profile_async(self) -> winsdk.windows.foundation.IAsyncOperation[ConnectionProfile]: ...

class NetworkInformation(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> NetworkInformation: ...
    @staticmethod
    def find_connection_profiles_async(p_profile_filter: typing.Optional[ConnectionProfileFilter]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ConnectionProfile]]: ...
    @staticmethod
    def get_connection_profiles() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ConnectionProfile]]: ...
    @staticmethod
    def get_host_names() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.networking.HostName]]: ...
    @staticmethod
    def get_internet_connection_profile() -> typing.Optional[ConnectionProfile]: ...
    @staticmethod
    def get_lan_identifiers() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[LanIdentifier]]: ...
    @staticmethod
    def get_proxy_configuration_async(uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperation[ProxyConfiguration]: ...
    @staticmethod
    def get_sorted_endpoint_pairs(destination_list: typing.Iterable[winsdk.windows.networking.EndpointPair], sort_options: winsdk.windows.networking.HostNameSortOptions) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.networking.EndpointPair]]: ...
    @staticmethod
    def add_network_status_changed(network_status_handler: typing.Optional[NetworkStatusChangedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_network_status_changed(event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class NetworkItem(_winrt.Object):
    network_id: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> NetworkItem: ...
    def get_network_types(self) -> NetworkTypes: ...

class NetworkSecuritySettings(_winrt.Object):
    network_authentication_type: NetworkAuthenticationType
    network_encryption_type: NetworkEncryptionType
    @staticmethod
    def _from(obj: _winrt.Object) -> NetworkSecuritySettings: ...

class NetworkStateChangeEventDetails(_winrt.Object):
    has_new_connection_cost: _winrt.Boolean
    has_new_domain_connectivity_level: _winrt.Boolean
    has_new_host_name_list: _winrt.Boolean
    has_new_internet_connection_profile: _winrt.Boolean
    has_new_network_connectivity_level: _winrt.Boolean
    has_new_wwan_registration_state: _winrt.Boolean
    has_new_tethering_client_count: _winrt.Boolean
    has_new_tethering_operational_state: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> NetworkStateChangeEventDetails: ...

class NetworkUsage(_winrt.Object):
    bytes_received: _winrt.UInt64
    bytes_sent: _winrt.UInt64
    connection_duration: winsdk.windows.foundation.TimeSpan
    @staticmethod
    def _from(obj: _winrt.Object) -> NetworkUsage: ...

class ProviderNetworkUsage(_winrt.Object):
    bytes_received: _winrt.UInt64
    bytes_sent: _winrt.UInt64
    provider_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ProviderNetworkUsage: ...

class ProxyConfiguration(_winrt.Object):
    can_connect_directly: _winrt.Boolean
    proxy_uris: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.foundation.Uri]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProxyConfiguration: ...

class RoutePolicy(_winrt.Object):
    connection_profile: typing.Optional[ConnectionProfile]
    host_name: typing.Optional[winsdk.windows.networking.HostName]
    host_name_type: winsdk.windows.networking.DomainNameType
    @staticmethod
    def _from(obj: _winrt.Object) -> RoutePolicy: ...
    def __init__(self, connection_profile: typing.Optional[ConnectionProfile], host_name: typing.Optional[winsdk.windows.networking.HostName], type: winsdk.windows.networking.DomainNameType) -> None: ...

class WlanConnectionProfileDetails(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> WlanConnectionProfileDetails: ...
    def get_connected_ssid(self) -> str: ...

class WwanConnectionProfileDetails(_winrt.Object):
    access_point_name: str
    home_provider_id: str
    i_p_kind: WwanNetworkIPKind
    purpose_guids: typing.Optional[winsdk.windows.foundation.collections.IVectorView[uuid.UUID]]
    @staticmethod
    def _from(obj: _winrt.Object) -> WwanConnectionProfileDetails: ...
    def get_current_data_class(self) -> WwanDataClass: ...
    def get_network_registration_state(self) -> WwanNetworkRegistrationState: ...

NetworkStatusChangedEventHandler = typing.Callable[[typing.Optional[_winrt.Object]], None]

