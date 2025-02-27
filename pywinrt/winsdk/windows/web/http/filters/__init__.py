# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Web.Http.Filters")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.networking.sockets
except ImportError:
    pass

try:
    import winsdk.windows.security.credentials
except ImportError:
    pass

try:
    import winsdk.windows.security.cryptography.certificates
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.web.http
except ImportError:
    pass

class HttpCacheReadBehavior(enum.IntEnum):
    DEFAULT = 0
    MOST_RECENT = 1
    ONLY_FROM_CACHE = 2
    NO_CACHE = 3

class HttpCacheWriteBehavior(enum.IntEnum):
    DEFAULT = 0
    NO_CACHE = 1

class HttpCookieUsageBehavior(enum.IntEnum):
    DEFAULT = 0
    NO_COOKIES = 1

_ns_module._register_HttpCacheReadBehavior(HttpCacheReadBehavior)
_ns_module._register_HttpCacheWriteBehavior(HttpCacheWriteBehavior)
_ns_module._register_HttpCookieUsageBehavior(HttpCookieUsageBehavior)

HttpBaseProtocolFilter = _ns_module.HttpBaseProtocolFilter
HttpCacheControl = _ns_module.HttpCacheControl
HttpServerCustomValidationRequestedEventArgs = _ns_module.HttpServerCustomValidationRequestedEventArgs
IHttpFilter = _ns_module.IHttpFilter
