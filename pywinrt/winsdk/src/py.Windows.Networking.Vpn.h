// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Activation.h")
#include "py.Windows.ApplicationModel.Activation.h"
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

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Certificates.h")
#include "py.Windows.Security.Cryptography.Certificates.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.ApplicationModel.Activation.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Networking.h>
#include <winrt/Windows.Networking.Sockets.h>
#include <winrt/Windows.Security.Credentials.h>
#include <winrt/Windows.Security.Cryptography.Certificates.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.h>

#include <winrt/Windows.Networking.Vpn.h>

namespace py::proj::Windows::Networking::Vpn
{}

namespace py::impl::Windows::Networking::Vpn
{}

namespace py::wrapper::Windows::Networking::Vpn
{
    using VpnAppId = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnAppId>;
    using VpnChannel = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnChannel>;
    using VpnChannelActivityEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnChannelActivityEventArgs>;
    using VpnChannelActivityStateChangedArgs = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>;
    using VpnChannelConfiguration = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnChannelConfiguration>;
    using VpnCredential = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCredential>;
    using VpnCustomCheckBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomCheckBox>;
    using VpnCustomComboBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomComboBox>;
    using VpnCustomEditBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomEditBox>;
    using VpnCustomErrorBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomErrorBox>;
    using VpnCustomPromptBooleanInput = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomPromptBooleanInput>;
    using VpnCustomPromptOptionSelector = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomPromptOptionSelector>;
    using VpnCustomPromptText = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomPromptText>;
    using VpnCustomPromptTextInput = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomPromptTextInput>;
    using VpnCustomTextBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomTextBox>;
    using VpnDomainNameAssignment = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnDomainNameAssignment>;
    using VpnDomainNameInfo = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnDomainNameInfo>;
    using VpnForegroundActivatedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnForegroundActivatedEventArgs>;
    using VpnForegroundActivationOperation = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnForegroundActivationOperation>;
    using VpnInterfaceId = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnInterfaceId>;
    using VpnManagementAgent = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnManagementAgent>;
    using VpnNamespaceAssignment = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnNamespaceAssignment>;
    using VpnNamespaceInfo = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnNamespaceInfo>;
    using VpnNativeProfile = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnNativeProfile>;
    using VpnPacketBuffer = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnPacketBuffer>;
    using VpnPacketBufferList = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnPacketBufferList>;
    using VpnPickedCredential = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnPickedCredential>;
    using VpnPlugInProfile = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnPlugInProfile>;
    using VpnRoute = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnRoute>;
    using VpnRouteAssignment = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnRouteAssignment>;
    using VpnSystemHealth = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnSystemHealth>;
    using VpnTrafficFilter = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnTrafficFilter>;
    using VpnTrafficFilterAssignment = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnTrafficFilterAssignment>;
    using IVpnChannelStatics = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnChannelStatics>;
    using IVpnCredential = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnCredential>;
    using IVpnCustomPrompt = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnCustomPrompt>;
    using IVpnCustomPromptElement = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnCustomPromptElement>;
    using IVpnDomainNameInfoFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnDomainNameInfoFactory>;
    using IVpnInterfaceIdFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnInterfaceIdFactory>;
    using IVpnNamespaceInfoFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnNamespaceInfoFactory>;
    using IVpnPacketBufferFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnPacketBufferFactory>;
    using IVpnPlugIn = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnPlugIn>;
    using IVpnProfile = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnProfile>;
    using IVpnRouteFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnRouteFactory>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnAppIdType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnAuthenticationMethod> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnChannelActivityEventType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnChannelRequestCredentialsOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnCredentialType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnDataPathType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnDomainNameType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnIPProtocol> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnManagementConnectionStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnNativeProtocolType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnPacketBufferStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Vpn::VpnRoutingPolicyType> = "i";


    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnAppIdType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnAuthenticationMethod>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnChannelActivityEventType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnChannelRequestCredentialsOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnCredentialType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnDataPathType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnDomainNameType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnIPProtocol>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnManagementConnectionStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnNativeProtocolType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnPacketBufferStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Vpn::VpnRoutingPolicyType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnAppId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnChannel>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnChannelActivityEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnChannelConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCredential>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomCheckBox>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomComboBox>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomEditBox>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomErrorBox>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomPromptBooleanInput>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomPromptOptionSelector>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomPromptText>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomPromptTextInput>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomTextBox>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnDomainNameAssignment>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnDomainNameInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnForegroundActivatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnForegroundActivationOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnInterfaceId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnManagementAgent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnNamespaceAssignment>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnNamespaceInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnNativeProfile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnPacketBuffer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnPacketBufferList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnPickedCredential>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnPlugInProfile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnRoute>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnRouteAssignment>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnSystemHealth>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnTrafficFilter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnTrafficFilterAssignment>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnChannelStatics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnCredential>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnDomainNameInfoFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnInterfaceIdFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnNamespaceInfoFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnPacketBufferFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnPlugIn>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnProfile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnRouteFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
