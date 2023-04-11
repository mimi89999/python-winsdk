// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Bluetooth.h")
#include "py.Windows.Devices.Bluetooth.h"
#endif

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.h")
#include "py.Windows.Networking.h"
#endif

#if __has_include("py.Windows.Networking.Sockets.h")
#include "py.Windows.Networking.Sockets.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.Bluetooth.h>
#include <winrt/Windows.Devices.Enumeration.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Networking.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Devices.Bluetooth.Rfcomm.h>

namespace py::proj::Windows::Devices::Bluetooth::Rfcomm
{}

namespace py::impl::Windows::Devices::Bluetooth::Rfcomm
{}

namespace py::wrapper::Windows::Devices::Bluetooth::Rfcomm
{
    using RfcommDeviceService = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>;
    using RfcommDeviceServicesResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>;
    using RfcommServiceId = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>;
    using RfcommServiceProvider = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
