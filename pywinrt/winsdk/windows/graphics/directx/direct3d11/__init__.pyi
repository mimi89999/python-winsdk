# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.graphics.directx

class Direct3DBindings(enum.IntFlag):
    VERTEX_BUFFER = 0x1
    INDEX_BUFFER = 0x2
    CONSTANT_BUFFER = 0x4
    SHADER_RESOURCE = 0x8
    STREAM_OUTPUT = 0x10
    RENDER_TARGET = 0x20
    DEPTH_STENCIL = 0x40
    UNORDERED_ACCESS = 0x80
    DECODER = 0x200
    VIDEO_ENCODER = 0x400

class Direct3DUsage(enum.IntEnum):
    DEFAULT = 0
    IMMUTABLE = 1
    DYNAMIC = 2
    STAGING = 3

Self = typing.TypeVar('Self')

class Direct3DMultisampleDescription:
    count: winsdk.system.Int32
    quality: winsdk.system.Int32
    def __new__(cls: typing.Type[Direct3DMultisampleDescription], count: winsdk.system.Int32, quality: winsdk.system.Int32) -> Direct3DMultisampleDescription: ...

class Direct3DSurfaceDescription:
    width: winsdk.system.Int32
    height: winsdk.system.Int32
    format: winsdk.windows.graphics.directx.DirectXPixelFormat
    multisample_description: Direct3DMultisampleDescription
    def __new__(cls: typing.Type[Direct3DSurfaceDescription], width: winsdk.system.Int32, height: winsdk.system.Int32, format: winsdk.windows.graphics.directx.DirectXPixelFormat, multisample_description: Direct3DMultisampleDescription) -> Direct3DSurfaceDescription: ...

class IDirect3DDevice(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IDirect3DDevice: ...
    def close(self) -> None: ...
    def trim(self) -> None: ...

class IDirect3DSurface(winsdk.system.Object):
    description: Direct3DSurfaceDescription
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IDirect3DSurface: ...
    def close(self) -> None: ...

