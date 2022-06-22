# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt

class PhoneNumberFormat(enum.IntEnum):
    E164 = 0
    INTERNATIONAL = 1
    NATIONAL = 2
    RFC3966 = 3

class PhoneNumberMatchResult(enum.IntEnum):
    NO_MATCH = 0
    SHORT_NATIONAL_SIGNIFICANT_NUMBER_MATCH = 1
    NATIONAL_SIGNIFICANT_NUMBER_MATCH = 2
    EXACT_MATCH = 3

class PhoneNumberParseResult(enum.IntEnum):
    VALID = 0
    NOT_A_NUMBER = 1
    INVALID_COUNTRY_CODE = 2
    TOO_SHORT = 3
    TOO_LONG = 4

class PredictedPhoneNumberKind(enum.IntEnum):
    FIXED_LINE = 0
    MOBILE = 1
    FIXED_LINE_OR_MOBILE = 2
    TOLL_FREE = 3
    PREMIUM_RATE = 4
    SHARED_COST = 5
    VOIP = 6
    PERSONAL_NUMBER = 7
    PAGER = 8
    UNIVERSAL_ACCOUNT_NUMBER = 9
    VOICEMAIL = 10
    UNKNOWN = 11

Self = typing.TypeVar('Self')

class PhoneNumberFormatter(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PhoneNumberFormatter: ...
    def __new__(cls: typing.Type[PhoneNumberFormatter]) -> PhoneNumberFormatter:...
    @typing.overload
    def format(self, number: typing.Optional[PhoneNumberInfo]) -> str: ...
    @typing.overload
    def format(self, number: typing.Optional[PhoneNumberInfo], number_format: PhoneNumberFormat) -> str: ...
    def format_partial_string(self, number: str) -> str: ...
    def format_string(self, number: str) -> str: ...
    def format_string_with_left_to_right_markers(self, number: str) -> str: ...
    @staticmethod
    def get_country_code_for_region(region_code: str) -> _winrt.Int32: ...
    @staticmethod
    def get_national_direct_dialing_prefix_for_region(region_code: str, strip_non_digit: _winrt.Boolean) -> str: ...
    @staticmethod
    def try_create(region_code: str) -> typing.Optional[PhoneNumberFormatter]: ...
    @staticmethod
    def wrap_with_left_to_right_markers(number: str) -> str: ...

class PhoneNumberInfo(_winrt.Object):
    country_code: _winrt.Int32
    phone_number: str
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PhoneNumberInfo: ...
    def __new__(cls: typing.Type[PhoneNumberInfo], number: str) -> PhoneNumberInfo:...
    def check_number_match(self, other_number: typing.Optional[PhoneNumberInfo]) -> PhoneNumberMatchResult: ...
    def get_geographic_region_code(self) -> str: ...
    def get_length_of_geographical_area_code(self) -> _winrt.Int32: ...
    def get_length_of_national_destination_code(self) -> _winrt.Int32: ...
    def get_national_significant_number(self) -> str: ...
    def predict_number_kind(self) -> PredictedPhoneNumberKind: ...
    def to_string(self) -> str: ...
    @typing.overload
    @staticmethod
    def try_parse(input: str) -> typing.Tuple[PhoneNumberParseResult, typing.Optional[PhoneNumberInfo]]: ...
    @typing.overload
    @staticmethod
    def try_parse(input: str, region_code: str) -> typing.Tuple[PhoneNumberParseResult, typing.Optional[PhoneNumberInfo]]: ...

