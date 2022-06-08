# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation.collections

class AsyncStatus(enum.IntEnum):
    CANCELED = 2
    COMPLETED = 1
    ERROR = 3
    STARTED = 0

class PropertyType(enum.IntEnum):
    EMPTY = 0
    UINT8 = 1
    INT16 = 2
    UINT16 = 3
    INT32 = 4
    UINT32 = 5
    INT64 = 6
    UINT64 = 7
    SINGLE = 8
    DOUBLE = 9
    CHAR16 = 10
    BOOLEAN = 11
    STRING = 12
    INSPECTABLE = 13
    DATE_TIME = 14
    TIME_SPAN = 15
    GUID = 16
    POINT = 17
    SIZE = 18
    RECT = 19
    OTHER_TYPE = 20
    UINT8_ARRAY = 1025
    INT16_ARRAY = 1026
    UINT16_ARRAY = 1027
    INT32_ARRAY = 1028
    UINT32_ARRAY = 1029
    INT64_ARRAY = 1030
    UINT64_ARRAY = 1031
    SINGLE_ARRAY = 1032
    DOUBLE_ARRAY = 1033
    CHAR16_ARRAY = 1034
    BOOLEAN_ARRAY = 1035
    STRING_ARRAY = 1036
    INSPECTABLE_ARRAY = 1037
    DATE_TIME_ARRAY = 1038
    TIME_SPAN_ARRAY = 1039
    GUID_ARRAY = 1040
    POINT_ARRAY = 1041
    SIZE_ARRAY = 1042
    RECT_ARRAY = 1043
    OTHER_TYPE_ARRAY = 1044

Self = typing.TypeVar('Self')
T = typing.TypeVar('T')
TProgress = typing.TypeVar('TProgress')
TResult = typing.TypeVar('TResult')
TSender = typing.TypeVar('TSender')

class DateTime:
    universal_time: _winrt.Int64
    def __init__(self, universal_time: _winrt.Int64) -> None: ...

class EventRegistrationToken:
    value: _winrt.Int64
    def __init__(self, value: _winrt.Int64) -> None: ...

class HResult:
    value: _winrt.Int32
    def __init__(self, value: _winrt.Int32) -> None: ...

class Point:
    x: _winrt.Single
    y: _winrt.Single
    def __init__(self, x: _winrt.Single, y: _winrt.Single) -> None: ...

class Rect:
    x: _winrt.Single
    y: _winrt.Single
    width: _winrt.Single
    height: _winrt.Single
    def __init__(self, x: _winrt.Single, y: _winrt.Single, width: _winrt.Single, height: _winrt.Single) -> None: ...

class Size:
    width: _winrt.Single
    height: _winrt.Single
    def __init__(self, width: _winrt.Single, height: _winrt.Single) -> None: ...

class TimeSpan:
    duration: _winrt.Int64
    def __init__(self, duration: _winrt.Int64) -> None: ...

