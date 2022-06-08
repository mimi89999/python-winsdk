# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

Self = typing.TypeVar('Self')

class BackgroundEnergyDiagnostics(_winrt.Object):
    device_specific_conversion_factor: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> BackgroundEnergyDiagnostics: ...
    @staticmethod
    def compute_total_energy_usage() -> _winrt.UInt64: ...
    @staticmethod
    def reset_total_energy_usage() -> None: ...

class ForegroundEnergyDiagnostics(_winrt.Object):
    device_specific_conversion_factor: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> ForegroundEnergyDiagnostics: ...
    @staticmethod
    def compute_total_energy_usage() -> _winrt.UInt64: ...
    @staticmethod
    def reset_total_energy_usage() -> None: ...

