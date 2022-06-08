# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.system

class DayOfWeek(enum.IntEnum):
    SUNDAY = 0
    MONDAY = 1
    TUESDAY = 2
    WEDNESDAY = 3
    THURSDAY = 4
    FRIDAY = 5
    SATURDAY = 6

class LanguageLayoutDirection(enum.IntEnum):
    LTR = 0
    RTL = 1
    TTB_LTR = 2
    TTB_RTL = 3

Self = typing.TypeVar('Self')

class ApplicationLanguages(_winrt.Object):
    primary_language_override: str
    languages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    manifest_languages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ApplicationLanguages: ...
    @staticmethod
    def get_languages_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]: ...

class Calendar(_winrt.Object):
    year: _winrt.Int32
    second: _winrt.Int32
    period: _winrt.Int32
    nanosecond: _winrt.Int32
    month: _winrt.Int32
    minute: _winrt.Int32
    numeral_system: str
    era: _winrt.Int32
    hour: _winrt.Int32
    day: _winrt.Int32
    first_second_in_this_minute: _winrt.Int32
    first_year_in_this_era: _winrt.Int32
    is_daylight_saving_time: _winrt.Boolean
    languages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    last_day_in_this_month: _winrt.Int32
    last_era: _winrt.Int32
    last_hour_in_this_period: _winrt.Int32
    last_minute_in_this_hour: _winrt.Int32
    last_month_in_this_year: _winrt.Int32
    last_second_in_this_minute: _winrt.Int32
    last_year_in_this_era: _winrt.Int32
    day_of_week: DayOfWeek
    first_day_in_this_month: _winrt.Int32
    last_period_in_this_day: _winrt.Int32
    first_era: _winrt.Int32
    number_of_days_in_this_month: _winrt.Int32
    number_of_eras: _winrt.Int32
    number_of_hours_in_this_period: _winrt.Int32
    number_of_minutes_in_this_hour: _winrt.Int32
    first_hour_in_this_period: _winrt.Int32
    number_of_months_in_this_year: _winrt.Int32
    number_of_periods_in_this_day: _winrt.Int32
    number_of_seconds_in_this_minute: _winrt.Int32
    number_of_years_in_this_era: _winrt.Int32
    first_minute_in_this_hour: _winrt.Int32
    resolved_language: str
    first_month_in_this_year: _winrt.Int32
    first_period_in_this_day: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> Calendar: ...
    @typing.overload
    def __init__(self, languages: typing.Iterable[str], calendar: str, clock: str, time_zone_id: str) -> None: ...
    @typing.overload
    def __init__(self, languages: typing.Iterable[str]) -> None: ...
    @typing.overload
    def __init__(self, languages: typing.Iterable[str], calendar: str, clock: str) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...
    def add_days(self, days: _winrt.Int32) -> None: ...
    def add_eras(self, eras: _winrt.Int32) -> None: ...
    def add_hours(self, hours: _winrt.Int32) -> None: ...
    def add_minutes(self, minutes: _winrt.Int32) -> None: ...
    def add_months(self, months: _winrt.Int32) -> None: ...
    def add_nanoseconds(self, nanoseconds: _winrt.Int32) -> None: ...
    def add_periods(self, periods: _winrt.Int32) -> None: ...
    def add_seconds(self, seconds: _winrt.Int32) -> None: ...
    def add_weeks(self, weeks: _winrt.Int32) -> None: ...
    def add_years(self, years: _winrt.Int32) -> None: ...
    def change_calendar_system(self, value: str) -> None: ...
    def change_clock(self, value: str) -> None: ...
    def change_time_zone(self, time_zone_id: str) -> None: ...
    def clone(self) -> typing.Optional[Calendar]: ...
    def compare(self, other: typing.Optional[Calendar]) -> _winrt.Int32: ...
    def compare_date_time(self, other: winsdk.windows.foundation.DateTime) -> _winrt.Int32: ...
    def copy_to(self, other: typing.Optional[Calendar]) -> None: ...
    def day_as_padded_string(self, min_digits: _winrt.Int32) -> str: ...
    def day_as_string(self) -> str: ...
    @typing.overload
    def day_of_week_as_solo_string(self) -> str: ...
    @typing.overload
    def day_of_week_as_solo_string(self, ideal_length: _winrt.Int32) -> str: ...
    @typing.overload
    def day_of_week_as_string(self) -> str: ...
    @typing.overload
    def day_of_week_as_string(self, ideal_length: _winrt.Int32) -> str: ...
    @typing.overload
    def era_as_string(self) -> str: ...
    @typing.overload
    def era_as_string(self, ideal_length: _winrt.Int32) -> str: ...
    def get_calendar_system(self) -> str: ...
    def get_clock(self) -> str: ...
    def get_date_time(self) -> winsdk.windows.foundation.DateTime: ...
    def get_time_zone(self) -> str: ...
    def hour_as_padded_string(self, min_digits: _winrt.Int32) -> str: ...
    def hour_as_string(self) -> str: ...
    def minute_as_padded_string(self, min_digits: _winrt.Int32) -> str: ...
    def minute_as_string(self) -> str: ...
    def month_as_numeric_string(self) -> str: ...
    def month_as_padded_numeric_string(self, min_digits: _winrt.Int32) -> str: ...
    @typing.overload
    def month_as_solo_string(self) -> str: ...
    @typing.overload
    def month_as_solo_string(self, ideal_length: _winrt.Int32) -> str: ...
    @typing.overload
    def month_as_string(self) -> str: ...
    @typing.overload
    def month_as_string(self, ideal_length: _winrt.Int32) -> str: ...
    def nanosecond_as_padded_string(self, min_digits: _winrt.Int32) -> str: ...
    def nanosecond_as_string(self) -> str: ...
    @typing.overload
    def period_as_string(self) -> str: ...
    @typing.overload
    def period_as_string(self, ideal_length: _winrt.Int32) -> str: ...
    def second_as_padded_string(self, min_digits: _winrt.Int32) -> str: ...
    def second_as_string(self) -> str: ...
    def set_date_time(self, value: winsdk.windows.foundation.DateTime) -> None: ...
    def set_to_max(self) -> None: ...
    def set_to_min(self) -> None: ...
    def set_to_now(self) -> None: ...
    @typing.overload
    def time_zone_as_string(self) -> str: ...
    @typing.overload
    def time_zone_as_string(self, ideal_length: _winrt.Int32) -> str: ...
    def year_as_padded_string(self, min_digits: _winrt.Int32) -> str: ...
    def year_as_string(self) -> str: ...
    def year_as_truncated_string(self, remaining_digits: _winrt.Int32) -> str: ...