class Deferral(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> Deferral: ...
    def __init__(self, handler: typing.Optional[DeferralCompletedHandler]) -> None: ...
    def close(self) -> None: ...
    def complete(self) -> None: ...

class GuidHelper(_winrt.Object):
    empty: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> GuidHelper: ...
    @staticmethod
    def create_new_guid() -> uuid.UUID: ...
    @staticmethod
    def equals(target: uuid.UUID, value: uuid.UUID) -> _winrt.Boolean: ...

class MemoryBuffer(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> MemoryBuffer: ...
    def __init__(self, capacity: _winrt.UInt32) -> None: ...
    def close(self) -> None: ...
    def create_reference(self) -> typing.Optional[IMemoryBufferReference]: ...

class PropertyValue(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PropertyValue: ...
    @staticmethod
    def create_boolean(value: _winrt.Boolean) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_boolean_array(value: typing.Sequence[_winrt.Boolean]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_char16(value: _winrt.Char16) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_char16_array(value: typing.Sequence[_winrt.Char16]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_date_time(value: DateTime) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_date_time_array(value: typing.Sequence[DateTime]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_double(value: _winrt.Double) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_double_array(value: typing.Sequence[_winrt.Double]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_empty() -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_guid(value: uuid.UUID) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_guid_array(value: typing.Sequence[uuid.UUID]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_inspectable(value: typing.Optional[_winrt.Object]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_inspectable_array(value: typing.Sequence[_winrt.Object]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_int16(value: _winrt.Int16) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_int16_array(value: typing.Sequence[_winrt.Int16]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_int32(value: _winrt.Int32) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_int32_array(value: typing.Sequence[_winrt.Int32]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_int64(value: _winrt.Int64) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_int64_array(value: typing.Sequence[_winrt.Int64]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_point(value: Point) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_point_array(value: typing.Sequence[Point]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_rect(value: Rect) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_rect_array(value: typing.Sequence[Rect]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_single(value: _winrt.Single) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_single_array(value: typing.Sequence[_winrt.Single]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_size(value: Size) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_size_array(value: typing.Sequence[Size]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_string(value: str) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_string_array(value: typing.Sequence[str]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_time_span(value: TimeSpan) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_time_span_array(value: typing.Sequence[TimeSpan]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_uint16(value: _winrt.UInt16) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_uint16_array(value: typing.Sequence[_winrt.UInt16]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_uint32(value: _winrt.UInt32) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_uint32_array(value: typing.Sequence[_winrt.UInt32]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_uint64(value: _winrt.UInt64) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_uint64_array(value: typing.Sequence[_winrt.UInt64]) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_uint8(value: _winrt.UInt8) -> typing.Optional[_winrt.Object]: ...
    @staticmethod
    def create_uint8_array(value: typing.Sequence[_winrt.UInt8]) -> typing.Optional[_winrt.Object]: ...

class Uri(_winrt.Object):
    absolute_uri: str
    display_uri: str
    domain: str
    extension: str
    fragment: str
    host: str
    password: str
    path: str
    port: _winrt.Int32
    query: str
    query_parsed: typing.Optional[WwwFormUrlDecoder]
    raw_uri: str
    scheme_name: str
    suspicious: _winrt.Boolean
    user_name: str
    absolute_canonical_uri: str
    display_iri: str
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> Uri: ...
    @typing.overload
    def __init__(self, uri: str) -> None: ...
    @typing.overload
    def __init__(self, base_uri: str, relative_uri: str) -> None: ...
    def combine_uri(self, relative_uri: str) -> typing.Optional[Uri]: ...
    def equals(self, p_uri: typing.Optional[Uri]) -> _winrt.Boolean: ...
    @staticmethod
    def escape_component(to_escape: str) -> str: ...
    def to_string(self) -> str: ...
    @staticmethod
    def unescape_component(to_unescape: str) -> str: ...

class WwwFormUrlDecoder(_winrt.Object, typing.Sequence[IWwwFormUrlDecoderEntry]):
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> IWwwFormUrlDecoderEntry: ...
    @typing.overload
    def __getitem__(self, index: slice) -> typing.Sequence[IWwwFormUrlDecoderEntry]: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> WwwFormUrlDecoder: ...
    def __init__(self, query: str) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IWwwFormUrlDecoderEntry]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[IWwwFormUrlDecoderEntry]: ...
    def get_first_value_by_name(self, name: str) -> str: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[IWwwFormUrlDecoderEntry]]: ...
    def index_of(self, value: typing.Optional[IWwwFormUrlDecoderEntry]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...

class WwwFormUrlDecoderEntry(_winrt.Object):
    name: str
    value: str
    @staticmethod
    def _from(obj: _winrt.Object) -> WwwFormUrlDecoderEntry: ...

class IAsyncAction(_winrt.Object):
    completed: typing.Optional[AsyncActionCompletedHandler]
    error_code: HResult
    id: _winrt.UInt32
    status: AsyncStatus
    def __await__(self) -> typing.Generator[typing.Any, None, None]: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IAsyncAction: ...
    def get_results(self) -> None: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...

class IAsyncActionWithProgress(_winrt.Object, typing.Generic[TProgress]):
    progress: typing.Optional[AsyncActionProgressHandler[TProgress]]
    completed: typing.Optional[AsyncActionWithProgressCompletedHandler[TProgress]]
    error_code: HResult
    id: _winrt.UInt32
    status: AsyncStatus
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __await__(self) -> typing.Generator[typing.Any, None, None]: ...
    def get_results(self) -> None: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...

class IAsyncInfo(_winrt.Object):
    error_code: HResult
    id: _winrt.UInt32
    status: AsyncStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> IAsyncInfo: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...

class IAsyncOperationWithProgress(_winrt.Object, typing.Generic[TResult, TProgress]):
    progress: typing.Optional[AsyncOperationProgressHandler[TResult, TProgress]]
    completed: typing.Optional[AsyncOperationWithProgressCompletedHandler[TResult, TProgress]]
    error_code: HResult
    id: _winrt.UInt32
    status: AsyncStatus
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __await__(self) -> typing.Generator[typing.Any, None, TResult]: ...
    def get_results(self) -> typing.Optional[TResult]: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...

class IAsyncOperation(_winrt.Object, typing.Generic[TResult]):
    completed: typing.Optional[AsyncOperationCompletedHandler[TResult]]
    error_code: HResult
    id: _winrt.UInt32
    status: AsyncStatus
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __await__(self) -> typing.Generator[typing.Any, None, TResult]: ...
    def get_results(self) -> typing.Optional[TResult]: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...

class IClosable(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IClosable: ...
    def close(self) -> None: ...

class IGetActivationFactory(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IGetActivationFactory: ...
    def get_activation_factory(self, activatable_class_id: str) -> typing.Optional[_winrt.Object]: ...

class IMemoryBuffer(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IMemoryBuffer: ...
    def create_reference(self) -> typing.Optional[IMemoryBufferReference]: ...
    def close(self) -> None: ...

class IMemoryBufferReference(_winrt.Object):
    capacity: _winrt.UInt32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __bytes__(self) -> bytes: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IMemoryBufferReference: ...
    def close(self) -> None: ...
    def add_closed(self, handler: TypedEventHandler[IMemoryBufferReference, _winrt.Object]) -> EventRegistrationToken: ...
    def remove_closed(self, cookie: EventRegistrationToken) -> None: ...

class IPropertyValue(_winrt.Object):
    is_numeric_scalar: _winrt.Boolean
    type: PropertyType
    @staticmethod
    def _from(obj: _winrt.Object) -> IPropertyValue: ...
    def get_boolean(self) -> _winrt.Boolean: ...
    def get_boolean_array(self) -> typing.List[_winrt.Boolean]: ...
    def get_char16(self) -> _winrt.Char16: ...
    def get_char16_array(self) -> typing.List[_winrt.Char16]: ...
    def get_date_time(self) -> DateTime: ...
    def get_date_time_array(self) -> typing.List[DateTime]: ...
    def get_double(self) -> _winrt.Double: ...
    def get_double_array(self) -> typing.List[_winrt.Double]: ...
    def get_guid(self) -> uuid.UUID: ...
    def get_guid_array(self) -> typing.List[uuid.UUID]: ...
    def get_inspectable_array(self) -> typing.List[_winrt.Object]: ...
    def get_int16(self) -> _winrt.Int16: ...
    def get_int16_array(self) -> typing.List[_winrt.Int16]: ...
    def get_int32(self) -> _winrt.Int32: ...
    def get_int32_array(self) -> typing.List[_winrt.Int32]: ...
    def get_int64(self) -> _winrt.Int64: ...
    def get_int64_array(self) -> typing.List[_winrt.Int64]: ...
    def get_point(self) -> Point: ...
    def get_point_array(self) -> typing.List[Point]: ...
    def get_rect(self) -> Rect: ...
    def get_rect_array(self) -> typing.List[Rect]: ...
    def get_single(self) -> _winrt.Single: ...
    def get_single_array(self) -> typing.List[_winrt.Single]: ...
    def get_size(self) -> Size: ...
    def get_size_array(self) -> typing.List[Size]: ...
    def get_string(self) -> str: ...
    def get_string_array(self) -> typing.List[str]: ...
    def get_time_span(self) -> TimeSpan: ...
    def get_time_span_array(self) -> typing.List[TimeSpan]: ...
    def get_uint16(self) -> _winrt.UInt16: ...
    def get_uint16_array(self) -> typing.List[_winrt.UInt16]: ...
    def get_uint32(self) -> _winrt.UInt32: ...
    def get_uint32_array(self) -> typing.List[_winrt.UInt32]: ...
    def get_uint64(self) -> _winrt.UInt64: ...
    def get_uint64_array(self) -> typing.List[_winrt.UInt64]: ...
    def get_uint8(self) -> _winrt.UInt8: ...
    def get_uint8_array(self) -> typing.List[_winrt.UInt8]: ...

class IReferenceArray(_winrt.Object, typing.Generic[T]):
    value: typing.Optional[T]
    is_numeric_scalar: _winrt.Boolean
    type: PropertyType
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def get_boolean(self) -> _winrt.Boolean: ...
    def get_boolean_array(self) -> typing.List[_winrt.Boolean]: ...
    def get_char16(self) -> _winrt.Char16: ...
    def get_char16_array(self) -> typing.List[_winrt.Char16]: ...
    def get_date_time(self) -> DateTime: ...
    def get_date_time_array(self) -> typing.List[DateTime]: ...
    def get_double(self) -> _winrt.Double: ...
    def get_double_array(self) -> typing.List[_winrt.Double]: ...
    def get_guid(self) -> uuid.UUID: ...
    def get_guid_array(self) -> typing.List[uuid.UUID]: ...
    def get_inspectable_array(self) -> typing.List[_winrt.Object]: ...
    def get_int16(self) -> _winrt.Int16: ...
    def get_int16_array(self) -> typing.List[_winrt.Int16]: ...
    def get_int32(self) -> _winrt.Int32: ...
    def get_int32_array(self) -> typing.List[_winrt.Int32]: ...
    def get_int64(self) -> _winrt.Int64: ...
    def get_int64_array(self) -> typing.List[_winrt.Int64]: ...
    def get_point(self) -> Point: ...
    def get_point_array(self) -> typing.List[Point]: ...
    def get_rect(self) -> Rect: ...
    def get_rect_array(self) -> typing.List[Rect]: ...
    def get_single(self) -> _winrt.Single: ...
    def get_single_array(self) -> typing.List[_winrt.Single]: ...
    def get_size(self) -> Size: ...
    def get_size_array(self) -> typing.List[Size]: ...
    def get_string(self) -> str: ...
    def get_string_array(self) -> typing.List[str]: ...
    def get_time_span(self) -> TimeSpan: ...
    def get_time_span_array(self) -> typing.List[TimeSpan]: ...
    def get_uint16(self) -> _winrt.UInt16: ...
    def get_uint16_array(self) -> typing.List[_winrt.UInt16]: ...
    def get_uint32(self) -> _winrt.UInt32: ...
    def get_uint32_array(self) -> typing.List[_winrt.UInt32]: ...
    def get_uint64(self) -> _winrt.UInt64: ...
    def get_uint64_array(self) -> typing.List[_winrt.UInt64]: ...
    def get_uint8(self) -> _winrt.UInt8: ...
    def get_uint8_array(self) -> typing.List[_winrt.UInt8]: ...

class IReference(_winrt.Object, typing.Generic[T]):
    value: typing.Optional[T]
    is_numeric_scalar: _winrt.Boolean
    type: PropertyType
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def get_boolean(self) -> _winrt.Boolean: ...
    def get_boolean_array(self) -> typing.List[_winrt.Boolean]: ...
    def get_char16(self) -> _winrt.Char16: ...
    def get_char16_array(self) -> typing.List[_winrt.Char16]: ...
    def get_date_time(self) -> DateTime: ...
    def get_date_time_array(self) -> typing.List[DateTime]: ...
    def get_double(self) -> _winrt.Double: ...
    def get_double_array(self) -> typing.List[_winrt.Double]: ...
    def get_guid(self) -> uuid.UUID: ...
    def get_guid_array(self) -> typing.List[uuid.UUID]: ...
    def get_inspectable_array(self) -> typing.List[_winrt.Object]: ...
    def get_int16(self) -> _winrt.Int16: ...
    def get_int16_array(self) -> typing.List[_winrt.Int16]: ...
    def get_int32(self) -> _winrt.Int32: ...
    def get_int32_array(self) -> typing.List[_winrt.Int32]: ...
    def get_int64(self) -> _winrt.Int64: ...
    def get_int64_array(self) -> typing.List[_winrt.Int64]: ...
    def get_point(self) -> Point: ...
    def get_point_array(self) -> typing.List[Point]: ...
    def get_rect(self) -> Rect: ...
    def get_rect_array(self) -> typing.List[Rect]: ...
    def get_single(self) -> _winrt.Single: ...
    def get_single_array(self) -> typing.List[_winrt.Single]: ...
    def get_size(self) -> Size: ...
    def get_size_array(self) -> typing.List[Size]: ...
    def get_string(self) -> str: ...
    def get_string_array(self) -> typing.List[str]: ...
    def get_time_span(self) -> TimeSpan: ...
    def get_time_span_array(self) -> typing.List[TimeSpan]: ...
    def get_uint16(self) -> _winrt.UInt16: ...
    def get_uint16_array(self) -> typing.List[_winrt.UInt16]: ...
    def get_uint32(self) -> _winrt.UInt32: ...
    def get_uint32_array(self) -> typing.List[_winrt.UInt32]: ...
    def get_uint64(self) -> _winrt.UInt64: ...
    def get_uint64_array(self) -> typing.List[_winrt.UInt64]: ...
    def get_uint8(self) -> _winrt.UInt8: ...
    def get_uint8_array(self) -> typing.List[_winrt.UInt8]: ...

class IStringable(_winrt.Object):
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IStringable: ...
    def to_string(self) -> str: ...

class IWwwFormUrlDecoderEntry(_winrt.Object):
    name: str
    value: str
    @staticmethod
    def _from(obj: _winrt.Object) -> IWwwFormUrlDecoderEntry: ...

AsyncActionCompletedHandler = typing.Callable[[typing.Optional[IAsyncAction], AsyncStatus], None]

AsyncActionProgressHandler = typing.Callable[[IAsyncActionWithProgress[TProgress], typing.Optional[TProgress]], None]

AsyncActionWithProgressCompletedHandler = typing.Callable[[IAsyncActionWithProgress[TProgress], AsyncStatus], None]

AsyncOperationCompletedHandler = typing.Callable[[IAsyncOperation[TResult], AsyncStatus], None]

AsyncOperationProgressHandler = typing.Callable[[IAsyncOperationWithProgress[TResult, TProgress], typing.Optional[TProgress]], None]

AsyncOperationWithProgressCompletedHandler = typing.Callable[[IAsyncOperationWithProgress[TResult, TProgress], AsyncStatus], None]

DeferralCompletedHandler = typing.Callable[[], None]

EventHandler = typing.Callable[[typing.Optional[_winrt.Object], typing.Optional[T]], None]

TypedEventHandler = typing.Callable[[typing.Optional[TSender], typing.Optional[TResult]], None]

