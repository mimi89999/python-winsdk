// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.ApplicationModel.CommunicationBlocking.h>

namespace py::proj::Windows::ApplicationModel::CommunicationBlocking
{}

namespace py::impl::Windows::ApplicationModel::CommunicationBlocking
{}

namespace py::wrapper::Windows::ApplicationModel::CommunicationBlocking
{
    using CommunicationBlockingAccessManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager>;
    using CommunicationBlockingAppManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
