// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.UserActivities.h")
#include "py.Windows.ApplicationModel.UserActivities.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.ApplicationModel.UserActivities.Core.h>

namespace py::proj::Windows::ApplicationModel::UserActivities::Core
{}

namespace py::impl::Windows::ApplicationModel::UserActivities::Core
{}

namespace py::wrapper::Windows::ApplicationModel::UserActivities::Core
{
    using CoreUserActivityManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
