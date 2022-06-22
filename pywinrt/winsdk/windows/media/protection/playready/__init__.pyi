# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.media.core
import winsdk.windows.media.protection
import winsdk.windows.storage

class NDCertificateFeature(enum.IntEnum):
    TRANSMITTER = 1
    RECEIVER = 2
    SHARED_CERTIFICATE = 3
    SECURE_CLOCK = 4
    ANTI_ROLL_BACK_CLOCK = 5
    C_R_L_S = 9
    PLAY_READY3_FEATURES = 13

class NDCertificatePlatformID(enum.IntEnum):
    WINDOWS = 0
    O_S_X = 1
    WINDOWS_ON_A_R_M = 2
    WINDOWS_MOBILE7 = 5
    I_O_S_ON_A_R_M = 6
    X_BOX_ON_P_P_C = 7
    WINDOWS_PHONE8_ON_A_R_M = 8
    WINDOWS_PHONE8_ON_X86 = 9
    XBOX_ONE = 10
    ANDROID_ON_A_R_M = 11
    WINDOWS_PHONE81_ON_A_R_M = 12
    WINDOWS_PHONE81_ON_X86 = 13

class NDCertificateType(enum.IntEnum):
    UNKNOWN = 0
    P_C = 1
    DEVICE = 2
    DOMAIN = 3
    ISSUER = 4
    CRL_SIGNER = 5
    SERVICE = 6
    SILVERLIGHT = 7
    APPLICATION = 8
    METERING = 9
    KEY_FILE_SIGNER = 10
    SERVER = 11
    LICENSE_SIGNER = 12

class NDClosedCaptionFormat(enum.IntEnum):
    A_T_S_C = 0
    S_C_T_E20 = 1
    UNKNOWN = 2

class NDContentIDType(enum.IntEnum):
    KEY_I_D = 1
    PLAY_READY_OBJECT = 2
    CUSTOM = 3

class NDMediaStreamType(enum.IntEnum):
    AUDIO = 1
    VIDEO = 2

class NDProximityDetectionType(enum.IntEnum):
    U_D_P = 1
    T_C_P = 2
    TRANSPORT_AGNOSTIC = 4

class NDStartAsyncOptions(enum.IntEnum):
    MUTUAL_AUTHENTICATION = 1
    WAIT_FOR_LICENSE_DESCRIPTOR = 2

class PlayReadyDecryptorSetup(enum.IntEnum):
    UNINITIALIZED = 0
    ON_DEMAND = 1

class PlayReadyEncryptionAlgorithm(enum.IntEnum):
    UNPROTECTED = 0
    AES128_CTR = 1
    COCKTAIL = 4
    AES128_CBC = 5
    UNSPECIFIED = 65535
    UNINITIALIZED = 2147483647

class PlayReadyHardwareDRMFeatures(enum.IntEnum):
    HARDWARE_D_R_M = 1
    H_E_V_C = 2
    AES128_CBC = 3

class PlayReadyITADataFormat(enum.IntEnum):
    SERIALIZED_PROPERTIES = 0
    SERIALIZED_PROPERTIES_WITH_CONTENT_PROTECTION_WRAPPER = 1

Self = typing.TypeVar('Self')

