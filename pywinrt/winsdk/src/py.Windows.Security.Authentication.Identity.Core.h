// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Security.Authentication.Identity.Core.h>

namespace py::proj::Windows::Security::Authentication::Identity::Core
{}

namespace py::impl::Windows::Security::Authentication::Identity::Core
{}

namespace py::wrapper::Windows::Security::Authentication::Identity::Core
{
    using MicrosoftAccountMultiFactorAuthenticationManager = py::winrt_wrapper<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager>;
    using MicrosoftAccountMultiFactorGetSessionsResult = py::winrt_wrapper<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult>;
    using MicrosoftAccountMultiFactorOneTimeCodedInfo = py::winrt_wrapper<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo>;
    using MicrosoftAccountMultiFactorSessionInfo = py::winrt_wrapper<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>;
    using MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo = py::winrt_wrapper<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus> = "i";


    template<>
    struct py_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
