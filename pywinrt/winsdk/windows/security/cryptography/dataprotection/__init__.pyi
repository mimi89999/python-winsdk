# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.storage.streams

Self = typing.TypeVar('Self')

class DataProtectionProvider(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DataProtectionProvider: ...
    @typing.overload
    def __new__(cls: typing.Type[DataProtectionProvider], protection_descriptor: str) -> DataProtectionProvider:...
    @typing.overload
    def __new__(cls: typing.Type[DataProtectionProvider]) -> DataProtectionProvider:...
    def protect_async(self, data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    def protect_stream_async(self, src: typing.Optional[winsdk.windows.storage.streams.IInputStream], dest: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncAction: ...
    def unprotect_async(self, data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    def unprotect_stream_async(self, src: typing.Optional[winsdk.windows.storage.streams.IInputStream], dest: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncAction: ...

