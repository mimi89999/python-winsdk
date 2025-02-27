// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Graphics.h")
#include "py.Windows.Graphics.h"
#endif

#if __has_include("py.Windows.Graphics.DirectX.h")
#include "py.Windows.Graphics.DirectX.h"
#endif

#if __has_include("py.Windows.Graphics.DirectX.Direct3D11.h")
#include "py.Windows.Graphics.DirectX.Direct3D11.h"
#endif

#if __has_include("py.Windows.Security.Authorization.AppCapabilityAccess.h")
#include "py.Windows.Security.Authorization.AppCapabilityAccess.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.Composition.h")
#include "py.Windows.UI.Composition.h"
#endif

#include <winrt/Windows.Graphics.Capture.h>

namespace py::proj::Windows::Graphics::Capture
{}

namespace py::impl::Windows::Graphics::Capture
{}

namespace py::wrapper::Windows::Graphics::Capture
{
    using Direct3D11CaptureFrame = py::winrt_wrapper<winrt::Windows::Graphics::Capture::Direct3D11CaptureFrame>;
    using Direct3D11CaptureFramePool = py::winrt_wrapper<winrt::Windows::Graphics::Capture::Direct3D11CaptureFramePool>;
    using GraphicsCaptureAccess = py::winrt_wrapper<winrt::Windows::Graphics::Capture::GraphicsCaptureAccess>;
    using GraphicsCaptureItem = py::winrt_wrapper<winrt::Windows::Graphics::Capture::GraphicsCaptureItem>;
    using GraphicsCapturePicker = py::winrt_wrapper<winrt::Windows::Graphics::Capture::GraphicsCapturePicker>;
    using GraphicsCaptureSession = py::winrt_wrapper<winrt::Windows::Graphics::Capture::GraphicsCaptureSession>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Graphics::Capture::GraphicsCaptureAccessKind> = "i";


    template<>
    struct py_type<winrt::Windows::Graphics::Capture::GraphicsCaptureAccessKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Capture::Direct3D11CaptureFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Capture::Direct3D11CaptureFramePool>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Capture::GraphicsCaptureAccess>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Capture::GraphicsCaptureItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Capture::GraphicsCapturePicker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Capture::GraphicsCaptureSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
