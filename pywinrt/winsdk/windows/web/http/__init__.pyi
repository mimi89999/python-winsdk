# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.networking.sockets
import winsdk.windows.security.cryptography.certificates
import winsdk.windows.storage.streams
import winsdk.windows.web.http.filters
import winsdk.windows.web.http.headers

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

Self = typing.TypeVar('Self')

class HttpProgress:
    stage: HttpProgressStage
    bytes_sent: winsdk.system.UInt64
    total_bytes_to_send: winsdk.system.UInt64
    bytes_received: winsdk.system.UInt64
    total_bytes_to_receive: winsdk.system.UInt64
    retries: winsdk.system.UInt32
    def __new__(cls: typing.Type[HttpProgress], stage: HttpProgressStage, bytes_sent: winsdk.system.UInt64, total_bytes_to_send: winsdk.system.UInt64, bytes_received: winsdk.system.UInt64, total_bytes_to_receive: winsdk.system.UInt64, retries: winsdk.system.UInt32) -> HttpProgress: ...

class HttpBufferContent(winsdk.system.Object):
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpContentHeaderCollection]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpBufferContent: ...
    @typing.overload
    def __new__(cls: typing.Type[HttpBufferContent], content: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> HttpBufferContent:...
    @typing.overload
    def __new__(cls: typing.Type[HttpBufferContent], content: typing.Optional[winsdk.windows.storage.streams.IBuffer], offset: winsdk.system.UInt32, count: winsdk.system.UInt32) -> HttpBufferContent:...
    def buffer_all_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    def close(self) -> None: ...
    def read_as_buffer_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt64]: ...
    def read_as_input_stream_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, winsdk.system.UInt64]: ...
    def read_as_string_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[str, winsdk.system.UInt64]: ...
    def to_string(self) -> str: ...
    def try_compute_length(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt64]: ...
    def write_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...

class HttpClient(winsdk.system.Object):
    default_request_headers: typing.Optional[winsdk.windows.web.http.headers.HttpRequestHeaderCollection]
    default_privacy_annotation: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpClient: ...
    @typing.overload
    def __new__(cls: typing.Type[HttpClient], filter: typing.Optional[winsdk.windows.web.http.filters.IHttpFilter]) -> HttpClient:...
    @typing.overload
    def __new__(cls: typing.Type[HttpClient]) -> HttpClient:...
    def close(self) -> None: ...
    def delete_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpResponseMessage, HttpProgress]: ...
    @typing.overload
    def get_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpResponseMessage, HttpProgress]: ...
    @typing.overload
    def get_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], completion_option: HttpCompletionOption) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpResponseMessage, HttpProgress]: ...
    def get_buffer_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, HttpProgress]: ...
    def get_input_stream_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, HttpProgress]: ...
    def get_string_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[str, HttpProgress]: ...
    def post_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], content: typing.Optional[IHttpContent]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpResponseMessage, HttpProgress]: ...
    def put_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], content: typing.Optional[IHttpContent]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpResponseMessage, HttpProgress]: ...
    @typing.overload
    def send_request_async(self, request: typing.Optional[HttpRequestMessage]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpResponseMessage, HttpProgress]: ...
    @typing.overload
    def send_request_async(self, request: typing.Optional[HttpRequestMessage], completion_option: HttpCompletionOption) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpResponseMessage, HttpProgress]: ...
    def to_string(self) -> str: ...
    def try_delete_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpRequestResult, HttpProgress]: ...
    @typing.overload
    def try_get_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpRequestResult, HttpProgress]: ...
    @typing.overload
    def try_get_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], completion_option: HttpCompletionOption) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpRequestResult, HttpProgress]: ...
    def try_get_buffer_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpGetBufferResult, HttpProgress]: ...
    def try_get_input_stream_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpGetInputStreamResult, HttpProgress]: ...
    def try_get_string_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpGetStringResult, HttpProgress]: ...
    def try_post_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], content: typing.Optional[IHttpContent]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpRequestResult, HttpProgress]: ...
    def try_put_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], content: typing.Optional[IHttpContent]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpRequestResult, HttpProgress]: ...
    @typing.overload
    def try_send_request_async(self, request: typing.Optional[HttpRequestMessage]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpRequestResult, HttpProgress]: ...
    @typing.overload
    def try_send_request_async(self, request: typing.Optional[HttpRequestMessage], completion_option: HttpCompletionOption) -> winsdk.windows.foundation.IAsyncOperationWithProgress[HttpRequestResult, HttpProgress]: ...

class HttpCookie(winsdk.system.Object):
    value: str
    secure: winsdk.system.Boolean
    http_only: winsdk.system.Boolean
    expires: typing.Optional[typing.Optional[datetime.datetime]]
    domain: str
    name: str
    path: str
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpCookie: ...
    def __new__(cls: typing.Type[HttpCookie], name: str, domain: str, path: str) -> HttpCookie:...
    def to_string(self) -> str: ...

