// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.Popups.h")
#include "py.Windows.UI.Popups.h"
#endif

#include <winrt/Windows.Media.DialProtocol.h>

namespace py::proj::Windows::Media::DialProtocol
{}

namespace py::impl::Windows::Media::DialProtocol
{}

namespace py::wrapper::Windows::Media::DialProtocol
{
    using DialApp = py::winrt_wrapper<winrt::Windows::Media::DialProtocol::DialApp>;
    using DialAppStateDetails = py::winrt_wrapper<winrt::Windows::Media::DialProtocol::DialAppStateDetails>;
    using DialDevice = py::winrt_wrapper<winrt::Windows::Media::DialProtocol::DialDevice>;
    using DialDevicePicker = py::winrt_wrapper<winrt::Windows::Media::DialProtocol::DialDevicePicker>;
    using DialDevicePickerFilter = py::winrt_wrapper<winrt::Windows::Media::DialProtocol::DialDevicePickerFilter>;
    using DialDeviceSelectedEventArgs = py::winrt_wrapper<winrt::Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>;
    using DialDisconnectButtonClickedEventArgs = py::winrt_wrapper<winrt::Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>;
    using DialReceiverApp = py::winrt_wrapper<winrt::Windows::Media::DialProtocol::DialReceiverApp>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Media::DialProtocol::DialAppLaunchResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::DialProtocol::DialAppState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::DialProtocol::DialAppStopResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::DialProtocol::DialDeviceDisplayStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::DialProtocol::DialApp>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::DialProtocol::DialAppStateDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::DialProtocol::DialDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::DialProtocol::DialDevicePicker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::DialProtocol::DialDevicePickerFilter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::DialProtocol::DialDeviceSelectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::DialProtocol::DialReceiverApp>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
