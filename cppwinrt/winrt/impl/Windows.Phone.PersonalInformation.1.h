// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_Phone_PersonalInformation_1_H
#define WINRT_Windows_Phone_PersonalInformation_1_H
#include "winrt/impl/Windows.Phone.PersonalInformation.0.h"
WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation
{
    struct WINRT_IMPL_EMPTY_BASES IContactAddress :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactAddress>
    {
        IContactAddress(std::nullptr_t = nullptr) noexcept {}
        IContactAddress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactChangeRecord :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactChangeRecord>
    {
        IContactChangeRecord(std::nullptr_t = nullptr) noexcept {}
        IContactChangeRecord(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactInformation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactInformation>
    {
        IContactInformation(std::nullptr_t = nullptr) noexcept {}
        IContactInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactInformation2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactInformation2>
    {
        IContactInformation2(std::nullptr_t = nullptr) noexcept {}
        IContactInformation2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactInformationStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactInformationStatics>
    {
        IContactInformationStatics(std::nullptr_t = nullptr) noexcept {}
        IContactInformationStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactQueryOptions :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactQueryOptions>
    {
        IContactQueryOptions(std::nullptr_t = nullptr) noexcept {}
        IContactQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactQueryResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactQueryResult>
    {
        IContactQueryResult(std::nullptr_t = nullptr) noexcept {}
        IContactQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactStore :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactStore>
    {
        IContactStore(std::nullptr_t = nullptr) noexcept {}
        IContactStore(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactStore2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactStore2>
    {
        IContactStore2(std::nullptr_t = nullptr) noexcept {}
        IContactStore2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IContactStoreStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactStoreStatics>
    {
        IContactStoreStatics(std::nullptr_t = nullptr) noexcept {}
        IContactStoreStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IKnownContactPropertiesStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IKnownContactPropertiesStatics>
    {
        IKnownContactPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IKnownContactPropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IStoredContact :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStoredContact>,
        impl::require<winrt::Windows::Phone::PersonalInformation::IStoredContact, winrt::Windows::Phone::PersonalInformation::IContactInformation>
    {
        IStoredContact(std::nullptr_t = nullptr) noexcept {}
        IStoredContact(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IStoredContactFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStoredContactFactory>
    {
        IStoredContactFactory(std::nullptr_t = nullptr) noexcept {}
        IStoredContactFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
