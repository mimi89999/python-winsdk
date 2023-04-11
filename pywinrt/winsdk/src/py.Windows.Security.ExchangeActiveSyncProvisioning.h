// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Foundation.h>

#include <winrt/Windows.Security.ExchangeActiveSyncProvisioning.h>

namespace py::proj::Windows::Security::ExchangeActiveSyncProvisioning
{}

namespace py::impl::Windows::Security::ExchangeActiveSyncProvisioning
{}

namespace py::wrapper::Windows::Security::ExchangeActiveSyncProvisioning
{
    using EasClientDeviceInformation = py::winrt_wrapper<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>;
    using EasClientSecurityPolicy = py::winrt_wrapper<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy>;
    using EasComplianceResults = py::winrt_wrapper<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult> = "i";


    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientSecurityPolicy>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
