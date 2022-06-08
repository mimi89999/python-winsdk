// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Core.h")
#include "py.Windows.ApplicationModel.Core.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.StartScreen.h")
#include "py.Windows.UI.StartScreen.h"
#endif

#include <winrt/Windows.UI.Shell.h>

namespace py::proj::Windows::UI::Shell
{}

namespace py::impl::Windows::UI::Shell
{}

namespace py::wrapper::Windows::UI::Shell
{
    using AdaptiveCardBuilder = py::winrt_wrapper<winrt::Windows::UI::Shell::AdaptiveCardBuilder>;
    using ShareWindowCommandEventArgs = py::winrt_wrapper<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs>;
    using ShareWindowCommandSource = py::winrt_wrapper<winrt::Windows::UI::Shell::ShareWindowCommandSource>;
    using TaskbarManager = py::winrt_wrapper<winrt::Windows::UI::Shell::TaskbarManager>;
    using IAdaptiveCard = py::winrt_wrapper<winrt::Windows::UI::Shell::IAdaptiveCard>;
    using IAdaptiveCardBuilderStatics = py::winrt_wrapper<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::UI::Shell::ShareWindowCommand>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Shell::AdaptiveCardBuilder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Shell::ShareWindowCommandSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Shell::TaskbarManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Shell::IAdaptiveCard>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
