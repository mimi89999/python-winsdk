# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
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

class CurrentApp(winsdk.system.Object):
    app_id: typing.ClassVar[winsdk.system.Guid]
    license_information: typing.ClassVar[typing.Optional[LicenseInformation]]
    link_uri: typing.ClassVar[typing.Optional[winsdk.windows.foundation.Uri]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CurrentApp: ...
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
    def report_consumable_fulfillment_async(product_id: str, transaction_id: winsdk.system.Guid) -> winsdk.windows.foundation.IAsyncOperation[FulfillmentResult]: ...
    @staticmethod
    def report_product_fulfillment(product_id: str) -> None: ...
    @staticmethod
    def request_app_purchase_async(include_receipt: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str) -> winsdk.windows.foundation.IAsyncOperation[PurchaseResults]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str, include_receipt: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str, offer_id: str, display_properties: typing.Optional[ProductPurchaseDisplayProperties]) -> winsdk.windows.foundation.IAsyncOperation[PurchaseResults]: ...

class CurrentAppSimulator(winsdk.system.Object):
    app_id: typing.ClassVar[winsdk.system.Guid]
    license_information: typing.ClassVar[typing.Optional[LicenseInformation]]
    link_uri: typing.ClassVar[typing.Optional[winsdk.windows.foundation.Uri]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CurrentAppSimulator: ...
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
    def reload_simulator_async(simulator_settings_file: typing.Optional[winsdk.windows.storage.StorageFile]) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def report_consumable_fulfillment_async(product_id: str, transaction_id: winsdk.system.Guid) -> winsdk.windows.foundation.IAsyncOperation[FulfillmentResult]: ...
    @staticmethod
    def request_app_purchase_async(include_receipt: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str) -> winsdk.windows.foundation.IAsyncOperation[PurchaseResults]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str, include_receipt: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_product_purchase_async(product_id: str, offer_id: str, display_properties: typing.Optional[ProductPurchaseDisplayProperties]) -> winsdk.windows.foundation.IAsyncOperation[PurchaseResults]: ...

class LicenseInformation(winsdk.system.Object):
    expiration_date: datetime.datetime
    is_active: winsdk.system.Boolean
    is_trial: winsdk.system.Boolean
    product_licenses: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, ProductLicense]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LicenseInformation: ...
    def add_license_changed(self, handler: typing.Optional[LicenseChangedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_license_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ListingInformation(winsdk.system.Object):
    age_rating: winsdk.system.UInt32
    current_market: str
    description: str
    formatted_price: str
    name: str
    product_listings: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, ProductListing]]
    currency_code: str
    formatted_base_price: str
    is_on_sale: winsdk.system.Boolean
    sale_end_date: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ListingInformation: ...

class ProductLicense(winsdk.system.Object):
    expiration_date: datetime.datetime
    is_active: winsdk.system.Boolean
    product_id: str
    is_consumable: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProductLicense: ...

class ProductListing(winsdk.system.Object):
    formatted_price: str
    name: str
    product_id: str
    formatted_base_price: str
    is_on_sale: winsdk.system.Boolean
    sale_end_date: datetime.datetime
    currency_code: str
    description: str
    image_uri: typing.Optional[winsdk.windows.foundation.Uri]
    keywords: typing.Optional[winsdk.windows.foundation.collections.IIterable[str]]
    tag: str
    product_type: ProductType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProductListing: ...

class ProductPurchaseDisplayProperties(winsdk.system.Object):
    name: str
    image: typing.Optional[winsdk.windows.foundation.Uri]
    description: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProductPurchaseDisplayProperties: ...
    @typing.overload
    def __new__(cls: typing.Type[ProductPurchaseDisplayProperties], name: str) -> ProductPurchaseDisplayProperties:...
    @typing.overload
    def __new__(cls: typing.Type[ProductPurchaseDisplayProperties]) -> ProductPurchaseDisplayProperties:...

class PurchaseResults(winsdk.system.Object):
    offer_id: str
    receipt_xml: str
    status: ProductPurchaseStatus
    transaction_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PurchaseResults: ...

class UnfulfilledConsumable(winsdk.system.Object):
    offer_id: str
    product_id: str
    transaction_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UnfulfilledConsumable: ...

LicenseChangedEventHandler = typing.Callable[[], None]

