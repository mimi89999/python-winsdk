// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Networking.Connectivity.h")
#include "py.Windows.Networking.Connectivity.h"
#endif

#include <winrt/Windows.Networking.h>

namespace py::proj::Windows::Networking
{}

namespace py::impl::Windows::Networking
{}

namespace py::wrapper::Windows::Networking
{
    using EndpointPair = py::winrt_wrapper<winrt::Windows::Networking::EndpointPair>;
    using HostName = py::winrt_wrapper<winrt::Windows::Networking::HostName>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Networking::DomainNameType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Networking::HostNameSortOptions> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Networking::HostNameType> = "i";


    template<>
    struct py_type<winrt::Windows::Networking::DomainNameType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::HostNameSortOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::HostNameType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::EndpointPair>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::HostName>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
