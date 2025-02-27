# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams

class TargetedContentAppInstallationState(enum.IntEnum):
    NOT_APPLICABLE = 0
    NOT_INSTALLED = 1
    INSTALLED = 2

class TargetedContentAvailability(enum.IntEnum):
    NONE = 0
    PARTIAL = 1
    ALL = 2

class TargetedContentInteraction(enum.IntEnum):
    IMPRESSION = 0
    CLICK_THROUGH = 1
    HOVER = 2
    LIKE = 3
    DISLIKE = 4
    DISMISS = 5
    INELIGIBLE = 6
    ACCEPT = 7
    DECLINE = 8
    DEFER = 9
    CANCELED = 10
    CONVERSION = 11
    OPPORTUNITY = 12

class TargetedContentObjectKind(enum.IntEnum):
    COLLECTION = 0
    ITEM = 1
    VALUE = 2

class TargetedContentValueKind(enum.IntEnum):
    STRING = 0
    URI = 1
    NUMBER = 2
    BOOLEAN = 3
    FILE = 4
    IMAGE_FILE = 5
    ACTION = 6
    STRINGS = 7
    URIS = 8
    NUMBERS = 9
    BOOLEANS = 10
    FILES = 11
    IMAGE_FILES = 12
    ACTIONS = 13

Self = typing.TypeVar('Self')

class TargetedContentAction(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentAction: ...
    def invoke_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class TargetedContentAvailabilityChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentAvailabilityChangedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class TargetedContentChangedEventArgs(winsdk.system.Object):
    has_previous_content_expired: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentChangedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class TargetedContentCollection(winsdk.system.Object):
    collections: typing.Optional[winsdk.windows.foundation.collections.IVectorView[TargetedContentCollection]]
    id: str
    items: typing.Optional[winsdk.windows.foundation.collections.IVectorView[TargetedContentItem]]
    path: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, TargetedContentValue]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentCollection: ...
    def report_custom_interaction(self, custom_interaction_name: str) -> None: ...
    def report_interaction(self, interaction: TargetedContentInteraction) -> None: ...

class TargetedContentContainer(winsdk.system.Object):
    availability: TargetedContentAvailability
    content: typing.Optional[TargetedContentCollection]
    id: str
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentContainer: ...
    @staticmethod
    def get_async(content_id: str) -> winsdk.windows.foundation.IAsyncOperation[TargetedContentContainer]: ...
    def select_single_object(self, path: str) -> typing.Optional[TargetedContentObject]: ...

class TargetedContentFile(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentFile: ...
    def open_read_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]: ...

class TargetedContentImage(winsdk.system.Object):
    height: winsdk.system.UInt32
    width: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentImage: ...
    def open_read_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]: ...

class TargetedContentItem(winsdk.system.Object):
    collections: typing.Optional[winsdk.windows.foundation.collections.IVectorView[TargetedContentCollection]]
    path: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, TargetedContentValue]]
    state: typing.Optional[TargetedContentItemState]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentItem: ...
    def report_custom_interaction(self, custom_interaction_name: str) -> None: ...
    def report_interaction(self, interaction: TargetedContentInteraction) -> None: ...

class TargetedContentItemState(winsdk.system.Object):
    app_installation_state: TargetedContentAppInstallationState
    should_display: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentItemState: ...

class TargetedContentObject(winsdk.system.Object):
    collection: typing.Optional[TargetedContentCollection]
    item: typing.Optional[TargetedContentItem]
    object_kind: TargetedContentObjectKind
    value: typing.Optional[TargetedContentValue]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentObject: ...

class TargetedContentStateChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentStateChangedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class TargetedContentSubscription(winsdk.system.Object):
    id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentSubscription: ...
    @staticmethod
    def get_async(subscription_id: str) -> winsdk.windows.foundation.IAsyncOperation[TargetedContentSubscription]: ...
    def get_content_container_async(self) -> winsdk.windows.foundation.IAsyncOperation[TargetedContentContainer]: ...
    @staticmethod
    def get_options(subscription_id: str) -> typing.Optional[TargetedContentSubscriptionOptions]: ...
    def add_availability_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[TargetedContentSubscription, TargetedContentAvailabilityChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_availability_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_content_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[TargetedContentSubscription, TargetedContentChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_content_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[TargetedContentSubscription, TargetedContentStateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class TargetedContentSubscriptionOptions(winsdk.system.Object):
    allow_partial_content_availability: winsdk.system.Boolean
    cloud_query_parameters: typing.Optional[winsdk.windows.foundation.collections.IMap[str, str]]
    local_filters: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    subscription_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentSubscriptionOptions: ...
    def update(self) -> None: ...

class TargetedContentValue(winsdk.system.Object):
    action: typing.Optional[TargetedContentAction]
    actions: typing.Optional[winsdk.windows.foundation.collections.IVectorView[TargetedContentAction]]
    boolean: winsdk.system.Boolean
    booleans: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.system.Boolean]]
    file: typing.Optional[TargetedContentFile]
    files: typing.Optional[winsdk.windows.foundation.collections.IVectorView[TargetedContentFile]]
    image_file: typing.Optional[TargetedContentImage]
    image_files: typing.Optional[winsdk.windows.foundation.collections.IVectorView[TargetedContentImage]]
    number: winsdk.system.Double
    numbers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.system.Double]]
    path: str
    string: str
    strings: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    uris: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.foundation.Uri]]
    value_kind: TargetedContentValueKind
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TargetedContentValue: ...

