// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#include <winrt/Windows.Gaming.Input.ForceFeedback.h>

namespace py::proj::Windows::Gaming::Input::ForceFeedback
{}

namespace py::impl::Windows::Gaming::Input::ForceFeedback
{}

namespace py::wrapper::Windows::Gaming::Input::ForceFeedback
{
    using ConditionForceEffect = py::winrt_wrapper<winrt::Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>;
    using ConstantForceEffect = py::winrt_wrapper<winrt::Windows::Gaming::Input::ForceFeedback::ConstantForceEffect>;
    using ForceFeedbackMotor = py::winrt_wrapper<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>;
    using PeriodicForceEffect = py::winrt_wrapper<winrt::Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>;
    using RampForceEffect = py::winrt_wrapper<winrt::Windows::Gaming::Input::ForceFeedback::RampForceEffect>;
    using IForceFeedbackEffect = py::winrt_wrapper<winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::ForceFeedback::ConstantForceEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::ForceFeedback::RampForceEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
