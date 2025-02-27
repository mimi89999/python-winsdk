// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Core.h")
#include "py.Windows.ApplicationModel.Core.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.Core.h")
#include "py.Windows.UI.Core.h"
#endif

#if __has_include("py.Windows.UI.Input.h")
#include "py.Windows.UI.Input.h"
#endif

#include <winrt/Windows.UI.Input.Core.h>

namespace py::proj::Windows::UI::Input::Core
{}

namespace py::impl::Windows::UI::Input::Core
{}

namespace py::wrapper::Windows::UI::Input::Core
{
    using RadialControllerIndependentInputSource = py::winrt_wrapper<winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
