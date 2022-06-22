// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.AI.MachineLearning.Preview.h>

namespace py::proj::Windows::AI::MachineLearning::Preview
{}

namespace py::impl::Windows::AI::MachineLearning::Preview
{}

namespace py::wrapper::Windows::AI::MachineLearning::Preview
{
    using ImageVariableDescriptorPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::ImageVariableDescriptorPreview>;
    using InferencingOptionsPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::InferencingOptionsPreview>;
    using LearningModelBindingPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::LearningModelBindingPreview>;
    using LearningModelDescriptionPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview>;
    using LearningModelEvaluationResultPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview>;
    using LearningModelPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::LearningModelPreview>;
    using LearningModelVariableDescriptorPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::LearningModelVariableDescriptorPreview>;
    using MapVariableDescriptorPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::MapVariableDescriptorPreview>;
    using SequenceVariableDescriptorPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::SequenceVariableDescriptorPreview>;
    using TensorVariableDescriptorPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::TensorVariableDescriptorPreview>;
    using ILearningModelVariableDescriptorPreview = py::winrt_wrapper<winrt::Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::AI::MachineLearning::Preview::FeatureElementKindPreview>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::AI::MachineLearning::Preview::LearningModelDeviceKindPreview>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::AI::MachineLearning::Preview::LearningModelFeatureKindPreview>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::ImageVariableDescriptorPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::InferencingOptionsPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::LearningModelBindingPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::LearningModelDescriptionPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::LearningModelEvaluationResultPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::LearningModelPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::LearningModelVariableDescriptorPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::MapVariableDescriptorPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::SequenceVariableDescriptorPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::TensorVariableDescriptorPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::AI::MachineLearning::Preview::ILearningModelVariableDescriptorPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
