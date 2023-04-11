// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Foundation.h>

#include <winrt/Windows.System.Profile.SystemManufacturers.h>

namespace py::proj::Windows::System::Profile::SystemManufacturers
{}

namespace py::impl::Windows::System::Profile::SystemManufacturers
{}

namespace py::wrapper::Windows::System::Profile::SystemManufacturers
{
    using OemSupportInfo = py::winrt_wrapper<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo>;
    using SmbiosInformation = py::winrt_wrapper<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation>;
    using SystemSupportDeviceInfo = py::winrt_wrapper<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>;
    using SystemSupportInfo = py::winrt_wrapper<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
