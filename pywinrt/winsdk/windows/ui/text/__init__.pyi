# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.storage.streams
import winsdk.windows.ui

class CaretType(enum.IntEnum):
    NORMAL = 0
    NULL = 1

class FindOptions(enum.IntFlag):
    NONE = 0
    WORD = 0x2
    CASE = 0x4

class FontStretch(enum.IntEnum):
    UNDEFINED = 0
    ULTRA_CONDENSED = 1
    EXTRA_CONDENSED = 2
    CONDENSED = 3
    SEMI_CONDENSED = 4
    NORMAL = 5
    SEMI_EXPANDED = 6
    EXPANDED = 7
    EXTRA_EXPANDED = 8
    ULTRA_EXPANDED = 9

class FontStyle(enum.IntEnum):
    NORMAL = 0
    OBLIQUE = 1
    ITALIC = 2

class FormatEffect(enum.IntEnum):
    OFF = 0
    ON = 1
    TOGGLE = 2
    UNDEFINED = 3

class HorizontalCharacterAlignment(enum.IntEnum):
    LEFT = 0
    RIGHT = 1
    CENTER = 2

class LetterCase(enum.IntEnum):
    LOWER = 0
    UPPER = 1

class LineSpacingRule(enum.IntEnum):
    UNDEFINED = 0
    SINGLE = 1
    ONE_AND_HALF = 2
    DOUBLE = 3
    AT_LEAST = 4
    EXACTLY = 5
    MULTIPLE = 6
    PERCENT = 7

class LinkType(enum.IntEnum):
    UNDEFINED = 0
    NOT_A_LINK = 1
    CLIENT_LINK = 2
    FRIENDLY_LINK_NAME = 3
    FRIENDLY_LINK_ADDRESS = 4
    AUTO_LINK = 5
    AUTO_LINK_EMAIL = 6
    AUTO_LINK_PHONE = 7
    AUTO_LINK_PATH = 8

class MarkerAlignment(enum.IntEnum):
    UNDEFINED = 0
    LEFT = 1
    CENTER = 2
    RIGHT = 3

class MarkerStyle(enum.IntEnum):
    UNDEFINED = 0
    PARENTHESIS = 1
    PARENTHESES = 2
    PERIOD = 3
    PLAIN = 4
    MINUS = 5
    NO_NUMBER = 6

class MarkerType(enum.IntEnum):
    UNDEFINED = 0
    NONE = 1
    BULLET = 2
    ARABIC = 3
    LOWERCASE_ENGLISH_LETTER = 4
    UPPERCASE_ENGLISH_LETTER = 5
    LOWERCASE_ROMAN = 6
    UPPERCASE_ROMAN = 7
    UNICODE_SEQUENCE = 8
    CIRCLED_NUMBER = 9
    BLACK_CIRCLE_WINGDING = 10
    WHITE_CIRCLE_WINGDING = 11
    ARABIC_WIDE = 12
    SIMPLIFIED_CHINESE = 13
    TRADITIONAL_CHINESE = 14
    JAPAN_SIMPLIFIED_CHINESE = 15
    JAPAN_KOREA = 16
    ARABIC_DICTIONARY = 17
    ARABIC_ABJAD = 18
    HEBREW = 19
    THAI_ALPHABETIC = 20
    THAI_NUMERIC = 21
    DEVANAGARI_VOWEL = 22
    DEVANAGARI_CONSONANT = 23
    DEVANAGARI_NUMERIC = 24

class ParagraphAlignment(enum.IntEnum):
    UNDEFINED = 0
    LEFT = 1
    CENTER = 2
    RIGHT = 3
    JUSTIFY = 4

class ParagraphStyle(enum.IntEnum):
    UNDEFINED = 0
    NONE = 1
    NORMAL = 2
    HEADING1 = 3
    HEADING2 = 4
    HEADING3 = 5
    HEADING4 = 6
    HEADING5 = 7
    HEADING6 = 8
    HEADING7 = 9
    HEADING8 = 10
    HEADING9 = 11

class PointOptions(enum.IntFlag):
    NONE = 0
    INCLUDE_INSET = 0x1
    START = 0x20
    CLIENT_COORDINATES = 0x100
    ALLOW_OFF_CLIENT = 0x200
    TRANSFORM = 0x400
    NO_HORIZONTAL_SCROLL = 0x10000
    NO_VERTICAL_SCROLL = 0x40000

class RangeGravity(enum.IntEnum):
    U_I_BEHAVIOR = 0
    BACKWARD = 1
    FORWARD = 2
    INWARD = 3
    OUTWARD = 4

