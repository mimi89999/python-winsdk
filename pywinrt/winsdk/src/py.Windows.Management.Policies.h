// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.Management.Policies.h>

namespace py::proj::Windows::Management::Policies
{}

namespace py::impl::Windows::Management::Policies
{}

namespace py::wrapper::Windows::Management::Policies
{
    using NamedPolicy = py::winrt_wrapper<winrt::Windows::Management::Policies::NamedPolicy>;
    using NamedPolicyData = py::winrt_wrapper<winrt::Windows::Management::Policies::NamedPolicyData>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Management::Policies::NamedPolicyKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Policies::NamedPolicy>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Policies::NamedPolicyData>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
