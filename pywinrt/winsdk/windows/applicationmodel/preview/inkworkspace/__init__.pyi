# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.graphics.imaging

Self = typing.TypeVar('Self')

class InkWorkspaceHostedAppManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InkWorkspaceHostedAppManager: ...
    @staticmethod
    def get_for_current_app() -> typing.Optional[InkWorkspaceHostedAppManager]: ...
    def set_thumbnail_async(self, bitmap: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]) -> winsdk.windows.foundation.IAsyncAction: ...

