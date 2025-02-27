// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Security.Cryptography.DataProtection.h>

namespace py::proj::Windows::Security::Cryptography::DataProtection
{}

namespace py::impl::Windows::Security::Cryptography::DataProtection
{}

namespace py::wrapper::Windows::Security::Cryptography::DataProtection
{
    using DataProtectionProvider = py::winrt_wrapper<winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
