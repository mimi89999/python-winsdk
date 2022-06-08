# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.globalization
import winsdk.windows.storage

class SpeechContinuousRecognitionMode(enum.IntEnum):
    DEFAULT = 0
    PAUSE_ON_RECOGNITION = 1

class SpeechRecognitionAudioProblem(enum.IntEnum):
    NONE = 0
    TOO_NOISY = 1
    NO_SIGNAL = 2
    TOO_LOUD = 3
    TOO_QUIET = 4
    TOO_FAST = 5
    TOO_SLOW = 6

class SpeechRecognitionConfidence(enum.IntEnum):
    HIGH = 0
    MEDIUM = 1
    LOW = 2
    REJECTED = 3

class SpeechRecognitionConstraintProbability(enum.IntEnum):
    DEFAULT = 0
    MIN = 1
    MAX = 2

class SpeechRecognitionConstraintType(enum.IntEnum):
    TOPIC = 0
    LIST = 1
    GRAMMAR = 2
    VOICE_COMMAND_DEFINITION = 3

class SpeechRecognitionResultStatus(enum.IntEnum):
    SUCCESS = 0
    TOPIC_LANGUAGE_NOT_SUPPORTED = 1
    GRAMMAR_LANGUAGE_MISMATCH = 2
    GRAMMAR_COMPILATION_FAILURE = 3
    AUDIO_QUALITY_FAILURE = 4
    USER_CANCELED = 5
    UNKNOWN = 6
    TIMEOUT_EXCEEDED = 7
    PAUSE_LIMIT_EXCEEDED = 8
    NETWORK_FAILURE = 9
    MICROPHONE_UNAVAILABLE = 10

class SpeechRecognitionScenario(enum.IntEnum):
    WEB_SEARCH = 0
    DICTATION = 1
    FORM_FILLING = 2

class SpeechRecognizerState(enum.IntEnum):
    IDLE = 0
    CAPTURING = 1
    PROCESSING = 2
    SOUND_STARTED = 3
    SOUND_ENDED = 4
    SPEECH_DETECTED = 5
    PAUSED = 6

Self = typing.TypeVar('Self')

class SpeechContinuousRecognitionCompletedEventArgs(_winrt.Object):
    status: SpeechRecognitionResultStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechContinuousRecognitionCompletedEventArgs: ...

class SpeechContinuousRecognitionResultGeneratedEventArgs(_winrt.Object):
    result: typing.Optional[SpeechRecognitionResult]
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechContinuousRecognitionResultGeneratedEventArgs: ...

