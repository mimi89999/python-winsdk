// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#include <winrt/Windows.Security.ExchangeActiveSyncProvisioning.h>

namespace py::proj::Windows::Security::ExchangeActiveSyncProvisioning
{}

namespace py::impl::Windows::Security::ExchangeActiveSyncProvisioning
{}

namespace py::wrapper::Windows::Security::ExchangeActiveSyncProvisioning
{
    using EasClientDeviceInformation = py::winrt_wrapper<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Security::ExchangeActiveSyncProvisioning::EasClientDeviceInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
