# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.ApplicationModel.SocialInfo")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.graphics.imaging
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class SocialFeedItemStyle(enum.IntEnum):
    DEFAULT = 0
    PHOTO = 1

class SocialFeedKind(enum.IntEnum):
    HOME_FEED = 0
    CONTACT_FEED = 1
    DASHBOARD = 2

class SocialFeedUpdateMode(enum.IntEnum):
    APPEND = 0
    REPLACE = 1

class SocialItemBadgeStyle(enum.IntEnum):
    HIDDEN = 0
    VISIBLE = 1
    VISIBLE_WITH_COUNT = 2

_ns_module._register_SocialFeedItemStyle(SocialFeedItemStyle)
_ns_module._register_SocialFeedKind(SocialFeedKind)
_ns_module._register_SocialFeedUpdateMode(SocialFeedUpdateMode)
_ns_module._register_SocialItemBadgeStyle(SocialItemBadgeStyle)

SocialFeedChildItem = _ns_module.SocialFeedChildItem
SocialFeedContent = _ns_module.SocialFeedContent
SocialFeedItem = _ns_module.SocialFeedItem
SocialFeedSharedItem = _ns_module.SocialFeedSharedItem
SocialItemThumbnail = _ns_module.SocialItemThumbnail
SocialUserInfo = _ns_module.SocialUserInfo
