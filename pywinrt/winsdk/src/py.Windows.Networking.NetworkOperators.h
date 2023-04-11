// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Data.Xml.Dom.h")
#include "py.Windows.Data.Xml.Dom.h"
#endif

#if __has_include("py.Windows.Devices.Sms.h")
#include "py.Windows.Devices.Sms.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.h")
#include "py.Windows.Networking.h"
#endif

#if __has_include("py.Windows.Networking.Connectivity.h")
#include "py.Windows.Networking.Connectivity.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Data.Xml.Dom.h>
#include <winrt/Windows.Devices.Sms.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Networking.h>
#include <winrt/Windows.Networking.Connectivity.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Networking.NetworkOperators.h>

namespace py::proj::Windows::Networking::NetworkOperators
{}

namespace py::impl::Windows::Networking::NetworkOperators
{}

namespace py::wrapper::Windows::Networking::NetworkOperators
{
    using ESim = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESim>;
    using ESimAddedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimAddedEventArgs>;
    using ESimDiscoverEvent = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimDiscoverEvent>;
    using ESimDiscoverResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimDiscoverResult>;
    using ESimDownloadProfileMetadataResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult>;
    using ESimManager = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimManager>;
    using ESimOperationResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimOperationResult>;
    using ESimPolicy = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimPolicy>;
    using ESimProfile = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimProfile>;
    using ESimProfileMetadata = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimProfileMetadata>;
    using ESimProfilePolicy = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimProfilePolicy>;
    using ESimRemovedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimRemovedEventArgs>;
    using ESimServiceInfo = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimServiceInfo>;
    using ESimUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimUpdatedEventArgs>;
    using ESimWatcher = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ESimWatcher>;
    using FdnAccessManager = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::FdnAccessManager>;
    using HotspotAuthenticationContext = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationContext>;
    using HotspotAuthenticationEventDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>;
    using HotspotCredentialsAuthenticationResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>;
    using KnownCSimFilePaths = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::KnownCSimFilePaths>;
    using KnownRuimFilePaths = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::KnownRuimFilePaths>;
    using KnownSimFilePaths = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::KnownSimFilePaths>;
    using KnownUSimFilePaths = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::KnownUSimFilePaths>;
    using MobileBroadbandAccount = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccount>;
    using MobileBroadbandAccountEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>;
    using MobileBroadbandAccountUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>;
    using MobileBroadbandAccountWatcher = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>;
    using MobileBroadbandAntennaSar = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar>;
    using MobileBroadbandCellCdma = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>;
    using MobileBroadbandCellGsm = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>;
    using MobileBroadbandCellLte = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellLte>;
    using MobileBroadbandCellNR = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellNR>;
    using MobileBroadbandCellTdscdma = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>;
    using MobileBroadbandCellUmts = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>;
    using MobileBroadbandCellsInfo = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo>;
    using MobileBroadbandCurrentSlotIndexChangedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCurrentSlotIndexChangedEventArgs>;
    using MobileBroadbandDeviceInformation = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>;
    using MobileBroadbandDeviceService = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>;
    using MobileBroadbandDeviceServiceCommandResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>;
    using MobileBroadbandDeviceServiceCommandSession = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>;
    using MobileBroadbandDeviceServiceDataReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>;
    using MobileBroadbandDeviceServiceDataSession = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>;
    using MobileBroadbandDeviceServiceInformation = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>;
    using MobileBroadbandDeviceServiceTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>;
    using MobileBroadbandModem = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModem>;
    using MobileBroadbandModemConfiguration = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>;
    using MobileBroadbandModemIsolation = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation>;
    using MobileBroadbandNetwork = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetwork>;
    using MobileBroadbandNetworkRegistrationStateChange = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>;
    using MobileBroadbandNetworkRegistrationStateChangeTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>;
    using MobileBroadbandPco = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPco>;
    using MobileBroadbandPcoDataChangeTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPcoDataChangeTriggerDetails>;
    using MobileBroadbandPin = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPin>;
    using MobileBroadbandPinLockStateChange = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>;
    using MobileBroadbandPinLockStateChangeTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>;
    using MobileBroadbandPinManager = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinManager>;
    using MobileBroadbandPinOperationResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>;
    using MobileBroadbandRadioStateChange = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>;
    using MobileBroadbandRadioStateChangeTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>;
    using MobileBroadbandSarManager = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSarManager>;
    using MobileBroadbandSlotInfo = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSlotInfo>;
    using MobileBroadbandSlotInfoChangedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSlotInfoChangedEventArgs>;
    using MobileBroadbandSlotManager = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSlotManager>;
    using MobileBroadbandTransmissionStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs>;
    using MobileBroadbandUicc = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUicc>;
    using MobileBroadbandUiccApp = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>;
    using MobileBroadbandUiccAppReadRecordResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>;
    using MobileBroadbandUiccAppRecordDetailsResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>;
    using MobileBroadbandUiccAppsResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>;
    using NetworkOperatorDataUsageTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::NetworkOperatorDataUsageTriggerDetails>;
    using NetworkOperatorNotificationEventDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>;
    using NetworkOperatorTetheringAccessPointConfiguration = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>;
    using NetworkOperatorTetheringClient = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>;
    using NetworkOperatorTetheringManager = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>;
    using NetworkOperatorTetheringOperationResult = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>;
    using ProvisionFromXmlDocumentResults = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>;
    using ProvisionedProfile = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ProvisionedProfile>;
    using ProvisioningAgent = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::ProvisioningAgent>;
    using TetheringEntitlementCheckTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::TetheringEntitlementCheckTriggerDetails>;
    using UssdMessage = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::UssdMessage>;
    using UssdReply = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::UssdReply>;
    using UssdSession = py::winrt_wrapper<winrt::Windows::Networking::NetworkOperators::UssdSession>;
    using ESimProfileInstallProgress = py::winrt_struct_wrapper<winrt::Windows::Networking::NetworkOperators::ESimProfileInstallProgress>;
    using ProfileUsage = py::winrt_struct_wrapper<winrt::Windows::Networking::NetworkOperators::ProfileUsage>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::DataClasses> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimAuthenticationPreference> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimDiscoverResultKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimOperationStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimProfileClass> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimProfileMetadataState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimProfileState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimWatcherStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModemStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinFormat> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSlotState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::NetworkDeviceStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::NetworkOperatorDataUsageNotificationKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::NetworkRegistrationState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ProfileMediaType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::TetheringCapability> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::TetheringOperationStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::TetheringOperationalState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::TetheringWiFiBand> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::UiccAccessCondition> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::UiccAppKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::UiccAppRecordKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::UssdResultCode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ESimProfileInstallProgress> = "T{i:total_size_in_bytes:i:installed_size_in_bytes:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::NetworkOperators::ProfileUsage> = "T{I:usage_in_megabytes:T{q:universal_time:}:last_sync_time:}";


    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::DataClasses>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ESimAuthenticationPreference>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ESimDiscoverResultKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ESimOperationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ESimProfileClass>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ESimProfileMetadataState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ESimProfileState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ESimState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ESimWatcherStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModemStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSlotState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::NetworkDeviceStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::NetworkOperatorDataUsageNotificationKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::NetworkRegistrationState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::ProfileMediaType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::TetheringCapability>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::TetheringOperationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::TetheringOperationalState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::TetheringWiFiBand>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::UiccAccessCondition>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::UiccAppKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::UiccAppRecordKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::NetworkOperators::UssdResultCode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESim>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimAddedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimDiscoverEvent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimDiscoverResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimDownloadProfileMetadataResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimOperationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimPolicy>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimProfile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimProfileMetadata>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimProfilePolicy>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimRemovedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimServiceInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimWatcher>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::FdnAccessManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::KnownCSimFilePaths>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::KnownRuimFilePaths>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::KnownSimFilePaths>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::KnownUSimFilePaths>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccount>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellCdma>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellGsm>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellLte>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellNR>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellUmts>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCurrentSlotIndexChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceService>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModemIsolation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetwork>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPco>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPcoDataChangeTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPin>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSarManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSlotInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSlotInfoChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSlotManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUicc>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccApp>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::NetworkOperatorDataUsageTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ProvisionedProfile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ProvisioningAgent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::TetheringEntitlementCheckTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::UssdMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::UssdReply>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::UssdSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ESimProfileInstallProgress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::NetworkOperators::ProfileUsage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Networking::NetworkOperators::ESimProfileInstallProgress>
    {
        static PyObject* convert(winrt::Windows::Networking::NetworkOperators::ESimProfileInstallProgress instance) noexcept;
        static winrt::Windows::Networking::NetworkOperators::ESimProfileInstallProgress convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Networking::NetworkOperators::ProfileUsage>
    {
        static PyObject* convert(winrt::Windows::Networking::NetworkOperators::ProfileUsage instance) noexcept;
        static winrt::Windows::Networking::NetworkOperators::ProfileUsage convert_to(PyObject* obj);
    };

}
