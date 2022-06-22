// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220608.4

#pragma once
#ifndef WINRT_Windows_Phone_PersonalInformation_Provisioning_0_H
#define WINRT_Windows_Phone_PersonalInformation_Provisioning_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation
{
    struct ContactStore;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
}
WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation::Provisioning
{
    struct IContactPartnerProvisioningManagerStatics;
    struct IContactPartnerProvisioningManagerStatics2;
    struct IMessagePartnerProvisioningManagerStatics;
    struct ContactPartnerProvisioningManager;
    struct MessagePartnerProvisioningManager;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager> = L"Windows.Phone.PersonalInformation.Provisioning.ContactPartnerProvisioningManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager> = L"Windows.Phone.PersonalInformation.Provisioning.MessagePartnerProvisioningManager";
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics> = L"Windows.Phone.PersonalInformation.Provisioning.IContactPartnerProvisioningManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2> = L"Windows.Phone.PersonalInformation.Provisioning.IContactPartnerProvisioningManagerStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics> = L"Windows.Phone.PersonalInformation.Provisioning.IMessagePartnerProvisioningManagerStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>{ 0xC0D79A21,0x01AF,0x4FD3,{ 0x98,0xCD,0xB3,0xD6,0x56,0xDE,0x15,0xF4 } }; // C0D79A21-01AF-4FD3-98CD-B3D656DE15F4
    template <> inline constexpr guid guid_v<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>{ 0xC26155F7,0x55ED,0x475D,{ 0x93,0x34,0xC5,0xD4,0x84,0xC3,0x0F,0x1A } }; // C26155F7-55ED-475D-9334-C5D484C30F1A
    template <> inline constexpr guid guid_v<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>{ 0x8A1B0850,0x73C5,0x457C,{ 0xBC,0x59,0xED,0x7D,0x61,0x5C,0x05,0xA4 } }; // 8A1B0850-73C5-457C-BC59-ED7D615C05A4
    template <> struct abi<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AssociateNetworkAccountAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ImportVcardToSystemAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AssociateSocialNetworkAccountAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ImportSmsToSystemAsync(bool, bool, void*, void*, void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportMmsToSystemAsync(bool, bool, void*, void*, void*, int64_t, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics
    {
        auto AssociateNetworkAccountAsync(winrt::Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId) const;
        auto ImportVcardToSystemAsync(winrt::Windows::Storage::Streams::IInputStream const& stream) const;
    };
    template <> struct consume<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics>
    {
        template <typename D> using type = consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics2
    {
        auto AssociateSocialNetworkAccountAsync(winrt::Windows::Phone::PersonalInformation::ContactStore const& store, param::hstring const& networkName, param::hstring const& networkAccountId) const;
    };
    template <> struct consume<winrt::Windows::Phone::PersonalInformation::Provisioning::IContactPartnerProvisioningManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Phone_PersonalInformation_Provisioning_IContactPartnerProvisioningManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Phone_PersonalInformation_Provisioning_IMessagePartnerProvisioningManagerStatics
    {
        auto ImportSmsToSystemAsync(bool incoming, bool read, param::hstring const& body, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, winrt::Windows::Foundation::DateTime const& deliveryTime) const;
        auto ImportMmsToSystemAsync(bool incoming, bool read, param::hstring const& subject, param::hstring const& sender, param::async_vector_view<hstring> const& recipients, winrt::Windows::Foundation::DateTime const& deliveryTime, param::async_vector_view<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Foundation::IInspectable>> const& attachments) const;
    };
    template <> struct consume<winrt::Windows::Phone::PersonalInformation::Provisioning::IMessagePartnerProvisioningManagerStatics>
    {
        template <typename D> using type = consume_Windows_Phone_PersonalInformation_Provisioning_IMessagePartnerProvisioningManagerStatics<D>;
    };
}
#endif
