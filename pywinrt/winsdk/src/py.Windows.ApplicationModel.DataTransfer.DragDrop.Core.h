// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.DataTransfer.h")
#include "py.Windows.ApplicationModel.DataTransfer.h"
#endif

#if __has_include("py.Windows.ApplicationModel.DataTransfer.DragDrop.h")
#include "py.Windows.ApplicationModel.DataTransfer.DragDrop.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#include <winrt/Windows.ApplicationModel.DataTransfer.DragDrop.Core.h>

namespace py::proj::Windows::ApplicationModel::DataTransfer::DragDrop::Core
{}

namespace py::impl::Windows::ApplicationModel::DataTransfer::DragDrop::Core
{}

namespace py::wrapper::Windows::ApplicationModel::DataTransfer::DragDrop::Core
{
    using CoreDragDropManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>;
    using CoreDragInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>;
    using CoreDragOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>;
    using CoreDragUIOverride = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>;
    using CoreDropOperationTargetRequestedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>;
    using ICoreDropOperationTarget = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
