# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Foundation.Collections")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

class CollectionChange(enum.IntEnum):
    RESET = 0
    ITEM_INSERTED = 1
    ITEM_REMOVED = 2
    ITEM_CHANGED = 3

_ns_module._register_CollectionChange(CollectionChange)

PropertySet = _ns_module.PropertySet
StringMap = _ns_module.StringMap
ValueSet = _ns_module.ValueSet
IIterable = _ns_module.IIterable
IIterator = _ns_module.IIterator
IKeyValuePair = _ns_module.IKeyValuePair
IMapChangedEventArgs = _ns_module.IMapChangedEventArgs
IMapView = _ns_module.IMapView
IMap = _ns_module.IMap
IObservableMap = _ns_module.IObservableMap
IObservableVector = _ns_module.IObservableVector
IPropertySet = _ns_module.IPropertySet
IVectorChangedEventArgs = _ns_module.IVectorChangedEventArgs
IVectorView = _ns_module.IVectorView
IVector = _ns_module.IVector
