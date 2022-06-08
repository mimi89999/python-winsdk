// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.h")
#include "py.Windows.Graphics.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Graphics.Display.h>

namespace py::proj::Windows::Graphics::Display
{}

namespace py::impl::Windows::Graphics::Display
{
    struct DisplayPropertiesEventHandler
    {
        static winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler get(PyObject* callable)
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

namespace py::wrapper::Windows::Graphics::Display
{
    using AdvancedColorInfo = py::winrt_wrapper<winrt::Windows::Graphics::Display::AdvancedColorInfo>;
    using BrightnessOverride = py::winrt_wrapper<winrt::Windows::Graphics::Display::BrightnessOverride>;
    using BrightnessOverrideSettings = py::winrt_wrapper<winrt::Windows::Graphics::Display::BrightnessOverrideSettings>;
    using ColorOverrideSettings = py::winrt_wrapper<winrt::Windows::Graphics::Display::ColorOverrideSettings>;
    using DisplayEnhancementOverride = py::winrt_wrapper<winrt::Windows::Graphics::Display::DisplayEnhancementOverride>;
    using DisplayEnhancementOverrideCapabilities = py::winrt_wrapper<winrt::Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>;
    using DisplayEnhancementOverrideCapabilitiesChangedEventArgs = py::winrt_wrapper<winrt::Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs>;
    using DisplayInformation = py::winrt_wrapper<winrt::Windows::Graphics::Display::DisplayInformation>;
    using DisplayProperties = py::winrt_wrapper<winrt::Windows::Graphics::Display::DisplayProperties>;
    using DisplayServices = py::winrt_wrapper<winrt::Windows::Graphics::Display::DisplayServices>;
    using NitRange = py::winrt_struct_wrapper<winrt::Windows::Graphics::Display::NitRange>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Graphics::Display::AdvancedColorKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Display::DisplayBrightnessOverrideOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Display::DisplayBrightnessOverrideScenario>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Display::DisplayBrightnessScenario>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Display::DisplayColorOverrideScenario>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Display::DisplayOrientations>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Display::HdrMetadataFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Display::ResolutionScale>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::AdvancedColorInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::BrightnessOverride>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::BrightnessOverrideSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::ColorOverrideSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::DisplayEnhancementOverride>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::DisplayInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::DisplayProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::DisplayServices>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Display::NitRange>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::Graphics::Display::DisplayPropertiesEventHandler>
    {
        using type = py::impl::Windows::Graphics::Display::DisplayPropertiesEventHandler;
    };

    template<>
    struct converter<winrt::Windows::Graphics::Display::NitRange>
    {
        static PyObject* convert(winrt::Windows::Graphics::Display::NitRange instance) noexcept;
        static winrt::Windows::Graphics::Display::NitRange convert_to(PyObject* obj);
    };

}
