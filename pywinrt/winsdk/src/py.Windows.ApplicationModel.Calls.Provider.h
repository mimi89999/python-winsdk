// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.ApplicationModel.Calls.Provider.h>

namespace py::proj::Windows::ApplicationModel::Calls::Provider
{}

namespace py::impl::Windows::ApplicationModel::Calls::Provider
{}

namespace py::wrapper::Windows::ApplicationModel::Calls::Provider
{
    using PhoneCallOrigin = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>;
    using PhoneCallOriginManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
