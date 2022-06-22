# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.authentication.web.core
import winsdk.windows.security.credentials
import winsdk.windows.storage.streams
import winsdk.windows.system
import winsdk.windows.ui.xaml

class DeliveryOptimizationDownloadMode(enum.IntEnum):
    SIMPLE = 0
    HTTP_ONLY = 1
    LAN = 2
    GROUP = 3
    INTERNET = 4
    BYPASS = 5

class DeliveryOptimizationDownloadModeSource(enum.IntEnum):
    DEFAULT = 0
    POLICY = 1

class StoreLogOptions(enum.IntFlag):
    NONE = 0
    TRY_ELEVATE = 0x1

class StorePreviewProductPurchaseStatus(enum.IntEnum):
    SUCCEEDED = 0
    ALREADY_PURCHASED = 1
    NOT_FULFILLED = 2
    NOT_PURCHASED = 3

class StoreSystemFeature(enum.IntEnum):
    ARCHITECTURE_X86 = 0
    ARCHITECTURE_X64 = 1
    ARCHITECTURE_ARM = 2
    DIRECT_X9 = 3
    DIRECT_X10 = 4
    DIRECT_X11 = 5
    D3_D12_HARDWARE_F_L11 = 6
    D3_D12_HARDWARE_F_L12 = 7
    MEMORY300_M_B = 8
    MEMORY750_M_B = 9
    MEMORY1_G_B = 10
    MEMORY2_G_B = 11
    CAMERA_FRONT = 12
    CAMERA_REAR = 13
    GYROSCOPE = 14
    HOVER = 15
    MAGNETOMETER = 16
    NFC = 17
    RESOLUTION720_P = 18
    RESOLUTION_WVGA = 19
    RESOLUTION_WVGA_OR720_P = 20
    RESOLUTION_WXGA = 21
    RESOLUTION_WVGA_OR_WXGA = 22
    RESOLUTION_WXGA_OR720_P = 23
    MEMORY4_G_B = 24
    MEMORY6_G_B = 25
    MEMORY8_G_B = 26
    MEMORY12_G_B = 27
    MEMORY16_G_B = 28
    MEMORY20_G_B = 29
    VIDEO_MEMORY2_G_B = 30
    VIDEO_MEMORY4_G_B = 31
    VIDEO_MEMORY6_G_B = 32
    VIDEO_MEMORY1_G_B = 33
    ARCHITECTURE_ARM64 = 34

Self = typing.TypeVar('Self')

class DeliveryOptimizationSettings(_winrt.Object):
    download_mode: DeliveryOptimizationDownloadMode
    download_mode_source: DeliveryOptimizationDownloadModeSource
    @staticmethod
    def _from(obj: _winrt.Object) -> DeliveryOptimizationSettings: ...
    @staticmethod
    def get_current_settings() -> typing.Optional[DeliveryOptimizationSettings]: ...

