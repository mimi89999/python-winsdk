# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.storage.streams

class CompressAlgorithm(enum.IntEnum):
    INVALID_ALGORITHM = 0
    NULL_ALGORITHM = 1
    MSZIP = 2
    XPRESS = 3
    XPRESS_HUFF = 4
    LZMS = 5

Self = typing.TypeVar('Self')

class Compressor(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Compressor: ...
    @typing.overload
    def __new__(cls: typing.Type[Compressor], underlying_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> Compressor:...
    @typing.overload
    def __new__(cls: typing.Type[Compressor], underlying_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream], algorithm: CompressAlgorithm, block_size: winsdk.system.UInt32) -> Compressor:...
    def close(self) -> None: ...
    def detach_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IOutputStream]: ...
    def finish_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def write_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class Decompressor(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Decompressor: ...
    def __new__(cls: typing.Type[Decompressor], underlying_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> Decompressor:...
    def close(self) -> None: ...
    def detach_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...
    def read_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], count: winsdk.system.UInt32, options: winsdk.windows.storage.streams.InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt32]: ...

