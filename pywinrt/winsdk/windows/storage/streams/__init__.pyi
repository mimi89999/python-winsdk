# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage
import winsdk.windows.system

class ByteOrder(enum.IntEnum):
    LITTLE_ENDIAN = 0
    BIG_ENDIAN = 1

class FileOpenDisposition(enum.IntEnum):
    OPEN_EXISTING = 0
    OPEN_ALWAYS = 1
    CREATE_NEW = 2
    CREATE_ALWAYS = 3
    TRUNCATE_EXISTING = 4

class InputStreamOptions(enum.IntFlag):
    NONE = 0
    PARTIAL = 0x1
    READ_AHEAD = 0x2

class UnicodeEncoding(enum.IntEnum):
    UTF8 = 0
    UTF16_L_E = 1
    UTF16_B_E = 2

Self = typing.TypeVar('Self')

class Buffer(_winrt.Object):
    length: _winrt.UInt32
    capacity: _winrt.UInt32
    def __bytes__(self) -> bytes: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> Buffer: ...
    def __new__(cls: typing.Type[Buffer], capacity: _winrt.UInt32) -> Buffer:...
    @staticmethod
    def create_copy_from_memory_buffer(input: typing.Optional[winsdk.windows.foundation.IMemoryBuffer]) -> typing.Optional[Buffer]: ...
    @staticmethod
    def create_memory_buffer_over_i_buffer(input: typing.Optional[IBuffer]) -> typing.Optional[winsdk.windows.foundation.MemoryBuffer]: ...

class DataReader(_winrt.Object):
    unicode_encoding: UnicodeEncoding
    input_stream_options: InputStreamOptions
    byte_order: ByteOrder
    unconsumed_buffer_length: _winrt.UInt32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> DataReader: ...
    def __new__(cls: typing.Type[DataReader], input_stream: typing.Optional[IInputStream]) -> DataReader:...
    def close(self) -> None: ...
    def detach_buffer(self) -> typing.Optional[IBuffer]: ...
    def detach_stream(self) -> typing.Optional[IInputStream]: ...
    @staticmethod
    def from_buffer(buffer: typing.Optional[IBuffer]) -> typing.Optional[DataReader]: ...
    def load_async(self, count: _winrt.UInt32) -> typing.Optional[DataReaderLoadOperation]: ...
    def read_boolean(self) -> _winrt.Boolean: ...
    def read_buffer(self, length: _winrt.UInt32) -> typing.Optional[IBuffer]: ...
    def read_byte(self) -> _winrt.UInt8: ...
    def read_bytes(self, value_size: _winrt.UInt32) -> typing.List[_winrt.UInt8]: ...
    def read_date_time(self) -> datetime.datetime: ...
    def read_double(self) -> _winrt.Double: ...
    def read_guid(self) -> _winrt.Guid: ...
    def read_int16(self) -> _winrt.Int16: ...
    def read_int32(self) -> _winrt.Int32: ...
    def read_int64(self) -> _winrt.Int64: ...
    def read_single(self) -> _winrt.Single: ...
    def read_string(self, code_unit_count: _winrt.UInt32) -> str: ...
    def read_time_span(self) -> datetime.timedelta: ...
    def read_uint16(self) -> _winrt.UInt16: ...
    def read_uint32(self) -> _winrt.UInt32: ...
    def read_uint64(self) -> _winrt.UInt64: ...

