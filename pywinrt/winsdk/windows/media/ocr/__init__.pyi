# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.globalization
import winsdk.windows.graphics.imaging

Self = typing.TypeVar('Self')

class OcrEngine(winsdk.system.Object):
    recognizer_language: typing.Optional[winsdk.windows.globalization.Language]
    available_recognizer_languages: typing.ClassVar[typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.globalization.Language]]]
    max_image_dimension: typing.ClassVar[winsdk.system.UInt32]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OcrEngine: ...
    @staticmethod
    def is_language_supported(language: typing.Optional[winsdk.windows.globalization.Language]) -> winsdk.system.Boolean: ...
    def recognize_async(self, bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]) -> winsdk.windows.foundation.IAsyncOperation[OcrResult]: ...
    @staticmethod
    def try_create_from_language(language: typing.Optional[winsdk.windows.globalization.Language]) -> typing.Optional[OcrEngine]: ...
    @staticmethod
    def try_create_from_user_profile_languages() -> typing.Optional[OcrEngine]: ...

class OcrLine(winsdk.system.Object):
    text: str
    words: typing.Optional[winsdk.windows.foundation.collections.IVectorView[OcrWord]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OcrLine: ...

class OcrResult(winsdk.system.Object):
    lines: typing.Optional[winsdk.windows.foundation.collections.IVectorView[OcrLine]]
    text: str
    text_angle: typing.Optional[typing.Optional[winsdk.system.Double]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OcrResult: ...

class OcrWord(winsdk.system.Object):
    bounding_rect: winsdk.windows.foundation.Rect
    text: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OcrWord: ...

