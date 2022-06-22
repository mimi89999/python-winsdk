# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.globalization
import winsdk.windows.networking.sockets
import winsdk.windows.security.credentials
import winsdk.windows.security.cryptography.certificates

class AllJoynAuthenticationMechanism(enum.IntEnum):
    NONE = 0
    SRP_ANONYMOUS = 1
    SRP_LOGON = 2
    ECDHE_NULL = 3
    ECDHE_PSK = 4
    ECDHE_ECDSA = 5
    ECDHE_SPEKE = 6

class AllJoynBusAttachmentState(enum.IntEnum):
    DISCONNECTED = 0
    CONNECTING = 1
    CONNECTED = 2
    DISCONNECTING = 3

class AllJoynSessionLostReason(enum.IntEnum):
    NONE = 0
    PRODUCER_LEFT_SESSION = 1
    PRODUCER_CLOSED_ABRUPTLY = 2
    REMOVED_BY_PRODUCER = 3
    LINK_TIMEOUT = 4
    OTHER = 5

class AllJoynTrafficType(enum.IntEnum):
    UNKNOWN = 0
    MESSAGES = 1
    RAW_UNRELIABLE = 2
    RAW_RELIABLE = 4

Self = typing.TypeVar('Self')

class AllJoynAboutData(_winrt.Object):
    default_description: str
    default_app_name: str
    date_of_manufacture: typing.Optional[typing.Optional[datetime.datetime]]
    default_manufacturer: str
    app_id: _winrt.Guid
    support_url: typing.Optional[winsdk.windows.foundation.Uri]
    software_version: str
    model_number: str
    is_enabled: _winrt.Boolean
    app_names: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    manufacturers: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    descriptions: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynAboutData: ...

class AllJoynAboutDataView(_winrt.Object):
    a_j_software_version: str
    app_id: _winrt.Guid
    app_name: str
    date_of_manufacture: typing.Optional[typing.Optional[datetime.datetime]]
    default_language: typing.Optional[winsdk.windows.globalization.Language]
    description: str
    device_id: str
    device_name: str
    hardware_version: str
    manufacturer: str
    model_number: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    software_version: str
    status: _winrt.Int32
    support_url: typing.Optional[winsdk.windows.foundation.Uri]
    supported_languages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.globalization.Language]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynAboutDataView: ...
    @typing.overload
    @staticmethod
    def get_data_by_session_port_async(unique_name: str, bus_attachment: typing.Optional[AllJoynBusAttachment], session_port: _winrt.UInt16) -> winsdk.windows.foundation.IAsyncOperation[AllJoynAboutDataView]: ...
    @typing.overload
    @staticmethod
    def get_data_by_session_port_async(unique_name: str, bus_attachment: typing.Optional[AllJoynBusAttachment], session_port: _winrt.UInt16, language: typing.Optional[winsdk.windows.globalization.Language]) -> winsdk.windows.foundation.IAsyncOperation[AllJoynAboutDataView]: ...

class AllJoynAcceptSessionJoinerEventArgs(_winrt.Object):
    same_network: _winrt.Boolean
    same_physical_node: _winrt.Boolean
    session_port: _winrt.UInt16
    traffic_type: AllJoynTrafficType
    unique_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynAcceptSessionJoinerEventArgs: ...
    def __new__(cls: typing.Type[AllJoynAcceptSessionJoinerEventArgs], unique_name: str, session_port: _winrt.UInt16, traffic_type: AllJoynTrafficType, proximity: _winrt.UInt8, accept_session_joiner: typing.Optional[IAllJoynAcceptSessionJoiner]) -> AllJoynAcceptSessionJoinerEventArgs:...
    def accept(self) -> None: ...

class AllJoynAuthenticationCompleteEventArgs(_winrt.Object):
    authentication_mechanism: AllJoynAuthenticationMechanism
    peer_unique_name: str
    succeeded: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynAuthenticationCompleteEventArgs: ...

