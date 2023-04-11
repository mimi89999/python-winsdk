// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Foundation.h>

#include <winrt/Windows.Perception.h>

namespace py::proj::Windows::Perception
{}

namespace py::impl::Windows::Perception
{}

namespace py::wrapper::Windows::Perception
{
    using PerceptionTimestamp = py::winrt_wrapper<winrt::Windows::Perception::PerceptionTimestamp>;
    using PerceptionTimestampHelper = py::winrt_wrapper<winrt::Windows::Perception::PerceptionTimestampHelper>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Perception::PerceptionTimestamp>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::PerceptionTimestampHelper>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