class CalendarIdentifiers(_winrt.Object):
    julian: str
    gregorian: str
    hebrew: str
    hijri: str
    japanese: str
    korean: str
    taiwan: str
    thai: str
    um_al_qura: str
    persian: str
    chinese_lunar: str
    vietnamese_lunar: str
    taiwan_lunar: str
    korean_lunar: str
    japanese_lunar: str
    @staticmethod
    def _from(obj: _winrt.Object) -> CalendarIdentifiers: ...

class ClockIdentifiers(_winrt.Object):
    twelve_hour: str
    twenty_four_hour: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ClockIdentifiers: ...

class CurrencyAmount(_winrt.Object):
    amount: str
    currency: str
    @staticmethod
    def _from(obj: _winrt.Object) -> CurrencyAmount: ...
    def __init__(self, amount: str, currency: str) -> None: ...

class CurrencyIdentifiers(_winrt.Object):
    h_n_l: str
    a_e_d: str
    a_f_n: str
    a_l_l: str
    a_m_d: str
    a_n_g: str
    a_o_a: str
    a_r_s: str
    a_u_d: str
    a_w_g: str
    a_z_n: str
    b_a_m: str
    b_b_d: str
    b_d_t: str
    b_g_n: str
    b_h_d: str
    b_i_f: str
    b_m_d: str
    b_n_d: str
    b_o_b: str
    b_r_l: str
    b_s_d: str
    b_t_n: str
    b_w_p: str
    b_y_r: str
    b_z_d: str
    c_a_d: str
    c_d_f: str
    c_h_f: str
    c_l_p: str
    c_n_y: str
    c_o_p: str
    c_r_c: str
    c_u_p: str
    c_v_e: str
    c_z_k: str
    d_j_f: str
    d_k_k: str
    d_o_p: str
    d_z_d: str
    e_g_p: str
    e_r_n: str
    e_t_b: str
    e_u_r: str
    f_j_d: str
    f_k_p: str
    g_b_p: str
    g_e_l: str
    g_h_s: str
    g_i_p: str
    g_m_d: str
    g_n_f: str
    g_t_q: str
    g_y_d: str
    h_k_d: str
    r_o_n: str
    h_r_k: str
    h_t_g: str
    h_u_f: str
    i_d_r: str
    i_l_s: str
    i_n_r: str
    i_q_d: str
    i_r_r: str
    i_s_k: str
    j_m_d: str
    j_o_d: str
    j_p_y: str
    k_e_s: str
    k_g_s: str
    k_h_r: str
    k_m_f: str
    k_p_w: str
    k_r_w: str
    k_w_d: str
    k_y_d: str
    k_z_t: str
    l_a_k: str
    l_b_p: str
    l_k_r: str
    l_r_d: str
    l_s_l: str
    l_t_l: str
    l_v_l: str
    l_y_d: str
    m_a_d: str
    m_d_l: str
    m_g_a: str
    m_k_d: str
    m_m_k: str
    m_n_t: str
    m_o_p: str
    m_r_o: str
    m_u_r: str
    m_v_r: str
    m_w_k: str
    m_x_n: str
    m_y_r: str
    m_z_n: str
    n_a_d: str
    n_g_n: str
    n_i_o: str
    n_o_k: str
    n_p_r: str
    n_z_d: str
    o_m_r: str
    p_a_b: str
    p_e_n: str
    p_g_k: str
    p_h_p: str
    p_k_r: str
    p_l_n: str
    p_y_g: str
    q_a_r: str
    r_s_d: str
    r_u_b: str
    r_w_f: str
    s_a_r: str
    s_b_d: str
    s_c_r: str
    s_d_g: str
    s_e_k: str
    s_g_d: str
    s_h_p: str
    s_l_l: str
    s_o_s: str
    s_r_d: str
    s_t_d: str
    s_y_p: str
    s_z_l: str
    t_h_b: str
    t_j_s: str
    t_m_t: str
    t_n_d: str
    t_o_p: str
    t_r_y: str
    t_t_d: str
    t_w_d: str
    t_z_s: str
    u_a_h: str
    u_g_x: str
    u_s_d: str
    u_y_u: str
    u_z_s: str
    v_e_f: str
    v_n_d: str
    v_u_v: str
    w_s_t: str
    x_a_f: str
    x_c_d: str
    x_o_f: str
    x_p_f: str
    x_x_x: str
    y_e_r: str
    z_a_r: str
    z_m_w: str
    z_w_l: str
    b_y_n: str
    s_s_p: str
    s_t_n: str
    v_e_s: str
    m_r_u: str
    @staticmethod
    def _from(obj: _winrt.Object) -> CurrencyIdentifiers: ...

