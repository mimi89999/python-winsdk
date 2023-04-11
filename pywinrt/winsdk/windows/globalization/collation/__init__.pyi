# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation.collections

Self = typing.TypeVar('Self')

class CharacterGrouping(winsdk.system.Object):
    first: str
    label: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CharacterGrouping: ...

class CharacterGroupings(winsdk.system.Object, typing.Sequence[CharacterGrouping]):
    size: winsdk.system.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> CharacterGrouping: ...
    @typing.overload
    def __getitem__(self, index: slice) -> winsdk.system.Array[CharacterGrouping]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CharacterGroupings: ...
    @typing.overload
    def __new__(cls: typing.Type[CharacterGroupings], language: str) -> CharacterGroupings:...
    @typing.overload
    def __new__(cls: typing.Type[CharacterGroupings]) -> CharacterGroupings:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[CharacterGrouping]]: ...
    def get_at(self, index: winsdk.system.UInt32) -> typing.Optional[CharacterGrouping]: ...
    def get_many(self, start_index: winsdk.system.UInt32, items: winsdk.system.Array[CharacterGrouping]) -> winsdk.system.UInt32: ...
    def index_of(self, value: typing.Optional[CharacterGrouping]) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt32]: ...
    def lookup(self, text: str) -> str: ...

