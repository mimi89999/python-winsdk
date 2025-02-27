// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

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

#if __has_include("py.Windows.UI.Notifications.h")
#include "py.Windows.UI.Notifications.h"
#endif

#include <winrt/Windows.Networking.PushNotifications.h>

namespace py::proj::Windows::Networking::PushNotifications
{}

namespace py::impl::Windows::Networking::PushNotifications
{}

namespace py::wrapper::Windows::Networking::PushNotifications
{
    using PushNotificationChannel = py::winrt_wrapper<winrt::Windows::Networking::PushNotifications::PushNotificationChannel>;
    using PushNotificationChannelManager = py::winrt_wrapper<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManager>;
    using PushNotificationChannelManagerForUser = py::winrt_wrapper<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser>;
    using PushNotificationChannelsRevokedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::PushNotifications::PushNotificationChannelsRevokedEventArgs>;
    using PushNotificationReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs>;
    using RawNotification = py::winrt_wrapper<winrt::Windows::Networking::PushNotifications::RawNotification>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Networking::PushNotifications::PushNotificationType> = "i";


    template<>
    struct py_type<winrt::Windows::Networking::PushNotifications::PushNotificationType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::PushNotifications::PushNotificationChannel>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::PushNotifications::PushNotificationChannelsRevokedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::PushNotifications::RawNotification>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
