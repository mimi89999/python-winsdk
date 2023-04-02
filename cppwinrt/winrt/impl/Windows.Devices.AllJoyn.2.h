// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_Devices_AllJoyn_2_H
#define WINRT_Windows_Devices_AllJoyn_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Devices.AllJoyn.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::AllJoyn
{
    struct WINRT_IMPL_EMPTY_BASES AllJoynAboutData : winrt::Windows::Devices::AllJoyn::IAllJoynAboutData
    {
        AllJoynAboutData(std::nullptr_t) noexcept {}
        AllJoynAboutData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynAboutData(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynAboutDataView : winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataView
    {
        AllJoynAboutDataView(std::nullptr_t) noexcept {}
        AllJoynAboutDataView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataView(ptr, take_ownership_from_abi) {}
        static auto GetDataBySessionPortAsync(param::hstring const& uniqueName, winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort);
        static auto GetDataBySessionPortAsync(param::hstring const& uniqueName, winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, winrt::Windows::Globalization::Language const& language);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynAcceptSessionJoinerEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs
    {
        AllJoynAcceptSessionJoinerEventArgs(std::nullptr_t) noexcept {}
        AllJoynAcceptSessionJoinerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs(ptr, take_ownership_from_abi) {}
        AllJoynAcceptSessionJoinerEventArgs(param::hstring const& uniqueName, uint16_t sessionPort, winrt::Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynAuthenticationCompleteEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs
    {
        AllJoynAuthenticationCompleteEventArgs(std::nullptr_t) noexcept {}
        AllJoynAuthenticationCompleteEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynBusAttachment : winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment,
        impl::require<AllJoynBusAttachment, winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment2>
    {
        AllJoynBusAttachment(std::nullptr_t) noexcept {}
        AllJoynBusAttachment(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment(ptr, take_ownership_from_abi) {}
        AllJoynBusAttachment();
        explicit AllJoynBusAttachment(param::hstring const& connectionSpecification);
        static auto GetDefault();
        static auto GetWatcher(param::iterable<hstring> const& requiredInterfaces);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynBusAttachmentStateChangedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs
    {
        AllJoynBusAttachmentStateChangedEventArgs(std::nullptr_t) noexcept {}
        AllJoynBusAttachmentStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynBusObject : winrt::Windows::Devices::AllJoyn::IAllJoynBusObject
    {
        AllJoynBusObject(std::nullptr_t) noexcept {}
        AllJoynBusObject(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynBusObject(ptr, take_ownership_from_abi) {}
        AllJoynBusObject();
        explicit AllJoynBusObject(param::hstring const& objectPath);
        AllJoynBusObject(param::hstring const& objectPath, winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynBusObjectStoppedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs
    {
        AllJoynBusObjectStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynBusObjectStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynBusObjectStoppedEventArgs(int32_t status);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynCredentials : winrt::Windows::Devices::AllJoyn::IAllJoynCredentials
    {
        AllJoynCredentials(std::nullptr_t) noexcept {}
        AllJoynCredentials(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynCredentials(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynCredentialsRequestedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs
    {
        AllJoynCredentialsRequestedEventArgs(std::nullptr_t) noexcept {}
        AllJoynCredentialsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynCredentialsVerificationRequestedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs
    {
        AllJoynCredentialsVerificationRequestedEventArgs(std::nullptr_t) noexcept {}
        AllJoynCredentialsVerificationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynMessageInfo : winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfo
    {
        AllJoynMessageInfo(std::nullptr_t) noexcept {}
        AllJoynMessageInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfo(ptr, take_ownership_from_abi) {}
        explicit AllJoynMessageInfo(param::hstring const& senderUniqueName);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynProducerStoppedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs
    {
        AllJoynProducerStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynProducerStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynProducerStoppedEventArgs(int32_t status);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynServiceInfo : winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfo
    {
        AllJoynServiceInfo(std::nullptr_t) noexcept {}
        AllJoynServiceInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfo(ptr, take_ownership_from_abi) {}
        AllJoynServiceInfo(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynServiceInfoRemovedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs
    {
        AllJoynServiceInfoRemovedEventArgs(std::nullptr_t) noexcept {}
        AllJoynServiceInfoRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynServiceInfoRemovedEventArgs(param::hstring const& uniqueName);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynSession : winrt::Windows::Devices::AllJoyn::IAllJoynSession
    {
        AllJoynSession(std::nullptr_t) noexcept {}
        AllJoynSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynSession(ptr, take_ownership_from_abi) {}
        static auto GetFromServiceInfoAsync(winrt::Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo);
        static auto GetFromServiceInfoAsync(winrt::Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynSessionJoinedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs
    {
        AllJoynSessionJoinedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionJoinedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynSessionJoinedEventArgs(winrt::Windows::Devices::AllJoyn::AllJoynSession const& session);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynSessionLostEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs
    {
        AllJoynSessionLostEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionLostEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynSessionLostEventArgs(winrt::Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynSessionMemberAddedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs
    {
        AllJoynSessionMemberAddedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionMemberAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynSessionMemberAddedEventArgs(param::hstring const& uniqueName);
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynSessionMemberRemovedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs
    {
        AllJoynSessionMemberRemovedEventArgs(std::nullptr_t) noexcept {}
        AllJoynSessionMemberRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynSessionMemberRemovedEventArgs(param::hstring const& uniqueName);
    };
    struct AllJoynStatus
    {
        AllJoynStatus() = delete;
        [[nodiscard]] static auto Ok();
        [[nodiscard]] static auto Fail();
        [[nodiscard]] static auto OperationTimedOut();
        [[nodiscard]] static auto OtherEndClosed();
        [[nodiscard]] static auto ConnectionRefused();
        [[nodiscard]] static auto AuthenticationFailed();
        [[nodiscard]] static auto AuthenticationRejectedByUser();
        [[nodiscard]] static auto SslConnectFailed();
        [[nodiscard]] static auto SslIdentityVerificationFailed();
        [[nodiscard]] static auto InsufficientSecurity();
        [[nodiscard]] static auto InvalidArgument1();
        [[nodiscard]] static auto InvalidArgument2();
        [[nodiscard]] static auto InvalidArgument3();
        [[nodiscard]] static auto InvalidArgument4();
        [[nodiscard]] static auto InvalidArgument5();
        [[nodiscard]] static auto InvalidArgument6();
        [[nodiscard]] static auto InvalidArgument7();
        [[nodiscard]] static auto InvalidArgument8();
    };
    struct WINRT_IMPL_EMPTY_BASES AllJoynWatcherStoppedEventArgs : winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs
    {
        AllJoynWatcherStoppedEventArgs(std::nullptr_t) noexcept {}
        AllJoynWatcherStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs(ptr, take_ownership_from_abi) {}
        explicit AllJoynWatcherStoppedEventArgs(int32_t status);
    };
}
#endif