class NDClient(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDClient: ...
    def __new__(cls: typing.Type[NDClient], download_engine: typing.Optional[INDDownloadEngine], stream_parser: typing.Optional[INDStreamParser], p_messenger: typing.Optional[INDMessenger]) -> NDClient:...
    def close(self) -> None: ...
    def license_fetch_async(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> winsdk.windows.foundation.IAsyncOperation[INDLicenseFetchResult]: ...
    def re_registration_async(self, registration_custom_data: typing.Optional[INDCustomData]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def start_async(self, content_url: typing.Optional[winsdk.windows.foundation.Uri], start_async_options: _winrt.UInt32, registration_custom_data: typing.Optional[INDCustomData], license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> winsdk.windows.foundation.IAsyncOperation[INDStartResult]: ...
    def add_closed_caption_data_received(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDClosedCaptionDataReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_closed_caption_data_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_license_fetch_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDLicenseFetchCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_license_fetch_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_proximity_detection_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDProximityDetectionCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_proximity_detection_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_re_registration_needed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_re_registration_needed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_registration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDRegistrationCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_registration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class NDCustomData(_winrt.Object):
    custom_data: _winrt.UInt8
    custom_data_type_i_d: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> NDCustomData: ...
    def __new__(cls: typing.Type[NDCustomData], custom_data_type_i_d_bytes: typing.Sequence[_winrt.UInt8], custom_data_bytes: typing.Sequence[_winrt.UInt8]) -> NDCustomData:...

class NDDownloadEngineNotifier(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDDownloadEngineNotifier: ...
    def __new__(cls: typing.Type[NDDownloadEngineNotifier]) -> NDDownloadEngineNotifier:...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_data_received(self, data_bytes: typing.Sequence[_winrt.UInt8], bytes_received: _winrt.UInt32) -> None: ...
    def on_end_of_stream(self) -> None: ...
    def on_network_error(self) -> None: ...
    def on_play_ready_object_received(self, data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_stream_opened(self) -> None: ...

class NDLicenseFetchDescriptor(_winrt.Object):
    license_fetch_challenge_custom_data: typing.Optional[INDCustomData]
    content_i_d: _winrt.UInt8
    content_i_d_type: NDContentIDType
    @staticmethod
    def _from(obj: _winrt.Object) -> NDLicenseFetchDescriptor: ...
    def __new__(cls: typing.Type[NDLicenseFetchDescriptor], content_i_d_type: NDContentIDType, content_i_d_bytes: typing.Sequence[_winrt.UInt8], license_fetch_challenge_custom_data: typing.Optional[INDCustomData]) -> NDLicenseFetchDescriptor:...

class NDStorageFileHelper(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDStorageFileHelper: ...
    def __new__(cls: typing.Type[NDStorageFileHelper]) -> NDStorageFileHelper:...
    def get_file_u_r_ls(self, file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...

class NDStreamParserNotifier(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDStreamParserNotifier: ...
    def __new__(cls: typing.Type[NDStreamParserNotifier]) -> NDStreamParserNotifier:...
    def on_begin_setup_decryptor(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor], key_i_d: _winrt.Guid, pro_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_media_stream_descriptor_created(self, audio_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.AudioStreamDescriptor], video_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.VideoStreamDescriptor]) -> None: ...
    def on_sample_parsed(self, stream_i_d: _winrt.UInt32, stream_type: NDMediaStreamType, stream_sample: typing.Optional[winsdk.windows.media.core.MediaStreamSample], pts: _winrt.Int64, cc_format: NDClosedCaptionFormat, cc_data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...

class NDTCPMessenger(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDTCPMessenger: ...
    def __new__(cls: typing.Type[NDTCPMessenger], remote_host_name: str, remote_host_port: _winrt.UInt32) -> NDTCPMessenger:...
    def send_license_fetch_request_async(self, session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_response_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: typing.Sequence[_winrt.UInt8], session_i_d_bytes: typing.Sequence[_winrt.UInt8], response_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_start_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: typing.Sequence[_winrt.UInt8], session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_registration_request_async(self, session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...

class PlayReadyContentHeader(_winrt.Object):
    custom_attributes: str
    decryptor_setup: PlayReadyDecryptorSetup
    domain_service_id: _winrt.Guid
    encryption_type: PlayReadyEncryptionAlgorithm
    header_with_embedded_updates: typing.Optional[PlayReadyContentHeader]
    key_id: _winrt.Guid
    key_id_string: str
    license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri]
    license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri]
    key_id_strings: str
    key_ids: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyContentHeader: ...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyContentHeader], dw_flags: _winrt.UInt32, content_key_ids: typing.Sequence[_winrt.Guid], content_key_id_strings: typing.Sequence[str], content_encryption_algorithm: PlayReadyEncryptionAlgorithm, license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: _winrt.Guid) -> PlayReadyContentHeader:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyContentHeader], header_bytes: typing.Sequence[_winrt.UInt8], license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: _winrt.Guid) -> PlayReadyContentHeader:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyContentHeader], content_key_id: _winrt.Guid, content_key_id_string: str, content_encryption_algorithm: PlayReadyEncryptionAlgorithm, license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: _winrt.Guid) -> PlayReadyContentHeader:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyContentHeader], header_bytes: typing.Sequence[_winrt.UInt8]) -> PlayReadyContentHeader:...
    def get_serialized_header(self) -> _winrt.UInt8: ...

class PlayReadyContentResolver(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyContentResolver: ...
    @staticmethod
    def service_request(content_header: typing.Optional[PlayReadyContentHeader]) -> typing.Optional[IPlayReadyServiceRequest]: ...

class PlayReadyDomain(_winrt.Object):
    account_id: _winrt.Guid
    domain_join_url: typing.Optional[winsdk.windows.foundation.Uri]
    friendly_name: str
    revision: _winrt.UInt32
    service_id: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomain: ...

class PlayReadyDomainIterable(_winrt.Object):
    def __iter__(self) -> winsdk.windows.foundation.collections.IIterator[IPlayReadyDomain]: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomainIterable: ...
    def __new__(cls: typing.Type[PlayReadyDomainIterable], domain_account_id: _winrt.Guid) -> PlayReadyDomainIterable:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadyDomain]]: ...

class PlayReadyDomainIterator(_winrt.Object):
    current: typing.Optional[IPlayReadyDomain]
    has_current: _winrt.Boolean
    def __iter__(self: Self) -> Self: ...
    def __next__(self) -> IPlayReadyDomain: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomainIterator: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[IPlayReadyDomain]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class PlayReadyDomainJoinServiceRequest(_winrt.Object):
    protection_system: _winrt.Guid
    type: _winrt.Guid
    domain_service_id: _winrt.Guid
    domain_friendly_name: str
    domain_account_id: _winrt.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomainJoinServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyDomainJoinServiceRequest]) -> PlayReadyDomainJoinServiceRequest:...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyDomainLeaveServiceRequest(_winrt.Object):
    protection_system: _winrt.Guid
    type: _winrt.Guid
    domain_service_id: _winrt.Guid
    domain_account_id: _winrt.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomainLeaveServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyDomainLeaveServiceRequest]) -> PlayReadyDomainLeaveServiceRequest:...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyITADataGenerator(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyITADataGenerator: ...
    def __new__(cls: typing.Type[PlayReadyITADataGenerator]) -> PlayReadyITADataGenerator:...
    def generate_data(self, guid_c_p_system_id: _winrt.Guid, count_of_streams: _winrt.UInt32, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet], format: PlayReadyITADataFormat) -> _winrt.UInt8: ...