class RichEditMathMode(enum.IntEnum):
    NO_MATH = 0
    MATH_ONLY = 1

class SelectionOptions(enum.IntFlag):
    START_ACTIVE = 0x1
    AT_END_OF_LINE = 0x2
    OVERTYPE = 0x4
    ACTIVE = 0x8
    REPLACE = 0x10

class SelectionType(enum.IntEnum):
    NONE = 0
    INSERTION_POINT = 1
    NORMAL = 2
    INLINE_SHAPE = 7
    SHAPE = 8

class TabAlignment(enum.IntEnum):
    LEFT = 0
    CENTER = 1
    RIGHT = 2
    DECIMAL = 3
    BAR = 4

class TabLeader(enum.IntEnum):
    SPACES = 0
    DOTS = 1
    DASHES = 2
    LINES = 3
    THICK_LINES = 4
    EQUALS = 5

class TextDecorations(enum.IntFlag):
    NONE = 0
    UNDERLINE = 0x1
    STRIKETHROUGH = 0x2

class TextGetOptions(enum.IntFlag):
    NONE = 0
    ADJUST_CRLF = 0x1
    USE_CRLF = 0x2
    USE_OBJECT_TEXT = 0x4
    ALLOW_FINAL_EOP = 0x8
    NO_HIDDEN = 0x20
    INCLUDE_NUMBERING = 0x40
    FORMAT_RTF = 0x2000
    USE_LF = 0x1000000

class TextRangeUnit(enum.IntEnum):
    CHARACTER = 0
    WORD = 1
    SENTENCE = 2
    PARAGRAPH = 3
    LINE = 4
    STORY = 5
    SCREEN = 6
    SECTION = 7
    WINDOW = 8
    CHARACTER_FORMAT = 9
    PARAGRAPH_FORMAT = 10
    OBJECT = 11
    HARD_PARAGRAPH = 12
    CLUSTER = 13
    BOLD = 14
    ITALIC = 15
    UNDERLINE = 16
    STRIKETHROUGH = 17
    PROTECTED_TEXT = 18
    LINK = 19
    SMALL_CAPS = 20
    ALL_CAPS = 21
    HIDDEN = 22
    OUTLINE = 23
    SHADOW = 24
    IMPRINT = 25
    DISABLED = 26
    REVISED = 27
    SUBSCRIPT = 28
    SUPERSCRIPT = 29
    FONT_BOUND = 30
    LINK_PROTECTED = 31
    CONTENT_LINK = 32

class TextScript(enum.IntEnum):
    UNDEFINED = 0
    ANSI = 1
    EAST_EUROPE = 2
    CYRILLIC = 3
    GREEK = 4
    TURKISH = 5
    HEBREW = 6
    ARABIC = 7
    BALTIC = 8
    VIETNAMESE = 9
    DEFAULT = 10
    SYMBOL = 11
    THAI = 12
    SHIFT_JIS = 13
    G_B2312 = 14
    HANGUL = 15
    BIG5 = 16
    P_C437 = 17
    OEM = 18
    MAC = 19
    ARMENIAN = 20
    SYRIAC = 21
    THAANA = 22
    DEVANAGARI = 23
    BENGALI = 24
    GURMUKHI = 25
    GUJARATI = 26
    ORIYA = 27
    TAMIL = 28
    TELUGU = 29
    KANNADA = 30
    MALAYALAM = 31
    SINHALA = 32
    LAO = 33
    TIBETAN = 34
    MYANMAR = 35
    GEORGIAN = 36
    JAMO = 37
    ETHIOPIC = 38
    CHEROKEE = 39
    ABORIGINAL = 40
    OGHAM = 41
    RUNIC = 42
    KHMER = 43
    MONGOLIAN = 44
    BRAILLE = 45
    YI = 46
    LIMBU = 47
    TAI_LE = 48
    NEW_TAI_LUE = 49
    SYLOTI_NAGRI = 50
    KHAROSHTHI = 51
    KAYAHLI = 52
    UNICODE_SYMBOL = 53
    EMOJI = 54
    GLAGOLITIC = 55
    LISU = 56
    VAI = 57
    N_KO = 58
    OSMANYA = 59
    PHAGS_PA = 60
    GOTHIC = 61
    DESERET = 62
    TIFINAGH = 63

