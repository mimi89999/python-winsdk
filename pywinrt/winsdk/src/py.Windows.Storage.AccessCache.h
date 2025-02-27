// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.Storage.AccessCache.h>

namespace py::proj::Windows::Storage::AccessCache
{}

namespace py::impl::Windows::Storage::AccessCache
{}

namespace py::wrapper::Windows::Storage::AccessCache
{
    using AccessListEntryView = py::winrt_wrapper<winrt::Windows::Storage::AccessCache::AccessListEntryView>;
    using ItemRemovedEventArgs = py::winrt_wrapper<winrt::Windows::Storage::AccessCache::ItemRemovedEventArgs>;
    using StorageApplicationPermissions = py::winrt_wrapper<winrt::Windows::Storage::AccessCache::StorageApplicationPermissions>;
    using StorageItemAccessList = py::winrt_wrapper<winrt::Windows::Storage::AccessCache::StorageItemAccessList>;
    using StorageItemMostRecentlyUsedList = py::winrt_wrapper<winrt::Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>;
    using IStorageItemAccessList = py::winrt_wrapper<winrt::Windows::Storage::AccessCache::IStorageItemAccessList>;
    using AccessListEntry = py::winrt_struct_wrapper<winrt::Windows::Storage::AccessCache::AccessListEntry>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Storage::AccessCache::AccessCacheOptions> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Storage::AccessCache::RecentStorageItemVisibility> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Storage::AccessCache::AccessListEntry> = "T{P:token:P:metadata:}";


    template<>
    struct py_type<winrt::Windows::Storage::AccessCache::AccessCacheOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::AccessCache::RecentStorageItemVisibility>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::AccessCache::AccessListEntryView>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::AccessCache::ItemRemovedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::AccessCache::StorageApplicationPermissions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::AccessCache::StorageItemAccessList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::AccessCache::IStorageItemAccessList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::AccessCache::AccessListEntry>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Storage::AccessCache::AccessListEntry>
    {
        static PyObject* convert(winrt::Windows::Storage::AccessCache::AccessListEntry instance) noexcept;
        static winrt::Windows::Storage::AccessCache::AccessListEntry convert_to(PyObject* obj);
    };

}
