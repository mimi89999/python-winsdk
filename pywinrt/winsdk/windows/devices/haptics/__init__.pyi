# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class VibrationAccessStatus(enum.IntEnum):
    ALLOWED = 0
    DENIED_BY_USER = 1
    DENIED_BY_SYSTEM = 2
    DENIED_BY_ENERGY_SAVER = 3

Self = typing.TypeVar('Self')

class KnownSimpleHapticsControllerWaveforms(winsdk.system.Object):
    buzz_continuous: typing.ClassVar[winsdk.system.UInt16]
    click: typing.ClassVar[winsdk.system.UInt16]
    press: typing.ClassVar[winsdk.system.UInt16]
    release: typing.ClassVar[winsdk.system.UInt16]
    rumble_continuous: typing.ClassVar[winsdk.system.UInt16]
    brush_continuous: typing.ClassVar[winsdk.system.UInt16]
    chisel_marker_continuous: typing.ClassVar[winsdk.system.UInt16]
    eraser_continuous: typing.ClassVar[winsdk.system.UInt16]
    error: typing.ClassVar[winsdk.system.UInt16]
    galaxy_pen_continuous: typing.ClassVar[winsdk.system.UInt16]
    hover: typing.ClassVar[winsdk.system.UInt16]
    ink_continuous: typing.ClassVar[winsdk.system.UInt16]
    marker_continuous: typing.ClassVar[winsdk.system.UInt16]
    pencil_continuous: typing.ClassVar[winsdk.system.UInt16]
    success: typing.ClassVar[winsdk.system.UInt16]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KnownSimpleHapticsControllerWaveforms: ...

class SimpleHapticsController(winsdk.system.Object):
    id: str
    is_intensity_supported: winsdk.system.Boolean
    is_play_count_supported: winsdk.system.Boolean
    is_play_duration_supported: winsdk.system.Boolean
    is_replay_pause_interval_supported: winsdk.system.Boolean
    supported_feedback: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SimpleHapticsControllerFeedback]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SimpleHapticsController: ...
    @typing.overload
    def send_haptic_feedback(self, feedback: typing.Optional[SimpleHapticsControllerFeedback]) -> None: ...
    @typing.overload
    def send_haptic_feedback(self, feedback: typing.Optional[SimpleHapticsControllerFeedback], intensity: winsdk.system.Double) -> None: ...
    def send_haptic_feedback_for_duration(self, feedback: typing.Optional[SimpleHapticsControllerFeedback], intensity: winsdk.system.Double, play_duration: datetime.timedelta) -> None: ...
    def send_haptic_feedback_for_play_count(self, feedback: typing.Optional[SimpleHapticsControllerFeedback], intensity: winsdk.system.Double, play_count: winsdk.system.Int32, replay_pause_interval: datetime.timedelta) -> None: ...
    def stop_feedback(self) -> None: ...

class SimpleHapticsControllerFeedback(winsdk.system.Object):
    duration: datetime.timedelta
    waveform: winsdk.system.UInt16
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SimpleHapticsControllerFeedback: ...

class VibrationDevice(winsdk.system.Object):
    id: str
    simple_haptics_controller: typing.Optional[SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VibrationDevice: ...
    @staticmethod
    def find_all_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[VibrationDevice]]: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[VibrationDevice]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[VibrationDevice]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[VibrationAccessStatus]: ...

