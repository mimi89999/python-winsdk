# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.data.xml.dom
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.credentials
import winsdk.windows.storage.streams
import winsdk.windows.web.syndication

Self = typing.TypeVar('Self')

class AtomPubClient(_winrt.Object):
    timeout: _winrt.UInt32
    server_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    proxy_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]
    max_response_buffer_size: _winrt.UInt32
    bypass_cache_on_retrieve: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AtomPubClient: ...
    @typing.overload
    def __init__(self, server_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...
    def cancel_async_operations(self) -> None: ...
    def create_media_resource_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], media_type: str, description: str, media_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.web.syndication.SyndicationItem, winsdk.windows.web.syndication.TransferProgress]: ...
    def create_resource_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], description: str, item: typing.Optional[winsdk.windows.web.syndication.SyndicationItem]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.web.syndication.SyndicationItem, winsdk.windows.web.syndication.TransferProgress]: ...
    def delete_resource_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncActionWithProgress[winsdk.windows.web.syndication.TransferProgress]: ...
    def delete_resource_item_async(self, item: typing.Optional[winsdk.windows.web.syndication.SyndicationItem]) -> winsdk.windows.foundation.IAsyncActionWithProgress[winsdk.windows.web.syndication.TransferProgress]: ...
    def retrieve_feed_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.web.syndication.SyndicationFeed, winsdk.windows.web.syndication.RetrievalProgress]: ...
    def retrieve_media_resource_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IInputStream, winsdk.windows.web.syndication.RetrievalProgress]: ...
    def retrieve_resource_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.web.syndication.SyndicationItem, winsdk.windows.web.syndication.RetrievalProgress]: ...
    def retrieve_service_document_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[ServiceDocument, winsdk.windows.web.syndication.RetrievalProgress]: ...
    def set_request_header(self, name: str, value: str) -> None: ...
    def update_media_resource_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], media_type: str, media_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncActionWithProgress[winsdk.windows.web.syndication.TransferProgress]: ...
    def update_resource_async(self, uri: typing.Optional[winsdk.windows.foundation.Uri], item: typing.Optional[winsdk.windows.web.syndication.SyndicationItem]) -> winsdk.windows.foundation.IAsyncActionWithProgress[winsdk.windows.web.syndication.TransferProgress]: ...
    def update_resource_item_async(self, item: typing.Optional[winsdk.windows.web.syndication.SyndicationItem]) -> winsdk.windows.foundation.IAsyncActionWithProgress[winsdk.windows.web.syndication.TransferProgress]: ...

class ResourceCollection(_winrt.Object):
    accepts: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    categories: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.web.syndication.SyndicationCategory]]
    title: typing.Optional[winsdk.windows.web.syndication.ISyndicationText]
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    base_uri: typing.Optional[winsdk.windows.foundation.Uri]
    node_value: str
    node_namespace: str
    node_name: str
    language: str
    attribute_extensions: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.web.syndication.SyndicationAttribute]]
    element_extensions: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.web.syndication.ISyndicationNode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceCollection: ...
    def get_xml_document(self, format: winsdk.windows.web.syndication.SyndicationFormat) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...

class ServiceDocument(_winrt.Object):
    workspaces: typing.Optional[winsdk.windows.foundation.collections.IVectorView[Workspace]]
    node_value: str
    node_namespace: str
    node_name: str
    language: str
    base_uri: typing.Optional[winsdk.windows.foundation.Uri]
    attribute_extensions: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.web.syndication.SyndicationAttribute]]
    element_extensions: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.web.syndication.ISyndicationNode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ServiceDocument: ...
    def get_xml_document(self, format: winsdk.windows.web.syndication.SyndicationFormat) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...

class Workspace(_winrt.Object):
    collections: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ResourceCollection]]
    title: typing.Optional[winsdk.windows.web.syndication.ISyndicationText]
    node_value: str
    node_namespace: str
    node_name: str
    language: str
    base_uri: typing.Optional[winsdk.windows.foundation.Uri]
    attribute_extensions: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.web.syndication.SyndicationAttribute]]
    element_extensions: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.web.syndication.ISyndicationNode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> Workspace: ...
    def get_xml_document(self, format: winsdk.windows.web.syndication.SyndicationFormat) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...

