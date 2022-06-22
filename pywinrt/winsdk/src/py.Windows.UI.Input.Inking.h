// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.Core.h")
#include "py.Windows.UI.Core.h"
#endif

#if __has_include("py.Windows.UI.Input.h")
#include "py.Windows.UI.Input.h"
#endif

#include <winrt/Windows.UI.Input.Inking.h>

namespace py::proj::Windows::UI::Input::Inking
{}

namespace py::impl::Windows::UI::Input::Inking
{}

namespace py::wrapper::Windows::UI::Input::Inking
{
    using InkDrawingAttributes = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkDrawingAttributes>;
    using InkDrawingAttributesPencilProperties = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>;
    using InkInputConfiguration = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkInputConfiguration>;
    using InkInputProcessingConfiguration = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkInputProcessingConfiguration>;
    using InkManager = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkManager>;
    using InkModelerAttributes = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkModelerAttributes>;
    using InkPoint = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkPoint>;
    using InkPresenter = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkPresenter>;
    using InkPresenterProtractor = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkPresenterProtractor>;
    using InkPresenterRuler = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkPresenterRuler>;
    using InkRecognitionResult = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkRecognitionResult>;
    using InkRecognizer = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkRecognizer>;
    using InkRecognizerContainer = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkRecognizerContainer>;
    using InkStroke = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkStroke>;
    using InkStrokeBuilder = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkStrokeBuilder>;
    using InkStrokeContainer = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkStrokeContainer>;
    using InkStrokeInput = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkStrokeInput>;
    using InkStrokeRenderingSegment = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkStrokeRenderingSegment>;
    using InkStrokesCollectedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>;
    using InkStrokesErasedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs>;
    using InkSynchronizer = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkSynchronizer>;
    using InkUnprocessedInput = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::InkUnprocessedInput>;
    using PenAndInkSettings = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::PenAndInkSettings>;
    using IInkPointFactory = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::IInkPointFactory>;
    using IInkPresenterRulerFactory = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory>;
    using IInkPresenterStencil = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::IInkPresenterStencil>;
    using IInkRecognizerContainer = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer>;
    using IInkStrokeContainer = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::IInkStrokeContainer>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::HandwritingLineHeight>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkDrawingAttributesKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkHighContrastAdjustment>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkInputProcessingMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkInputRightDragAction>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkManipulationMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkPersistenceFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkPresenterStencilKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::InkRecognitionTarget>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::PenHandedness>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::PenTipShape>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkDrawingAttributes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkInputConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkInputProcessingConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkModelerAttributes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkPoint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkPresenter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkPresenterProtractor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkPresenterRuler>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkRecognitionResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkRecognizer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkRecognizerContainer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkStroke>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkStrokeBuilder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkStrokeContainer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkStrokeInput>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkStrokeRenderingSegment>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkSynchronizer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::InkUnprocessedInput>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::PenAndInkSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::IInkPointFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::IInkPresenterStencil>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::IInkStrokeContainer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
