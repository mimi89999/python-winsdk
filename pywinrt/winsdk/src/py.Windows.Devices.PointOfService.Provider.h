// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.PointOfService.h")
#include "py.Windows.Devices.PointOfService.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.PointOfService.Provider.h>

namespace py::proj::Windows::Devices::PointOfService::Provider
{}

namespace py::impl::Windows::Devices::PointOfService::Provider
{}

namespace py::wrapper::Windows::Devices::PointOfService::Provider
{
    using BarcodeScannerDisableScannerRequest = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>;
    using BarcodeScannerDisableScannerRequestEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>;
    using BarcodeScannerEnableScannerRequest = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>;
    using BarcodeScannerEnableScannerRequestEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>;
    using BarcodeScannerFrameReader = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>;
    using BarcodeScannerFrameReaderFrameArrivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs>;
    using BarcodeScannerGetSymbologyAttributesRequest = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>;
    using BarcodeScannerGetSymbologyAttributesRequestEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>;
    using BarcodeScannerHideVideoPreviewRequest = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>;
    using BarcodeScannerHideVideoPreviewRequestEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>;
    using BarcodeScannerProviderConnection = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>;
    using BarcodeScannerProviderTriggerDetails = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>;
    using BarcodeScannerSetActiveSymbologiesRequest = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>;
    using BarcodeScannerSetActiveSymbologiesRequestEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>;
    using BarcodeScannerSetSymbologyAttributesRequest = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>;
    using BarcodeScannerSetSymbologyAttributesRequestEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>;
    using BarcodeScannerStartSoftwareTriggerRequest = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>;
    using BarcodeScannerStartSoftwareTriggerRequestEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>;
    using BarcodeScannerStopSoftwareTriggerRequest = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>;
    using BarcodeScannerStopSoftwareTriggerRequestEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>;
    using BarcodeScannerVideoFrame = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame>;
    using BarcodeSymbologyAttributesBuilder = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerFrameReaderFrameArrivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerVideoFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
