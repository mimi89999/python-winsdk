// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Bluetooth.h")
#include "py.Windows.Devices.Bluetooth.h"
#endif

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
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

#include <winrt/Windows.Devices.Bluetooth.GenericAttributeProfile.h>

namespace py::proj::Windows::Devices::Bluetooth::GenericAttributeProfile
{}

namespace py::impl::Windows::Devices::Bluetooth::GenericAttributeProfile
{}

namespace py::wrapper::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    using GattCharacteristic = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>;
    using GattCharacteristicUuids = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids>;
    using GattCharacteristicsResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>;
    using GattClientNotificationResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>;
    using GattDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>;
    using GattDescriptorUuids = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids>;
    using GattDescriptorsResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>;
    using GattDeviceService = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>;
    using GattDeviceServicesResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>;
    using GattLocalCharacteristic = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>;
    using GattLocalCharacteristicParameters = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>;
    using GattLocalCharacteristicResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>;
    using GattLocalDescriptor = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>;
    using GattLocalDescriptorParameters = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>;
    using GattLocalDescriptorResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>;
    using GattLocalService = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>;
    using GattPresentationFormat = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>;
    using GattPresentationFormatTypes = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes>;
    using GattProtocolError = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError>;
    using GattReadClientCharacteristicConfigurationDescriptorResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>;
    using GattReadRequest = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>;
    using GattReadRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>;
    using GattReadResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>;
    using GattReliableWriteTransaction = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>;
    using GattRequestStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>;
    using GattServiceProvider = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>;
    using GattServiceProviderAdvertisementStatusChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>;
    using GattServiceProviderAdvertisingParameters = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>;
    using GattServiceProviderResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>;
    using GattServiceUuids = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids>;
    using GattSession = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>;
    using GattSessionStatusChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>;
    using GattSubscribedClient = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>;
    using GattValueChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>;
    using GattWriteRequest = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>;
    using GattWriteRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>;
    using GattWriteResult = py::winrt_wrapper<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption> = "i";


    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
