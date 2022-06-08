// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Contacts.h")
#include "py.Windows.ApplicationModel.Contacts.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.ApplicationModel.Contacts.DataProvider.h>

namespace py::proj::Windows::ApplicationModel::Contacts::DataProvider
{}

namespace py::impl::Windows::ApplicationModel::Contacts::DataProvider
{}

namespace py::wrapper::Windows::ApplicationModel::Contacts::DataProvider
{
    using ContactDataProviderConnection = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection>;
    using ContactDataProviderTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails>;
    using ContactListCreateOrUpdateContactRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest>;
    using ContactListCreateOrUpdateContactRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs>;
    using ContactListDeleteContactRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest>;
    using ContactListDeleteContactRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs>;
    using ContactListServerSearchReadBatchRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest>;
    using ContactListServerSearchReadBatchRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs>;
    using ContactListSyncManagerSyncRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest>;
    using ContactListSyncManagerSyncRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
