# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Web.Http")

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
    import winsdk.windows.security.cryptography.certificates
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.web.http.filters
except ImportError:
    pass

try:
    import winsdk.windows.web.http.headers
except ImportError:
    pass

class HttpCompletionOption(enum.IntEnum):
    RESPONSE_CONTENT_READ = 0
    RESPONSE_HEADERS_READ = 1

class HttpProgressStage(enum.IntEnum):
    NONE = 0
    DETECTING_PROXY = 10
    RESOLVING_NAME = 20
    CONNECTING_TO_SERVER = 30
    NEGOTIATING_SSL = 40
    SENDING_HEADERS = 50
    SENDING_CONTENT = 60
    WAITING_FOR_RESPONSE = 70
    RECEIVING_HEADERS = 80
    RECEIVING_CONTENT = 90

class HttpResponseMessageSource(enum.IntEnum):
    NONE = 0
    CACHE = 1
    NETWORK = 2

class HttpStatusCode(enum.IntEnum):
    NONE = 0
    CONTINUE = 100
    SWITCHING_PROTOCOLS = 101
    PROCESSING = 102
    OK = 200
    CREATED = 201
    ACCEPTED = 202
    NON_AUTHORITATIVE_INFORMATION = 203
    NO_CONTENT = 204
    RESET_CONTENT = 205
    PARTIAL_CONTENT = 206
    MULTI_STATUS = 207
    ALREADY_REPORTED = 208
    I_M_USED = 226
    MULTIPLE_CHOICES = 300
    MOVED_PERMANENTLY = 301
    FOUND = 302
    SEE_OTHER = 303
    NOT_MODIFIED = 304
    USE_PROXY = 305
    TEMPORARY_REDIRECT = 307
    PERMANENT_REDIRECT = 308
    BAD_REQUEST = 400
    UNAUTHORIZED = 401
    PAYMENT_REQUIRED = 402
    FORBIDDEN = 403
    NOT_FOUND = 404
    METHOD_NOT_ALLOWED = 405
    NOT_ACCEPTABLE = 406
    PROXY_AUTHENTICATION_REQUIRED = 407
    REQUEST_TIMEOUT = 408
    CONFLICT = 409
    GONE = 410
    LENGTH_REQUIRED = 411
    PRECONDITION_FAILED = 412
    REQUEST_ENTITY_TOO_LARGE = 413
    REQUEST_URI_TOO_LONG = 414
    UNSUPPORTED_MEDIA_TYPE = 415
    REQUESTED_RANGE_NOT_SATISFIABLE = 416
    EXPECTATION_FAILED = 417
    UNPROCESSABLE_ENTITY = 422
    LOCKED = 423
    FAILED_DEPENDENCY = 424
    UPGRADE_REQUIRED = 426
    PRECONDITION_REQUIRED = 428
    TOO_MANY_REQUESTS = 429
    REQUEST_HEADER_FIELDS_TOO_LARGE = 431
    INTERNAL_SERVER_ERROR = 500
    NOT_IMPLEMENTED = 501
    BAD_GATEWAY = 502
    SERVICE_UNAVAILABLE = 503
    GATEWAY_TIMEOUT = 504
    HTTP_VERSION_NOT_SUPPORTED = 505
    VARIANT_ALSO_NEGOTIATES = 506
    INSUFFICIENT_STORAGE = 507
    LOOP_DETECTED = 508
    NOT_EXTENDED = 510
    NETWORK_AUTHENTICATION_REQUIRED = 511

class HttpVersion(enum.IntEnum):
    NONE = 0
    HTTP10 = 1
    HTTP11 = 2
    HTTP20 = 3

_ns_module._register_HttpCompletionOption(HttpCompletionOption)
_ns_module._register_HttpProgressStage(HttpProgressStage)
_ns_module._register_HttpResponseMessageSource(HttpResponseMessageSource)
_ns_module._register_HttpStatusCode(HttpStatusCode)
_ns_module._register_HttpVersion(HttpVersion)

HttpProgress = _ns_module.HttpProgress
HttpBufferContent = _ns_module.HttpBufferContent
HttpClient = _ns_module.HttpClient
HttpCookie = _ns_module.HttpCookie
HttpCookieCollection = _ns_module.HttpCookieCollection
HttpCookieManager = _ns_module.HttpCookieManager
HttpFormUrlEncodedContent = _ns_module.HttpFormUrlEncodedContent
HttpGetBufferResult = _ns_module.HttpGetBufferResult
HttpGetInputStreamResult = _ns_module.HttpGetInputStreamResult
HttpGetStringResult = _ns_module.HttpGetStringResult
HttpMethod = _ns_module.HttpMethod
HttpMultipartContent = _ns_module.HttpMultipartContent
HttpMultipartFormDataContent = _ns_module.HttpMultipartFormDataContent
HttpRequestMessage = _ns_module.HttpRequestMessage
HttpRequestResult = _ns_module.HttpRequestResult
HttpResponseMessage = _ns_module.HttpResponseMessage
HttpStreamContent = _ns_module.HttpStreamContent
HttpStringContent = _ns_module.HttpStringContent
HttpTransportInformation = _ns_module.HttpTransportInformation
IHttpContent = _ns_module.IHttpContent
