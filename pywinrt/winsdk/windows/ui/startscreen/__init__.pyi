# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.core
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.perception.spatial
import winsdk.windows.system
import winsdk.windows.ui
import winsdk.windows.ui.popups

class ForegroundText(enum.IntEnum):
    DARK = 0
    LIGHT = 1

class JumpListItemKind(enum.IntEnum):
    ARGUMENTS = 0
    SEPARATOR = 1

class JumpListSystemGroupKind(enum.IntEnum):
    NONE = 0
    FREQUENT = 1
    RECENT = 2

class TileMixedRealityModelActivationBehavior(enum.IntEnum):
    DEFAULT = 0
    NONE = 1

class TileOptions(enum.IntFlag):
    NONE = 0
    SHOW_NAME_ON_LOGO = 0x1
    SHOW_NAME_ON_WIDE_LOGO = 0x2
    COPY_ON_DEPLOYMENT = 0x4

class TileSize(enum.IntEnum):
    DEFAULT = 0
    SQUARE30X30 = 1
    SQUARE70X70 = 2
    SQUARE150X150 = 3
    WIDE310X150 = 4
    SQUARE310X310 = 5
    SQUARE71X71 = 6
    SQUARE44X44 = 7

Self = typing.TypeVar('Self')

class JumpList(winsdk.system.Object):
    system_group_kind: JumpListSystemGroupKind
    items: typing.Optional[winsdk.windows.foundation.collections.IVector[JumpListItem]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> JumpList: ...
    @staticmethod
    def is_supported() -> winsdk.system.Boolean: ...
    @staticmethod
    def load_current_async() -> winsdk.windows.foundation.IAsyncOperation[JumpList]: ...
    def save_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class JumpListItem(winsdk.system.Object):
    logo: typing.Optional[winsdk.windows.foundation.Uri]
    group_name: str
    display_name: str
    description: str
    arguments: str
    kind: JumpListItemKind
    removed_by_user: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> JumpListItem: ...
    @staticmethod
    def create_separator() -> typing.Optional[JumpListItem]: ...
    @staticmethod
    def create_with_arguments(arguments: str, display_name: str) -> typing.Optional[JumpListItem]: ...

class SecondaryTile(winsdk.system.Object):
    short_name: str
    logo: typing.Optional[winsdk.windows.foundation.Uri]
    tile_id: str
    lock_screen_display_badge_and_tile_text: winsdk.system.Boolean
    lock_screen_badge_logo: typing.Optional[winsdk.windows.foundation.Uri]
    arguments: str
    foreground_text: ForegroundText
    display_name: str
    background_color: winsdk.windows.ui.Color
    wide_logo: typing.Optional[winsdk.windows.foundation.Uri]
    tile_options: TileOptions
    small_logo: typing.Optional[winsdk.windows.foundation.Uri]
    roaming_enabled: winsdk.system.Boolean
    phonetic_name: str
    visual_elements: typing.Optional[SecondaryTileVisualElements]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SecondaryTile: ...
    @typing.overload
    def __new__(cls: typing.Type[SecondaryTile], tile_id: str, display_name: str, arguments: str, square150x150_logo: typing.Optional[winsdk.windows.foundation.Uri], desired_size: TileSize) -> SecondaryTile:...
    @typing.overload
    def __new__(cls: typing.Type[SecondaryTile], tile_id: str, short_name: str, display_name: str, arguments: str, tile_options: TileOptions, logo_reference: typing.Optional[winsdk.windows.foundation.Uri]) -> SecondaryTile:...
    @typing.overload
    def __new__(cls: typing.Type[SecondaryTile], tile_id: str, short_name: str, display_name: str, arguments: str, tile_options: TileOptions, logo_reference: typing.Optional[winsdk.windows.foundation.Uri], wide_logo_reference: typing.Optional[winsdk.windows.foundation.Uri]) -> SecondaryTile:...
    @typing.overload
    def __new__(cls: typing.Type[SecondaryTile], tile_id: str) -> SecondaryTile:...
    @typing.overload
    def __new__(cls: typing.Type[SecondaryTile]) -> SecondaryTile:...
    @staticmethod
    def exists(tile_id: str) -> winsdk.system.Boolean: ...
    @typing.overload
    @staticmethod
    def find_all_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[SecondaryTile]]: ...
    @typing.overload
    @staticmethod
    def find_all_async(application_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[SecondaryTile]]: ...
    @staticmethod
    def find_all_for_package_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[SecondaryTile]]: ...
    @typing.overload
    def request_create_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def request_create_async(self, invocation_point: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def request_create_for_selection_async(self, selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def request_create_for_selection_async(self, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def request_delete_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def request_delete_async(self, invocation_point: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def request_delete_for_selection_async(self, selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def request_delete_for_selection_async(self, selection: winsdk.windows.foundation.Rect, preferred_placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def update_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def add_visual_elements_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[SecondaryTile, VisualElementsRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_visual_elements_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SecondaryTileVisualElements(winsdk.system.Object):
    square150x150_logo: typing.Optional[winsdk.windows.foundation.Uri]
    show_name_on_wide310x150_logo: winsdk.system.Boolean
    show_name_on_square310x310_logo: winsdk.system.Boolean
    show_name_on_square150x150_logo: winsdk.system.Boolean
    foreground_text: ForegroundText
    background_color: winsdk.windows.ui.Color
    wide310x150_logo: typing.Optional[winsdk.windows.foundation.Uri]
    square70x70_logo: typing.Optional[winsdk.windows.foundation.Uri]
    square310x310_logo: typing.Optional[winsdk.windows.foundation.Uri]
    square30x30_logo: typing.Optional[winsdk.windows.foundation.Uri]
    square71x71_logo: typing.Optional[winsdk.windows.foundation.Uri]
    square44x44_logo: typing.Optional[winsdk.windows.foundation.Uri]
    mixed_reality_model: typing.Optional[TileMixedRealityModel]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SecondaryTileVisualElements: ...

class StartScreenManager(winsdk.system.Object):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> StartScreenManager: ...
    def contains_app_list_entry_async(self, app_list_entry: typing.Optional[winsdk.windows.applicationmodel.core.AppListEntry]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def contains_secondary_tile_async(self, tile_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @staticmethod
    def get_default() -> typing.Optional[StartScreenManager]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[StartScreenManager]: ...
    def request_add_app_list_entry_async(self, app_list_entry: typing.Optional[winsdk.windows.applicationmodel.core.AppListEntry]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def supports_app_list_entry(self, app_list_entry: typing.Optional[winsdk.windows.applicationmodel.core.AppListEntry]) -> winsdk.system.Boolean: ...
    def try_remove_secondary_tile_async(self, tile_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class TileMixedRealityModel(winsdk.system.Object):
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    bounding_box: typing.Optional[typing.Optional[winsdk.windows.perception.spatial.SpatialBoundingBox]]
    activation_behavior: TileMixedRealityModelActivationBehavior
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TileMixedRealityModel: ...

class VisualElementsRequest(winsdk.system.Object):
    alternate_visual_elements: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SecondaryTileVisualElements]]
    deadline: datetime.datetime
    visual_elements: typing.Optional[SecondaryTileVisualElements]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VisualElementsRequest: ...
    def get_deferral(self) -> typing.Optional[VisualElementsRequestDeferral]: ...

class VisualElementsRequestDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VisualElementsRequestDeferral: ...
    def complete(self) -> None: ...

class VisualElementsRequestedEventArgs(winsdk.system.Object):
    request: typing.Optional[VisualElementsRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VisualElementsRequestedEventArgs: ...

