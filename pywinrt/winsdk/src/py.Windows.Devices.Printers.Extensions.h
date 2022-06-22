// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Devices.Printers.Extensions.h>

namespace py::proj::Windows::Devices::Printers::Extensions
{}

namespace py::impl::Windows::Devices::Printers::Extensions
{}

namespace py::wrapper::Windows::Devices::Printers::Extensions
{
    using Print3DWorkflow = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow>;
    using Print3DWorkflowPrintRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>;
    using Print3DWorkflowPrinterChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>;
    using PrintExtensionContext = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::PrintExtensionContext>;
    using PrintNotificationEventDetails = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>;
    using PrintTaskConfiguration = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration>;
    using PrintTaskConfigurationSaveRequest = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>;
    using PrintTaskConfigurationSaveRequestedDeferral = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>;
    using PrintTaskConfigurationSaveRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowDetail>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::PrintExtensionContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
