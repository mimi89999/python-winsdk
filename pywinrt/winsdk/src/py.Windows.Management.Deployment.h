// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

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

#include <winrt/Windows.Management.Deployment.h>

namespace py::proj::Windows::Management::Deployment
{}

namespace py::impl::Windows::Management::Deployment
{}

namespace py::wrapper::Windows::Management::Deployment
{
    using AddPackageOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::AddPackageOptions>;
    using AppInstallerManager = py::winrt_wrapper<winrt::Windows::Management::Deployment::AppInstallerManager>;
    using AutoUpdateSettingsOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::AutoUpdateSettingsOptions>;
    using CreateSharedPackageContainerOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::CreateSharedPackageContainerOptions>;
    using CreateSharedPackageContainerResult = py::winrt_wrapper<winrt::Windows::Management::Deployment::CreateSharedPackageContainerResult>;
    using DeleteSharedPackageContainerOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::DeleteSharedPackageContainerOptions>;
    using DeleteSharedPackageContainerResult = py::winrt_wrapper<winrt::Windows::Management::Deployment::DeleteSharedPackageContainerResult>;
    using DeploymentResult = py::winrt_wrapper<winrt::Windows::Management::Deployment::DeploymentResult>;
    using FindSharedPackageContainerOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::FindSharedPackageContainerOptions>;
    using PackageAllUserProvisioningOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::PackageAllUserProvisioningOptions>;
    using PackageManager = py::winrt_wrapper<winrt::Windows::Management::Deployment::PackageManager>;
    using PackageManagerDebugSettings = py::winrt_wrapper<winrt::Windows::Management::Deployment::PackageManagerDebugSettings>;
    using PackageUserInformation = py::winrt_wrapper<winrt::Windows::Management::Deployment::PackageUserInformation>;
    using PackageVolume = py::winrt_wrapper<winrt::Windows::Management::Deployment::PackageVolume>;
    using RegisterPackageOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::RegisterPackageOptions>;
    using SharedPackageContainer = py::winrt_wrapper<winrt::Windows::Management::Deployment::SharedPackageContainer>;
    using SharedPackageContainerManager = py::winrt_wrapper<winrt::Windows::Management::Deployment::SharedPackageContainerManager>;
    using SharedPackageContainerMember = py::winrt_wrapper<winrt::Windows::Management::Deployment::SharedPackageContainerMember>;
    using StagePackageOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::StagePackageOptions>;
    using UpdateSharedPackageContainerOptions = py::winrt_wrapper<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerOptions>;
    using UpdateSharedPackageContainerResult = py::winrt_wrapper<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult>;
    using DeploymentProgress = py::winrt_struct_wrapper<winrt::Windows::Management::Deployment::DeploymentProgress>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Management::Deployment::AddPackageByAppInstallerOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::DeploymentOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::DeploymentProgressState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::PackageInstallState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::PackageState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::PackageStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::PackageStubPreference>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::PackageTypes>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::RemovalOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::SharedPackageContainerCreationCollisionOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Management::Deployment::StubPackageOption>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::AddPackageOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::AppInstallerManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::AutoUpdateSettingsOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::CreateSharedPackageContainerOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::CreateSharedPackageContainerResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::DeleteSharedPackageContainerOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::DeleteSharedPackageContainerResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::DeploymentResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::FindSharedPackageContainerOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::PackageAllUserProvisioningOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::PackageManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::PackageManagerDebugSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::PackageUserInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::PackageVolume>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::RegisterPackageOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::SharedPackageContainer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::SharedPackageContainerManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::SharedPackageContainerMember>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::StagePackageOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Deployment::DeploymentProgress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Management::Deployment::DeploymentProgress>
    {
        static PyObject* convert(winrt::Windows::Management::Deployment::DeploymentProgress instance) noexcept;
        static winrt::Windows::Management::Deployment::DeploymentProgress convert_to(PyObject* obj);
    };

}
