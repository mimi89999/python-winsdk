# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.graphics.imaging

Self = typing.TypeVar('Self')

class InkWorkspaceHostedAppManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> InkWorkspaceHostedAppManager: ...
    @staticmethod
    def get_for_current_app() -> typing.Optional[InkWorkspaceHostedAppManager]: ...
    def set_thumbnail_async(self, bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

