// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Foundation.Collections.h>

#include <winrt/Windows.Data.Json.h>

namespace py::proj::Windows::Data::Json
{}

namespace py::impl::Windows::Data::Json
{}

namespace py::wrapper::Windows::Data::Json
{
    using JsonArray = py::winrt_wrapper<winrt::Windows::Data::Json::JsonArray>;
    using JsonError = py::winrt_wrapper<winrt::Windows::Data::Json::JsonError>;
    using JsonObject = py::winrt_wrapper<winrt::Windows::Data::Json::JsonObject>;
    using JsonValue = py::winrt_wrapper<winrt::Windows::Data::Json::JsonValue>;
    using IJsonValue = py::winrt_wrapper<winrt::Windows::Data::Json::IJsonValue>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Data::Json::JsonErrorStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Data::Json::JsonValueType> = "i";


    template<>
    struct py_type<winrt::Windows::Data::Json::JsonErrorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Data::Json::JsonValueType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::JsonArray>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::JsonError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::JsonObject>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::JsonValue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Json::IJsonValue>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
