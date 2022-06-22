# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.ApplicationModel.DataTransfer.DragDrop.Core")

try:
    import winsdk.windows.applicationmodel.datatransfer
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.datatransfer.dragdrop
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.graphics.imaging
except ImportError:
    pass

class CoreDragUIContentMode(enum.IntFlag):
    AUTO = 0
    DEFERRED = 0x1

_ns_module._register_CoreDragUIContentMode(CoreDragUIContentMode)

CoreDragDropManager = _ns_module.CoreDragDropManager
CoreDragInfo = _ns_module.CoreDragInfo
CoreDragOperation = _ns_module.CoreDragOperation
CoreDragUIOverride = _ns_module.CoreDragUIOverride
CoreDropOperationTargetRequestedEventArgs = _ns_module.CoreDropOperationTargetRequestedEventArgs
ICoreDropOperationTarget = _ns_module.ICoreDropOperationTarget
