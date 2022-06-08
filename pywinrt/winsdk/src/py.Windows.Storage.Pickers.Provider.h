// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

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

#include <winrt/Windows.Storage.Pickers.Provider.h>

namespace py::proj::Windows::Storage::Pickers::Provider
{}

namespace py::impl::Windows::Storage::Pickers::Provider
{}

namespace py::wrapper::Windows::Storage::Pickers::Provider
{
    using FileOpenPickerUI = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::FileOpenPickerUI>;
    using FileRemovedEventArgs = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::FileRemovedEventArgs>;
    using FileSavePickerUI = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::FileSavePickerUI>;
    using PickerClosingDeferral = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::PickerClosingDeferral>;
    using PickerClosingEventArgs = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::PickerClosingEventArgs>;
    using PickerClosingOperation = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::PickerClosingOperation>;
    using TargetFileRequest = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::TargetFileRequest>;
    using TargetFileRequestDeferral = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestDeferral>;
    using TargetFileRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Storage::Pickers::Provider::AddFileResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Pickers::Provider::FileSelectionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Pickers::Provider::SetFileNameResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::FileOpenPickerUI>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::FileRemovedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::FileSavePickerUI>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::PickerClosingDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::PickerClosingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::PickerClosingOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::TargetFileRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
