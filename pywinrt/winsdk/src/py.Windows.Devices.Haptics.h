// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Devices.Haptics.h>

namespace py::proj::Windows::Devices::Haptics
{}

namespace py::impl::Windows::Devices::Haptics
{}

namespace py::wrapper::Windows::Devices::Haptics
{
    using KnownSimpleHapticsControllerWaveforms = py::winrt_wrapper<winrt::Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms>;
    using SimpleHapticsController = py::winrt_wrapper<winrt::Windows::Devices::Haptics::SimpleHapticsController>;
    using SimpleHapticsControllerFeedback = py::winrt_wrapper<winrt::Windows::Devices::Haptics::SimpleHapticsControllerFeedback>;
    using VibrationDevice = py::winrt_wrapper<winrt::Windows::Devices::Haptics::VibrationDevice>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Haptics::VibrationAccessStatus> = "i";


    template<>
    struct py_type<winrt::Windows::Devices::Haptics::VibrationAccessStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Haptics::KnownSimpleHapticsControllerWaveforms>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Haptics::SimpleHapticsController>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Haptics::SimpleHapticsControllerFeedback>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Haptics::VibrationDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
