# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams
import winsdk.windows.web.http

class AdaptiveMediaSourceCreationStatus(enum.IntEnum):
    SUCCESS = 0
    MANIFEST_DOWNLOAD_FAILURE = 1
    MANIFEST_PARSE_FAILURE = 2
    UNSUPPORTED_MANIFEST_CONTENT_TYPE = 3
    UNSUPPORTED_MANIFEST_VERSION = 4
    UNSUPPORTED_MANIFEST_PROFILE = 5
    UNKNOWN_FAILURE = 6

class AdaptiveMediaSourceDiagnosticType(enum.IntEnum):
    MANIFEST_UNCHANGED_UPON_RELOAD = 0
    MANIFEST_MISMATCH_UPON_RELOAD = 1
    MANIFEST_SIGNALED_END_OF_LIVE_EVENT_UPON_RELOAD = 2
    MEDIA_SEGMENT_SKIPPED = 3
    RESOURCE_NOT_FOUND = 4
    RESOURCE_TIMED_OUT = 5
    RESOURCE_PARSING_ERROR = 6
    BITRATE_DISABLED = 7
    FATAL_MEDIA_SOURCE_ERROR = 8

class AdaptiveMediaSourceDownloadBitrateChangedReason(enum.IntEnum):
    SUFFICIENT_INBOUND_BITS_PER_SECOND = 0
    INSUFFICIENT_INBOUND_BITS_PER_SECOND = 1
    LOW_BUFFER_LEVEL = 2
    POSITION_CHANGED = 3
    TRACK_SELECTION_CHANGED = 4
    DESIRED_BITRATES_CHANGED = 5
    ERROR_IN_PREVIOUS_BITRATE = 6

class AdaptiveMediaSourceResourceType(enum.IntEnum):
    MANIFEST = 0
    INITIALIZATION_SEGMENT = 1
    MEDIA_SEGMENT = 2
    KEY = 3
    INITIALIZATION_VECTOR = 4
    MEDIA_SEGMENT_INDEX = 5

Self = typing.TypeVar('Self')

