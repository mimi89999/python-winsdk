// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#include <winrt/Windows.System.Diagnostics.Telemetry.h>

namespace py::proj::Windows::System::Diagnostics::Telemetry
{}

namespace py::impl::Windows::System::Diagnostics::Telemetry
{}

namespace py::wrapper::Windows::System::Diagnostics::Telemetry
{
    using PlatformTelemetryClient = py::winrt_wrapper<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient>;
    using PlatformTelemetryRegistrationResult = py::winrt_wrapper<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>;
    using PlatformTelemetryRegistrationSettings = py::winrt_wrapper<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus> = "i";


    template<>
    struct py_type<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
