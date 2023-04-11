// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Perception.h")
#include "py.Windows.Perception.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.RemoteSystems.h")
#include "py.Windows.System.RemoteSystems.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.Numerics.h>
#include <winrt/Windows.Perception.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.RemoteSystems.h>

#include <winrt/Windows.Perception.Spatial.h>

namespace py::proj::Windows::Perception::Spatial
{}

namespace py::impl::Windows::Perception::Spatial
{}

namespace py::wrapper::Windows::Perception::Spatial
{
    using SpatialAnchor = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialAnchor>;
    using SpatialAnchorExportSufficiency = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialAnchorExportSufficiency>;
    using SpatialAnchorExporter = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialAnchorExporter>;
    using SpatialAnchorManager = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialAnchorManager>;
    using SpatialAnchorRawCoordinateSystemAdjustedEventArgs = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>;
    using SpatialAnchorStore = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialAnchorStore>;
    using SpatialAnchorTransferManager = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialAnchorTransferManager>;
    using SpatialBoundingVolume = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialBoundingVolume>;
    using SpatialCoordinateSystem = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem>;
    using SpatialEntity = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialEntity>;
    using SpatialEntityAddedEventArgs = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs>;
    using SpatialEntityRemovedEventArgs = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>;
    using SpatialEntityStore = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialEntityStore>;
    using SpatialEntityUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>;
    using SpatialEntityWatcher = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialEntityWatcher>;
    using SpatialLocation = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialLocation>;
    using SpatialLocator = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialLocator>;
    using SpatialLocatorAttachedFrameOfReference = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>;
    using SpatialLocatorPositionalTrackingDeactivatingEventArgs = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>;
    using SpatialStageFrameOfReference = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference>;
    using SpatialStationaryFrameOfReference = py::winrt_wrapper<winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference>;
    using SpatialBoundingBox = py::winrt_struct_wrapper<winrt::Windows::Perception::Spatial::SpatialBoundingBox>;
    using SpatialBoundingFrustum = py::winrt_struct_wrapper<winrt::Windows::Perception::Spatial::SpatialBoundingFrustum>;
    using SpatialBoundingOrientedBox = py::winrt_struct_wrapper<winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox>;
    using SpatialBoundingSphere = py::winrt_struct_wrapper<winrt::Windows::Perception::Spatial::SpatialBoundingSphere>;
    using SpatialRay = py::winrt_struct_wrapper<winrt::Windows::Perception::Spatial::SpatialRay>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialAnchorExportPurpose> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialEntityWatcherStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialLocatability> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialLookDirectionRange> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialMovementRange> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialBoundingBox> = "T{T{f:x:f:y:f:z:}:center:T{f:x:f:y:f:z:}:extents:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialBoundingFrustum> = "T{T{T{f:x:f:y:f:z:}:normal:f:d:}:near:T{T{f:x:f:y:f:z:}:normal:f:d:}:far:T{T{f:x:f:y:f:z:}:normal:f:d:}:right:T{T{f:x:f:y:f:z:}:normal:f:d:}:left:T{T{f:x:f:y:f:z:}:normal:f:d:}:top:T{T{f:x:f:y:f:z:}:normal:f:d:}:bottom:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox> = "T{T{f:x:f:y:f:z:}:center:T{f:x:f:y:f:z:}:extents:T{f:x:f:y:f:z:f:w:}:orientation:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialBoundingSphere> = "T{T{f:x:f:y:f:z:}:center:f:radius:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Perception::Spatial::SpatialRay> = "T{T{f:x:f:y:f:z:}:origin:T{f:x:f:y:f:z:}:direction:}";


    template<>
    struct py_type<winrt::Windows::Perception::Spatial::SpatialAnchorExportPurpose>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Perception::Spatial::SpatialEntityWatcherStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Perception::Spatial::SpatialLocatability>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Perception::Spatial::SpatialLookDirectionRange>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Perception::Spatial::SpatialMovementRange>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Perception::Spatial::SpatialPerceptionAccessStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialAnchor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialAnchorExportSufficiency>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialAnchorExporter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialAnchorManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialAnchorRawCoordinateSystemAdjustedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialAnchorStore>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialAnchorTransferManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialBoundingVolume>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialEntity>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialEntityAddedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialEntityRemovedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialEntityStore>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialEntityUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialEntityWatcher>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialLocation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialLocator>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialLocatorAttachedFrameOfReference>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialLocatorPositionalTrackingDeactivatingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialStageFrameOfReference>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialBoundingBox>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialBoundingFrustum>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialBoundingSphere>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::Spatial::SpatialRay>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Perception::Spatial::SpatialBoundingBox>
    {
        static PyObject* convert(winrt::Windows::Perception::Spatial::SpatialBoundingBox instance) noexcept;
        static winrt::Windows::Perception::Spatial::SpatialBoundingBox convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Perception::Spatial::SpatialBoundingFrustum>
    {
        static PyObject* convert(winrt::Windows::Perception::Spatial::SpatialBoundingFrustum instance) noexcept;
        static winrt::Windows::Perception::Spatial::SpatialBoundingFrustum convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox>
    {
        static PyObject* convert(winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox instance) noexcept;
        static winrt::Windows::Perception::Spatial::SpatialBoundingOrientedBox convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Perception::Spatial::SpatialBoundingSphere>
    {
        static PyObject* convert(winrt::Windows::Perception::Spatial::SpatialBoundingSphere instance) noexcept;
        static winrt::Windows::Perception::Spatial::SpatialBoundingSphere convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Perception::Spatial::SpatialRay>
    {
        static PyObject* convert(winrt::Windows::Perception::Spatial::SpatialRay instance) noexcept;
        static winrt::Windows::Perception::Spatial::SpatialRay convert_to(PyObject* obj);
    };

}
