# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Graphics.DirectX.Direct3D11")

try:
    import winsdk.windows.graphics.directx
except ImportError:
    pass

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

_ns_module._register_Direct3DBindings(Direct3DBindings)
_ns_module._register_Direct3DUsage(Direct3DUsage)

Direct3DMultisampleDescription = _ns_module.Direct3DMultisampleDescription
Direct3DSurfaceDescription = _ns_module.Direct3DSurfaceDescription
IDirect3DDevice = _ns_module.IDirect3DDevice
IDirect3DSurface = _ns_module.IDirect3DSurface
