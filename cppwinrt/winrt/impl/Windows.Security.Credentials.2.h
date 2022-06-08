// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220607.4

#pragma once
#ifndef WINRT_Windows_Security_Credentials_2_H
#define WINRT_Windows_Security_Credentials_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct __declspec(empty_bases) KeyCredential : winrt::Windows::Security::Credentials::IKeyCredential
    {
        KeyCredential(std::nullptr_t) noexcept {}
        KeyCredential(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Credentials::IKeyCredential(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeyCredentialAttestationResult : winrt::Windows::Security::Credentials::IKeyCredentialAttestationResult
    {
        KeyCredentialAttestationResult(std::nullptr_t) noexcept {}
        KeyCredentialAttestationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Credentials::IKeyCredentialAttestationResult(ptr, take_ownership_from_abi) {}
    };
    struct KeyCredentialManager
    {
        KeyCredentialManager() = delete;
        static auto IsSupportedAsync();
        static auto RenewAttestationAsync();
        static auto RequestCreateAsync(param::hstring const& name, winrt::Windows::Security::Credentials::KeyCredentialCreationOption const& option);
        static auto OpenAsync(param::hstring const& name);
        static auto DeleteAsync(param::hstring const& name);
    };
    struct __declspec(empty_bases) KeyCredentialOperationResult : winrt::Windows::Security::Credentials::IKeyCredentialOperationResult
    {
        KeyCredentialOperationResult(std::nullptr_t) noexcept {}
        KeyCredentialOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Credentials::IKeyCredentialOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeyCredentialRetrievalResult : winrt::Windows::Security::Credentials::IKeyCredentialRetrievalResult
    {
        KeyCredentialRetrievalResult(std::nullptr_t) noexcept {}
        KeyCredentialRetrievalResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Credentials::IKeyCredentialRetrievalResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PasswordCredential : winrt::Windows::Security::Credentials::IPasswordCredential
    {
        PasswordCredential(std::nullptr_t) noexcept {}
        PasswordCredential(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Credentials::IPasswordCredential(ptr, take_ownership_from_abi) {}
        PasswordCredential();
        PasswordCredential(param::hstring const& resource, param::hstring const& userName, param::hstring const& password);
    };
    struct __declspec(empty_bases) PasswordCredentialPropertyStore : winrt::Windows::Foundation::Collections::IPropertySet
    {
        PasswordCredentialPropertyStore(std::nullptr_t) noexcept {}
        PasswordCredentialPropertyStore(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IPropertySet(ptr, take_ownership_from_abi) {}
        PasswordCredentialPropertyStore();
    };
    struct __declspec(empty_bases) PasswordVault : winrt::Windows::Security::Credentials::IPasswordVault
    {
        PasswordVault(std::nullptr_t) noexcept {}
        PasswordVault(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Credentials::IPasswordVault(ptr, take_ownership_from_abi) {}
        PasswordVault();
    };
    struct __declspec(empty_bases) WebAccount : winrt::Windows::Security::Credentials::IWebAccount,
        impl::require<WebAccount, winrt::Windows::Security::Credentials::IWebAccount2>
    {
        WebAccount(std::nullptr_t) noexcept {}
        WebAccount(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Credentials::IWebAccount(ptr, take_ownership_from_abi) {}
        WebAccount(winrt::Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, param::hstring const& userName, winrt::Windows::Security::Credentials::WebAccountState const& state);
    };
    struct __declspec(empty_bases) WebAccountProvider : winrt::Windows::Security::Credentials::IWebAccountProvider,
        impl::require<WebAccountProvider, winrt::Windows::Security::Credentials::IWebAccountProvider2, winrt::Windows::Security::Credentials::IWebAccountProvider3, winrt::Windows::Security::Credentials::IWebAccountProvider4>
    {
        WebAccountProvider(std::nullptr_t) noexcept {}
        WebAccountProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Credentials::IWebAccountProvider(ptr, take_ownership_from_abi) {}
        WebAccountProvider(param::hstring const& id, param::hstring const& displayName, winrt::Windows::Foundation::Uri const& iconUri);
    };
}
#endif
