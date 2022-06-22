# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Gaming.UI")

try:
    import winsdk.windows.applicationmodel.activation
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class GameChatMessageOrigin(enum.IntEnum):
    VOICE = 0
    TEXT = 1

class GameChatOverlayPosition(enum.IntEnum):
    BOTTOM_CENTER = 0
    BOTTOM_LEFT = 1
    BOTTOM_RIGHT = 2
    MIDDLE_RIGHT = 3
    MIDDLE_LEFT = 4
    TOP_CENTER = 5
    TOP_LEFT = 6
    TOP_RIGHT = 7

_ns_module._register_GameChatMessageOrigin(GameChatMessageOrigin)
_ns_module._register_GameChatOverlayPosition(GameChatOverlayPosition)

GameBar = _ns_module.GameBar
GameChatMessageReceivedEventArgs = _ns_module.GameChatMessageReceivedEventArgs
GameChatOverlay = _ns_module.GameChatOverlay
GameChatOverlayMessageSource = _ns_module.GameChatOverlayMessageSource
GameUIProviderActivatedEventArgs = _ns_module.GameUIProviderActivatedEventArgs