class TextSetOptions(enum.IntFlag):
    NONE = 0
    UNICODE_BIDI = 0x1
    UNLINK = 0x8
    UNHIDE = 0x10
    CHECK_TEXT_LIMIT = 0x20
    FORMAT_RTF = 0x2000
    APPLY_RTF_DOCUMENT_DEFAULTS = 0x4000

class UnderlineType(enum.IntEnum):
    UNDEFINED = 0
    NONE = 1
    SINGLE = 2
    WORDS = 3
    DOUBLE = 4
    DOTTED = 5
    DASH = 6
    DASH_DOT = 7
    DASH_DOT_DOT = 8
    WAVE = 9
    THICK = 10
    THIN = 11
    DOUBLE_WAVE = 12
    HEAVY_WAVE = 13
    LONG_DASH = 14
    THICK_DASH = 15
    THICK_DASH_DOT = 16
    THICK_DASH_DOT_DOT = 17
    THICK_DOTTED = 18
    THICK_LONG_DASH = 19

class VerticalCharacterAlignment(enum.IntEnum):
    TOP = 0
    BASELINE = 1
    BOTTOM = 2

Self = typing.TypeVar('Self')

class FontWeight:
    weight: _winrt.UInt16
    def __new__(cls: typing.Type[FontWeight], weight: _winrt.UInt16) -> FontWeight: ...

class ContentLinkInfo(_winrt.Object):
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    secondary_text: str
    link_content_kind: str
    id: _winrt.UInt32
    display_text: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ContentLinkInfo: ...
    def __new__(cls: typing.Type[ContentLinkInfo]) -> ContentLinkInfo:...

class FontWeights(_winrt.Object):
    black: FontWeight
    bold: FontWeight
    extra_black: FontWeight
    extra_bold: FontWeight
    extra_light: FontWeight
    light: FontWeight
    medium: FontWeight
    normal: FontWeight
    semi_bold: FontWeight
    semi_light: FontWeight
    thin: FontWeight
    @staticmethod
    def _from(obj: _winrt.Object) -> FontWeights: ...

