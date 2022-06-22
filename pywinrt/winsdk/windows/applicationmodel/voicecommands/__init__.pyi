# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt
import winsdk.windows.applicationmodel.appservice
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.globalization
import winsdk.windows.media.speechrecognition
import winsdk.windows.storage

class VoiceCommandCompletionReason(enum.IntEnum):
    UNKNOWN = 0
    COMMUNICATION_FAILED = 1
    RESOURCE_LIMITS_EXCEEDED = 2
    CANCELED = 3
    TIMEOUT_EXCEEDED = 4
    APP_LAUNCHED = 5
    COMPLETED = 6

class VoiceCommandContentTileType(enum.IntEnum):
    TITLE_ONLY = 0
    TITLE_WITH_TEXT = 1
    TITLE_WITH68X68_ICON = 2
    TITLE_WITH68X68_ICON_AND_TEXT = 3
    TITLE_WITH68X92_ICON = 4
    TITLE_WITH68X92_ICON_AND_TEXT = 5
    TITLE_WITH280X140_ICON = 6
    TITLE_WITH280X140_ICON_AND_TEXT = 7

Self = typing.TypeVar('Self')

class VoiceCommand(_winrt.Object):
    command_name: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.windows.foundation.collections.IVectorView[str]]]
    speech_recognition_result: typing.Optional[winsdk.windows.media.speechrecognition.SpeechRecognitionResult]
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommand: ...

class VoiceCommandCompletedEventArgs(_winrt.Object):
    reason: VoiceCommandCompletionReason
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandCompletedEventArgs: ...

class VoiceCommandConfirmationResult(_winrt.Object):
    confirmed: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandConfirmationResult: ...

class VoiceCommandContentTile(_winrt.Object):
    title: str
    text_line3: str
    text_line2: str
    text_line1: str
    image: typing.Optional[winsdk.windows.storage.IStorageFile]
    content_tile_type: VoiceCommandContentTileType
    app_launch_argument: str
    app_context: typing.Optional[_winrt.Object]
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandContentTile: ...
    def __new__(cls: typing.Type[VoiceCommandContentTile]) -> VoiceCommandContentTile:...

class VoiceCommandDefinition(_winrt.Object):
    language: str
    name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandDefinition: ...
    def set_phrase_list_async(self, phrase_list_name: str, phrase_list: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class VoiceCommandDefinitionManager(_winrt.Object):
    installed_command_definitions: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, VoiceCommandDefinition]]
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandDefinitionManager: ...
    @staticmethod
    def install_command_definitions_from_storage_file_async(file: typing.Optional[winsdk.windows.storage.StorageFile]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class VoiceCommandDisambiguationResult(_winrt.Object):
    selected_item: typing.Optional[VoiceCommandContentTile]
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandDisambiguationResult: ...

class VoiceCommandResponse(_winrt.Object):
    repeat_message: typing.Optional[VoiceCommandUserMessage]
    message: typing.Optional[VoiceCommandUserMessage]
    app_launch_argument: str
    voice_command_content_tiles: typing.Optional[winsdk.windows.foundation.collections.IVector[VoiceCommandContentTile]]
    max_supported_voice_command_content_tiles: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandResponse: ...
    @typing.overload
    @staticmethod
    def create_response(user_message: typing.Optional[VoiceCommandUserMessage]) -> typing.Optional[VoiceCommandResponse]: ...
    @typing.overload
    @staticmethod
    def create_response(message: typing.Optional[VoiceCommandUserMessage], content_tiles: typing.Iterable[VoiceCommandContentTile]) -> typing.Optional[VoiceCommandResponse]: ...
    @typing.overload
    @staticmethod
    def create_response_for_prompt(message: typing.Optional[VoiceCommandUserMessage], repeat_message: typing.Optional[VoiceCommandUserMessage]) -> typing.Optional[VoiceCommandResponse]: ...
    @typing.overload
    @staticmethod
    def create_response_for_prompt(message: typing.Optional[VoiceCommandUserMessage], repeat_message: typing.Optional[VoiceCommandUserMessage], content_tiles: typing.Iterable[VoiceCommandContentTile]) -> typing.Optional[VoiceCommandResponse]: ...

class VoiceCommandServiceConnection(_winrt.Object):
    language: typing.Optional[winsdk.windows.globalization.Language]
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandServiceConnection: ...
    @staticmethod
    def from_app_service_trigger_details(trigger_details: typing.Optional[winsdk.windows.applicationmodel.appservice.AppServiceTriggerDetails]) -> typing.Optional[VoiceCommandServiceConnection]: ...
    def get_voice_command_async(self) -> winsdk.windows.foundation.IAsyncOperation[VoiceCommand]: ...
    def report_failure_async(self, response: typing.Optional[VoiceCommandResponse]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def report_progress_async(self, response: typing.Optional[VoiceCommandResponse]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def report_success_async(self, response: typing.Optional[VoiceCommandResponse]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def request_app_launch_async(self, response: typing.Optional[VoiceCommandResponse]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def request_confirmation_async(self, response: typing.Optional[VoiceCommandResponse]) -> winsdk.windows.foundation.IAsyncOperation[VoiceCommandConfirmationResult]: ...
    def request_disambiguation_async(self, response: typing.Optional[VoiceCommandResponse]) -> winsdk.windows.foundation.IAsyncOperation[VoiceCommandDisambiguationResult]: ...
    def add_voice_command_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[VoiceCommandServiceConnection, VoiceCommandCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_voice_command_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class VoiceCommandUserMessage(_winrt.Object):
    spoken_message: str
    display_message: str
    @staticmethod
    def _from(obj: _winrt.Object) -> VoiceCommandUserMessage: ...
    def __new__(cls: typing.Type[VoiceCommandUserMessage]) -> VoiceCommandUserMessage:...