class AdaptiveMediaSource(_winrt.Object):
    initial_bitrate: _winrt.UInt32
    inbound_bits_per_second_window: datetime.timedelta
    desired_max_bitrate: typing.Optional[typing.Optional[_winrt.UInt32]]
    desired_live_offset: datetime.timedelta
    desired_min_bitrate: typing.Optional[typing.Optional[_winrt.UInt32]]
    current_playback_bitrate: _winrt.UInt32
    audio_only_playback: _winrt.Boolean
    inbound_bits_per_second: _winrt.UInt64
    available_bitrates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[_winrt.UInt32]]
    current_download_bitrate: _winrt.UInt32
    is_live: _winrt.Boolean
    advanced_settings: typing.Optional[AdaptiveMediaSourceAdvancedSettings]
    desired_seekable_window_size: typing.Optional[typing.Optional[datetime.timedelta]]
    diagnostics: typing.Optional[AdaptiveMediaSourceDiagnostics]
    max_seekable_window_size: typing.Optional[typing.Optional[datetime.timedelta]]
    min_live_offset: typing.Optional[typing.Optional[datetime.timedelta]]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSource: ...
    def close(self) -> None: ...
    @typing.overload
    @staticmethod
    def create_from_stream_async(stream: typing.Optional[winsdk.windows.storage.streams.IInputStream], uri: typing.Optional[winsdk.windows.foundation.Uri], content_type: str) -> winsdk.windows.foundation.IAsyncOperation[AdaptiveMediaSourceCreationResult]: ...
    @typing.overload
    @staticmethod
    def create_from_stream_async(stream: typing.Optional[winsdk.windows.storage.streams.IInputStream], uri: typing.Optional[winsdk.windows.foundation.Uri], content_type: str, http_client: typing.Optional[winsdk.windows.web.http.HttpClient]) -> winsdk.windows.foundation.IAsyncOperation[AdaptiveMediaSourceCreationResult]: ...
    @typing.overload
    @staticmethod
    def create_from_uri_async(uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperation[AdaptiveMediaSourceCreationResult]: ...
    @typing.overload
    @staticmethod
    def create_from_uri_async(uri: typing.Optional[winsdk.windows.foundation.Uri], http_client: typing.Optional[winsdk.windows.web.http.HttpClient]) -> winsdk.windows.foundation.IAsyncOperation[AdaptiveMediaSourceCreationResult]: ...
    def get_correlated_times(self) -> typing.Optional[AdaptiveMediaSourceCorrelatedTimes]: ...
    @staticmethod
    def is_content_type_supported(content_type: str) -> _winrt.Boolean: ...
    def add_download_bitrate_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AdaptiveMediaSource, AdaptiveMediaSourceDownloadBitrateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_download_bitrate_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_download_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[AdaptiveMediaSource, AdaptiveMediaSourceDownloadCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_download_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_download_failed(self, handler: winsdk.windows.foundation.TypedEventHandler[AdaptiveMediaSource, AdaptiveMediaSourceDownloadFailedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_download_failed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_download_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[AdaptiveMediaSource, AdaptiveMediaSourceDownloadRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_download_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_playback_bitrate_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AdaptiveMediaSource, AdaptiveMediaSourcePlaybackBitrateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_playback_bitrate_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AdaptiveMediaSourceAdvancedSettings(_winrt.Object):
    desired_bitrate_headroom_ratio: typing.Optional[typing.Optional[_winrt.Double]]
    bitrate_downgrade_trigger_ratio: typing.Optional[typing.Optional[_winrt.Double]]
    all_segments_independent: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceAdvancedSettings: ...

class AdaptiveMediaSourceCorrelatedTimes(_winrt.Object):
    position: typing.Optional[typing.Optional[datetime.timedelta]]
    presentation_time_stamp: typing.Optional[typing.Optional[datetime.timedelta]]
    program_date_time: typing.Optional[typing.Optional[datetime.datetime]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceCorrelatedTimes: ...

class AdaptiveMediaSourceCreationResult(_winrt.Object):
    http_response_message: typing.Optional[winsdk.windows.web.http.HttpResponseMessage]
    media_source: typing.Optional[AdaptiveMediaSource]
    status: AdaptiveMediaSourceCreationStatus
    extended_error: winsdk.windows.foundation.HResult
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceCreationResult: ...

class AdaptiveMediaSourceDiagnosticAvailableEventArgs(_winrt.Object):
    bitrate: typing.Optional[typing.Optional[_winrt.UInt32]]
    diagnostic_type: AdaptiveMediaSourceDiagnosticType
    position: typing.Optional[typing.Optional[datetime.timedelta]]
    request_id: typing.Optional[typing.Optional[_winrt.Int32]]
    resource_byte_range_length: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_byte_range_offset: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_type: typing.Optional[typing.Optional[AdaptiveMediaSourceResourceType]]
    resource_uri: typing.Optional[winsdk.windows.foundation.Uri]
    segment_id: typing.Optional[typing.Optional[_winrt.UInt64]]
    extended_error: winsdk.windows.foundation.HResult
    resource_content_type: str
    resource_duration: typing.Optional[typing.Optional[datetime.timedelta]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDiagnosticAvailableEventArgs: ...

class AdaptiveMediaSourceDiagnostics(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDiagnostics: ...
    def add_diagnostic_available(self, handler: winsdk.windows.foundation.TypedEventHandler[AdaptiveMediaSourceDiagnostics, AdaptiveMediaSourceDiagnosticAvailableEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_diagnostic_available(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AdaptiveMediaSourceDownloadBitrateChangedEventArgs(_winrt.Object):
    new_value: _winrt.UInt32
    old_value: _winrt.UInt32
    reason: AdaptiveMediaSourceDownloadBitrateChangedReason
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDownloadBitrateChangedEventArgs: ...

class AdaptiveMediaSourceDownloadCompletedEventArgs(_winrt.Object):
    http_response_message: typing.Optional[winsdk.windows.web.http.HttpResponseMessage]
    resource_byte_range_length: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_byte_range_offset: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_type: AdaptiveMediaSourceResourceType
    resource_uri: typing.Optional[winsdk.windows.foundation.Uri]
    position: typing.Optional[typing.Optional[datetime.timedelta]]
    request_id: _winrt.Int32
    statistics: typing.Optional[AdaptiveMediaSourceDownloadStatistics]
    resource_content_type: str
    resource_duration: typing.Optional[typing.Optional[datetime.timedelta]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDownloadCompletedEventArgs: ...

class AdaptiveMediaSourceDownloadFailedEventArgs(_winrt.Object):
    http_response_message: typing.Optional[winsdk.windows.web.http.HttpResponseMessage]
    resource_byte_range_length: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_byte_range_offset: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_type: AdaptiveMediaSourceResourceType
    resource_uri: typing.Optional[winsdk.windows.foundation.Uri]
    extended_error: winsdk.windows.foundation.HResult
    position: typing.Optional[typing.Optional[datetime.timedelta]]
    request_id: _winrt.Int32
    statistics: typing.Optional[AdaptiveMediaSourceDownloadStatistics]
    resource_content_type: str
    resource_duration: typing.Optional[typing.Optional[datetime.timedelta]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDownloadFailedEventArgs: ...

class AdaptiveMediaSourceDownloadRequestedDeferral(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDownloadRequestedDeferral: ...
    def complete(self) -> None: ...

class AdaptiveMediaSourceDownloadRequestedEventArgs(_winrt.Object):
    resource_byte_range_length: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_byte_range_offset: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_type: AdaptiveMediaSourceResourceType
    resource_uri: typing.Optional[winsdk.windows.foundation.Uri]
    result: typing.Optional[AdaptiveMediaSourceDownloadResult]
    position: typing.Optional[typing.Optional[datetime.timedelta]]
    request_id: _winrt.Int32
    resource_content_type: str
    resource_duration: typing.Optional[typing.Optional[datetime.timedelta]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDownloadRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[AdaptiveMediaSourceDownloadRequestedDeferral]: ...

class AdaptiveMediaSourceDownloadResult(_winrt.Object):
    resource_uri: typing.Optional[winsdk.windows.foundation.Uri]
    input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]
    extended_status: _winrt.UInt32
    content_type: str
    buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    resource_byte_range_offset: typing.Optional[typing.Optional[_winrt.UInt64]]
    resource_byte_range_length: typing.Optional[typing.Optional[_winrt.UInt64]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDownloadResult: ...

class AdaptiveMediaSourceDownloadStatistics(_winrt.Object):
    content_bytes_received_count: _winrt.UInt64
    time_to_first_byte_received: typing.Optional[typing.Optional[datetime.timedelta]]
    time_to_headers_received: typing.Optional[typing.Optional[datetime.timedelta]]
    time_to_last_byte_received: typing.Optional[typing.Optional[datetime.timedelta]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourceDownloadStatistics: ...

class AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(_winrt.Object):
    audio_only: _winrt.Boolean
    new_value: _winrt.UInt32
    old_value: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> AdaptiveMediaSourcePlaybackBitrateChangedEventArgs: ...