class AllJoynBusAttachment(_winrt.Object):
    about_data: typing.Optional[AllJoynAboutData]
    authentication_mechanisms: typing.Optional[winsdk.windows.foundation.collections.IVector[AllJoynAuthenticationMechanism]]
    connection_specification: str
    state: AllJoynBusAttachmentState
    unique_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynBusAttachment: ...
    @typing.overload
    def __new__(cls: typing.Type[AllJoynBusAttachment], connection_specification: str) -> AllJoynBusAttachment:...
    @typing.overload
    def __new__(cls: typing.Type[AllJoynBusAttachment]) -> AllJoynBusAttachment:...
    def connect(self) -> None: ...
    def disconnect(self) -> None: ...
    @typing.overload
    def get_about_data_async(self, service_info: typing.Optional[AllJoynServiceInfo]) -> winsdk.windows.foundation.IAsyncOperation[AllJoynAboutDataView]: ...
    @typing.overload
    def get_about_data_async(self, service_info: typing.Optional[AllJoynServiceInfo], language: typing.Optional[winsdk.windows.globalization.Language]) -> winsdk.windows.foundation.IAsyncOperation[AllJoynAboutDataView]: ...
    @staticmethod
    def get_default() -> typing.Optional[AllJoynBusAttachment]: ...
    @staticmethod
    def get_watcher(required_interfaces: typing.Iterable[str]) -> typing.Optional[winsdk.windows.devices.enumeration.DeviceWatcher]: ...
    def ping_async(self, unique_name: str) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Int32]: ...
    def add_authentication_complete(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynBusAttachment, AllJoynAuthenticationCompleteEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_authentication_complete(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_credentials_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynBusAttachment, AllJoynCredentialsRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_credentials_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_credentials_verification_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynBusAttachment, AllJoynCredentialsVerificationRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_credentials_verification_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynBusAttachment, AllJoynBusAttachmentStateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_accept_session_joiner_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynBusAttachment, AllJoynAcceptSessionJoinerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_accept_session_joiner_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_session_joined(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynBusAttachment, AllJoynSessionJoinedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_session_joined(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AllJoynBusAttachmentStateChangedEventArgs(_winrt.Object):
    state: AllJoynBusAttachmentState
    status: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynBusAttachmentStateChangedEventArgs: ...

class AllJoynBusObject(_winrt.Object):
    bus_attachment: typing.Optional[AllJoynBusAttachment]
    session: typing.Optional[AllJoynSession]
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynBusObject: ...
    @typing.overload
    def __new__(cls: typing.Type[AllJoynBusObject], object_path: str) -> AllJoynBusObject:...
    @typing.overload
    def __new__(cls: typing.Type[AllJoynBusObject], object_path: str, bus_attachment: typing.Optional[AllJoynBusAttachment]) -> AllJoynBusObject:...
    @typing.overload
    def __new__(cls: typing.Type[AllJoynBusObject]) -> AllJoynBusObject:...
    def add_producer(self, producer: typing.Optional[IAllJoynProducer]) -> None: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_stopped(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynBusObject, AllJoynBusObjectStoppedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stopped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AllJoynBusObjectStoppedEventArgs(_winrt.Object):
    status: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynBusObjectStoppedEventArgs: ...
    def __new__(cls: typing.Type[AllJoynBusObjectStoppedEventArgs], status: _winrt.Int32) -> AllJoynBusObjectStoppedEventArgs:...

class AllJoynCredentials(_winrt.Object):
    timeout: datetime.timedelta
    password_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    certificate: typing.Optional[winsdk.windows.security.cryptography.certificates.Certificate]
    authentication_mechanism: AllJoynAuthenticationMechanism
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynCredentials: ...

class AllJoynCredentialsRequestedEventArgs(_winrt.Object):
    attempt_count: _winrt.UInt16
    credentials: typing.Optional[AllJoynCredentials]
    peer_unique_name: str
    requested_user_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynCredentialsRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class AllJoynCredentialsVerificationRequestedEventArgs(_winrt.Object):
    authentication_mechanism: AllJoynAuthenticationMechanism
    peer_certificate: typing.Optional[winsdk.windows.security.cryptography.certificates.Certificate]
    peer_certificate_error_severity: winsdk.windows.networking.sockets.SocketSslErrorSeverity
    peer_certificate_errors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.security.cryptography.certificates.ChainValidationResult]]
    peer_intermediate_certificates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.security.cryptography.certificates.Certificate]]
    peer_unique_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynCredentialsVerificationRequestedEventArgs: ...
    def accept(self) -> None: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class AllJoynMessageInfo(_winrt.Object):
    sender_unique_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynMessageInfo: ...
    def __new__(cls: typing.Type[AllJoynMessageInfo], sender_unique_name: str) -> AllJoynMessageInfo:...

class AllJoynProducerStoppedEventArgs(_winrt.Object):
    status: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynProducerStoppedEventArgs: ...
    def __new__(cls: typing.Type[AllJoynProducerStoppedEventArgs], status: _winrt.Int32) -> AllJoynProducerStoppedEventArgs:...

class AllJoynServiceInfo(_winrt.Object):
    object_path: str
    session_port: _winrt.UInt16
    unique_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynServiceInfo: ...
    def __new__(cls: typing.Type[AllJoynServiceInfo], unique_name: str, object_path: str, session_port: _winrt.UInt16) -> AllJoynServiceInfo:...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[AllJoynServiceInfo]: ...

class AllJoynServiceInfoRemovedEventArgs(_winrt.Object):
    unique_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynServiceInfoRemovedEventArgs: ...
    def __new__(cls: typing.Type[AllJoynServiceInfoRemovedEventArgs], unique_name: str) -> AllJoynServiceInfoRemovedEventArgs:...

class AllJoynSession(_winrt.Object):
    id: _winrt.Int32
    status: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynSession: ...
    @typing.overload
    @staticmethod
    def get_from_service_info_async(service_info: typing.Optional[AllJoynServiceInfo]) -> winsdk.windows.foundation.IAsyncOperation[AllJoynSession]: ...
    @typing.overload
    @staticmethod
    def get_from_service_info_async(service_info: typing.Optional[AllJoynServiceInfo], bus_attachment: typing.Optional[AllJoynBusAttachment]) -> winsdk.windows.foundation.IAsyncOperation[AllJoynSession]: ...
    def remove_member_async(self, unique_name: str) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Int32]: ...
    def add_lost(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynSession, AllJoynSessionLostEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_lost(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_member_added(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynSession, AllJoynSessionMemberAddedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_member_added(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_member_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[AllJoynSession, AllJoynSessionMemberRemovedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_member_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AllJoynSessionJoinedEventArgs(_winrt.Object):
    session: typing.Optional[AllJoynSession]
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynSessionJoinedEventArgs: ...
    def __new__(cls: typing.Type[AllJoynSessionJoinedEventArgs], session: typing.Optional[AllJoynSession]) -> AllJoynSessionJoinedEventArgs:...

class AllJoynSessionLostEventArgs(_winrt.Object):
    reason: AllJoynSessionLostReason
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynSessionLostEventArgs: ...
    def __new__(cls: typing.Type[AllJoynSessionLostEventArgs], reason: AllJoynSessionLostReason) -> AllJoynSessionLostEventArgs:...

class AllJoynSessionMemberAddedEventArgs(_winrt.Object):
    unique_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynSessionMemberAddedEventArgs: ...
    def __new__(cls: typing.Type[AllJoynSessionMemberAddedEventArgs], unique_name: str) -> AllJoynSessionMemberAddedEventArgs:...

class AllJoynSessionMemberRemovedEventArgs(_winrt.Object):
    unique_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynSessionMemberRemovedEventArgs: ...
    def __new__(cls: typing.Type[AllJoynSessionMemberRemovedEventArgs], unique_name: str) -> AllJoynSessionMemberRemovedEventArgs:...

class AllJoynStatus(_winrt.Object):
    authentication_failed: _winrt.Int32
    authentication_rejected_by_user: _winrt.Int32
    connection_refused: _winrt.Int32
    fail: _winrt.Int32
    insufficient_security: _winrt.Int32
    invalid_argument1: _winrt.Int32
    invalid_argument2: _winrt.Int32
    invalid_argument3: _winrt.Int32
    invalid_argument4: _winrt.Int32
    invalid_argument5: _winrt.Int32
    invalid_argument6: _winrt.Int32
    invalid_argument7: _winrt.Int32
    invalid_argument8: _winrt.Int32
    ok: _winrt.Int32
    operation_timed_out: _winrt.Int32
    other_end_closed: _winrt.Int32
    ssl_connect_failed: _winrt.Int32
    ssl_identity_verification_failed: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynStatus: ...

class AllJoynWatcherStoppedEventArgs(_winrt.Object):
    status: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> AllJoynWatcherStoppedEventArgs: ...
    def __new__(cls: typing.Type[AllJoynWatcherStoppedEventArgs], status: _winrt.Int32) -> AllJoynWatcherStoppedEventArgs:...

class IAllJoynAcceptSessionJoiner(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IAllJoynAcceptSessionJoiner: ...
    def accept(self) -> None: ...

class IAllJoynProducer(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IAllJoynProducer: ...
    def set_bus_object(self, bus_object: typing.Optional[AllJoynBusObject]) -> None: ...

