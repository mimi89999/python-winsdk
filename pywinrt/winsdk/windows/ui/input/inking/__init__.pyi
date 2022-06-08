# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.foundation.numerics
import winsdk.windows.storage.streams
import winsdk.windows.ui
import winsdk.windows.ui.core
import winsdk.windows.ui.input

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

Self = typing.TypeVar('Self')

class InkDrawingAttributes(_winrt.Object):
    size: winsdk.windows.foundation.Size
    pen_tip: PenTipShape
    ignore_pressure: _winrt.Boolean
    fit_to_curve: _winrt.Boolean
    color: winsdk.windows.ui.Color
    pen_tip_transform: winsdk.windows.foundation.numerics.Matrix3x2
    draw_as_highlighter: _winrt.Boolean
    kind: InkDrawingAttributesKind
    pencil_properties: typing.Optional[InkDrawingAttributesPencilProperties]
    ignore_tilt: _winrt.Boolean
    modeler_attributes: typing.Optional[InkModelerAttributes]
    @staticmethod
    def _from(obj: _winrt.Object) -> InkDrawingAttributes: ...
    def __init__(self) -> None: ...
    @staticmethod
    def create_for_pencil() -> typing.Optional[InkDrawingAttributes]: ...

class InkDrawingAttributesPencilProperties(_winrt.Object):
    opacity: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> InkDrawingAttributesPencilProperties: ...

class InkInputConfiguration(_winrt.Object):
    is_primary_barrel_button_input_enabled: _winrt.Boolean
    is_eraser_input_enabled: _winrt.Boolean
    is_pen_haptic_feedback_enabled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> InkInputConfiguration: ...

class InkInputProcessingConfiguration(_winrt.Object):
    right_drag_action: InkInputRightDragAction
    mode: InkInputProcessingMode
    @staticmethod
    def _from(obj: _winrt.Object) -> InkInputProcessingConfiguration: ...

class InkManager(_winrt.Object):
    mode: InkManipulationMode
    bounding_rect: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: _winrt.Object) -> InkManager: ...
    def __init__(self) -> None: ...
    def add_stroke(self, stroke: typing.Optional[InkStroke]) -> None: ...
    def can_paste_from_clipboard(self) -> _winrt.Boolean: ...
    def copy_selected_to_clipboard(self) -> None: ...
    def delete_selected(self) -> winsdk.windows.foundation.Rect: ...
    def get_recognition_results(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]]: ...
    def get_recognizers(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkRecognizer]]: ...
    def get_strokes(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkStroke]]: ...
    def load_async(self, input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncActionWithProgress[_winrt.UInt64]: ...
    def move_selected(self, translation: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    def paste_from_clipboard(self, position: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    def process_pointer_down(self, pointer_point: typing.Optional[winsdk.windows.ui.input.PointerPoint]) -> None: ...
    def process_pointer_up(self, pointer_point: typing.Optional[winsdk.windows.ui.input.PointerPoint]) -> winsdk.windows.foundation.Rect: ...
    def process_pointer_update(self, pointer_point: typing.Optional[winsdk.windows.ui.input.PointerPoint]) -> typing.Optional[_winrt.Object]: ...
    @typing.overload
    def recognize_async(self, recognition_target: InkRecognitionTarget) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]]: ...
    @typing.overload
    def recognize_async(self, stroke_collection: typing.Optional[InkStrokeContainer], recognition_target: InkRecognitionTarget) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]]: ...
    def save_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...
    def select_with_line(self, from_: winsdk.windows.foundation.Point, to: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    def select_with_poly_line(self, polyline: typing.Iterable[winsdk.windows.foundation.Point]) -> winsdk.windows.foundation.Rect: ...
    def set_default_drawing_attributes(self, drawing_attributes: typing.Optional[InkDrawingAttributes]) -> None: ...
    def set_default_recognizer(self, recognizer: typing.Optional[InkRecognizer]) -> None: ...
    def update_recognition_results(self, recognition_results: winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]) -> None: ...

class InkModelerAttributes(_winrt.Object):
    scaling_factor: _winrt.Single
    prediction_time: winsdk.windows.foundation.TimeSpan
    use_velocity_based_pressure: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> InkModelerAttributes: ...

