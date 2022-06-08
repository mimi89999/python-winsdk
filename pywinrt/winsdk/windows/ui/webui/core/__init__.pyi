# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.ui

class WebUICommandBarClosedDisplayMode(enum.IntEnum):
    DEFAULT = 0
    MINIMAL = 1
    COMPACT = 2

Self = typing.TypeVar('Self')

class WebUICommandBar(_winrt.Object):
    visible: _winrt.Boolean
    opacity: _winrt.Double
    is_open: _winrt.Boolean
    foreground_color: winsdk.windows.ui.Color
    closed_display_mode: WebUICommandBarClosedDisplayMode
    background_color: winsdk.windows.ui.Color
    primary_commands: typing.Optional[winsdk.windows.foundation.collections.IObservableVector[IWebUICommandBarElement]]
    secondary_commands: typing.Optional[winsdk.windows.foundation.collections.IObservableVector[IWebUICommandBarElement]]
    size: winsdk.windows.foundation.Size
    @staticmethod
    def _from(obj: _winrt.Object) -> WebUICommandBar: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[WebUICommandBar]: ...
    def add_menu_closed(self, handler: typing.Optional[MenuClosedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_menu_closed(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_menu_opened(self, handler: typing.Optional[MenuOpenedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_menu_opened(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_size_changed(self, handler: typing.Optional[SizeChangedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_size_changed(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebUICommandBarBitmapIcon(_winrt.Object):
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: _winrt.Object) -> WebUICommandBarBitmapIcon: ...
    @typing.overload
    def __init__(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...

class WebUICommandBarConfirmationButton(_winrt.Object):
    text: str
    @staticmethod
    def _from(obj: _winrt.Object) -> WebUICommandBarConfirmationButton: ...
    def __init__(self) -> None: ...
    def add_item_invoked(self, handler: winsdk.windows.foundation.TypedEventHandler[WebUICommandBarConfirmationButton, WebUICommandBarItemInvokedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_item_invoked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebUICommandBarIconButton(_winrt.Object):
    label: str
    is_toggle_button: _winrt.Boolean
    is_checked: _winrt.Boolean
    icon: typing.Optional[IWebUICommandBarIcon]
    enabled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> WebUICommandBarIconButton: ...
    def __init__(self) -> None: ...
    def add_item_invoked(self, handler: winsdk.windows.foundation.TypedEventHandler[WebUICommandBarIconButton, WebUICommandBarItemInvokedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_item_invoked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebUICommandBarItemInvokedEventArgs(_winrt.Object):
    is_primary_command: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> WebUICommandBarItemInvokedEventArgs: ...

class WebUICommandBarSizeChangedEventArgs(_winrt.Object):
    size: winsdk.windows.foundation.Size
    @staticmethod
    def _from(obj: _winrt.Object) -> WebUICommandBarSizeChangedEventArgs: ...

class WebUICommandBarSymbolIcon(_winrt.Object):
    symbol: str
    @staticmethod
    def _from(obj: _winrt.Object) -> WebUICommandBarSymbolIcon: ...
    @typing.overload
    def __init__(self, symbol: str) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...

class IWebUICommandBarElement(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IWebUICommandBarElement: ...

class IWebUICommandBarIcon(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IWebUICommandBarIcon: ...

MenuClosedEventHandler = typing.Callable[[], None]

MenuOpenedEventHandler = typing.Callable[[], None]

SizeChangedEventHandler = typing.Callable[[typing.Optional[WebUICommandBarSizeChangedEventArgs]], None]