class RichEditTextDocument(_winrt.Object):
    undo_limit: _winrt.UInt32
    default_tab_stop: _winrt.Single
    caret_type: CaretType
    selection: typing.Optional[ITextSelection]
    ignore_trailing_character_spacing: _winrt.Boolean
    alignment_includes_trailing_whitespace: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> RichEditTextDocument: ...
    def apply_display_updates(self) -> _winrt.Int32: ...
    def batch_display_updates(self) -> _winrt.Int32: ...
    def begin_undo_group(self) -> None: ...
    def can_copy(self) -> _winrt.Boolean: ...
    def can_paste(self) -> _winrt.Boolean: ...
    def can_redo(self) -> _winrt.Boolean: ...
    def can_undo(self) -> _winrt.Boolean: ...
    def clear_undo_redo_history(self) -> None: ...
    def end_undo_group(self) -> None: ...
    def get_default_character_format(self) -> typing.Optional[ITextCharacterFormat]: ...
    def get_default_paragraph_format(self) -> typing.Optional[ITextParagraphFormat]: ...
    def get_math(self) -> str: ...
    def get_range(self, start_position: _winrt.Int32, end_position: _winrt.Int32) -> typing.Optional[ITextRange]: ...
    def get_range_from_point(self, point: winsdk.windows.foundation.Point, options: PointOptions) -> typing.Optional[ITextRange]: ...
    def get_text(self, options: TextGetOptions) -> str: ...
    def load_from_stream(self, options: TextSetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def redo(self) -> None: ...
    def save_to_stream(self, options: TextGetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def set_default_character_format(self, value: typing.Optional[ITextCharacterFormat]) -> None: ...
    def set_default_paragraph_format(self, value: typing.Optional[ITextParagraphFormat]) -> None: ...
    def set_math(self, value: str) -> None: ...
    def set_math_mode(self, mode: RichEditMathMode) -> None: ...
    def set_text(self, options: TextSetOptions, value: str) -> None: ...
    def undo(self) -> None: ...

class RichEditTextRange(_winrt.Object):
    content_link_info: typing.Optional[ContentLinkInfo]
    text: str
    start_position: _winrt.Int32
    paragraph_format: typing.Optional[ITextParagraphFormat]
    link: str
    gravity: RangeGravity
    formatted_text: typing.Optional[ITextRange]
    end_position: _winrt.Int32
    character_format: typing.Optional[ITextCharacterFormat]
    character: _winrt.Char16
    length: _winrt.Int32
    story_length: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> RichEditTextRange: ...
    def can_paste(self, format: _winrt.Int32) -> _winrt.Boolean: ...
    def change_case(self, value: LetterCase) -> None: ...
    def collapse(self, value: _winrt.Boolean) -> None: ...
    def copy(self) -> None: ...
    def cut(self) -> None: ...
    def delete(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def end_of(self, unit: TextRangeUnit, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def expand(self, unit: TextRangeUnit) -> _winrt.Int32: ...
    def find_text(self, value: str, scan_length: _winrt.Int32, options: FindOptions) -> _winrt.Int32: ...
    def get_character_utf32(self, offset: _winrt.Int32) -> _winrt.UInt32: ...
    def get_clone(self) -> typing.Optional[ITextRange]: ...
    def get_index(self, unit: TextRangeUnit) -> _winrt.Int32: ...
    def get_point(self, horizontal_align: HorizontalCharacterAlignment, vertical_align: VerticalCharacterAlignment, options: PointOptions) -> winsdk.windows.foundation.Point: ...
    def get_rect(self, options: PointOptions) -> typing.Tuple[winsdk.windows.foundation.Rect, _winrt.Int32]: ...
    def get_text(self, options: TextGetOptions) -> str: ...
    def get_text_via_stream(self, options: TextGetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def in_range(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def in_story(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def insert_image(self, width: _winrt.Int32, height: _winrt.Int32, ascent: _winrt.Int32, vertical_align: VerticalCharacterAlignment, alternate_text: str, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def is_equal(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def match_selection(self) -> None: ...
    def move(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def move_end(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def move_start(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def paste(self, format: _winrt.Int32) -> None: ...
    def scroll_into_view(self, value: PointOptions) -> None: ...
    def set_index(self, unit: TextRangeUnit, index: _winrt.Int32, extend: _winrt.Boolean) -> None: ...
    def set_point(self, point: winsdk.windows.foundation.Point, options: PointOptions, extend: _winrt.Boolean) -> None: ...
    def set_range(self, start_position: _winrt.Int32, end_position: _winrt.Int32) -> None: ...
    def set_text(self, options: TextSetOptions, value: str) -> None: ...
    def set_text_via_stream(self, options: TextSetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def start_of(self, unit: TextRangeUnit, extend: _winrt.Boolean) -> _winrt.Int32: ...

class TextConstants(_winrt.Object):
    auto_color: winsdk.windows.ui.Color
    max_unit_count: _winrt.Int32
    min_unit_count: _winrt.Int32
    undefined_color: winsdk.windows.ui.Color
    undefined_float_value: _winrt.Single
    undefined_font_stretch: FontStretch
    undefined_font_style: FontStyle
    undefined_int32_value: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> TextConstants: ...

class ITextCharacterFormat(_winrt.Object):
    all_caps: FormatEffect
    background_color: winsdk.windows.ui.Color
    bold: FormatEffect
    font_stretch: FontStretch
    font_style: FontStyle
    foreground_color: winsdk.windows.ui.Color
    hidden: FormatEffect
    italic: FormatEffect
    kerning: _winrt.Single
    language_tag: str
    link_type: LinkType
    name: str
    outline: FormatEffect
    position: _winrt.Single
    protected_text: FormatEffect
    size: _winrt.Single
    small_caps: FormatEffect
    spacing: _winrt.Single
    strikethrough: FormatEffect
    subscript: FormatEffect
    superscript: FormatEffect
    text_script: TextScript
    underline: UnderlineType
    weight: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> ITextCharacterFormat: ...
    def get_clone(self) -> typing.Optional[ITextCharacterFormat]: ...
    def is_equal(self, format: typing.Optional[ITextCharacterFormat]) -> _winrt.Boolean: ...
    def set_clone(self, value: typing.Optional[ITextCharacterFormat]) -> None: ...

class ITextDocument(_winrt.Object):
    caret_type: CaretType
    default_tab_stop: _winrt.Single
    selection: typing.Optional[ITextSelection]
    undo_limit: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ITextDocument: ...
    def apply_display_updates(self) -> _winrt.Int32: ...
    def batch_display_updates(self) -> _winrt.Int32: ...
    def begin_undo_group(self) -> None: ...
    def can_copy(self) -> _winrt.Boolean: ...
    def can_paste(self) -> _winrt.Boolean: ...
    def can_redo(self) -> _winrt.Boolean: ...
    def can_undo(self) -> _winrt.Boolean: ...
    def end_undo_group(self) -> None: ...
    def get_default_character_format(self) -> typing.Optional[ITextCharacterFormat]: ...
    def get_default_paragraph_format(self) -> typing.Optional[ITextParagraphFormat]: ...
    def get_range(self, start_position: _winrt.Int32, end_position: _winrt.Int32) -> typing.Optional[ITextRange]: ...
    def get_range_from_point(self, point: winsdk.windows.foundation.Point, options: PointOptions) -> typing.Optional[ITextRange]: ...
    def get_text(self, options: TextGetOptions) -> str: ...
    def load_from_stream(self, options: TextSetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def redo(self) -> None: ...
    def save_to_stream(self, options: TextGetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def set_default_character_format(self, value: typing.Optional[ITextCharacterFormat]) -> None: ...
    def set_default_paragraph_format(self, value: typing.Optional[ITextParagraphFormat]) -> None: ...
    def set_text(self, options: TextSetOptions, value: str) -> None: ...
    def undo(self) -> None: ...

class ITextParagraphFormat(_winrt.Object):
    alignment: ParagraphAlignment
    first_line_indent: _winrt.Single
    keep_together: FormatEffect
    keep_with_next: FormatEffect
    left_indent: _winrt.Single
    line_spacing: _winrt.Single
    line_spacing_rule: LineSpacingRule
    list_alignment: MarkerAlignment
    list_level_index: _winrt.Int32
    list_start: _winrt.Int32
    list_style: MarkerStyle
    list_tab: _winrt.Single
    list_type: MarkerType
    no_line_number: FormatEffect
    page_break_before: FormatEffect
    right_indent: _winrt.Single
    right_to_left: FormatEffect
    space_after: _winrt.Single
    space_before: _winrt.Single
    style: ParagraphStyle
    tab_count: _winrt.Int32
    widow_control: FormatEffect
    @staticmethod
    def _from(obj: _winrt.Object) -> ITextParagraphFormat: ...
    def add_tab(self, position: _winrt.Single, align: TabAlignment, leader: TabLeader) -> None: ...
    def clear_all_tabs(self) -> None: ...
    def delete_tab(self, position: _winrt.Single) -> None: ...
    def get_clone(self) -> typing.Optional[ITextParagraphFormat]: ...
    def get_tab(self, index: _winrt.Int32) -> typing.Tuple[_winrt.Single, TabAlignment, TabLeader]: ...
    def is_equal(self, format: typing.Optional[ITextParagraphFormat]) -> _winrt.Boolean: ...
    def set_clone(self, format: typing.Optional[ITextParagraphFormat]) -> None: ...
    def set_indents(self, start: _winrt.Single, left: _winrt.Single, right: _winrt.Single) -> None: ...
    def set_line_spacing(self, rule: LineSpacingRule, spacing: _winrt.Single) -> None: ...

class ITextRange(_winrt.Object):
    character: _winrt.Char16
    character_format: typing.Optional[ITextCharacterFormat]
    end_position: _winrt.Int32
    formatted_text: typing.Optional[ITextRange]
    gravity: RangeGravity
    length: _winrt.Int32
    link: str
    paragraph_format: typing.Optional[ITextParagraphFormat]
    start_position: _winrt.Int32
    story_length: _winrt.Int32
    text: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ITextRange: ...
    def can_paste(self, format: _winrt.Int32) -> _winrt.Boolean: ...
    def change_case(self, value: LetterCase) -> None: ...
    def collapse(self, value: _winrt.Boolean) -> None: ...
    def copy(self) -> None: ...
    def cut(self) -> None: ...
    def delete(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def end_of(self, unit: TextRangeUnit, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def expand(self, unit: TextRangeUnit) -> _winrt.Int32: ...
    def find_text(self, value: str, scan_length: _winrt.Int32, options: FindOptions) -> _winrt.Int32: ...
    def get_character_utf32(self, offset: _winrt.Int32) -> _winrt.UInt32: ...
    def get_clone(self) -> typing.Optional[ITextRange]: ...
    def get_index(self, unit: TextRangeUnit) -> _winrt.Int32: ...
    def get_point(self, horizontal_align: HorizontalCharacterAlignment, vertical_align: VerticalCharacterAlignment, options: PointOptions) -> winsdk.windows.foundation.Point: ...
    def get_rect(self, options: PointOptions) -> typing.Tuple[winsdk.windows.foundation.Rect, _winrt.Int32]: ...
    def get_text(self, options: TextGetOptions) -> str: ...
    def get_text_via_stream(self, options: TextGetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def in_range(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def in_story(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def insert_image(self, width: _winrt.Int32, height: _winrt.Int32, ascent: _winrt.Int32, vertical_align: VerticalCharacterAlignment, alternate_text: str, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def is_equal(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def match_selection(self) -> None: ...
    def move(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def move_end(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def move_start(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def paste(self, format: _winrt.Int32) -> None: ...
    def scroll_into_view(self, value: PointOptions) -> None: ...
    def set_index(self, unit: TextRangeUnit, index: _winrt.Int32, extend: _winrt.Boolean) -> None: ...
    def set_point(self, point: winsdk.windows.foundation.Point, options: PointOptions, extend: _winrt.Boolean) -> None: ...
    def set_range(self, start_position: _winrt.Int32, end_position: _winrt.Int32) -> None: ...
    def set_text(self, options: TextSetOptions, value: str) -> None: ...
    def set_text_via_stream(self, options: TextSetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def start_of(self, unit: TextRangeUnit, extend: _winrt.Boolean) -> _winrt.Int32: ...

class ITextSelection(_winrt.Object):
    options: SelectionOptions
    type: SelectionType
    character: _winrt.Char16
    character_format: typing.Optional[ITextCharacterFormat]
    end_position: _winrt.Int32
    formatted_text: typing.Optional[ITextRange]
    gravity: RangeGravity
    length: _winrt.Int32
    link: str
    paragraph_format: typing.Optional[ITextParagraphFormat]
    start_position: _winrt.Int32
    story_length: _winrt.Int32
    text: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ITextSelection: ...
    def can_paste(self, format: _winrt.Int32) -> _winrt.Boolean: ...
    def change_case(self, value: LetterCase) -> None: ...
    def collapse(self, value: _winrt.Boolean) -> None: ...
    def copy(self) -> None: ...
    def cut(self) -> None: ...
    def delete(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def end_key(self, unit: TextRangeUnit, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def end_of(self, unit: TextRangeUnit, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def expand(self, unit: TextRangeUnit) -> _winrt.Int32: ...
    def find_text(self, value: str, scan_length: _winrt.Int32, options: FindOptions) -> _winrt.Int32: ...
    def get_character_utf32(self, offset: _winrt.Int32) -> _winrt.UInt32: ...
    def get_clone(self) -> typing.Optional[ITextRange]: ...
    def get_index(self, unit: TextRangeUnit) -> _winrt.Int32: ...
    def get_point(self, horizontal_align: HorizontalCharacterAlignment, vertical_align: VerticalCharacterAlignment, options: PointOptions) -> winsdk.windows.foundation.Point: ...
    def get_rect(self, options: PointOptions) -> typing.Tuple[winsdk.windows.foundation.Rect, _winrt.Int32]: ...
    def get_text(self, options: TextGetOptions) -> str: ...
    def get_text_via_stream(self, options: TextGetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def home_key(self, unit: TextRangeUnit, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def in_range(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def in_story(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def insert_image(self, width: _winrt.Int32, height: _winrt.Int32, ascent: _winrt.Int32, vertical_align: VerticalCharacterAlignment, alternate_text: str, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def is_equal(self, range: typing.Optional[ITextRange]) -> _winrt.Boolean: ...
    def match_selection(self) -> None: ...
    def move(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def move_down(self, unit: TextRangeUnit, count: _winrt.Int32, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def move_end(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def move_left(self, unit: TextRangeUnit, count: _winrt.Int32, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def move_right(self, unit: TextRangeUnit, count: _winrt.Int32, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def move_start(self, unit: TextRangeUnit, count: _winrt.Int32) -> _winrt.Int32: ...
    def move_up(self, unit: TextRangeUnit, count: _winrt.Int32, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def paste(self, format: _winrt.Int32) -> None: ...
    def scroll_into_view(self, value: PointOptions) -> None: ...
    def set_index(self, unit: TextRangeUnit, index: _winrt.Int32, extend: _winrt.Boolean) -> None: ...
    def set_point(self, point: winsdk.windows.foundation.Point, options: PointOptions, extend: _winrt.Boolean) -> None: ...
    def set_range(self, start_position: _winrt.Int32, end_position: _winrt.Int32) -> None: ...
    def set_text(self, options: TextSetOptions, value: str) -> None: ...
    def set_text_via_stream(self, options: TextSetOptions, value: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> None: ...
    def start_of(self, unit: TextRangeUnit, extend: _winrt.Boolean) -> _winrt.Int32: ...
    def type_text(self, value: str) -> None: ...