class HttpCookieCollection(winsdk.system.Object, typing.Sequence[HttpCookie]):
    size: winsdk.system.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> HttpCookie: ...
    @typing.overload
    def __getitem__(self, index: slice) -> winsdk.system.Array[HttpCookie]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpCookieCollection: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[HttpCookie]]: ...
    def get_at(self, index: winsdk.system.UInt32) -> typing.Optional[HttpCookie]: ...
    def get_many(self, start_index: winsdk.system.UInt32, items: winsdk.system.Array[HttpCookie]) -> winsdk.system.UInt32: ...
    def index_of(self, value: typing.Optional[HttpCookie]) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt32]: ...

class HttpCookieManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpCookieManager: ...
    def delete_cookie(self, cookie: typing.Optional[HttpCookie]) -> None: ...
    def get_cookies(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> typing.Optional[HttpCookieCollection]: ...
    @typing.overload
    def set_cookie(self, cookie: typing.Optional[HttpCookie]) -> winsdk.system.Boolean: ...
    @typing.overload
    def set_cookie(self, cookie: typing.Optional[HttpCookie], third_party: winsdk.system.Boolean) -> winsdk.system.Boolean: ...

class HttpFormUrlEncodedContent(winsdk.system.Object):
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpContentHeaderCollection]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpFormUrlEncodedContent: ...
    def __new__(cls: typing.Type[HttpFormUrlEncodedContent], content: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, str]]) -> HttpFormUrlEncodedContent:...
    def buffer_all_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    def close(self) -> None: ...
    def read_as_buffer_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt64]: ...
    def read_as_input_stream_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, winsdk.system.UInt64]: ...
    def read_as_string_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[str, winsdk.system.UInt64]: ...
    def to_string(self) -> str: ...
    def try_compute_length(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt64]: ...
    def write_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...

class HttpGetBufferResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    request_message: typing.Optional[HttpRequestMessage]
    response_message: typing.Optional[HttpResponseMessage]
    succeeded: winsdk.system.Boolean
    value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpGetBufferResult: ...
    def close(self) -> None: ...
    def to_string(self) -> str: ...

class HttpGetInputStreamResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    request_message: typing.Optional[HttpRequestMessage]
    response_message: typing.Optional[HttpResponseMessage]
    succeeded: winsdk.system.Boolean
    value: typing.Optional[winsdk.windows.storage.streams.IInputStream]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpGetInputStreamResult: ...
    def close(self) -> None: ...
    def to_string(self) -> str: ...

class HttpGetStringResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    request_message: typing.Optional[HttpRequestMessage]
    response_message: typing.Optional[HttpResponseMessage]
    succeeded: winsdk.system.Boolean
    value: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpGetStringResult: ...
    def close(self) -> None: ...
    def to_string(self) -> str: ...

class HttpMethod(winsdk.system.Object):
    method: str
    delete: typing.ClassVar[typing.Optional[HttpMethod]]
    get: typing.ClassVar[typing.Optional[HttpMethod]]
    head: typing.ClassVar[typing.Optional[HttpMethod]]
    options: typing.ClassVar[typing.Optional[HttpMethod]]
    patch: typing.ClassVar[typing.Optional[HttpMethod]]
    post: typing.ClassVar[typing.Optional[HttpMethod]]
    put: typing.ClassVar[typing.Optional[HttpMethod]]
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpMethod: ...
    def __new__(cls: typing.Type[HttpMethod], method: str) -> HttpMethod:...
    def to_string(self) -> str: ...

class HttpMultipartContent(winsdk.system.Object):
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpContentHeaderCollection]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    def __iter__(self) -> winsdk.windows.foundation.collections.IIterator[IHttpContent]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpMultipartContent: ...
    @typing.overload
    def __new__(cls: typing.Type[HttpMultipartContent], subtype: str) -> HttpMultipartContent:...
    @typing.overload
    def __new__(cls: typing.Type[HttpMultipartContent], subtype: str, boundary: str) -> HttpMultipartContent:...
    @typing.overload
    def __new__(cls: typing.Type[HttpMultipartContent]) -> HttpMultipartContent:...
    def add(self, content: typing.Optional[IHttpContent]) -> None: ...
    def buffer_all_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    def close(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IHttpContent]]: ...
    def read_as_buffer_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt64]: ...
    def read_as_input_stream_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, winsdk.system.UInt64]: ...
    def read_as_string_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[str, winsdk.system.UInt64]: ...
    def to_string(self) -> str: ...
    def try_compute_length(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt64]: ...
    def write_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...

class HttpMultipartFormDataContent(winsdk.system.Object):
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpContentHeaderCollection]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    def __iter__(self) -> winsdk.windows.foundation.collections.IIterator[IHttpContent]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpMultipartFormDataContent: ...
    @typing.overload
    def __new__(cls: typing.Type[HttpMultipartFormDataContent], boundary: str) -> HttpMultipartFormDataContent:...
    @typing.overload
    def __new__(cls: typing.Type[HttpMultipartFormDataContent]) -> HttpMultipartFormDataContent:...
    @typing.overload
    def add(self, content: typing.Optional[IHttpContent]) -> None: ...
    @typing.overload
    def add(self, content: typing.Optional[IHttpContent], name: str) -> None: ...
    @typing.overload
    def add(self, content: typing.Optional[IHttpContent], name: str, file_name: str) -> None: ...
    def buffer_all_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    def close(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IHttpContent]]: ...
    def read_as_buffer_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt64]: ...
    def read_as_input_stream_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, winsdk.system.UInt64]: ...
    def read_as_string_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[str, winsdk.system.UInt64]: ...
    def to_string(self) -> str: ...
    def try_compute_length(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt64]: ...
    def write_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...

