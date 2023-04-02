// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_Networking_ServiceDiscovery_Dnssd_0_H
#define WINRT_Windows_Networking_ServiceDiscovery_Dnssd_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct WINRT_IMPL_EMPTY_BASES TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct WINRT_IMPL_EMPTY_BASES IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct HostName;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    struct NetworkAdapter;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    struct DatagramSocket;
    struct StreamSocketListener;
}
WINRT_EXPORT namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd
{
    enum class DnssdRegistrationStatus : int32_t
    {
        Success = 0,
        InvalidServiceName = 1,
        ServerError = 2,
        SecurityError = 3,
    };
    enum class DnssdServiceWatcherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        EnumerationCompleted = 2,
        Stopping = 3,
        Stopped = 4,
        Aborted = 5,
    };
    struct IDnssdRegistrationResult;
    struct IDnssdServiceInstance;
    struct IDnssdServiceInstanceFactory;
    struct IDnssdServiceWatcher;
    struct DnssdRegistrationResult;
    struct DnssdServiceInstance;
    struct DnssdServiceInstanceCollection;
    struct DnssdServiceWatcher;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>{ using type = class_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult> = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstance";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection> = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceInstanceCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher> = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcher";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationStatus> = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdRegistrationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcherStatus> = L"Windows.Networking.ServiceDiscovery.Dnssd.DnssdServiceWatcherStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult> = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdRegistrationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance> = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstance";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory> = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceInstanceFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher> = L"Windows.Networking.ServiceDiscovery.Dnssd.IDnssdServiceWatcher";
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>{ 0x3D786AD2,0xE606,0x5350,{ 0x73,0xEA,0x7E,0x97,0xF0,0x66,0x16,0x2F } }; // 3D786AD2-E606-5350-73EA-7E97F066162F
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>{ 0xE246DB7E,0x98A5,0x4CA1,{ 0xB9,0xE4,0xC2,0x53,0xD3,0x3C,0x35,0xFF } }; // E246DB7E-98A5-4CA1-B9E4-C253D33C35FF
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>{ 0x6CB061A1,0xC478,0x4331,{ 0x96,0x84,0x4A,0xF2,0x18,0x6C,0x0A,0x2B } }; // 6CB061A1-C478-4331-9684-4AF2186C0A2B
    template <> inline constexpr guid guid_v<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>{ 0xCC34D9C1,0xDB7D,0x4B69,{ 0x98,0x3D,0xC6,0xF8,0x3F,0x20,0x56,0x82 } }; // CC34D9C1-DB7D-4B69-983D-C6F83F205682
    template <> struct default_interface<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>{ using type = winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult; };
    template <> struct default_interface<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>{ using type = winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance; };
    template <> struct default_interface<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>{ using type = winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>; };
    template <> struct default_interface<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>{ using type = winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher; };
    template <> struct abi<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IPAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasInstanceNameChanged(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_DnssdServiceInstanceName(void**) noexcept = 0;
            virtual int32_t __stdcall put_DnssdServiceInstanceName(void*) noexcept = 0;
            virtual int32_t __stdcall get_HostName(void**) noexcept = 0;
            virtual int32_t __stdcall put_HostName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Port(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_Port(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_Priority(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_Priority(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_Weight(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall put_Weight(uint16_t) noexcept = 0;
            virtual int32_t __stdcall get_TextAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall RegisterStreamSocketListenerAsync1(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterStreamSocketListenerAsync2(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterDatagramSocketAsync1(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RegisterDatagramSocketAsync2(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void*, uint16_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall add_Added(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Added(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_EnumerationCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnumerationCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Stopped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Stopped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto IPAddress() const;
        [[nodiscard]] auto HasInstanceNameChanged() const;
    };
    template <> struct consume<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdRegistrationResult>
    {
        template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdRegistrationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance
    {
        [[nodiscard]] auto DnssdServiceInstanceName() const;
        auto DnssdServiceInstanceName(param::hstring const& value) const;
        [[nodiscard]] auto HostName() const;
        auto HostName(winrt::Windows::Networking::HostName const& value) const;
        [[nodiscard]] auto Port() const;
        auto Port(uint16_t value) const;
        [[nodiscard]] auto Priority() const;
        auto Priority(uint16_t value) const;
        [[nodiscard]] auto Weight() const;
        auto Weight(uint16_t value) const;
        [[nodiscard]] auto TextAttributes() const;
        auto RegisterStreamSocketListenerAsync(winrt::Windows::Networking::Sockets::StreamSocketListener const& socket) const;
        auto RegisterStreamSocketListenerAsync(winrt::Windows::Networking::Sockets::StreamSocketListener const& socket, winrt::Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
        auto RegisterDatagramSocketAsync(winrt::Windows::Networking::Sockets::DatagramSocket const& socket) const;
        auto RegisterDatagramSocketAsync(winrt::Windows::Networking::Sockets::DatagramSocket const& socket, winrt::Windows::Networking::Connectivity::NetworkAdapter const& adapter) const;
    };
    template <> struct consume<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstance>
    {
        template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstance<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory
    {
        auto Create(param::hstring const& dnssdServiceInstanceName, winrt::Windows::Networking::HostName const& hostName, uint16_t port) const;
    };
    template <> struct consume<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceInstanceFactory>
    {
        template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceInstanceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher
    {
        auto Added(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const;
        using Added_revoker = impl::event_revoker<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher, &impl::abi_t<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_Added>;
        [[nodiscard]] auto Added(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> const& handler) const;
        auto Added(winrt::event_token const& token) const noexcept;
        auto EnumerationCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using EnumerationCompleted_revoker = impl::event_revoker<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher, &impl::abi_t<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_EnumerationCompleted>;
        [[nodiscard]] auto EnumerationCompleted(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto EnumerationCompleted(winrt::event_token const& token) const noexcept;
        auto Stopped(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Stopped_revoker = impl::event_revoker<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher, &impl::abi_t<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>::remove_Stopped>;
        [[nodiscard]] auto Stopped(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Stopped(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Status() const;
        auto Start() const;
        auto Stop() const;
    };
    template <> struct consume<winrt::Windows::Networking::ServiceDiscovery::Dnssd::IDnssdServiceWatcher>
    {
        template <typename D> using type = consume_Windows_Networking_ServiceDiscovery_Dnssd_IDnssdServiceWatcher<D>;
    };
}
#endif