class InkPoint(_winrt.Object):
    position: winsdk.windows.foundation.Point
    pressure: _winrt.Single
    tilt_x: _winrt.Single
    tilt_y: _winrt.Single
    timestamp: _winrt.UInt64
    @staticmethod
    def _from(obj: _winrt.Object) -> InkPoint: ...
    @typing.overload
    def __init__(self, position: winsdk.windows.foundation.Point, pressure: _winrt.Single, tilt_x: _winrt.Single, tilt_y: _winrt.Single, timestamp: _winrt.UInt64) -> None: ...
    @typing.overload
    def __init__(self, position: winsdk.windows.foundation.Point, pressure: _winrt.Single) -> None: ...

class InkPresenter(_winrt.Object):
    stroke_container: typing.Optional[InkStrokeContainer]
    is_input_enabled: _winrt.Boolean
    input_device_types: winsdk.windows.ui.core.CoreInputDeviceTypes
    input_processing_configuration: typing.Optional[InkInputProcessingConfiguration]
    stroke_input: typing.Optional[InkStrokeInput]
    unprocessed_input: typing.Optional[InkUnprocessedInput]
    high_contrast_adjustment: InkHighContrastAdjustment
    input_configuration: typing.Optional[InkInputConfiguration]
    @staticmethod
    def _from(obj: _winrt.Object) -> InkPresenter: ...
    def activate_custom_drying(self) -> typing.Optional[InkSynchronizer]: ...
    def copy_default_drawing_attributes(self) -> typing.Optional[InkDrawingAttributes]: ...
    def set_predefined_configuration(self, value: InkPresenterPredefinedConfiguration) -> None: ...
    def update_default_drawing_attributes(self, value: typing.Optional[InkDrawingAttributes]) -> None: ...
    def add_strokes_collected(self, handler: winsdk.windows.foundation.TypedEventHandler[InkPresenter, InkStrokesCollectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_strokes_collected(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_strokes_erased(self, handler: winsdk.windows.foundation.TypedEventHandler[InkPresenter, InkStrokesErasedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_strokes_erased(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class InkPresenterProtractor(_winrt.Object):
    radius: _winrt.Double
    is_resizable: _winrt.Boolean
    is_center_marker_visible: _winrt.Boolean
    is_angle_readout_visible: _winrt.Boolean
    are_tick_marks_visible: _winrt.Boolean
    are_rays_visible: _winrt.Boolean
    accent_color: winsdk.windows.ui.Color
    transform: winsdk.windows.foundation.numerics.Matrix3x2
    is_visible: _winrt.Boolean
    foreground_color: winsdk.windows.ui.Color
    background_color: winsdk.windows.ui.Color
    kind: InkPresenterStencilKind
    @staticmethod
    def _from(obj: _winrt.Object) -> InkPresenterProtractor: ...
    def __init__(self, ink_presenter: typing.Optional[InkPresenter]) -> None: ...

class InkPresenterRuler(_winrt.Object):
    width: _winrt.Double
    length: _winrt.Double
    is_compass_visible: _winrt.Boolean
    are_tick_marks_visible: _winrt.Boolean
    transform: winsdk.windows.foundation.numerics.Matrix3x2
    is_visible: _winrt.Boolean
    foreground_color: winsdk.windows.ui.Color
    background_color: winsdk.windows.ui.Color
    kind: InkPresenterStencilKind
    @staticmethod
    def _from(obj: _winrt.Object) -> InkPresenterRuler: ...
    def __init__(self, ink_presenter: typing.Optional[InkPresenter]) -> None: ...

class InkRecognitionResult(_winrt.Object):
    bounding_rect: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: _winrt.Object) -> InkRecognitionResult: ...
    def get_strokes(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkStroke]]: ...
    def get_text_candidates(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]: ...

class InkRecognizer(_winrt.Object):
    name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> InkRecognizer: ...

class InkRecognizerContainer(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> InkRecognizerContainer: ...
    def __init__(self) -> None: ...
    def get_recognizers(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkRecognizer]]: ...
    def recognize_async(self, stroke_collection: typing.Optional[InkStrokeContainer], recognition_target: InkRecognitionTarget) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]]: ...
    def set_default_recognizer(self, recognizer: typing.Optional[InkRecognizer]) -> None: ...

class InkStroke(_winrt.Object):
    selected: _winrt.Boolean
    drawing_attributes: typing.Optional[InkDrawingAttributes]
    bounding_rect: winsdk.windows.foundation.Rect
    recognized: _winrt.Boolean
    point_transform: winsdk.windows.foundation.numerics.Matrix3x2
    stroke_started_time: typing.Optional[typing.Optional[winsdk.windows.foundation.DateTime]]
    stroke_duration: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    id: _winrt.UInt32
    pointer_id: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> InkStroke: ...
    def clone(self) -> typing.Optional[InkStroke]: ...
    def get_ink_points(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkPoint]]: ...
    def get_rendering_segments(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkStrokeRenderingSegment]]: ...

