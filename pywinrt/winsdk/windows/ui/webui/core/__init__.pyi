# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.ui

class WebUICommandBarClosedDisplayMode(enum.IntEnum):
    DEFAULT = 0
    MINIMAL = 1
    COMPACT = 2

Self = typing.TypeVar('Self')

class WebUICommandBar(winsdk.system.Object):
    visible: winsdk.system.Boolean
    opacity: winsdk.system.Double
    is_open: winsdk.system.Boolean
    foreground_color: winsdk.windows.ui.Color
    closed_display_mode: WebUICommandBarClosedDisplayMode
    background_color: winsdk.windows.ui.Color
    primary_commands: typing.Optional[winsdk.windows.foundation.collections.IObservableVector[IWebUICommandBarElement]]
    secondary_commands: typing.Optional[winsdk.windows.foundation.collections.IObservableVector[IWebUICommandBarElement]]
    size: winsdk.windows.foundation.Size
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebUICommandBar: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[WebUICommandBar]: ...
    def add_menu_closed(self, handler: typing.Optional[MenuClosedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_menu_closed(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_menu_opened(self, handler: typing.Optional[MenuOpenedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_menu_opened(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_size_changed(self, handler: typing.Optional[SizeChangedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_size_changed(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebUICommandBarBitmapIcon(winsdk.system.Object):
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebUICommandBarBitmapIcon: ...
    @typing.overload
    def __new__(cls: typing.Type[WebUICommandBarBitmapIcon], uri: typing.Optional[winsdk.windows.foundation.Uri]) -> WebUICommandBarBitmapIcon:...
    @typing.overload
    def __new__(cls: typing.Type[WebUICommandBarBitmapIcon]) -> WebUICommandBarBitmapIcon:...

class WebUICommandBarConfirmationButton(winsdk.system.Object):
    text: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebUICommandBarConfirmationButton: ...
    def __new__(cls: typing.Type[WebUICommandBarConfirmationButton]) -> WebUICommandBarConfirmationButton:...
    def add_item_invoked(self, handler: winsdk.windows.foundation.TypedEventHandler[WebUICommandBarConfirmationButton, WebUICommandBarItemInvokedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_item_invoked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebUICommandBarIconButton(winsdk.system.Object):
    label: str
    is_toggle_button: winsdk.system.Boolean
    is_checked: winsdk.system.Boolean
    icon: typing.Optional[IWebUICommandBarIcon]
    enabled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebUICommandBarIconButton: ...
    def __new__(cls: typing.Type[WebUICommandBarIconButton]) -> WebUICommandBarIconButton:...
    def add_item_invoked(self, handler: winsdk.windows.foundation.TypedEventHandler[WebUICommandBarIconButton, WebUICommandBarItemInvokedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_item_invoked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebUICommandBarItemInvokedEventArgs(winsdk.system.Object):
    is_primary_command: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebUICommandBarItemInvokedEventArgs: ...

class WebUICommandBarSizeChangedEventArgs(winsdk.system.Object):
    size: winsdk.windows.foundation.Size
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebUICommandBarSizeChangedEventArgs: ...

class WebUICommandBarSymbolIcon(winsdk.system.Object):
    symbol: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebUICommandBarSymbolIcon: ...
    @typing.overload
    def __new__(cls: typing.Type[WebUICommandBarSymbolIcon], symbol: str) -> WebUICommandBarSymbolIcon:...
    @typing.overload
    def __new__(cls: typing.Type[WebUICommandBarSymbolIcon]) -> WebUICommandBarSymbolIcon:...

class IWebUICommandBarElement(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IWebUICommandBarElement: ...

class IWebUICommandBarIcon(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IWebUICommandBarIcon: ...

MenuClosedEventHandler = typing.Callable[[], None]

MenuOpenedEventHandler = typing.Callable[[], None]

SizeChangedEventHandler = typing.Callable[[typing.Optional[WebUICommandBarSizeChangedEventArgs]], None]

