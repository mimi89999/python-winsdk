// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Globalization.DateTimeFormatting.h>

namespace py::proj::Windows::Globalization::DateTimeFormatting
{}

namespace py::impl::Windows::Globalization::DateTimeFormatting
{}

namespace py::wrapper::Windows::Globalization::DateTimeFormatting
{
    using DateTimeFormatter = py::winrt_wrapper<winrt::Windows::Globalization::DateTimeFormatting::DateTimeFormatter>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Globalization::DateTimeFormatting::DayFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::DateTimeFormatting::HourFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::DateTimeFormatting::MinuteFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::DateTimeFormatting::MonthFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::DateTimeFormatting::SecondFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::DateTimeFormatting::YearFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::DateTimeFormatting::DateTimeFormatter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
