// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Security.Credentials.UI.h>

namespace py::proj::Windows::Security::Credentials::UI
{}

namespace py::impl::Windows::Security::Credentials::UI
{}

namespace py::wrapper::Windows::Security::Credentials::UI
{
    using CredentialPicker = py::winrt_wrapper<winrt::Windows::Security::Credentials::UI::CredentialPicker>;
    using CredentialPickerOptions = py::winrt_wrapper<winrt::Windows::Security::Credentials::UI::CredentialPickerOptions>;
    using CredentialPickerResults = py::winrt_wrapper<winrt::Windows::Security::Credentials::UI::CredentialPickerResults>;
    using UserConsentVerifier = py::winrt_wrapper<winrt::Windows::Security::Credentials::UI::UserConsentVerifier>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Security::Credentials::UI::AuthenticationProtocol> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Security::Credentials::UI::CredentialSaveOption> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability> = "i";


    template<>
    struct py_type<winrt::Windows::Security::Credentials::UI::AuthenticationProtocol>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Credentials::UI::CredentialSaveOption>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Credentials::UI::UserConsentVerifierAvailability>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Credentials::UI::CredentialPicker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Credentials::UI::CredentialPickerOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Credentials::UI::CredentialPickerResults>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Credentials::UI::UserConsentVerifier>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
