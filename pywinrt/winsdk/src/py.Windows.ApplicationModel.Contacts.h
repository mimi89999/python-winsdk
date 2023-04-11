// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Data.Text.h")
#include "py.Windows.Data.Text.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.Popups.h")
#include "py.Windows.UI.Popups.h"
#endif

#if __has_include("py.Windows.UI.ViewManagement.h")
#include "py.Windows.UI.ViewManagement.h"
#endif

#include <winrt/Windows.Data.Text.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.h>
#include <winrt/Windows.UI.Popups.h>
#include <winrt/Windows.UI.ViewManagement.h>

#include <winrt/Windows.ApplicationModel.Contacts.h>

namespace py::proj::Windows::ApplicationModel::Contacts
{}

namespace py::impl::Windows::ApplicationModel::Contacts
{}

namespace py::wrapper::Windows::ApplicationModel::Contacts
{
    using AggregateContactManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::AggregateContactManager>;
    using Contact = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::Contact>;
    using ContactAddress = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactAddress>;
    using ContactAnnotation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactAnnotation>;
    using ContactAnnotationList = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationList>;
    using ContactAnnotationStore = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationStore>;
    using ContactBatch = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactBatch>;
    using ContactCardDelayedDataLoader = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader>;
    using ContactCardOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactCardOptions>;
    using ContactChange = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactChange>;
    using ContactChangeReader = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactChangeReader>;
    using ContactChangeTracker = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactChangeTracker>;
    using ContactChangedDeferral = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactChangedDeferral>;
    using ContactChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactChangedEventArgs>;
    using ContactConnectedServiceAccount = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>;
    using ContactDate = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactDate>;
    using ContactEmail = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactEmail>;
    using ContactField = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactField>;
    using ContactFieldFactory = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactFieldFactory>;
    using ContactGroup = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactGroup>;
    using ContactInformation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactInformation>;
    using ContactInstantMessageField = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactInstantMessageField>;
    using ContactJobInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactJobInfo>;
    using ContactLaunchActionVerbs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactLaunchActionVerbs>;
    using ContactList = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactList>;
    using ContactListLimitedWriteOperations = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactListLimitedWriteOperations>;
    using ContactListSyncConstraints = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactListSyncConstraints>;
    using ContactListSyncManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactListSyncManager>;
    using ContactLocationField = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactLocationField>;
    using ContactManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactManager>;
    using ContactManagerForUser = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactManagerForUser>;
    using ContactMatchReason = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactMatchReason>;
    using ContactPanel = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactPanel>;
    using ContactPanelClosingEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs>;
    using ContactPanelLaunchFullAppRequestedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs>;
    using ContactPhone = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactPhone>;
    using ContactPicker = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactPicker>;
    using ContactQueryOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactQueryOptions>;
    using ContactQueryTextSearch = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactQueryTextSearch>;
    using ContactReader = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactReader>;
    using ContactSignificantOther = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactSignificantOther>;
    using ContactStore = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactStore>;
    using ContactStoreNotificationTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails>;
    using ContactWebsite = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::ContactWebsite>;
    using FullContactCardOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::FullContactCardOptions>;
    using KnownContactField = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::KnownContactField>;
    using PinnedContactIdsQueryResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult>;
    using PinnedContactManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::PinnedContactManager>;
    using IContactField = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::IContactField>;
    using IContactFieldFactory = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::IContactFieldFactory>;
    using IContactInstantMessageFieldFactory = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>;
    using IContactLocationFieldFactory = py::winrt_wrapper<winrt::Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactAddressKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationOperations> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactBatchStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactCardHeaderKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactCardTabKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactChangeType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactDateKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactEmailKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactFieldCategory> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactFieldType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactListSyncStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactMatchReasonKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactNameOrder> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactPhoneKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactQueryDesiredFields> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactQuerySearchFields> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactQuerySearchScope> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactRelationship> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactSelectionMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::ContactStoreAccessType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Contacts::PinnedContactSurface> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactAddressKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationOperations>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationStoreAccessType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactBatchStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactCardHeaderKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactCardTabKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactChangeType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactDateKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactEmailKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactFieldCategory>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactFieldType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactListOtherAppReadAccess>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactListOtherAppWriteAccess>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactListSyncStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactMatchReasonKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactNameOrder>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactPhoneKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactQueryDesiredFields>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactQuerySearchFields>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactQuerySearchScope>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactRelationship>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactSelectionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::ContactStoreAccessType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Contacts::PinnedContactSurface>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::AggregateContactManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::Contact>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactAddress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactAnnotation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactAnnotationStore>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactBatch>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactCardDelayedDataLoader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactCardOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactChange>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactChangeReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactChangeTracker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactChangedDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactConnectedServiceAccount>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactDate>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactEmail>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactField>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactFieldFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactGroup>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactInstantMessageField>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactJobInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactLaunchActionVerbs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactListLimitedWriteOperations>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactListSyncConstraints>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactListSyncManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactLocationField>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactManagerForUser>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactMatchReason>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactPanel>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactPanelClosingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactPanelLaunchFullAppRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactPhone>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactPicker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactQueryOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactQueryTextSearch>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactSignificantOther>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactStore>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactStoreNotificationTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::ContactWebsite>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::FullContactCardOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::KnownContactField>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::PinnedContactIdsQueryResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::PinnedContactManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::IContactField>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::IContactFieldFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::IContactInstantMessageFieldFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Contacts::IContactLocationFieldFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
