// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"


#include <winrt/Windows.Data.Html.h>

namespace py::proj::Windows::Data::Html
{}

namespace py::impl::Windows::Data::Html
{}

namespace py::wrapper::Windows::Data::Html
{
    using HtmlUtilities = py::winrt_wrapper<winrt::Windows::Data::Html::HtmlUtilities>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Data::Html::HtmlUtilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
