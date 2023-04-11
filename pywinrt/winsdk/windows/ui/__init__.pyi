# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import datetime
import sys
import types
import typing

import winsdk.system

Self = typing.TypeVar('Self')

class Color:
    a: winsdk.system.UInt8
    r: winsdk.system.UInt8
    g: winsdk.system.UInt8
    b: winsdk.system.UInt8
    def __new__(cls: typing.Type[Color], a: winsdk.system.UInt8, r: winsdk.system.UInt8, g: winsdk.system.UInt8, b: winsdk.system.UInt8) -> Color: ...

class WindowId:
    value: winsdk.system.UInt64
    def __new__(cls: typing.Type[WindowId], value: winsdk.system.UInt64) -> WindowId: ...

class ColorHelper(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ColorHelper: ...
    @staticmethod
    def from_argb(a: winsdk.system.UInt8, r: winsdk.system.UInt8, g: winsdk.system.UInt8, b: winsdk.system.UInt8) -> Color: ...
    @staticmethod
    def to_display_name(color: Color) -> str: ...

class Colors(winsdk.system.Object):
    alice_blue: typing.ClassVar[Color]
    antique_white: typing.ClassVar[Color]
    aqua: typing.ClassVar[Color]
    aquamarine: typing.ClassVar[Color]
    azure: typing.ClassVar[Color]
    beige: typing.ClassVar[Color]
    bisque: typing.ClassVar[Color]
    black: typing.ClassVar[Color]
    blanched_almond: typing.ClassVar[Color]
    blue: typing.ClassVar[Color]
    blue_violet: typing.ClassVar[Color]
    brown: typing.ClassVar[Color]
    burly_wood: typing.ClassVar[Color]
    cadet_blue: typing.ClassVar[Color]
    chartreuse: typing.ClassVar[Color]
    chocolate: typing.ClassVar[Color]
    coral: typing.ClassVar[Color]
    cornflower_blue: typing.ClassVar[Color]
    cornsilk: typing.ClassVar[Color]
    crimson: typing.ClassVar[Color]
    cyan: typing.ClassVar[Color]
    dark_blue: typing.ClassVar[Color]
    dark_cyan: typing.ClassVar[Color]
    dark_goldenrod: typing.ClassVar[Color]
    dark_gray: typing.ClassVar[Color]
    dark_green: typing.ClassVar[Color]
    dark_khaki: typing.ClassVar[Color]
    dark_magenta: typing.ClassVar[Color]
    dark_olive_green: typing.ClassVar[Color]
    dark_orange: typing.ClassVar[Color]
    dark_orchid: typing.ClassVar[Color]
    dark_red: typing.ClassVar[Color]
    dark_salmon: typing.ClassVar[Color]
    dark_sea_green: typing.ClassVar[Color]
    dark_slate_blue: typing.ClassVar[Color]
    dark_slate_gray: typing.ClassVar[Color]
    dark_turquoise: typing.ClassVar[Color]
    dark_violet: typing.ClassVar[Color]
    deep_pink: typing.ClassVar[Color]
    deep_sky_blue: typing.ClassVar[Color]
    dim_gray: typing.ClassVar[Color]
    dodger_blue: typing.ClassVar[Color]
    firebrick: typing.ClassVar[Color]
    floral_white: typing.ClassVar[Color]
    forest_green: typing.ClassVar[Color]
    fuchsia: typing.ClassVar[Color]
    gainsboro: typing.ClassVar[Color]
    ghost_white: typing.ClassVar[Color]
    gold: typing.ClassVar[Color]
    goldenrod: typing.ClassVar[Color]
    gray: typing.ClassVar[Color]
    green: typing.ClassVar[Color]
    green_yellow: typing.ClassVar[Color]
    honeydew: typing.ClassVar[Color]
    hot_pink: typing.ClassVar[Color]
    indian_red: typing.ClassVar[Color]
    indigo: typing.ClassVar[Color]
    ivory: typing.ClassVar[Color]
    khaki: typing.ClassVar[Color]
    lavender: typing.ClassVar[Color]
    lavender_blush: typing.ClassVar[Color]
    lawn_green: typing.ClassVar[Color]
    lemon_chiffon: typing.ClassVar[Color]
    light_blue: typing.ClassVar[Color]
    light_coral: typing.ClassVar[Color]
    light_cyan: typing.ClassVar[Color]
    light_goldenrod_yellow: typing.ClassVar[Color]
    light_gray: typing.ClassVar[Color]
    light_green: typing.ClassVar[Color]
    light_pink: typing.ClassVar[Color]
    light_salmon: typing.ClassVar[Color]
    light_sea_green: typing.ClassVar[Color]
    light_sky_blue: typing.ClassVar[Color]
    light_slate_gray: typing.ClassVar[Color]
    light_steel_blue: typing.ClassVar[Color]
    light_yellow: typing.ClassVar[Color]
    lime: typing.ClassVar[Color]
    lime_green: typing.ClassVar[Color]
    linen: typing.ClassVar[Color]
    magenta: typing.ClassVar[Color]
    maroon: typing.ClassVar[Color]
    medium_aquamarine: typing.ClassVar[Color]
    medium_blue: typing.ClassVar[Color]
    medium_orchid: typing.ClassVar[Color]
    medium_purple: typing.ClassVar[Color]
    medium_sea_green: typing.ClassVar[Color]
    medium_slate_blue: typing.ClassVar[Color]
    medium_spring_green: typing.ClassVar[Color]
    medium_turquoise: typing.ClassVar[Color]
    medium_violet_red: typing.ClassVar[Color]
    midnight_blue: typing.ClassVar[Color]
    mint_cream: typing.ClassVar[Color]
    misty_rose: typing.ClassVar[Color]
    moccasin: typing.ClassVar[Color]
    navajo_white: typing.ClassVar[Color]
    navy: typing.ClassVar[Color]
    old_lace: typing.ClassVar[Color]
    olive: typing.ClassVar[Color]
    olive_drab: typing.ClassVar[Color]
    orange: typing.ClassVar[Color]
    orange_red: typing.ClassVar[Color]
    orchid: typing.ClassVar[Color]
    pale_goldenrod: typing.ClassVar[Color]
    pale_green: typing.ClassVar[Color]
    pale_turquoise: typing.ClassVar[Color]
    pale_violet_red: typing.ClassVar[Color]
    papaya_whip: typing.ClassVar[Color]
    peach_puff: typing.ClassVar[Color]
    peru: typing.ClassVar[Color]
    pink: typing.ClassVar[Color]
    plum: typing.ClassVar[Color]
    powder_blue: typing.ClassVar[Color]
    purple: typing.ClassVar[Color]
    red: typing.ClassVar[Color]
    rosy_brown: typing.ClassVar[Color]
    royal_blue: typing.ClassVar[Color]
    saddle_brown: typing.ClassVar[Color]
    salmon: typing.ClassVar[Color]
    sandy_brown: typing.ClassVar[Color]
    sea_green: typing.ClassVar[Color]
    sea_shell: typing.ClassVar[Color]
    sienna: typing.ClassVar[Color]
    silver: typing.ClassVar[Color]
    sky_blue: typing.ClassVar[Color]
    slate_blue: typing.ClassVar[Color]
    slate_gray: typing.ClassVar[Color]
    snow: typing.ClassVar[Color]
    spring_green: typing.ClassVar[Color]
    steel_blue: typing.ClassVar[Color]
    tan: typing.ClassVar[Color]
    teal: typing.ClassVar[Color]
    thistle: typing.ClassVar[Color]
    tomato: typing.ClassVar[Color]
    transparent: typing.ClassVar[Color]
    turquoise: typing.ClassVar[Color]
    violet: typing.ClassVar[Color]
    wheat: typing.ClassVar[Color]
    white: typing.ClassVar[Color]
    white_smoke: typing.ClassVar[Color]
    yellow: typing.ClassVar[Color]
    yellow_green: typing.ClassVar[Color]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Colors: ...

class UIContentRoot(winsdk.system.Object):
    u_i_context: typing.Optional[UIContext]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UIContentRoot: ...

class UIContext(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UIContext: ...

