# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.UI.Notifications.Management")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.ui.notifications
except ImportError:
    pass

class UserNotificationListenerAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED = 1
    DENIED = 2

_ns_module._register_UserNotificationListenerAccessStatus(UserNotificationListenerAccessStatus)

UserNotificationListener = _ns_module.UserNotificationListener
