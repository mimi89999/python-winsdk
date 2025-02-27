// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Security.Authentication.Identity.h>

namespace py::proj::Windows::Security::Authentication::Identity
{}

namespace py::impl::Windows::Security::Authentication::Identity
{}

namespace py::wrapper::Windows::Security::Authentication::Identity
{
    using EnterpriseKeyCredentialRegistrationInfo = py::winrt_wrapper<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>;
    using EnterpriseKeyCredentialRegistrationManager = py::winrt_wrapper<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Identity::EnterpriseKeyCredentialRegistrationManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
