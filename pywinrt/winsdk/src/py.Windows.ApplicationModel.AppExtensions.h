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

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.ApplicationModel.AppExtensions.h>

namespace py::proj::Windows::ApplicationModel::AppExtensions
{}

namespace py::impl::Windows::ApplicationModel::AppExtensions
{}

namespace py::wrapper::Windows::ApplicationModel::AppExtensions
{
    using AppExtension = py::winrt_wrapper<winrt::Windows::ApplicationModel::AppExtensions::AppExtension>;
    using AppExtensionCatalog = py::winrt_wrapper<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>;
    using AppExtensionPackageInstalledEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>;
    using AppExtensionPackageStatusChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>;
    using AppExtensionPackageUninstallingEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>;
    using AppExtensionPackageUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>;
    using AppExtensionPackageUpdatingEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::AppExtensions::AppExtension>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