class PlayReadyIndividualizationServiceRequest(_winrt.Object):
    protection_system: _winrt.Guid
    type: _winrt.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyIndividualizationServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyIndividualizationServiceRequest]) -> PlayReadyIndividualizationServiceRequest:...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyLicense(_winrt.Object):
    chain_depth: _winrt.UInt32
    domain_account_i_d: _winrt.Guid
    expiration_date: typing.Optional[typing.Optional[datetime.datetime]]
    expire_after_first_play: _winrt.UInt32
    fully_evaluated: _winrt.Boolean
    usable_for_play: _winrt.Boolean
    expires_in_real_time: _winrt.Boolean
    in_memory_only: _winrt.Boolean
    secure_stop_id: _winrt.Guid
    security_level: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicense: ...
    def get_k_i_d_at_chain_depth(self, chain_depth: _winrt.UInt32) -> _winrt.Guid: ...

class PlayReadyLicenseAcquisitionServiceRequest(_winrt.Object):
    protection_system: _winrt.Guid
    type: _winrt.Guid
    domain_service_id: _winrt.Guid
    content_header: typing.Optional[PlayReadyContentHeader]
    session_id: _winrt.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseAcquisitionServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyLicenseAcquisitionServiceRequest]) -> PlayReadyLicenseAcquisitionServiceRequest:...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: _winrt.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyLicenseIterable(_winrt.Object):
    def __iter__(self) -> winsdk.windows.foundation.collections.IIterator[IPlayReadyLicense]: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseIterable: ...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyLicenseIterable]) -> PlayReadyLicenseIterable:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyLicenseIterable], content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: _winrt.Boolean) -> PlayReadyLicenseIterable:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadyLicense]]: ...

class PlayReadyLicenseIterator(_winrt.Object):
    current: typing.Optional[IPlayReadyLicense]
    has_current: _winrt.Boolean
    def __iter__(self: Self) -> Self: ...
    def __next__(self) -> IPlayReadyLicense: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseIterator: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[IPlayReadyLicense]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class PlayReadyLicenseManagement(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseManagement: ...
    @staticmethod
    def delete_licenses(content_header: typing.Optional[PlayReadyContentHeader]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class PlayReadyLicenseSession(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseSession: ...
    def __new__(cls: typing.Type[PlayReadyLicenseSession], configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> PlayReadyLicenseSession:...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: _winrt.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...

class PlayReadyMeteringReportServiceRequest(_winrt.Object):
    protection_system: _winrt.Guid
    type: _winrt.Guid
    metering_certificate: _winrt.UInt8
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyMeteringReportServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyMeteringReportServiceRequest]) -> PlayReadyMeteringReportServiceRequest:...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyRevocationServiceRequest(_winrt.Object):
    protection_system: _winrt.Guid
    type: _winrt.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyRevocationServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyRevocationServiceRequest]) -> PlayReadyRevocationServiceRequest:...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadySecureStopIterable(_winrt.Object):
    def __iter__(self) -> winsdk.windows.foundation.collections.IIterator[IPlayReadySecureStopServiceRequest]: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadySecureStopIterable: ...
    def __new__(cls: typing.Type[PlayReadySecureStopIterable], publisher_cert_bytes: typing.Sequence[_winrt.UInt8]) -> PlayReadySecureStopIterable:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadySecureStopServiceRequest]]: ...

