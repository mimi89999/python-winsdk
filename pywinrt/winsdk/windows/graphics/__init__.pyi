# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing

import winsdk.system

Self = typing.TypeVar('Self')

class DisplayAdapterId:
    low_part: winsdk.system.UInt32
    high_part: winsdk.system.Int32
    def __new__(cls: typing.Type[DisplayAdapterId], low_part: winsdk.system.UInt32, high_part: winsdk.system.Int32) -> DisplayAdapterId: ...

class DisplayId:
    value: winsdk.system.UInt64
    def __new__(cls: typing.Type[DisplayId], value: winsdk.system.UInt64) -> DisplayId: ...

class PointInt32:
    x: winsdk.system.Int32
    y: winsdk.system.Int32
    def __new__(cls: typing.Type[PointInt32], x: winsdk.system.Int32, y: winsdk.system.Int32) -> PointInt32: ...

class RectInt32:
    x: winsdk.system.Int32
    y: winsdk.system.Int32
    width: winsdk.system.Int32
    height: winsdk.system.Int32
    def __new__(cls: typing.Type[RectInt32], x: winsdk.system.Int32, y: winsdk.system.Int32, width: winsdk.system.Int32, height: winsdk.system.Int32) -> RectInt32: ...

class SizeInt32:
    width: winsdk.system.Int32
    height: winsdk.system.Int32
    def __new__(cls: typing.Type[SizeInt32], width: winsdk.system.Int32, height: winsdk.system.Int32) -> SizeInt32: ...

class IGeometrySource2D(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IGeometrySource2D: ...

