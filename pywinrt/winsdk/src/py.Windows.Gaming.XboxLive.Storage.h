// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.Gaming.XboxLive.Storage.h>

namespace py::proj::Windows::Gaming::XboxLive::Storage
{}

namespace py::impl::Windows::Gaming::XboxLive::Storage
{}

namespace py::wrapper::Windows::Gaming::XboxLive::Storage
{
    using GameSaveBlobGetResult = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult>;
    using GameSaveBlobInfo = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo>;
    using GameSaveBlobInfoGetResult = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>;
    using GameSaveBlobInfoQuery = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery>;
    using GameSaveContainer = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainer>;
    using GameSaveContainerInfo = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo>;
    using GameSaveContainerInfoGetResult = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>;
    using GameSaveContainerInfoQuery = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery>;
    using GameSaveOperationResult = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>;
    using GameSaveProvider = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveProvider>;
    using GameSaveProviderGetResult = py::winrt_wrapper<winrt::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus> = "i";


    template<>
    struct py_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveErrorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobGetResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoGetResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveBlobInfoQuery>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoGetResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveContainerInfoQuery>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveOperationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
