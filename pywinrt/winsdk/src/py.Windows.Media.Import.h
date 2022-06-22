// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

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

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Media.Import.h>

namespace py::proj::Windows::Media::Import
{}

namespace py::impl::Windows::Media::Import
{}

namespace py::wrapper::Windows::Media::Import
{
    using PhotoImportDeleteImportedItemsFromSourceResult = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult>;
    using PhotoImportFindItemsResult = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportFindItemsResult>;
    using PhotoImportImportItemsResult = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportImportItemsResult>;
    using PhotoImportItem = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportItem>;
    using PhotoImportItemImportedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportItemImportedEventArgs>;
    using PhotoImportManager = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportManager>;
    using PhotoImportOperation = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportOperation>;
    using PhotoImportSelectionChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportSelectionChangedEventArgs>;
    using PhotoImportSession = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportSession>;
    using PhotoImportSidecar = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportSidecar>;
    using PhotoImportSource = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportSource>;
    using PhotoImportStorageMedium = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportStorageMedium>;
    using PhotoImportVideoSegment = py::winrt_wrapper<winrt::Windows::Media::Import::PhotoImportVideoSegment>;
    using PhotoImportProgress = py::winrt_struct_wrapper<winrt::Windows::Media::Import::PhotoImportProgress>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportAccessMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportConnectionTransport>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportContentType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportContentTypeFilter>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportImportMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportItemSelectionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportPowerSource>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportSourceType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportStage>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportStorageMediumType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportSubfolderCreationMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Import::PhotoImportSubfolderDateFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportFindItemsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportImportItemsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportItemImportedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportSelectionChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportSidecar>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportStorageMedium>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportVideoSegment>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Import::PhotoImportProgress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Media::Import::PhotoImportProgress>
    {
        static PyObject* convert(winrt::Windows::Media::Import::PhotoImportProgress instance) noexcept;
        static winrt::Windows::Media::Import::PhotoImportProgress convert_to(PyObject* obj);
    };

}
