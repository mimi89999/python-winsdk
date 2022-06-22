// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.h")
#include "py.Windows.ApplicationModel.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Management.Deployment.h")
#include "py.Windows.Management.Deployment.h"
#endif

#include <winrt/Windows.Phone.Management.Deployment.h>

namespace py::proj::Windows::Phone::Management::Deployment
{}

namespace py::impl::Windows::Phone::Management::Deployment
{}

namespace py::wrapper::Windows::Phone::Management::Deployment
{
    using Enterprise = py::winrt_wrapper<winrt::Windows::Phone::Management::Deployment::Enterprise>;
    using EnterpriseEnrollmentManager = py::winrt_wrapper<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentManager>;
    using EnterpriseEnrollmentResult = py::winrt_wrapper<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>;
    using InstallationManager = py::winrt_wrapper<winrt::Windows::Phone::Management::Deployment::InstallationManager>;
    using PackageInstallResult = py::winrt_wrapper<winrt::Windows::Phone::Management::Deployment::PackageInstallResult>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Phone::Management::Deployment::EnterpriseStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Phone::Management::Deployment::Enterprise>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Phone::Management::Deployment::EnterpriseEnrollmentResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Phone::Management::Deployment::InstallationManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Phone::Management::Deployment::PackageInstallResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