class PlayReadySecureStopIterator(_winrt.Object):
    current: typing.Optional[IPlayReadySecureStopServiceRequest]
    has_current: _winrt.Boolean
    def __iter__(self: Self) -> Self: ...
    def __next__(self) -> IPlayReadySecureStopServiceRequest: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadySecureStopIterator: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[IPlayReadySecureStopServiceRequest]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class PlayReadySecureStopServiceRequest(_winrt.Object):
    protection_system: _winrt.Guid
    type: _winrt.Guid
    publisher_certificate: _winrt.UInt8
    session_i_d: _winrt.Guid
    start_time: datetime.datetime
    stopped: _winrt.Boolean
    update_time: datetime.datetime
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadySecureStopServiceRequest: ...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadySecureStopServiceRequest], publisher_cert_bytes: typing.Sequence[_winrt.UInt8]) -> PlayReadySecureStopServiceRequest:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadySecureStopServiceRequest], session_i_d: _winrt.Guid, publisher_cert_bytes: typing.Sequence[_winrt.UInt8]) -> PlayReadySecureStopServiceRequest:...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadySoapMessage(_winrt.Object):
    message_headers: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadySoapMessage: ...
    def get_message_body(self) -> _winrt.UInt8: ...

class PlayReadyStatics(_winrt.Object):
    domain_join_service_request_type: _winrt.Guid
    domain_leave_service_request_type: _winrt.Guid
    individualization_service_request_type: _winrt.Guid
    license_acquirer_service_request_type: _winrt.Guid
    media_protection_system_id: _winrt.Guid
    metering_report_service_request_type: _winrt.Guid
    play_ready_security_version: _winrt.UInt32
    revocation_service_request_type: _winrt.Guid
    play_ready_certificate_security_level: _winrt.UInt32
    secure_stop_service_request_type: _winrt.Guid
    protection_system_id: _winrt.Guid
    input_trust_authority_to_create: str
    hardware_d_r_m_disabled_until_time: typing.Optional[typing.Optional[datetime.datetime]]
    hardware_d_r_m_disabled_at_time: typing.Optional[typing.Optional[datetime.datetime]]
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyStatics: ...
    @staticmethod
    def check_supported_hardware(hwdrm_feature: PlayReadyHardwareDRMFeatures) -> _winrt.Boolean: ...
    @staticmethod
    def reset_hardware_d_r_m_disabled() -> None: ...

class INDClosedCaptionDataReceivedEventArgs(_winrt.Object):
    closed_caption_data: _winrt.UInt8
    closed_caption_data_format: NDClosedCaptionFormat
    presentation_timestamp: _winrt.Int64
    @staticmethod
    def _from(obj: _winrt.Object) -> INDClosedCaptionDataReceivedEventArgs: ...

class INDCustomData(_winrt.Object):
    custom_data: _winrt.UInt8
    custom_data_type_i_d: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> INDCustomData: ...

