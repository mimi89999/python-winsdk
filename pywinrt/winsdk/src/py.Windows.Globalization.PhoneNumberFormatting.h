// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#include <winrt/Windows.Globalization.PhoneNumberFormatting.h>

namespace py::proj::Windows::Globalization::PhoneNumberFormatting
{}

namespace py::impl::Windows::Globalization::PhoneNumberFormatting
{}

namespace py::wrapper::Windows::Globalization::PhoneNumberFormatting
{
    using PhoneNumberFormatter = py::winrt_wrapper<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>;
    using PhoneNumberInfo = py::winrt_wrapper<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
