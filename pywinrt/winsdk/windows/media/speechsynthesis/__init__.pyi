# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.media
import winsdk.windows.media.core
import winsdk.windows.storage.streams

class SpeechAppendedSilence(enum.IntEnum):
    DEFAULT = 0
    MIN = 1

class SpeechPunctuationSilence(enum.IntEnum):
    DEFAULT = 0
    MIN = 1

class VoiceGender(enum.IntEnum):
    MALE = 0
    FEMALE = 1

Self = typing.TypeVar('Self')

class SpeechSynthesisStream(_winrt.Object):
    timed_metadata_tracks: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.core.TimedMetadataTrack]]
    markers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.IMediaMarker]]
    content_type: str
    size: _winrt.UInt64
    can_read: _winrt.Boolean
    can_write: _winrt.Boolean
    position: _winrt.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechSynthesisStream: ...
    def clone_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def get_input_stream_at(self, position: _winrt.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...
    def get_output_stream_at(self, position: _winrt.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], count: _winrt.UInt32, options: winsdk.windows.storage.streams.InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, _winrt.UInt32]: ...
    def seek(self, position: _winrt.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class SpeechSynthesizer(_winrt.Object):
    voice: typing.Optional[VoiceInformation]
    options: typing.Optional[SpeechSynthesizerOptions]
    all_voices: typing.Optional[winsdk.windows.foundation.collections.IVectorView[VoiceInformation]]
    default_voice: typing.Optional[VoiceInformation]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechSynthesizer: ...
    def __new__(cls: typing.Type[SpeechSynthesizer]) -> SpeechSynthesizer:...
    def close(self) -> None: ...
    def synthesize_ssml_to_stream_async(self, ssml: str) -> winsdk.windows.foundation.IAsyncOperation[SpeechSynthesisStream]: ...
    def synthesize_text_to_stream_async(self, text: str) -> winsdk.windows.foundation.IAsyncOperation[SpeechSynthesisStream]: ...
    @staticmethod
    def try_set_default_voice_async(voice: typing.Optional[VoiceInformation]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...

class SpeechSynthesizerOptions(_winrt.Object):
    include_word_boundary_metadata: _winrt.Boolean
    include_sentence_boundary_metadata: _winrt.Boolean
    speaking_rate: _winrt.Double
    audio_volume: _winrt.Double
    audio_pitch: _winrt.Double
    punctuation_silence: SpeechPunctuationSilence
    appended_silence: SpeechAppendedSilence
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechSynthesizerOptions: ...

class VoiceInformation(_winrt.Object):
    description: str
    display_name: str
    gender: VoiceGender
    id: str
    language: str
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceInformation: ...