class SpeechContinuousRecognitionSession(_winrt.Object):
    auto_stop_silence_timeout: winsdk.windows.foundation.TimeSpan
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechContinuousRecognitionSession: ...
    def cancel_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def pause_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def resume(self) -> None: ...
    @typing.overload
    def start_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def start_async(self, mode: SpeechContinuousRecognitionMode) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def stop_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def add_completed(self, value: winsdk.windows.foundation.TypedEventHandler[SpeechContinuousRecognitionSession, SpeechContinuousRecognitionCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_completed(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_result_generated(self, value: winsdk.windows.foundation.TypedEventHandler[SpeechContinuousRecognitionSession, SpeechContinuousRecognitionResultGeneratedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_result_generated(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SpeechRecognitionCompilationResult(_winrt.Object):
    status: SpeechRecognitionResultStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionCompilationResult: ...

class SpeechRecognitionGrammarFileConstraint(_winrt.Object):
    tag: str
    probability: SpeechRecognitionConstraintProbability
    is_enabled: _winrt.Boolean
    type: SpeechRecognitionConstraintType
    grammar_file: typing.Optional[winsdk.windows.storage.StorageFile]
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionGrammarFileConstraint: ...
    @typing.overload
    def __init__(self, file: typing.Optional[winsdk.windows.storage.StorageFile]) -> None: ...
    @typing.overload
    def __init__(self, file: typing.Optional[winsdk.windows.storage.StorageFile], tag: str) -> None: ...

class SpeechRecognitionHypothesis(_winrt.Object):
    text: str
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionHypothesis: ...

class SpeechRecognitionHypothesisGeneratedEventArgs(_winrt.Object):
    hypothesis: typing.Optional[SpeechRecognitionHypothesis]
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionHypothesisGeneratedEventArgs: ...

class SpeechRecognitionListConstraint(_winrt.Object):
    tag: str
    probability: SpeechRecognitionConstraintProbability
    is_enabled: _winrt.Boolean
    type: SpeechRecognitionConstraintType
    commands: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionListConstraint: ...
    @typing.overload
    def __init__(self, commands: typing.Iterable[str]) -> None: ...
    @typing.overload
    def __init__(self, commands: typing.Iterable[str], tag: str) -> None: ...

class SpeechRecognitionQualityDegradingEventArgs(_winrt.Object):
    problem: SpeechRecognitionAudioProblem
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionQualityDegradingEventArgs: ...

class SpeechRecognitionResult(_winrt.Object):
    confidence: SpeechRecognitionConfidence
    constraint: typing.Optional[ISpeechRecognitionConstraint]
    raw_confidence: _winrt.Double
    rule_path: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    semantic_interpretation: typing.Optional[SpeechRecognitionSemanticInterpretation]
    status: SpeechRecognitionResultStatus
    text: str
    phrase_duration: winsdk.windows.foundation.TimeSpan
    phrase_start_time: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionResult: ...
    def get_alternates(self, max_alternates: _winrt.UInt32) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[SpeechRecognitionResult]]: ...

class SpeechRecognitionSemanticInterpretation(_winrt.Object):
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.windows.foundation.collections.IVectorView[str]]]
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionSemanticInterpretation: ...

class SpeechRecognitionTopicConstraint(_winrt.Object):
    tag: str
    probability: SpeechRecognitionConstraintProbability
    is_enabled: _winrt.Boolean
    type: SpeechRecognitionConstraintType
    scenario: SpeechRecognitionScenario
    topic_hint: str
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionTopicConstraint: ...
    @typing.overload
    def __init__(self, scenario: SpeechRecognitionScenario, topic_hint: str) -> None: ...
    @typing.overload
    def __init__(self, scenario: SpeechRecognitionScenario, topic_hint: str, tag: str) -> None: ...

class SpeechRecognitionVoiceCommandDefinitionConstraint(_winrt.Object):
    tag: str
    probability: SpeechRecognitionConstraintProbability
    is_enabled: _winrt.Boolean
    type: SpeechRecognitionConstraintType
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognitionVoiceCommandDefinitionConstraint: ...

class SpeechRecognizer(_winrt.Object):
    constraints: typing.Optional[winsdk.windows.foundation.collections.IVector[ISpeechRecognitionConstraint]]
    current_language: typing.Optional[winsdk.windows.globalization.Language]
    timeouts: typing.Optional[SpeechRecognizerTimeouts]
    u_i_options: typing.Optional[SpeechRecognizerUIOptions]
    continuous_recognition_session: typing.Optional[SpeechContinuousRecognitionSession]
    state: SpeechRecognizerState
    supported_grammar_languages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.globalization.Language]]
    supported_topic_languages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.globalization.Language]]
    system_speech_language: typing.Optional[winsdk.windows.globalization.Language]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognizer: ...
    @typing.overload
    def __init__(self, language: typing.Optional[winsdk.windows.globalization.Language]) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...
    def close(self) -> None: ...
    def compile_constraints_async(self) -> winsdk.windows.foundation.IAsyncOperation[SpeechRecognitionCompilationResult]: ...
    def recognize_async(self) -> winsdk.windows.foundation.IAsyncOperation[SpeechRecognitionResult]: ...
    def recognize_with_u_i_async(self) -> winsdk.windows.foundation.IAsyncOperation[SpeechRecognitionResult]: ...
    def stop_recognition_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def try_set_system_speech_language_async(speech_language: typing.Optional[winsdk.windows.globalization.Language]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def add_recognition_quality_degrading(self, speech_recognition_quality_degrading_handler: winsdk.windows.foundation.TypedEventHandler[SpeechRecognizer, SpeechRecognitionQualityDegradingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_recognition_quality_degrading(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_state_changed(self, state_changed_handler: winsdk.windows.foundation.TypedEventHandler[SpeechRecognizer, SpeechRecognizerStateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_hypothesis_generated(self, value: winsdk.windows.foundation.TypedEventHandler[SpeechRecognizer, SpeechRecognitionHypothesisGeneratedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_hypothesis_generated(self, value: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SpeechRecognizerStateChangedEventArgs(_winrt.Object):
    state: SpeechRecognizerState
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognizerStateChangedEventArgs: ...

class SpeechRecognizerTimeouts(_winrt.Object):
    initial_silence_timeout: winsdk.windows.foundation.TimeSpan
    end_silence_timeout: winsdk.windows.foundation.TimeSpan
    babble_timeout: winsdk.windows.foundation.TimeSpan
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognizerTimeouts: ...

class SpeechRecognizerUIOptions(_winrt.Object):
    show_confirmation: _winrt.Boolean
    is_read_back_enabled: _winrt.Boolean
    example_text: str
    audible_prompt: str
    @staticmethod
    def _from(obj: _winrt.Object) -> SpeechRecognizerUIOptions: ...

class ISpeechRecognitionConstraint(_winrt.Object):
    is_enabled: _winrt.Boolean
    probability: SpeechRecognitionConstraintProbability
    tag: str
    type: SpeechRecognitionConstraintType
    @staticmethod
    def _from(obj: _winrt.Object) -> ISpeechRecognitionConstraint: ...

