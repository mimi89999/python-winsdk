// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Phone.Devices.Notification.h>

namespace py::proj::Windows::Phone::Devices::Notification
{}

namespace py::impl::Windows::Phone::Devices::Notification
{}

namespace py::wrapper::Windows::Phone::Devices::Notification
{
    using VibrationDevice = py::winrt_wrapper<winrt::Windows::Phone::Devices::Notification::VibrationDevice>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Phone::Devices::Notification::VibrationDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
