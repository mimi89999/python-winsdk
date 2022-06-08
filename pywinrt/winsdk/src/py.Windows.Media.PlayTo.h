// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Media.PlayTo.h>

namespace py::proj::Windows::Media::PlayTo
{}

namespace py::impl::Windows::Media::PlayTo
{}

namespace py::wrapper::Windows::Media::PlayTo
{
    using CurrentTimeChangeRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>;
    using MuteChangeRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::MuteChangeRequestedEventArgs>;
    using PlayToConnection = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToConnection>;
    using PlayToConnectionErrorEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>;
    using PlayToConnectionStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>;
    using PlayToConnectionTransferredEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>;
    using PlayToManager = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToManager>;
    using PlayToReceiver = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToReceiver>;
    using PlayToSource = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToSource>;
    using PlayToSourceDeferral = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToSourceDeferral>;
    using PlayToSourceRequest = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToSourceRequest>;
    using PlayToSourceRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>;
    using PlayToSourceSelectedEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>;
    using PlaybackRateChangeRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>;
    using SourceChangeRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::SourceChangeRequestedEventArgs>;
    using VolumeChangeRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Media::PlayTo::PlayToConnectionError>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::PlayTo::PlayToConnectionState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::MuteChangeRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToReceiver>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToSourceDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToSourceRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::SourceChangeRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