class InkStrokeBuilder(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> InkStrokeBuilder: ...
    def __init__(self) -> None: ...
    def append_to_stroke(self, pointer_point: typing.Optional[winsdk.windows.ui.input.PointerPoint]) -> typing.Optional[winsdk.windows.ui.input.PointerPoint]: ...
    def begin_stroke(self, pointer_point: typing.Optional[winsdk.windows.ui.input.PointerPoint]) -> None: ...
    def create_stroke(self, points: typing.Iterable[winsdk.windows.foundation.Point]) -> typing.Optional[InkStroke]: ...
    @typing.overload
    def create_stroke_from_ink_points(self, ink_points: typing.Iterable[InkPoint], transform: winsdk.windows.foundation.numerics.Matrix3x2) -> typing.Optional[InkStroke]: ...
    @typing.overload
    def create_stroke_from_ink_points(self, ink_points: typing.Iterable[InkPoint], transform: winsdk.windows.foundation.numerics.Matrix3x2, stroke_started_time: typing.Optional[winsdk.windows.foundation.DateTime], stroke_duration: typing.Optional[winsdk.windows.foundation.TimeSpan]) -> typing.Optional[InkStroke]: ...
    def end_stroke(self, pointer_point: typing.Optional[winsdk.windows.ui.input.PointerPoint]) -> typing.Optional[InkStroke]: ...
    def set_default_drawing_attributes(self, drawing_attributes: typing.Optional[InkDrawingAttributes]) -> None: ...

class InkStrokeContainer(_winrt.Object):
    bounding_rect: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: _winrt.Object) -> InkStrokeContainer: ...
    def __init__(self) -> None: ...
    def add_stroke(self, stroke: typing.Optional[InkStroke]) -> None: ...
    def add_strokes(self, strokes: typing.Iterable[InkStroke]) -> None: ...
    def can_paste_from_clipboard(self) -> _winrt.Boolean: ...
    def clear(self) -> None: ...
    def copy_selected_to_clipboard(self) -> None: ...
    def delete_selected(self) -> winsdk.windows.foundation.Rect: ...
    def get_recognition_results(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]]: ...
    def get_stroke_by_id(self, id: _winrt.UInt32) -> typing.Optional[InkStroke]: ...
    def get_strokes(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkStroke]]: ...
    def load_async(self, input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncActionWithProgress[_winrt.UInt64]: ...
    def move_selected(self, translation: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    def paste_from_clipboard(self, position: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    @typing.overload
    def save_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...
    @typing.overload
    def save_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream], ink_persistence_format: InkPersistenceFormat) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...
    def select_with_line(self, from_: winsdk.windows.foundation.Point, to: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    def select_with_poly_line(self, polyline: typing.Iterable[winsdk.windows.foundation.Point]) -> winsdk.windows.foundation.Rect: ...
    def update_recognition_results(self, recognition_results: winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]) -> None: ...

class InkStrokeInput(_winrt.Object):
    ink_presenter: typing.Optional[InkPresenter]
    @staticmethod
    def _from(obj: _winrt.Object) -> InkStrokeInput: ...
    def add_stroke_canceled(self, handler: winsdk.windows.foundation.TypedEventHandler[InkStrokeInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stroke_canceled(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stroke_continued(self, handler: winsdk.windows.foundation.TypedEventHandler[InkStrokeInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stroke_continued(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stroke_ended(self, handler: winsdk.windows.foundation.TypedEventHandler[InkStrokeInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stroke_ended(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stroke_started(self, handler: winsdk.windows.foundation.TypedEventHandler[InkStrokeInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stroke_started(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class InkStrokeRenderingSegment(_winrt.Object):
    bezier_control_point1: winsdk.windows.foundation.Point
    bezier_control_point2: winsdk.windows.foundation.Point
    position: winsdk.windows.foundation.Point
    pressure: _winrt.Single
    tilt_x: _winrt.Single
    tilt_y: _winrt.Single
    twist: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> InkStrokeRenderingSegment: ...

class InkStrokesCollectedEventArgs(_winrt.Object):
    strokes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkStroke]]
    @staticmethod
    def _from(obj: _winrt.Object) -> InkStrokesCollectedEventArgs: ...

class InkStrokesErasedEventArgs(_winrt.Object):
    strokes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkStroke]]
    @staticmethod
    def _from(obj: _winrt.Object) -> InkStrokesErasedEventArgs: ...

class InkSynchronizer(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> InkSynchronizer: ...
    def begin_dry(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkStroke]]: ...
    def end_dry(self) -> None: ...

class InkUnprocessedInput(_winrt.Object):
    ink_presenter: typing.Optional[InkPresenter]
    @staticmethod
    def _from(obj: _winrt.Object) -> InkUnprocessedInput: ...
    def add_pointer_entered(self, handler: winsdk.windows.foundation.TypedEventHandler[InkUnprocessedInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pointer_entered(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pointer_exited(self, handler: winsdk.windows.foundation.TypedEventHandler[InkUnprocessedInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pointer_exited(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pointer_hovered(self, handler: winsdk.windows.foundation.TypedEventHandler[InkUnprocessedInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pointer_hovered(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pointer_lost(self, handler: winsdk.windows.foundation.TypedEventHandler[InkUnprocessedInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pointer_lost(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pointer_moved(self, handler: winsdk.windows.foundation.TypedEventHandler[InkUnprocessedInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pointer_moved(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pointer_pressed(self, handler: winsdk.windows.foundation.TypedEventHandler[InkUnprocessedInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pointer_pressed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pointer_released(self, handler: winsdk.windows.foundation.TypedEventHandler[InkUnprocessedInput, winsdk.windows.ui.core.PointerEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pointer_released(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PenAndInkSettings(_winrt.Object):
    font_family_name: str
    handwriting_line_height: HandwritingLineHeight
    is_handwriting_directly_into_text_field_enabled: _winrt.Boolean
    is_touch_handwriting_enabled: _winrt.Boolean
    pen_handedness: PenHandedness
    user_consents_to_handwriting_telemetry_collection: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PenAndInkSettings: ...
    @staticmethod
    def get_default() -> typing.Optional[PenAndInkSettings]: ...
    def set_pen_handedness(self, value: PenHandedness) -> None: ...

class IInkPointFactory(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IInkPointFactory: ...
    def create_ink_point(self, position: winsdk.windows.foundation.Point, pressure: _winrt.Single) -> typing.Optional[InkPoint]: ...

class IInkPresenterRulerFactory(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IInkPresenterRulerFactory: ...
    def create(self, ink_presenter: typing.Optional[InkPresenter]) -> typing.Optional[InkPresenterRuler]: ...

class IInkPresenterStencil(_winrt.Object):
    background_color: winsdk.windows.ui.Color
    foreground_color: winsdk.windows.ui.Color
    is_visible: _winrt.Boolean
    kind: InkPresenterStencilKind
    transform: winsdk.windows.foundation.numerics.Matrix3x2
    @staticmethod
    def _from(obj: _winrt.Object) -> IInkPresenterStencil: ...

class IInkRecognizerContainer(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IInkRecognizerContainer: ...
    def get_recognizers(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkRecognizer]]: ...
    def recognize_async(self, stroke_collection: typing.Optional[InkStrokeContainer], recognition_target: InkRecognitionTarget) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]]: ...
    def set_default_recognizer(self, recognizer: typing.Optional[InkRecognizer]) -> None: ...

class IInkStrokeContainer(_winrt.Object):
    bounding_rect: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: _winrt.Object) -> IInkStrokeContainer: ...
    def add_stroke(self, stroke: typing.Optional[InkStroke]) -> None: ...
    def can_paste_from_clipboard(self) -> _winrt.Boolean: ...
    def copy_selected_to_clipboard(self) -> None: ...
    def delete_selected(self) -> winsdk.windows.foundation.Rect: ...
    def get_recognition_results(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]]: ...
    def get_strokes(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[InkStroke]]: ...
    def load_async(self, input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncActionWithProgress[_winrt.UInt64]: ...
    def move_selected(self, translation: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    def paste_from_clipboard(self, position: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    def save_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...
    def select_with_line(self, from_: winsdk.windows.foundation.Point, to: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Rect: ...
    def select_with_poly_line(self, polyline: typing.Iterable[winsdk.windows.foundation.Point]) -> winsdk.windows.foundation.Rect: ...
    def update_recognition_results(self, recognition_results: winsdk.windows.foundation.collections.IVectorView[InkRecognitionResult]) -> None: ...