class HttpRequestMessage(winsdk.system.Object):
    request_uri: typing.Optional[winsdk.windows.foundation.Uri]
    method: typing.Optional[HttpMethod]
    content: typing.Optional[IHttpContent]
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpRequestHeaderCollection]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMap[str, winsdk.system.Object]]
    transport_information: typing.Optional[HttpTransportInformation]
    privacy_annotation: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpRequestMessage: ...
    @typing.overload
    def __new__(cls: typing.Type[HttpRequestMessage], method: typing.Optional[HttpMethod], uri: typing.Optional[winsdk.windows.foundation.Uri]) -> HttpRequestMessage:...
    @typing.overload
    def __new__(cls: typing.Type[HttpRequestMessage]) -> HttpRequestMessage:...
    def close(self) -> None: ...
    def to_string(self) -> str: ...

class HttpRequestResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    request_message: typing.Optional[HttpRequestMessage]
    response_message: typing.Optional[HttpResponseMessage]
    succeeded: winsdk.system.Boolean
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpRequestResult: ...
    def close(self) -> None: ...
    def to_string(self) -> str: ...

class HttpResponseMessage(winsdk.system.Object):
    version: HttpVersion
    status_code: HttpStatusCode
    source: HttpResponseMessageSource
    request_message: typing.Optional[HttpRequestMessage]
    reason_phrase: str
    content: typing.Optional[IHttpContent]
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpResponseHeaderCollection]
    is_success_status_code: winsdk.system.Boolean
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpResponseMessage: ...
    @typing.overload
    def __new__(cls: typing.Type[HttpResponseMessage], status_code: HttpStatusCode) -> HttpResponseMessage:...
    @typing.overload
    def __new__(cls: typing.Type[HttpResponseMessage]) -> HttpResponseMessage:...
    def close(self) -> None: ...
    def ensure_success_status_code(self) -> typing.Optional[HttpResponseMessage]: ...
    def to_string(self) -> str: ...

class HttpStreamContent(winsdk.system.Object):
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpContentHeaderCollection]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpStreamContent: ...
    def __new__(cls: typing.Type[HttpStreamContent], content: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> HttpStreamContent:...
    def buffer_all_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    def close(self) -> None: ...
    def read_as_buffer_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt64]: ...
    def read_as_input_stream_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, winsdk.system.UInt64]: ...
    def read_as_string_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[str, winsdk.system.UInt64]: ...
    def to_string(self) -> str: ...
    def try_compute_length(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt64]: ...
    def write_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...

class HttpStringContent(winsdk.system.Object):
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpContentHeaderCollection]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpStringContent: ...
    @typing.overload
    def __new__(cls: typing.Type[HttpStringContent], content: str) -> HttpStringContent:...
    @typing.overload
    def __new__(cls: typing.Type[HttpStringContent], content: str, encoding: winsdk.windows.storage.streams.UnicodeEncoding) -> HttpStringContent:...
    @typing.overload
    def __new__(cls: typing.Type[HttpStringContent], content: str, encoding: winsdk.windows.storage.streams.UnicodeEncoding, media_type: str) -> HttpStringContent:...
    def buffer_all_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    def close(self) -> None: ...
    def read_as_buffer_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt64]: ...
    def read_as_input_stream_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, winsdk.system.UInt64]: ...
    def read_as_string_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[str, winsdk.system.UInt64]: ...
    def to_string(self) -> str: ...
    def try_compute_length(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt64]: ...
    def write_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...

class HttpTransportInformation(winsdk.system.Object):
    server_certificate: typing.Optional[winsdk.windows.security.cryptography.certificates.Certificate]
    server_certificate_error_severity: winsdk.windows.networking.sockets.SocketSslErrorSeverity
    server_certificate_errors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.security.cryptography.certificates.ChainValidationResult]]
    server_intermediate_certificates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.security.cryptography.certificates.Certificate]]
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HttpTransportInformation: ...
    def to_string(self) -> str: ...

class IHttpContent(winsdk.system.Object):
    headers: typing.Optional[winsdk.windows.web.http.headers.HttpContentHeaderCollection]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IHttpContent: ...
    def buffer_all_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...
    def close(self) -> None: ...
    def read_as_buffer_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt64]: ...
    def read_as_input_stream_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, winsdk.system.UInt64]: ...
    def read_as_string_async(self) -> winsdk.windows.foundation.IAsyncOperationWithProgress[str, winsdk.system.UInt64]: ...
    def try_compute_length(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt64]: ...
    def write_to_stream_async(self, output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt64, winsdk.system.UInt64]: ...

