# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.UI.Input.Inking")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.foundation.numerics
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.ui
except ImportError:
    pass

try:
    import winsdk.windows.ui.core
except ImportError:
    pass

try:
    import winsdk.windows.ui.input
except ImportError:
    pass

class HandwritingLineHeight(enum.IntEnum):
    SMALL = 0
    MEDIUM = 1
    LARGE = 2

class InkDrawingAttributesKind(enum.IntEnum):
    DEFAULT = 0
    PENCIL = 1

class InkHighContrastAdjustment(enum.IntEnum):
    USE_SYSTEM_COLORS_WHEN_NECESSARY = 0
    USE_SYSTEM_COLORS = 1
    USE_ORIGINAL_COLORS = 2

class InkInputProcessingMode(enum.IntEnum):
    NONE = 0
    INKING = 1
    ERASING = 2

class InkInputRightDragAction(enum.IntEnum):
    LEAVE_UNPROCESSED = 0
    ALLOW_PROCESSING = 1

class InkManipulationMode(enum.IntEnum):
    INKING = 0
    ERASING = 1
    SELECTING = 2

class InkPersistenceFormat(enum.IntEnum):
    GIF_WITH_EMBEDDED_ISF = 0
    ISF = 1

class InkPresenterPredefinedConfiguration(enum.IntEnum):
    SIMPLE_SINGLE_POINTER = 0
    SIMPLE_MULTIPLE_POINTER = 1

class InkPresenterStencilKind(enum.IntEnum):
    OTHER = 0
    RULER = 1
    PROTRACTOR = 2

class InkRecognitionTarget(enum.IntEnum):
    ALL = 0
    SELECTED = 1
    RECENT = 2

class PenHandedness(enum.IntEnum):
    RIGHT = 0
    LEFT = 1

class PenTipShape(enum.IntEnum):
    CIRCLE = 0
    RECTANGLE = 1

_ns_module._register_HandwritingLineHeight(HandwritingLineHeight)
_ns_module._register_InkDrawingAttributesKind(InkDrawingAttributesKind)
_ns_module._register_InkHighContrastAdjustment(InkHighContrastAdjustment)
_ns_module._register_InkInputProcessingMode(InkInputProcessingMode)
_ns_module._register_InkInputRightDragAction(InkInputRightDragAction)
_ns_module._register_InkManipulationMode(InkManipulationMode)
_ns_module._register_InkPersistenceFormat(InkPersistenceFormat)
_ns_module._register_InkPresenterPredefinedConfiguration(InkPresenterPredefinedConfiguration)
_ns_module._register_InkPresenterStencilKind(InkPresenterStencilKind)
_ns_module._register_InkRecognitionTarget(InkRecognitionTarget)
_ns_module._register_PenHandedness(PenHandedness)
_ns_module._register_PenTipShape(PenTipShape)

InkDrawingAttributes = _ns_module.InkDrawingAttributes
InkDrawingAttributesPencilProperties = _ns_module.InkDrawingAttributesPencilProperties
InkInputConfiguration = _ns_module.InkInputConfiguration
InkInputProcessingConfiguration = _ns_module.InkInputProcessingConfiguration
InkManager = _ns_module.InkManager
InkModelerAttributes = _ns_module.InkModelerAttributes
InkPoint = _ns_module.InkPoint
InkPresenter = _ns_module.InkPresenter
InkPresenterProtractor = _ns_module.InkPresenterProtractor
InkPresenterRuler = _ns_module.InkPresenterRuler
InkRecognitionResult = _ns_module.InkRecognitionResult
InkRecognizer = _ns_module.InkRecognizer
InkRecognizerContainer = _ns_module.InkRecognizerContainer
InkStroke = _ns_module.InkStroke
InkStrokeBuilder = _ns_module.InkStrokeBuilder
InkStrokeContainer = _ns_module.InkStrokeContainer
InkStrokeInput = _ns_module.InkStrokeInput
InkStrokeRenderingSegment = _ns_module.InkStrokeRenderingSegment
InkStrokesCollectedEventArgs = _ns_module.InkStrokesCollectedEventArgs
InkStrokesErasedEventArgs = _ns_module.InkStrokesErasedEventArgs
InkSynchronizer = _ns_module.InkSynchronizer
InkUnprocessedInput = _ns_module.InkUnprocessedInput
PenAndInkSettings = _ns_module.PenAndInkSettings
IInkPointFactory = _ns_module.IInkPointFactory
IInkPresenterRulerFactory = _ns_module.IInkPresenterRulerFactory
IInkPresenterStencil = _ns_module.IInkPresenterStencil
IInkRecognizerContainer = _ns_module.IInkRecognizerContainer
IInkStrokeContainer = _ns_module.IInkStrokeContainer
