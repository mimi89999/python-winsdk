# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics.imaging
import winsdk.windows.media

Self = typing.TypeVar('Self')

class DetectedFace(_winrt.Object):
    face_box: winsdk.windows.graphics.imaging.BitmapBounds
    @staticmethod
    def _from(obj: _winrt.Object) -> DetectedFace: ...

class FaceDetector(_winrt.Object):
    min_detectable_face_size: winsdk.windows.graphics.imaging.BitmapSize
    max_detectable_face_size: winsdk.windows.graphics.imaging.BitmapSize
    is_supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FaceDetector: ...
    @staticmethod
    def create_async() -> winsdk.windows.foundation.IAsyncOperation[FaceDetector]: ...
    @typing.overload
    def detect_faces_async(self, image: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVector[DetectedFace]]: ...
    @typing.overload
    def detect_faces_async(self, image: typing.Optional[winsdk.windows.graphics.imaging.SoftwareBitmap], search_area: winsdk.windows.graphics.imaging.BitmapBounds) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVector[DetectedFace]]: ...
    @staticmethod
    def get_supported_bitmap_pixel_formats() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.graphics.imaging.BitmapPixelFormat]]: ...
    @staticmethod
    def is_bitmap_pixel_format_supported(bitmap_pixel_format: winsdk.windows.graphics.imaging.BitmapPixelFormat) -> _winrt.Boolean: ...

class FaceTracker(_winrt.Object):
    min_detectable_face_size: winsdk.windows.graphics.imaging.BitmapSize
    max_detectable_face_size: winsdk.windows.graphics.imaging.BitmapSize
    is_supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FaceTracker: ...
    @staticmethod
    def create_async() -> winsdk.windows.foundation.IAsyncOperation[FaceTracker]: ...
    @staticmethod
    def get_supported_bitmap_pixel_formats() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.graphics.imaging.BitmapPixelFormat]]: ...
    @staticmethod
    def is_bitmap_pixel_format_supported(bitmap_pixel_format: winsdk.windows.graphics.imaging.BitmapPixelFormat) -> _winrt.Boolean: ...
    def process_next_frame_async(self, video_frame: typing.Optional[winsdk.windows.media.VideoFrame]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVector[DetectedFace]]: ...

