# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.Store")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

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

_ns_module._register_FulfillmentResult(FulfillmentResult)
_ns_module._register_ProductPurchaseStatus(ProductPurchaseStatus)
_ns_module._register_ProductType(ProductType)

CurrentApp = _ns_module.CurrentApp
CurrentAppSimulator = _ns_module.CurrentAppSimulator
LicenseInformation = _ns_module.LicenseInformation
ListingInformation = _ns_module.ListingInformation
ProductLicense = _ns_module.ProductLicense
ProductListing = _ns_module.ProductListing
ProductPurchaseDisplayProperties = _ns_module.ProductPurchaseDisplayProperties
PurchaseResults = _ns_module.PurchaseResults
UnfulfilledConsumable = _ns_module.UnfulfilledConsumable
