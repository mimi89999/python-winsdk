# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.storage.streams

class MidiMessageType(enum.IntEnum):
    NONE = 0
    NOTE_OFF = 128
    NOTE_ON = 144
    POLYPHONIC_KEY_PRESSURE = 160
    CONTROL_CHANGE = 176
    PROGRAM_CHANGE = 192
    CHANNEL_PRESSURE = 208
    PITCH_BEND_CHANGE = 224
    SYSTEM_EXCLUSIVE = 240
    MIDI_TIME_CODE = 241
    SONG_POSITION_POINTER = 242
    SONG_SELECT = 243
    TUNE_REQUEST = 246
    END_SYSTEM_EXCLUSIVE = 247
    TIMING_CLOCK = 248
    START = 250
    CONTINUE = 251
    STOP = 252
    ACTIVE_SENSING = 254
    SYSTEM_RESET = 255

Self = typing.TypeVar('Self')

class MidiActiveSensingMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiActiveSensingMessage: ...
    def __new__(cls: typing.Type[MidiActiveSensingMessage]) -> MidiActiveSensingMessage:...

class MidiChannelPressureMessage(winsdk.system.Object):
    channel: winsdk.system.UInt8
    pressure: winsdk.system.UInt8
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiChannelPressureMessage: ...
    def __new__(cls: typing.Type[MidiChannelPressureMessage], channel: winsdk.system.UInt8, pressure: winsdk.system.UInt8) -> MidiChannelPressureMessage:...

class MidiContinueMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiContinueMessage: ...
    def __new__(cls: typing.Type[MidiContinueMessage]) -> MidiContinueMessage:...

class MidiControlChangeMessage(winsdk.system.Object):
    channel: winsdk.system.UInt8
    control_value: winsdk.system.UInt8
    controller: winsdk.system.UInt8
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiControlChangeMessage: ...
    def __new__(cls: typing.Type[MidiControlChangeMessage], channel: winsdk.system.UInt8, controller: winsdk.system.UInt8, control_value: winsdk.system.UInt8) -> MidiControlChangeMessage:...

class MidiInPort(winsdk.system.Object):
    device_id: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiInPort: ...
    def close(self) -> None: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[MidiInPort]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_message_received(self, handler: winsdk.windows.foundation.TypedEventHandler[MidiInPort, MidiMessageReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_message_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MidiMessageReceivedEventArgs(winsdk.system.Object):
    message: typing.Optional[IMidiMessage]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiMessageReceivedEventArgs: ...

class MidiNoteOffMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    channel: winsdk.system.UInt8
    note: winsdk.system.UInt8
    velocity: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiNoteOffMessage: ...
    def __new__(cls: typing.Type[MidiNoteOffMessage], channel: winsdk.system.UInt8, note: winsdk.system.UInt8, velocity: winsdk.system.UInt8) -> MidiNoteOffMessage:...

class MidiNoteOnMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    channel: winsdk.system.UInt8
    note: winsdk.system.UInt8
    velocity: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiNoteOnMessage: ...
    def __new__(cls: typing.Type[MidiNoteOnMessage], channel: winsdk.system.UInt8, note: winsdk.system.UInt8, velocity: winsdk.system.UInt8) -> MidiNoteOnMessage:...

class MidiOutPort(winsdk.system.Object):
    device_id: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiOutPort: ...
    def close(self) -> None: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[IMidiOutPort]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def send_buffer(self, midi_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    def send_message(self, midi_message: typing.Optional[IMidiMessage]) -> None: ...

class MidiPitchBendChangeMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    bend: winsdk.system.UInt16
    channel: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiPitchBendChangeMessage: ...
    def __new__(cls: typing.Type[MidiPitchBendChangeMessage], channel: winsdk.system.UInt8, bend: winsdk.system.UInt16) -> MidiPitchBendChangeMessage:...

class MidiPolyphonicKeyPressureMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    channel: winsdk.system.UInt8
    note: winsdk.system.UInt8
    pressure: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiPolyphonicKeyPressureMessage: ...
    def __new__(cls: typing.Type[MidiPolyphonicKeyPressureMessage], channel: winsdk.system.UInt8, note: winsdk.system.UInt8, pressure: winsdk.system.UInt8) -> MidiPolyphonicKeyPressureMessage:...

class MidiProgramChangeMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    channel: winsdk.system.UInt8
    program: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiProgramChangeMessage: ...
    def __new__(cls: typing.Type[MidiProgramChangeMessage], channel: winsdk.system.UInt8, program: winsdk.system.UInt8) -> MidiProgramChangeMessage:...

class MidiSongPositionPointerMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    beats: winsdk.system.UInt16
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiSongPositionPointerMessage: ...
    def __new__(cls: typing.Type[MidiSongPositionPointerMessage], beats: winsdk.system.UInt16) -> MidiSongPositionPointerMessage:...

class MidiSongSelectMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    song: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiSongSelectMessage: ...
    def __new__(cls: typing.Type[MidiSongSelectMessage], song: winsdk.system.UInt8) -> MidiSongSelectMessage:...

class MidiStartMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiStartMessage: ...
    def __new__(cls: typing.Type[MidiStartMessage]) -> MidiStartMessage:...

class MidiStopMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiStopMessage: ...
    def __new__(cls: typing.Type[MidiStopMessage]) -> MidiStopMessage:...

class MidiSynthesizer(winsdk.system.Object):
    device_id: str
    volume: winsdk.system.Double
    audio_device: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiSynthesizer: ...
    def close(self) -> None: ...
    @typing.overload
    @staticmethod
    def create_async() -> winsdk.windows.foundation.IAsyncOperation[MidiSynthesizer]: ...
    @typing.overload
    @staticmethod
    def create_async(audio_device: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]) -> winsdk.windows.foundation.IAsyncOperation[MidiSynthesizer]: ...
    @staticmethod
    def is_synthesizer(midi_device: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]) -> winsdk.system.Boolean: ...
    def send_buffer(self, midi_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    def send_message(self, midi_message: typing.Optional[IMidiMessage]) -> None: ...

class MidiSystemExclusiveMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiSystemExclusiveMessage: ...
    def __new__(cls: typing.Type[MidiSystemExclusiveMessage], raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> MidiSystemExclusiveMessage:...

class MidiSystemResetMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiSystemResetMessage: ...
    def __new__(cls: typing.Type[MidiSystemResetMessage]) -> MidiSystemResetMessage:...

class MidiTimeCodeMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    frame_type: winsdk.system.UInt8
    values: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiTimeCodeMessage: ...
    def __new__(cls: typing.Type[MidiTimeCodeMessage], frame_type: winsdk.system.UInt8, values: winsdk.system.UInt8) -> MidiTimeCodeMessage:...

class MidiTimingClockMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiTimingClockMessage: ...
    def __new__(cls: typing.Type[MidiTimingClockMessage]) -> MidiTimingClockMessage:...

class MidiTuneRequestMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MidiTuneRequestMessage: ...
    def __new__(cls: typing.Type[MidiTuneRequestMessage]) -> MidiTuneRequestMessage:...

class IMidiMessage(winsdk.system.Object):
    raw_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.timedelta
    type: MidiMessageType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IMidiMessage: ...

class IMidiOutPort(winsdk.system.Object):
    device_id: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IMidiOutPort: ...
    def close(self) -> None: ...
    def send_buffer(self, midi_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    def send_message(self, midi_message: typing.Optional[IMidiMessage]) -> None: ...

