# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage

class FulfillmentResult(enum.IntEnum):
    SUCCEEDED = 0
    NOTHING_TO_FULFILL = 1
    PURCHASE_PENDING = 2
    PURCHASE_REVERTED = 3
    SERVER_ERROR = 4

class ProductPurchaseStatus(enum.IntEnum):
    SUCCEEDED = 0
    ALREADY_PURCHASED = 1
    NOT_FULFILLED = 2
    NOT_PURCHASED = 3

class ProductType(enum.IntEnum):
    UNKNOWN = 0
    DURABLE = 1
    CONSUMABLE = 2

Self = typing.TypeVar('Self')

class CurrentApp(_winrt.Object):
    app_id: uuid.UUID
    license_information: typing.Optional[LicenseInformation]
    link_uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: _winrt.Object) -> CurrentApp: ...
    @staticmethod
    def get_app_purchase_campaign_id_async() -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_app_receipt_async() -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_customer_collections_id_async(service_ticket: str, publisher_user_id: str) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_customer_purchase_id_async(service_ticket: str, publisher_user_id: str) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_product_receipt_async(product_id: str) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_unfulfilled_consumables_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[UnfulfilledConsumable]]: ...
    @staticmethod
    def load_listing_information_async() -> winsdk.windows.foundation.IAsyncOperation[ListingInformation]: ...
    @staticmethod
    def load_listing_information_by_keywords_async(keywords: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[ListingInformation]: ...
    @staticmethod
    def load_listing_information_by_product_ids_async(product_ids: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[ListingInformation]: ...
    @staticmethod
    def report_consumable_fulfillment_async(product_id: str, transaction_id: uuid.UUID) -> winsdk.windows.foundation.IAsyncOperation[FulfillmentResult]: ...
    @staticmethod
    def report_product_fulfillment(product_id: str) -> None: ...
    @staticmethod
    def request_app_purchase_async(include_receipt: _winrt.Boolean) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str) -> winsdk.windows.foundation.IAsyncOperation[PurchaseResults]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str, include_receipt: _winrt.Boolean) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str, offer_id: str, display_properties: typing.Optional[ProductPurchaseDisplayProperties]) -> winsdk.windows.foundation.IAsyncOperation[PurchaseResults]: ...

class CurrentAppSimulator(_winrt.Object):
    app_id: uuid.UUID
    license_information: typing.Optional[LicenseInformation]
    link_uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: _winrt.Object) -> CurrentAppSimulator: ...
    @staticmethod
    def get_app_purchase_campaign_id_async() -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_app_receipt_async() -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_product_receipt_async(product_id: str) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_unfulfilled_consumables_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[UnfulfilledConsumable]]: ...
    @staticmethod
    def load_listing_information_async() -> winsdk.windows.foundation.IAsyncOperation[ListingInformation]: ...
    @staticmethod
    def load_listing_information_by_keywords_async(keywords: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[ListingInformation]: ...
    @staticmethod
    def load_listing_information_by_product_ids_async(product_ids: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[ListingInformation]: ...
    @staticmethod
    def reload_simulator_async(simulator_settings_file: typing.Optional[winsdk.windows.storage.StorageFile]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def report_consumable_fulfillment_async(product_id: str, transaction_id: uuid.UUID) -> winsdk.windows.foundation.IAsyncOperation[FulfillmentResult]: ...
    @staticmethod
    def request_app_purchase_async(include_receipt: _winrt.Boolean) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str) -> winsdk.windows.foundation.IAsyncOperation[PurchaseResults]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str, include_receipt: _winrt.Boolean) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str, offer_id: str, display_properties: typing.Optional[ProductPurchaseDisplayProperties]) -> winsdk.windows.foundation.IAsyncOperation[PurchaseResults]: ...

class LicenseInformation(_winrt.Object):
    expiration_date: winsdk.windows.foundation.DateTime
    is_active: _winrt.Boolean
    is_trial: _winrt.Boolean
    product_licenses: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, ProductLicense]]
    @staticmethod
    def _from(obj: _winrt.Object) -> LicenseInformation: ...
    def add_license_changed(self, handler: typing.Optional[LicenseChangedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_license_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ListingInformation(_winrt.Object):
    age_rating: _winrt.UInt32
    current_market: str
    description: str
    formatted_price: str
    name: str
    product_listings: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, ProductListing]]
    currency_code: str
    formatted_base_price: str
    is_on_sale: _winrt.Boolean
    sale_end_date: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> ListingInformation: ...

class ProductLicense(_winrt.Object):
    expiration_date: winsdk.windows.foundation.DateTime
    is_active: _winrt.Boolean
    product_id: str
    is_consumable: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ProductLicense: ...

class ProductListing(_winrt.Object):
    formatted_price: str
    name: str
    product_id: str
    formatted_base_price: str
    is_on_sale: _winrt.Boolean
    sale_end_date: winsdk.windows.foundation.DateTime
    currency_code: str
    description: str
    image_uri: typing.Optional[winsdk.windows.foundation.Uri]
    keywords: typing.Optional[winsdk.windows.foundation.collections.IIterable[str]]
    tag: str
    product_type: ProductType
    @staticmethod
    def _from(obj: _winrt.Object) -> ProductListing: ...

class ProductPurchaseDisplayProperties(_winrt.Object):
    name: str
    image: typing.Optional[winsdk.windows.foundation.Uri]
    description: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ProductPurchaseDisplayProperties: ...
    @typing.overload
    def __init__(self, name: str) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...

class PurchaseResults(_winrt.Object):
    offer_id: str
    receipt_xml: str
    status: ProductPurchaseStatus
    transaction_id: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> PurchaseResults: ...

class UnfulfilledConsumable(_winrt.Object):
    offer_id: str
    product_id: str
    transaction_id: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> UnfulfilledConsumable: ...

LicenseChangedEventHandler = typing.Callable[[], None]

