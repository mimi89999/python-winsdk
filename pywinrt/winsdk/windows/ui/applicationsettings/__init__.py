# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.UI.ApplicationSettings")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.security.credentials
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.ui.popups
except ImportError:
    pass

class SettingsEdgeLocation(enum.IntEnum):
    RIGHT = 0
    LEFT = 1

class SupportedWebAccountActions(enum.IntFlag):
    NONE = 0
    RECONNECT = 0x1
    REMOVE = 0x2
    VIEW_DETAILS = 0x4
    MANAGE = 0x8
    MORE = 0x10

class WebAccountAction(enum.IntEnum):
    RECONNECT = 0
    REMOVE = 1
    VIEW_DETAILS = 2
    MANAGE = 3
    MORE = 4

_ns_module._register_SettingsEdgeLocation(SettingsEdgeLocation)
_ns_module._register_SupportedWebAccountActions(SupportedWebAccountActions)
_ns_module._register_WebAccountAction(WebAccountAction)

AccountsSettingsPane = _ns_module.AccountsSettingsPane
AccountsSettingsPaneCommandsRequestedEventArgs = _ns_module.AccountsSettingsPaneCommandsRequestedEventArgs
AccountsSettingsPaneEventDeferral = _ns_module.AccountsSettingsPaneEventDeferral
CredentialCommand = _ns_module.CredentialCommand
SettingsCommand = _ns_module.SettingsCommand
SettingsPane = _ns_module.SettingsPane
SettingsPaneCommandsRequest = _ns_module.SettingsPaneCommandsRequest
SettingsPaneCommandsRequestedEventArgs = _ns_module.SettingsPaneCommandsRequestedEventArgs
WebAccountCommand = _ns_module.WebAccountCommand
WebAccountInvokedArgs = _ns_module.WebAccountInvokedArgs
WebAccountProviderCommand = _ns_module.WebAccountProviderCommand
