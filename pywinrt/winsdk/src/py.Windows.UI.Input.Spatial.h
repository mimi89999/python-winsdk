// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Haptics.h")
#include "py.Windows.Devices.Haptics.h"
#endif

#if __has_include("py.Windows.Devices.Power.h")
#include "py.Windows.Devices.Power.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Perception.h")
#include "py.Windows.Perception.h"
#endif

#if __has_include("py.Windows.Perception.People.h")
#include "py.Windows.Perception.People.h"
#endif

#if __has_include("py.Windows.Perception.Spatial.h")
#include "py.Windows.Perception.Spatial.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.UI.Input.Spatial.h>

namespace py::proj::Windows::UI::Input::Spatial
{}

namespace py::impl::Windows::UI::Input::Spatial
{}

namespace py::wrapper::Windows::UI::Input::Spatial
{
    using SpatialGestureRecognizer = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialGestureRecognizer>;
    using SpatialHoldCanceledEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs>;
    using SpatialHoldCompletedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs>;
    using SpatialHoldStartedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs>;
    using SpatialInteraction = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteraction>;
    using SpatialInteractionController = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionController>;
    using SpatialInteractionControllerProperties = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionControllerProperties>;
    using SpatialInteractionDetectedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs>;
    using SpatialInteractionManager = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionManager>;
    using SpatialInteractionSource = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionSource>;
    using SpatialInteractionSourceEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>;
    using SpatialInteractionSourceLocation = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceLocation>;
    using SpatialInteractionSourceProperties = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceProperties>;
    using SpatialInteractionSourceState = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceState>;
    using SpatialManipulationCanceledEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs>;
    using SpatialManipulationCompletedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs>;
    using SpatialManipulationDelta = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialManipulationDelta>;
    using SpatialManipulationStartedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs>;
    using SpatialManipulationUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs>;
    using SpatialNavigationCanceledEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs>;
    using SpatialNavigationCompletedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs>;
    using SpatialNavigationStartedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs>;
    using SpatialNavigationUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs>;
    using SpatialPointerInteractionSourcePose = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose>;
    using SpatialPointerPose = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialPointerPose>;
    using SpatialRecognitionEndedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs>;
    using SpatialRecognitionStartedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs>;
    using SpatialTappedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Input::Spatial::SpatialTappedEventArgs>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::UI::Input::Spatial::SpatialGestureSettings>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionPressKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceHandedness>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialGestureRecognizer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteraction>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionController>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionControllerProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceLocation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceState>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialManipulationDelta>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialPointerPose>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Spatial::SpatialTappedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
