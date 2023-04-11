// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Activation.h")
#include "py.Windows.ApplicationModel.Activation.h"
#endif

#if __has_include("py.Windows.ApplicationModel.Calls.Background.h")
#include "py.Windows.ApplicationModel.Calls.Background.h"
#endif

#if __has_include("py.Windows.Devices.Bluetooth.h")
#include "py.Windows.Devices.Bluetooth.h"
#endif

#if __has_include("py.Windows.Devices.Bluetooth.Advertisement.h")
#include "py.Windows.Devices.Bluetooth.Advertisement.h"
#endif

#if __has_include("py.Windows.Devices.Bluetooth.Background.h")
#include "py.Windows.Devices.Bluetooth.Background.h"
#endif

#if __has_include("py.Windows.Devices.Bluetooth.GenericAttributeProfile.h")
#include "py.Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#endif

#if __has_include("py.Windows.Devices.Geolocation.h")
#include "py.Windows.Devices.Geolocation.h"
#endif

#if __has_include("py.Windows.Devices.Sensors.h")
#include "py.Windows.Devices.Sensors.h"
#endif

#if __has_include("py.Windows.Devices.SmartCards.h")
#include "py.Windows.Devices.SmartCards.h"
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

#if __has_include("py.Windows.Networking.Sockets.h")
#include "py.Windows.Networking.Sockets.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Provider.h")
#include "py.Windows.Storage.Provider.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.Notifications.h")
#include "py.Windows.UI.Notifications.h"
#endif

#include <winrt/Windows.ApplicationModel.Activation.h>
#include <winrt/Windows.ApplicationModel.Calls.Background.h>
#include <winrt/Windows.Devices.Bluetooth.h>
#include <winrt/Windows.Devices.Bluetooth.Advertisement.h>
#include <winrt/Windows.Devices.Bluetooth.Background.h>
#include <winrt/Windows.Devices.Bluetooth.GenericAttributeProfile.h>
#include <winrt/Windows.Devices.Geolocation.h>
#include <winrt/Windows.Devices.Sensors.h>
#include <winrt/Windows.Devices.SmartCards.h>
#include <winrt/Windows.Devices.Sms.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Networking.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Provider.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.Notifications.h>

#include <winrt/Windows.ApplicationModel.Background.h>

namespace py::proj::Windows::ApplicationModel::Background
{}

namespace py::impl::Windows::ApplicationModel::Background
{
    struct BackgroundTaskCanceledEventHandler
    {
        static winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };

    struct BackgroundTaskCompletedEventHandler
    {
        static winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };

