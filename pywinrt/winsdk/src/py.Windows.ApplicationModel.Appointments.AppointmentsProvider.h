// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Appointments.h")
#include "py.Windows.ApplicationModel.Appointments.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.ApplicationModel.Appointments.h>
#include <winrt/Windows.Foundation.h>

#include <winrt/Windows.ApplicationModel.Appointments.AppointmentsProvider.h>

namespace py::proj::Windows::ApplicationModel::Appointments::AppointmentsProvider
{}

namespace py::impl::Windows::ApplicationModel::Appointments::AppointmentsProvider
{}

namespace py::wrapper::Windows::ApplicationModel::Appointments::AppointmentsProvider
{
    using AddAppointmentOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation>;
    using AppointmentsProviderLaunchActionVerbs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::AppointmentsProviderLaunchActionVerbs>;
    using RemoveAppointmentOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation>;
    using ReplaceAppointmentOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::AppointmentsProviderLaunchActionVerbs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
