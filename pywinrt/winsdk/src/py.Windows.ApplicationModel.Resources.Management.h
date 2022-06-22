// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.ApplicationModel.Resources.Management.h>

namespace py::proj::Windows::ApplicationModel::Resources::Management
{}

namespace py::impl::Windows::ApplicationModel::Resources::Management
{}

namespace py::wrapper::Windows::ApplicationModel::Resources::Management
{
    using IndexedResourceCandidate = py::winrt_wrapper<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>;
    using IndexedResourceQualifier = py::winrt_wrapper<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier>;
    using ResourceIndexer = py::winrt_wrapper<winrt::Windows::ApplicationModel::Resources::Management::ResourceIndexer>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Resources::Management::ResourceIndexer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