class INDDownloadEngine(_winrt.Object):
    buffer_full_max_threshold_in_samples: _winrt.UInt32
    buffer_full_min_threshold_in_samples: _winrt.UInt32
    can_seek: _winrt.Boolean
    notifier: typing.Optional[NDDownloadEngineNotifier]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDDownloadEngine: ...
    def close(self) -> None: ...
    def open(self, uri: typing.Optional[winsdk.windows.foundation.Uri], session_i_d_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def pause(self) -> None: ...
    def resume(self) -> None: ...
    def seek(self, start_position: datetime.timedelta) -> None: ...

class INDDownloadEngineNotifier(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> INDDownloadEngineNotifier: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_data_received(self, data_bytes: typing.Sequence[_winrt.UInt8], bytes_received: _winrt.UInt32) -> None: ...
    def on_end_of_stream(self) -> None: ...
    def on_network_error(self) -> None: ...
    def on_play_ready_object_received(self, data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_stream_opened(self) -> None: ...

class INDLicenseFetchCompletedEventArgs(_winrt.Object):
    response_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDLicenseFetchCompletedEventArgs: ...

class INDLicenseFetchDescriptor(_winrt.Object):
    content_i_d: _winrt.UInt8
    content_i_d_type: NDContentIDType
    license_fetch_challenge_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDLicenseFetchDescriptor: ...

class INDLicenseFetchResult(_winrt.Object):
    response_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDLicenseFetchResult: ...

class INDMessenger(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> INDMessenger: ...
    def send_license_fetch_request_async(self, session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_response_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: typing.Sequence[_winrt.UInt8], session_i_d_bytes: typing.Sequence[_winrt.UInt8], response_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_start_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: typing.Sequence[_winrt.UInt8], session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_registration_request_async(self, session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...

class INDProximityDetectionCompletedEventArgs(_winrt.Object):
    proximity_detection_retry_count: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> INDProximityDetectionCompletedEventArgs: ...

class INDRegistrationCompletedEventArgs(_winrt.Object):
    response_custom_data: typing.Optional[INDCustomData]
    transmitter_certificate_accepted: _winrt.Boolean
    transmitter_properties: typing.Optional[INDTransmitterProperties]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDRegistrationCompletedEventArgs: ...

class INDSendResult(_winrt.Object):
    response: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> INDSendResult: ...

class INDStartResult(_winrt.Object):
    media_stream_source: typing.Optional[winsdk.windows.media.core.MediaStreamSource]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDStartResult: ...

class INDStorageFileHelper(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> INDStorageFileHelper: ...
    def get_file_u_r_ls(self, file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...

class INDStreamParser(_winrt.Object):
    notifier: typing.Optional[NDStreamParserNotifier]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDStreamParser: ...
    def begin_of_stream(self) -> None: ...
    def end_of_stream(self) -> None: ...
    def get_stream_information(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor]) -> typing.Tuple[_winrt.UInt32, NDMediaStreamType]: ...
    def parse_data(self, data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...

class INDStreamParserNotifier(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> INDStreamParserNotifier: ...
    def on_begin_setup_decryptor(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor], key_i_d: _winrt.Guid, pro_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_media_stream_descriptor_created(self, audio_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.AudioStreamDescriptor], video_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.VideoStreamDescriptor]) -> None: ...
    def on_sample_parsed(self, stream_i_d: _winrt.UInt32, stream_type: NDMediaStreamType, stream_sample: typing.Optional[winsdk.windows.media.core.MediaStreamSample], pts: _winrt.Int64, cc_format: NDClosedCaptionFormat, cc_data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...

class INDTransmitterProperties(_winrt.Object):
    certificate_type: NDCertificateType
    client_i_d: _winrt.UInt8
    expiration_date: datetime.datetime
    model_digest: _winrt.UInt8
    model_manufacturer_name: str
    model_name: str
    model_number: str
    platform_identifier: NDCertificatePlatformID
    security_level: _winrt.UInt32
    security_version: _winrt.UInt32
    supported_features: NDCertificateFeature
    @staticmethod
    def _from(obj: _winrt.Object) -> INDTransmitterProperties: ...

class IPlayReadyDomain(_winrt.Object):
    account_id: _winrt.Guid
    domain_join_url: typing.Optional[winsdk.windows.foundation.Uri]
    friendly_name: str
    revision: _winrt.UInt32
    service_id: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyDomain: ...

class IPlayReadyLicense(_winrt.Object):
    chain_depth: _winrt.UInt32
    domain_account_i_d: _winrt.Guid
    expiration_date: typing.Optional[typing.Optional[datetime.datetime]]
    expire_after_first_play: _winrt.UInt32
    fully_evaluated: _winrt.Boolean
    usable_for_play: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyLicense: ...
    def get_k_i_d_at_chain_depth(self, chain_depth: _winrt.UInt32) -> _winrt.Guid: ...

class IPlayReadyLicenseAcquisitionServiceRequest(_winrt.Object):
    content_header: typing.Optional[PlayReadyContentHeader]
    domain_service_id: _winrt.Guid
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: _winrt.Guid
    type: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyLicenseAcquisitionServiceRequest: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class IPlayReadyLicenseSession(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyLicenseSession: ...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...

class IPlayReadyLicenseSession2(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyLicenseSession2: ...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: _winrt.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...

class IPlayReadySecureStopServiceRequest(_winrt.Object):
    publisher_certificate: _winrt.UInt8
    session_i_d: _winrt.Guid
    start_time: datetime.datetime
    stopped: _winrt.Boolean
    update_time: datetime.datetime
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: _winrt.Guid
    type: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadySecureStopServiceRequest: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class IPlayReadyServiceRequest(_winrt.Object):
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: _winrt.Guid
    type: _winrt.Guid
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyServiceRequest: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

