// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Geolocation.h")
#include "py.Windows.Devices.Geolocation.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Globalization.h")
#include "py.Windows.Globalization.h"
#endif

#if __has_include("py.Windows.Services.Maps.h")
#include "py.Windows.Services.Maps.h"
#endif

#include <winrt/Windows.Devices.Geolocation.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Globalization.h>
#include <winrt/Windows.Services.Maps.h>

#include <winrt/Windows.Services.Maps.LocalSearch.h>

namespace py::proj::Windows::Services::Maps::LocalSearch
{}

namespace py::impl::Windows::Services::Maps::LocalSearch
{}

namespace py::wrapper::Windows::Services::Maps::LocalSearch
{
    using LocalCategories = py::winrt_wrapper<winrt::Windows::Services::Maps::LocalSearch::LocalCategories>;
    using LocalLocation = py::winrt_wrapper<winrt::Windows::Services::Maps::LocalSearch::LocalLocation>;
    using LocalLocationFinder = py::winrt_wrapper<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinder>;
    using LocalLocationFinderResult = py::winrt_wrapper<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult>;
    using LocalLocationHoursOfOperationItem = py::winrt_wrapper<winrt::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem>;
    using LocalLocationRatingInfo = py::winrt_wrapper<winrt::Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo>;
    using PlaceInfoHelper = py::winrt_wrapper<winrt::Windows::Services::Maps::LocalSearch::PlaceInfoHelper>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus> = "i";


    template<>
    struct py_type<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::LocalSearch::LocalCategories>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::LocalSearch::LocalLocation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::LocalSearch::PlaceInfoHelper>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
