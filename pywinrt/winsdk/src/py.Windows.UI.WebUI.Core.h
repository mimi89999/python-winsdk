// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.UI.WebUI.Core.h>

namespace py::proj::Windows::UI::WebUI::Core
{}

namespace py::impl::Windows::UI::WebUI::Core
{
    struct MenuClosedEventHandler
    {
        static winrt::Windows::UI::WebUI::Core::MenuClosedEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)]()
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle args{ nullptr };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };

    struct MenuOpenedEventHandler
    {
        static winrt::Windows::UI::WebUI::Core::MenuOpenedEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)]()
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle args{ nullptr };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };

    struct SizeChangedEventHandler
    {
        static winrt::Windows::UI::WebUI::Core::SizeChangedEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::UI::WebUI::Core
{
    using WebUICommandBar = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::WebUICommandBar>;
    using WebUICommandBarBitmapIcon = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon>;
    using WebUICommandBarConfirmationButton = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton>;
    using WebUICommandBarIconButton = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::WebUICommandBarIconButton>;
    using WebUICommandBarItemInvokedEventArgs = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs>;
    using WebUICommandBarSizeChangedEventArgs = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs>;
    using WebUICommandBarSymbolIcon = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon>;
    using IWebUICommandBarElement = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::IWebUICommandBarElement>;
    using IWebUICommandBarIcon = py::winrt_wrapper<winrt::Windows::UI::WebUI::Core::IWebUICommandBarIcon>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::WebUICommandBar>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::WebUICommandBarIconButton>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::IWebUICommandBarElement>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::WebUI::Core::IWebUICommandBarIcon>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::UI::WebUI::Core::MenuClosedEventHandler>
    {
        using type = py::impl::Windows::UI::WebUI::Core::MenuClosedEventHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::UI::WebUI::Core::MenuOpenedEventHandler>
    {
        using type = py::impl::Windows::UI::WebUI::Core::MenuOpenedEventHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::UI::WebUI::Core::SizeChangedEventHandler>
    {
        using type = py::impl::Windows::UI::WebUI::Core::SizeChangedEventHandler;
    };

}
