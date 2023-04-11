// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.AppService.h")
#include "py.Windows.ApplicationModel.AppService.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.Sockets.h")
#include "py.Windows.Networking.Sockets.h"
#endif

#if __has_include("py.Windows.Web.Http.h")
#include "py.Windows.Web.Http.h"
#endif

#include <winrt/Windows.ApplicationModel.AppService.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Web.Http.h>

#include <winrt/Windows.System.Diagnostics.DevicePortal.h>

namespace py::proj::Windows::System::Diagnostics::DevicePortal
{}

namespace py::impl::Windows::System::Diagnostics::DevicePortal
{}

namespace py::wrapper::Windows::System::Diagnostics::DevicePortal
{
    using DevicePortalConnection = py::winrt_wrapper<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>;
    using DevicePortalConnectionClosedEventArgs = py::winrt_wrapper<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>;
    using DevicePortalConnectionRequestReceivedEventArgs = py::winrt_wrapper<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason> = "i";


    template<>
    struct py_type<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
