// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#include <winrt/Windows.UI.h>

namespace py::proj::Windows::UI
{}

namespace py::impl::Windows::UI
{}

namespace py::wrapper::Windows::UI
{
    using ColorHelper = py::winrt_wrapper<winrt::Windows::UI::ColorHelper>;
    using Colors = py::winrt_wrapper<winrt::Windows::UI::Colors>;
    using UIContentRoot = py::winrt_wrapper<winrt::Windows::UI::UIContentRoot>;
    using UIContext = py::winrt_wrapper<winrt::Windows::UI::UIContext>;
    using Color = py::winrt_struct_wrapper<winrt::Windows::UI::Color>;
    using WindowId = py::winrt_struct_wrapper<winrt::Windows::UI::WindowId>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::UI::ColorHelper>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Colors>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIContentRoot>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Color>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WindowId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::UI::Color>
    {
        static PyObject* convert(winrt::Windows::UI::Color instance) noexcept;
        static winrt::Windows::UI::Color convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::UI::WindowId>
    {
        static PyObject* convert(winrt::Windows::UI::WindowId instance) noexcept;
        static winrt::Windows::UI::WindowId convert_to(PyObject* obj);
    };

}