class DataReaderLoadOperation(_winrt.Object):
    error_code: winsdk.windows.foundation.HResult
    id: _winrt.UInt32
    status: winsdk.windows.foundation.AsyncStatus
    completed: typing.Optional[winsdk.windows.foundation.AsyncOperationCompletedHandler[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> DataReaderLoadOperation: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...
    def get_results(self) -> _winrt.UInt32: ...

class DataWriter(_winrt.Object):
    unicode_encoding: UnicodeEncoding
    byte_order: ByteOrder
    unstored_buffer_length: _winrt.UInt32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> DataWriter: ...
    @typing.overload
    def __new__(cls: typing.Type[DataWriter], output_stream: typing.Optional[IOutputStream]) -> DataWriter:...
    @typing.overload
    def __new__(cls: typing.Type[DataWriter]) -> DataWriter:...
    def close(self) -> None: ...
    def detach_buffer(self) -> typing.Optional[IBuffer]: ...
    def detach_stream(self) -> typing.Optional[IOutputStream]: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def measure_string(self, value: str) -> _winrt.UInt32: ...
    def store_async(self) -> typing.Optional[DataWriterStoreOperation]: ...
    def write_boolean(self, value: _winrt.Boolean) -> None: ...
    @typing.overload
    def write_buffer(self, buffer: typing.Optional[IBuffer]) -> None: ...
    @typing.overload
    def write_buffer(self, buffer: typing.Optional[IBuffer], start: _winrt.UInt32, count: _winrt.UInt32) -> None: ...
    def write_byte(self, value: _winrt.UInt8) -> None: ...
    def write_bytes(self, value: typing.Sequence[_winrt.UInt8]) -> None: ...
    def write_date_time(self, value: datetime.datetime) -> None: ...
    def write_double(self, value: _winrt.Double) -> None: ...
    def write_guid(self, value: _winrt.Guid) -> None: ...
    def write_int16(self, value: _winrt.Int16) -> None: ...
    def write_int32(self, value: _winrt.Int32) -> None: ...
    def write_int64(self, value: _winrt.Int64) -> None: ...
    def write_single(self, value: _winrt.Single) -> None: ...
    def write_string(self, value: str) -> _winrt.UInt32: ...
    def write_time_span(self, value: datetime.timedelta) -> None: ...
    def write_uint16(self, value: _winrt.UInt16) -> None: ...
    def write_uint32(self, value: _winrt.UInt32) -> None: ...
    def write_uint64(self, value: _winrt.UInt64) -> None: ...

class DataWriterStoreOperation(_winrt.Object):
    error_code: winsdk.windows.foundation.HResult
    id: _winrt.UInt32
    status: winsdk.windows.foundation.AsyncStatus
    completed: typing.Optional[winsdk.windows.foundation.AsyncOperationCompletedHandler[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> DataWriterStoreOperation: ...
    def cancel(self) -> None: ...
    def close(self) -> None: ...
    def get_results(self) -> _winrt.UInt32: ...

class FileInputStream(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> FileInputStream: ...
    def close(self) -> None: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: _winrt.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, _winrt.UInt32]: ...

class FileOutputStream(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> FileOutputStream: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class FileRandomAccessStream(_winrt.Object):
    size: _winrt.UInt64
    can_read: _winrt.Boolean
    can_write: _winrt.Boolean
    position: _winrt.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> FileRandomAccessStream: ...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def get_input_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IOutputStream]: ...
    @typing.overload
    @staticmethod
    def open_async(file_path: str, access_mode: winsdk.windows.storage.FileAccessMode) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStream]: ...
    @typing.overload
    @staticmethod
    def open_async(file_path: str, access_mode: winsdk.windows.storage.FileAccessMode, sharing_options: winsdk.windows.storage.StorageOpenOptions, open_disposition: FileOpenDisposition) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStream]: ...
    @typing.overload
    @staticmethod
    def open_for_user_async(user: typing.Optional[winsdk.windows.system.User], file_path: str, access_mode: winsdk.windows.storage.FileAccessMode) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStream]: ...
    @typing.overload
    @staticmethod
    def open_for_user_async(user: typing.Optional[winsdk.windows.system.User], file_path: str, access_mode: winsdk.windows.storage.FileAccessMode, sharing_options: winsdk.windows.storage.StorageOpenOptions, open_disposition: FileOpenDisposition) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStream]: ...
    @typing.overload
    @staticmethod
    def open_transacted_write_async(file_path: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageStreamTransaction]: ...
    @typing.overload
    @staticmethod
    def open_transacted_write_async(file_path: str, open_options: winsdk.windows.storage.StorageOpenOptions, open_disposition: FileOpenDisposition) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageStreamTransaction]: ...
    @typing.overload
    @staticmethod
    def open_transacted_write_for_user_async(user: typing.Optional[winsdk.windows.system.User], file_path: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageStreamTransaction]: ...
    @typing.overload
    @staticmethod
    def open_transacted_write_for_user_async(user: typing.Optional[winsdk.windows.system.User], file_path: str, open_options: winsdk.windows.storage.StorageOpenOptions, open_disposition: FileOpenDisposition) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageStreamTransaction]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: _winrt.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, _winrt.UInt32]: ...
    def seek(self, position: _winrt.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class InMemoryRandomAccessStream(_winrt.Object):
    size: _winrt.UInt64
    can_read: _winrt.Boolean
    can_write: _winrt.Boolean
    position: _winrt.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> InMemoryRandomAccessStream: ...
    def __new__(cls: typing.Type[InMemoryRandomAccessStream]) -> InMemoryRandomAccessStream:...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def get_input_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: _winrt.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, _winrt.UInt32]: ...
    def seek(self, position: _winrt.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class InputStreamOverStream(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> InputStreamOverStream: ...
    def close(self) -> None: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: _winrt.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, _winrt.UInt32]: ...

class OutputStreamOverStream(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> OutputStreamOverStream: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class RandomAccessStream(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> RandomAccessStream: ...
    @staticmethod
    def copy_and_close_async(source: typing.Optional[IInputStream], destination: typing.Optional[IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt64, _winrt.UInt64]: ...
    @typing.overload
    @staticmethod
    def copy_async(source: typing.Optional[IInputStream], destination: typing.Optional[IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt64, _winrt.UInt64]: ...
    @typing.overload
    @staticmethod
    def copy_async(source: typing.Optional[IInputStream], destination: typing.Optional[IOutputStream], bytes_to_copy: _winrt.UInt64) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt64, _winrt.UInt64]: ...

class RandomAccessStreamOverStream(_winrt.Object):
    size: _winrt.UInt64
    can_read: _winrt.Boolean
    can_write: _winrt.Boolean
    position: _winrt.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> RandomAccessStreamOverStream: ...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def get_input_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: _winrt.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, _winrt.UInt32]: ...
    def seek(self, position: _winrt.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class RandomAccessStreamReference(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> RandomAccessStreamReference: ...
    @staticmethod
    def create_from_file(file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[RandomAccessStreamReference]: ...
    @staticmethod
    def create_from_stream(stream: typing.Optional[IRandomAccessStream]) -> typing.Optional[RandomAccessStreamReference]: ...
    @staticmethod
    def create_from_uri(uri: typing.Optional[winsdk.windows.foundation.Uri]) -> typing.Optional[RandomAccessStreamReference]: ...
    def open_read_async(self) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStreamWithContentType]: ...

class IBuffer(_winrt.Object):
    capacity: _winrt.UInt32
    length: _winrt.UInt32
    def __bytes__(self) -> bytes: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IBuffer: ...

class IContentTypeProvider(_winrt.Object):
    content_type: str
    @staticmethod
    def _from(obj: _winrt.Object) -> IContentTypeProvider: ...

class IDataReader(_winrt.Object):
    byte_order: ByteOrder
    input_stream_options: InputStreamOptions
    unconsumed_buffer_length: _winrt.UInt32
    unicode_encoding: UnicodeEncoding
    @staticmethod
    def _from(obj: _winrt.Object) -> IDataReader: ...
    def detach_buffer(self) -> typing.Optional[IBuffer]: ...
    def detach_stream(self) -> typing.Optional[IInputStream]: ...
    def load_async(self, count: _winrt.UInt32) -> typing.Optional[DataReaderLoadOperation]: ...
    def read_boolean(self) -> _winrt.Boolean: ...
    def read_buffer(self, length: _winrt.UInt32) -> typing.Optional[IBuffer]: ...
    def read_byte(self) -> _winrt.UInt8: ...
    def read_bytes(self, value_size: _winrt.UInt32) -> typing.List[_winrt.UInt8]: ...
    def read_date_time(self) -> datetime.datetime: ...
    def read_double(self) -> _winrt.Double: ...
    def read_guid(self) -> _winrt.Guid: ...
    def read_int16(self) -> _winrt.Int16: ...
    def read_int32(self) -> _winrt.Int32: ...
    def read_int64(self) -> _winrt.Int64: ...
    def read_single(self) -> _winrt.Single: ...
    def read_string(self, code_unit_count: _winrt.UInt32) -> str: ...
    def read_time_span(self) -> datetime.timedelta: ...
    def read_uint16(self) -> _winrt.UInt16: ...
    def read_uint32(self) -> _winrt.UInt32: ...
    def read_uint64(self) -> _winrt.UInt64: ...

class IDataWriter(_winrt.Object):
    byte_order: ByteOrder
    unicode_encoding: UnicodeEncoding
    unstored_buffer_length: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> IDataWriter: ...
    def detach_buffer(self) -> typing.Optional[IBuffer]: ...
    def detach_stream(self) -> typing.Optional[IOutputStream]: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def measure_string(self, value: str) -> _winrt.UInt32: ...
    def store_async(self) -> typing.Optional[DataWriterStoreOperation]: ...
    def write_boolean(self, value: _winrt.Boolean) -> None: ...
    @typing.overload
    def write_buffer(self, buffer: typing.Optional[IBuffer]) -> None: ...
    @typing.overload
    def write_buffer(self, buffer: typing.Optional[IBuffer], start: _winrt.UInt32, count: _winrt.UInt32) -> None: ...
    def write_byte(self, value: _winrt.UInt8) -> None: ...
    def write_bytes(self, value: typing.Sequence[_winrt.UInt8]) -> None: ...
    def write_date_time(self, value: datetime.datetime) -> None: ...
    def write_double(self, value: _winrt.Double) -> None: ...
    def write_guid(self, value: _winrt.Guid) -> None: ...
    def write_int16(self, value: _winrt.Int16) -> None: ...
    def write_int32(self, value: _winrt.Int32) -> None: ...
    def write_int64(self, value: _winrt.Int64) -> None: ...
    def write_single(self, value: _winrt.Single) -> None: ...
    def write_string(self, value: str) -> _winrt.UInt32: ...
    def write_time_span(self, value: datetime.timedelta) -> None: ...
    def write_uint16(self, value: _winrt.UInt16) -> None: ...
    def write_uint32(self, value: _winrt.UInt32) -> None: ...
    def write_uint64(self, value: _winrt.UInt64) -> None: ...

class IInputStream(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IInputStream: ...
    def close(self) -> None: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: _winrt.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, _winrt.UInt32]: ...

class IInputStreamReference(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IInputStreamReference: ...
    def open_sequential_read_async(self) -> winsdk.windows.foundation.IAsyncOperation[IInputStream]: ...

class IOutputStream(_winrt.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IOutputStream: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class IPropertySetSerializer(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IPropertySetSerializer: ...
    def deserialize(self, property_set: typing.Optional[winsdk.windows.foundation.collections.IPropertySet], buffer: typing.Optional[IBuffer]) -> None: ...
    def serialize(self, property_set: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> typing.Optional[IBuffer]: ...

class IRandomAccessStream(_winrt.Object):
    can_read: _winrt.Boolean
    can_write: _winrt.Boolean
    position: _winrt.UInt64
    size: _winrt.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IRandomAccessStream: ...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def get_input_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: _winrt.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, _winrt.UInt32]: ...
    def seek(self, position: _winrt.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class IRandomAccessStreamReference(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IRandomAccessStreamReference: ...
    def open_read_async(self) -> winsdk.windows.foundation.IAsyncOperation[IRandomAccessStreamWithContentType]: ...

class IRandomAccessStreamWithContentType(_winrt.Object):
    can_read: _winrt.Boolean
    can_write: _winrt.Boolean
    position: _winrt.UInt64
    size: _winrt.UInt64
    content_type: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IRandomAccessStreamWithContentType: ...
    def clone_stream(self) -> typing.Optional[IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def get_input_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IInputStream]: ...
    def get_output_stream_at(self, position: _winrt.UInt64) -> typing.Optional[IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[IBuffer], count: _winrt.UInt32, options: InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[IBuffer, _winrt.UInt32]: ...
    def seek(self, position: _winrt.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