    struct BackgroundTaskProgressEventHandler
    {
        static winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::ApplicationModel::Background
{
    using ActivitySensorTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ActivitySensorTrigger>;
    using AlarmApplicationManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::AlarmApplicationManager>;
    using AppBroadcastTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::AppBroadcastTrigger>;
    using AppBroadcastTriggerProviderInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>;
    using ApplicationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ApplicationTrigger>;
    using ApplicationTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ApplicationTriggerDetails>;
    using AppointmentStoreNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>;
    using BackgroundExecutionManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BackgroundExecutionManager>;
    using BackgroundTaskBuilder = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BackgroundTaskBuilder>;
    using BackgroundTaskCompletedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>;
    using BackgroundTaskDeferral = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BackgroundTaskDeferral>;
    using BackgroundTaskProgressEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>;
    using BackgroundTaskRegistration = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration>;
    using BackgroundTaskRegistrationGroup = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>;
    using BackgroundWorkCost = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BackgroundWorkCost>;
    using BluetoothLEAdvertisementPublisherTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>;
    using BluetoothLEAdvertisementWatcherTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>;
    using CachedFileUpdaterTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>;
    using CachedFileUpdaterTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>;
    using ChatMessageNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>;
    using ChatMessageReceivedNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>;
    using CommunicationBlockingAppSetAsActiveTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>;
    using ContactStoreNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>;
    using ContentPrefetchTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ContentPrefetchTrigger>;
    using ConversationalAgentTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ConversationalAgentTrigger>;
    using CustomSystemEventTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::CustomSystemEventTrigger>;
    using DeviceConnectionChangeTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>;
    using DeviceManufacturerNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>;
    using DeviceServicingTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::DeviceServicingTrigger>;
    using DeviceUseTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::DeviceUseTrigger>;
    using DeviceWatcherTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::DeviceWatcherTrigger>;
    using EmailStoreNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>;
    using GattCharacteristicNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>;
    using GattServiceProviderTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::GattServiceProviderTrigger>;
    using GattServiceProviderTriggerResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>;
    using GeovisitTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::GeovisitTrigger>;
    using LocationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::LocationTrigger>;
    using MaintenanceTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::MaintenanceTrigger>;
    using MediaProcessingTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::MediaProcessingTrigger>;
    using MobileBroadbandDeviceServiceNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>;
    using MobileBroadbandPcoDataChangeTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger>;
    using MobileBroadbandPinLockStateChangeTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>;
    using MobileBroadbandRadioStateChangeTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>;
    using MobileBroadbandRegistrationStateChangeTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>;
    using NetworkOperatorDataUsageTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger>;
    using NetworkOperatorHotspotAuthenticationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>;
    using NetworkOperatorNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>;
    using PaymentAppCanMakePaymentTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger>;
    using PhoneTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::PhoneTrigger>;
    using PushNotificationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::PushNotificationTrigger>;
    using RcsEndUserMessageAvailableTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>;
    using RfcommConnectionTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::RfcommConnectionTrigger>;
    using SecondaryAuthenticationFactorAuthenticationTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>;
    using SensorDataThresholdTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::SensorDataThresholdTrigger>;
    using SmartCardTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::SmartCardTrigger>;
    using SmsMessageReceivedTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>;
    using SocketActivityTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::SocketActivityTrigger>;
    using StorageLibraryChangeTrackerTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>;
    using StorageLibraryContentChangedTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>;
    using SystemCondition = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::SystemCondition>;
    using SystemTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::SystemTrigger>;
    using TetheringEntitlementCheckTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger>;
    using TimeTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::TimeTrigger>;
    using ToastNotificationActionTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ToastNotificationActionTrigger>;
    using ToastNotificationHistoryChangedTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>;
    using UserNotificationChangedTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::UserNotificationChangedTrigger>;
    using WiFiOnDemandHotspotConnectTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::WiFiOnDemandHotspotConnectTrigger>;
    using WiFiOnDemandHotspotUpdateMetadataTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::WiFiOnDemandHotspotUpdateMetadataTrigger>;
    using IBackgroundCondition = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundCondition>;
    using IBackgroundTask = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundTask>;
    using IBackgroundTaskInstance = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance>;
    using IBackgroundTaskInstance2 = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance2>;
    using IBackgroundTaskInstance4 = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance4>;
    using IBackgroundTaskRegistration = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration>;
    using IBackgroundTaskRegistration2 = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>;
    using IBackgroundTaskRegistration3 = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>;
    using IBackgroundTrigger = py::winrt_wrapper<winrt::Windows::ApplicationModel::Background::IBackgroundTrigger>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::BackgroundAccessRequestKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::BackgroundTaskCancellationReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::BackgroundWorkCostValue> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::LocationTriggerType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::SystemConditionType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Background::SystemTriggerType> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::BackgroundAccessRequestKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskCancellationReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::BackgroundWorkCostValue>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::LocationTriggerType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::SystemConditionType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Background::SystemTriggerType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ActivitySensorTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::AlarmApplicationManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::AppBroadcastTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ApplicationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ApplicationTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BackgroundExecutionManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskBuilder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BackgroundWorkCost>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ChatMessageNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ContactStoreNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ContentPrefetchTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ConversationalAgentTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::CustomSystemEventTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::DeviceServicingTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::DeviceUseTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::DeviceWatcherTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::EmailStoreNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::GattServiceProviderTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::GeovisitTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::LocationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::MaintenanceTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::MediaProcessingTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::PhoneTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::PushNotificationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::RfcommConnectionTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::SensorDataThresholdTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::SmartCardTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::SocketActivityTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::SystemCondition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::SystemTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::TimeTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ToastNotificationActionTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::UserNotificationChangedTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::WiFiOnDemandHotspotConnectTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::WiFiOnDemandHotspotUpdateMetadataTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundCondition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundTask>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler>
    {
        using type = py::impl::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler>
    {
        using type = py::impl::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler>
    {
        using type = py::impl::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler;
    };

}