class GeographicRegion(_winrt.Object):
    code: str
    code_three_digit: str
    code_three_letter: str
    code_two_letter: str
    currencies_in_use: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    display_name: str
    native_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> GeographicRegion: ...
    @typing.overload
    def __init__(self, geographic_region_code: str) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...
    @staticmethod
    def is_supported(geographic_region_code: str) -> _winrt.Boolean: ...

class Language(_winrt.Object):
    display_name: str
    language_tag: str
    native_name: str
    script: str
    layout_direction: LanguageLayoutDirection
    abbreviated_name: str
    current_input_method_language_tag: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Language: ...
    def __init__(self, language_tag: str) -> None: ...
    def get_extension_subtags(self, singleton: str) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]: ...
    @staticmethod
    def get_mui_compatible_language_list_from_language_tags(language_tags: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    @staticmethod
    def is_well_formed(language_tag: str) -> _winrt.Boolean: ...
    @staticmethod
    def try_set_input_method_language_tag(language_tag: str) -> _winrt.Boolean: ...

class NumeralSystemIdentifiers(_winrt.Object):
    full_wide: str
    arab: str
    arab_ext: str
    bali: str
    beng: str
    cham: str
    deva: str
    mymr_shan: str
    gujr: str
    guru: str
    hani_dec: str
    java: str
    kali: str
    khmr: str
    knda: str
    lana: str
    lana_tham: str
    laoo: str
    latn: str
    lepc: str
    limb: str
    mlym: str
    mong: str
    mtei: str
    mymr: str
    nkoo: str
    olck: str
    orya: str
    saur: str
    sund: str
    talu: str
    taml_dec: str
    telu: str
    thai: str
    tibt: str
    vaii: str
    math_bold: str
    math_dbl: str
    math_mono: str
    math_sanb: str
    math_sans: str
    osma: str
    zmth_bold: str
    zmth_dbl: str
    zmth_mono: str
    zmth_sanb: str
    zmth_sans: str
    brah: str
    @staticmethod
    def _from(obj: _winrt.Object) -> NumeralSystemIdentifiers: ...

