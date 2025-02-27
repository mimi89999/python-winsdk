// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.UI.Popups.h>

namespace py::proj::Windows::UI::Popups
{}

namespace py::impl::Windows::UI::Popups
{
    struct UICommandInvokedHandler
    {
        static winrt::Windows::UI::Popups::UICommandInvokedHandler get(PyObject* callable)
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

namespace py::wrapper::Windows::UI::Popups
{
    using MessageDialog = py::winrt_wrapper<winrt::Windows::UI::Popups::MessageDialog>;
    using PopupMenu = py::winrt_wrapper<winrt::Windows::UI::Popups::PopupMenu>;
    using UICommand = py::winrt_wrapper<winrt::Windows::UI::Popups::UICommand>;
    using UICommandSeparator = py::winrt_wrapper<winrt::Windows::UI::Popups::UICommandSeparator>;
    using IUICommand = py::winrt_wrapper<winrt::Windows::UI::Popups::IUICommand>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::UI::Popups::MessageDialogOptions> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::UI::Popups::Placement> = "i";


    template<>
    struct py_type<winrt::Windows::UI::Popups::MessageDialogOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Popups::Placement>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Popups::MessageDialog>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Popups::PopupMenu>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Popups::UICommand>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Popups::UICommandSeparator>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Popups::IUICommand>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::UI::Popups::UICommandInvokedHandler>
    {
        using type = py::impl::Windows::UI::Popups::UICommandInvokedHandler;
    };

}
