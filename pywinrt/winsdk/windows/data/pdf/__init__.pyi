# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.storage
import winsdk.windows.storage.streams
import winsdk.windows.ui

class PdfPageRotation(enum.IntEnum):
    NORMAL = 0
    ROTATE90 = 1
    ROTATE180 = 2
    ROTATE270 = 3

Self = typing.TypeVar('Self')

class PdfDocument(winsdk.system.Object):
    is_password_protected: winsdk.system.Boolean
    page_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PdfDocument: ...
    def get_page(self, page_index: winsdk.system.UInt32) -> typing.Optional[PdfPage]: ...
    @typing.overload
    @staticmethod
    def load_from_file_async(file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> winsdk.windows.foundation.IAsyncOperation[PdfDocument]: ...
    @typing.overload
    @staticmethod
    def load_from_file_async(file: typing.Optional[winsdk.windows.storage.IStorageFile], password: str) -> winsdk.windows.foundation.IAsyncOperation[PdfDocument]: ...
    @typing.overload
    @staticmethod
    def load_from_stream_async(input_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> winsdk.windows.foundation.IAsyncOperation[PdfDocument]: ...
    @typing.overload
    @staticmethod
    def load_from_stream_async(input_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream], password: str) -> winsdk.windows.foundation.IAsyncOperation[PdfDocument]: ...

class PdfPage(winsdk.system.Object):
    dimensions: typing.Optional[PdfPageDimensions]
    index: winsdk.system.UInt32
    preferred_zoom: winsdk.system.Single
    rotation: PdfPageRotation
    size: winsdk.windows.foundation.Size
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PdfPage: ...
    def close(self) -> None: ...
    def prepare_page_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def render_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def render_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream], options: typing.Optional[PdfPageRenderOptions]) -> winsdk.windows.foundation.IAsyncAction: ...

class PdfPageDimensions(winsdk.system.Object):
    art_box: winsdk.windows.foundation.Rect
    bleed_box: winsdk.windows.foundation.Rect
    crop_box: winsdk.windows.foundation.Rect
    media_box: winsdk.windows.foundation.Rect
    trim_box: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PdfPageDimensions: ...

class PdfPageRenderOptions(winsdk.system.Object):
    source_rect: winsdk.windows.foundation.Rect
    is_ignoring_high_contrast: winsdk.system.Boolean
    destination_width: winsdk.system.UInt32
    destination_height: winsdk.system.UInt32
    bitmap_encoder_id: winsdk.system.Guid
    background_color: winsdk.windows.ui.Color
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PdfPageRenderOptions: ...
    def __new__(cls: typing.Type[PdfPageRenderOptions]) -> PdfPageRenderOptions:...

