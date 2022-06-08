// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Devices.Radios.h>

namespace py::proj::Windows::Devices::Radios
{}

namespace py::impl::Windows::Devices::Radios
{}

namespace py::wrapper::Windows::Devices::Radios
{
    using Radio = py::winrt_wrapper<winrt::Windows::Devices::Radios::Radio>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Devices::Radios::RadioAccessStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Radios::RadioKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Radios::RadioState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Radios::Radio>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
