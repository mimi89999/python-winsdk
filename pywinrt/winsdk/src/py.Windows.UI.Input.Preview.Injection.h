// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Gaming.Input.h")
#include "py.Windows.Gaming.Input.h"
#endif

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Gaming.Input.h>

#include <winrt/Windows.UI.Input.Preview.Injection.h>

namespace py::proj::Windows::UI::Input::Preview::Injection
{}

namespace py::impl::Windows::UI::Input::Preview::Injection
{}

namespace py::wrapper::Windows::UI::Input::Preview::Injection
{
    using InjectedInputGamepadInfo = py::winrt_wrapper<winrt::Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>;
    using InjectedInputKeyboardInfo = py::winrt_wrapper<winrt::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>;
    using InjectedInputMouseInfo = py::winrt_wrapper<winrt::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>;
    using InjectedInputPenInfo = py::winrt_wrapper<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>;
    using InjectedInputTouchInfo = py::winrt_wrapper<winrt::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>;
    using InputInjector = py::winrt_wrapper<winrt::Windows::UI::Input::Preview::Injection::InputInjector>;
    using InjectedInputPoint = py::winrt_struct_wrapper<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPoint>;
    using InjectedInputPointerInfo = py::winrt_struct_wrapper<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>;
    using InjectedInputRectangle = py::winrt_struct_wrapper<winrt::Windows::UI::Input::Preview::Injection::InjectedInputRectangle>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputButtonChangeKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenButtons> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenParameters> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputShortcut> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPoint> = "T{i:position_x:i:position_y:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo> = "T{I:pointer_id:I:pointer_options:T{i:position_x:i:position_y:}:pixel_location:I:time_offset_in_milliseconds:Q:performance_count:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::UI::Input::Preview::Injection::InjectedInputRectangle> = "T{i:left:i:top:i:bottom:i:right:}";


    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputButtonChangeKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenButtons>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenParameters>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputShortcut>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InputInjector>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPoint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Preview::Injection::InjectedInputRectangle>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPoint>
    {
        static PyObject* convert(winrt::Windows::UI::Input::Preview::Injection::InjectedInputPoint instance) noexcept;
        static winrt::Windows::UI::Input::Preview::Injection::InjectedInputPoint convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>
    {
        static PyObject* convert(winrt::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo instance) noexcept;
        static winrt::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::UI::Input::Preview::Injection::InjectedInputRectangle>
    {
        static PyObject* convert(winrt::Windows::UI::Input::Preview::Injection::InjectedInputRectangle instance) noexcept;
        static winrt::Windows::UI::Input::Preview::Injection::InjectedInputRectangle convert_to(PyObject* obj);
    };

}
