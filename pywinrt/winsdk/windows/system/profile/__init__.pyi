# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams
import winsdk.windows.system

class PlatformDataCollectionLevel(enum.IntEnum):
    SECURITY = 0
    BASIC = 1
    ENHANCED = 2
    FULL = 3

class SystemIdentificationSource(enum.IntEnum):
    NONE = 0
    TPM = 1
    UEFI = 2
    REGISTRY = 3

class SystemOutOfBoxExperienceState(enum.IntEnum):
    NOT_STARTED = 0
    IN_PROGRESS = 1
    COMPLETED = 2

class UnsupportedAppRequirementReasons(enum.IntFlag):
    UNKNOWN = 0
    DENIED_BY_SYSTEM = 0x1

Self = typing.TypeVar('Self')

class AnalyticsInfo(_winrt.Object):
    device_form: str
    version_info: typing.Optional[AnalyticsVersionInfo]
    @staticmethod
    def _from(obj: _winrt.Object) -> AnalyticsInfo: ...
    @staticmethod
    def get_system_properties_async(attribute_names: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IMapView[str, str]]: ...

class AnalyticsVersionInfo(_winrt.Object):
    device_family: str
    device_family_version: str
    product_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AnalyticsVersionInfo: ...

class AppApplicability(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> AppApplicability: ...
    @staticmethod
    def get_unsupported_app_requirements(capabilities: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[UnsupportedAppRequirement]]: ...

class EducationSettings(_winrt.Object):
    is_education_environment: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> EducationSettings: ...

class HardwareIdentification(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> HardwareIdentification: ...
    @staticmethod
    def get_package_specific_token(nonce: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> typing.Optional[HardwareToken]: ...

class HardwareToken(_winrt.Object):
    certificate: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    id: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    signature: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: _winrt.Object) -> HardwareToken: ...

class KnownRetailInfoProperties(_winrt.Object):
    battery_life_description: str
    display_description: str
    display_model_name: str
    form_factor: str
    front_camera_description: str
    graphics_description: str
    has_nfc: str
    has_optical_drive: str
    has_sd_slot: str
    is_featured: str
    is_office_installed: str
    manufacturer_name: str
    memory: str
    model_name: str
    price: str
    processor_description: str
    rear_camera_description: str
    retail_access_code: str
    screen_size: str
    storage_description: str
    weight: str
    windows_edition: str
    @staticmethod
    def _from(obj: _winrt.Object) -> KnownRetailInfoProperties: ...

class PlatformDiagnosticsAndUsageDataSettings(_winrt.Object):
    collection_level: PlatformDataCollectionLevel
    @staticmethod
    def _from(obj: _winrt.Object) -> PlatformDiagnosticsAndUsageDataSettings: ...
    @staticmethod
    def can_collect_diagnostics(level: PlatformDataCollectionLevel) -> _winrt.Boolean: ...
    @staticmethod
    def add_collection_level_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_collection_level_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class RetailInfo(_winrt.Object):
    is_demo_mode_enabled: _winrt.Boolean
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> RetailInfo: ...

class SharedModeSettings(_winrt.Object):
    is_enabled: _winrt.Boolean
    should_avoid_local_storage: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> SharedModeSettings: ...

class SmartAppControlPolicy(_winrt.Object):
    is_enabled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> SmartAppControlPolicy: ...
    @staticmethod
    def add_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SystemIdentification(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemIdentification: ...
    @staticmethod
    def get_system_id_for_publisher() -> typing.Optional[SystemIdentificationInfo]: ...
    @staticmethod
    def get_system_id_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[SystemIdentificationInfo]: ...

class SystemIdentificationInfo(_winrt.Object):
    id: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    source: SystemIdentificationSource
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemIdentificationInfo: ...

class SystemSetupInfo(_winrt.Object):
    out_of_box_experience_state: SystemOutOfBoxExperienceState
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemSetupInfo: ...
    @staticmethod
    def add_out_of_box_experience_state_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_out_of_box_experience_state_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class UnsupportedAppRequirement(_winrt.Object):
    reasons: UnsupportedAppRequirementReasons
    requirement: str
    @staticmethod
    def _from(obj: _winrt.Object) -> UnsupportedAppRequirement: ...

class WindowsIntegrityPolicy(_winrt.Object):
    can_disable: _winrt.Boolean
    is_disable_supported: _winrt.Boolean
    is_enabled: _winrt.Boolean
    is_enabled_for_trial: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> WindowsIntegrityPolicy: ...
    @staticmethod
    def add_policy_changed(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_policy_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