class StoreConfiguration(_winrt.Object):
    hardware_manufacturer_info: typing.Optional[StoreHardwareManufacturerInfo]
    purchase_prompting_policy: typing.Optional[typing.Optional[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> StoreConfiguration: ...
    @staticmethod
    def filter_unsupported_system_features_async(system_features: typing.Iterable[StoreSystemFeature]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[StoreSystemFeature]]: ...
    @staticmethod
    def get_enterprise_store_web_account_id() -> str: ...
    @staticmethod
    def get_enterprise_store_web_account_id_for_user(user: typing.Optional[winsdk.windows.system.User]) -> str: ...
    @staticmethod
    def get_purchase_prompting_policy_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[typing.Optional[_winrt.UInt32]]: ...
    @staticmethod
    def get_store_log_data_async(options: StoreLogOptions) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStreamReference]: ...
    @staticmethod
    def get_store_web_account_id() -> str: ...
    @staticmethod
    def get_store_web_account_id_for_user(user: typing.Optional[winsdk.windows.system.User]) -> str: ...
    @staticmethod
    def has_store_web_account() -> _winrt.Boolean: ...
    @staticmethod
    def has_store_web_account_for_user(user: typing.Optional[winsdk.windows.system.User]) -> _winrt.Boolean: ...
    @staticmethod
    def is_pin_to_desktop_supported() -> _winrt.Boolean: ...
    @staticmethod
    def is_pin_to_start_supported() -> _winrt.Boolean: ...
    @staticmethod
    def is_pin_to_taskbar_supported() -> _winrt.Boolean: ...
    @staticmethod
    def is_store_web_account_id(web_account_id: str) -> _winrt.Boolean: ...
    @staticmethod
    def is_store_web_account_id_for_user(user: typing.Optional[winsdk.windows.system.User], web_account_id: str) -> _winrt.Boolean: ...
    @staticmethod
    def pin_to_desktop(app_package_family_name: str) -> None: ...
    @staticmethod
    def pin_to_desktop_for_user(user: typing.Optional[winsdk.windows.system.User], app_package_family_name: str) -> None: ...
    @staticmethod
    def set_enterprise_store_web_account_id(web_account_id: str) -> None: ...
    @staticmethod
    def set_enterprise_store_web_account_id_for_user(user: typing.Optional[winsdk.windows.system.User], web_account_id: str) -> None: ...
    @staticmethod
    def set_mobile_operator_configuration(mobile_operator_id: str, app_download_limit_in_megabytes: _winrt.UInt32, update_download_limit_in_megabytes: _winrt.UInt32) -> None: ...
    @staticmethod
    def set_purchase_prompting_policy_for_user(user: typing.Optional[winsdk.windows.system.User], value: typing.Optional[_winrt.UInt32]) -> None: ...
    @staticmethod
    def set_store_web_account_id(web_account_id: str) -> None: ...
    @staticmethod
    def set_store_web_account_id_for_user(user: typing.Optional[winsdk.windows.system.User], web_account_id: str) -> None: ...
    @staticmethod
    def set_system_configuration(catalog_hardware_manufacturer_id: str, catalog_store_content_modifier_id: str, system_configuration_expiration: datetime.datetime, catalog_hardware_descriptor: str) -> None: ...
    @staticmethod
    def should_restrict_to_enterprise_store_only() -> _winrt.Boolean: ...
    @staticmethod
    def should_restrict_to_enterprise_store_only_for_user(user: typing.Optional[winsdk.windows.system.User]) -> _winrt.Boolean: ...

class StoreHardwareManufacturerInfo(_winrt.Object):
    hardware_manufacturer_id: str
    manufacturer_name: str
    model_name: str
    store_content_modifier_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> StoreHardwareManufacturerInfo: ...

class StorePreview(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> StorePreview: ...
    @staticmethod
    def load_add_on_product_infos_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[StorePreviewProductInfo]]: ...
    @staticmethod
    def request_product_purchase_by_product_id_and_sku_id_async(product_id: str, sku_id: str) -> winsdk.windows.foundation.IAsyncOperation[StorePreviewPurchaseResults]: ...

class StorePreviewProductInfo(_winrt.Object):
    description: str
    product_id: str
    product_type: str
    sku_info_list: typing.Optional[winsdk.windows.foundation.collections.IVectorView[StorePreviewSkuInfo]]
    title: str
    @staticmethod
    def _from(obj: _winrt.Object) -> StorePreviewProductInfo: ...

class StorePreviewPurchaseResults(_winrt.Object):
    product_purchase_status: StorePreviewProductPurchaseStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> StorePreviewPurchaseResults: ...

class StorePreviewSkuInfo(_winrt.Object):
    currency_code: str
    custom_developer_data: str
    description: str
    extended_data: str
    formatted_list_price: str
    product_id: str
    sku_id: str
    sku_type: str
    title: str
    @staticmethod
    def _from(obj: _winrt.Object) -> StorePreviewSkuInfo: ...

class WebAuthenticationCoreManagerHelper(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> WebAuthenticationCoreManagerHelper: ...
    @typing.overload
    @staticmethod
    def request_token_with_u_i_element_hosting_async(request: typing.Optional[winsdk.windows.security.authentication.web.core.WebTokenRequest], ui_element: typing.Optional[winsdk.windows.ui.xaml.UIElement]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.authentication.web.core.WebTokenRequestResult]: ...
    @typing.overload
    @staticmethod
    def request_token_with_u_i_element_hosting_async(request: typing.Optional[winsdk.windows.security.authentication.web.core.WebTokenRequest], web_account: typing.Optional[winsdk.windows.security.credentials.WebAccount], ui_element: typing.Optional[winsdk.windows.ui.xaml.UIElement]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.security.authentication.web.core.WebTokenRequestResult]: ...

