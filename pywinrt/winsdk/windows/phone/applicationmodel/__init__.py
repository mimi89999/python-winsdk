# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Phone.ApplicationModel")

class ApplicationProfileModes(enum.IntFlag):
    DEFAULT = 0
    ALTERNATE = 0x1

_ns_module._register_ApplicationProfileModes(ApplicationProfileModes)

ApplicationProfile = _ns_module.ApplicationProfile
