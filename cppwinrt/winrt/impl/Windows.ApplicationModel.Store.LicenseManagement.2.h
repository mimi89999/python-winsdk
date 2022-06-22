// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220608.4

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Store_LicenseManagement_2_H
#define WINRT_Windows_ApplicationModel_Store_LicenseManagement_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Store.LicenseManagement.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::LicenseManagement
{
    struct LicenseManager
    {
        LicenseManager() = delete;
        static auto AddLicenseAsync(winrt::Windows::Storage::Streams::IBuffer const& license);
        static auto GetSatisfactionInfosAsync(param::async_iterable<hstring> const& contentIds, param::async_iterable<hstring> const& keyIds);
        static auto RefreshLicensesAsync(winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption const& refreshOption);
    };
    struct __declspec(empty_bases) LicenseSatisfactionInfo : winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo
    {
        LicenseSatisfactionInfo(std::nullptr_t) noexcept {}
        LicenseSatisfactionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LicenseSatisfactionResult : winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult
    {
        LicenseSatisfactionResult(std::nullptr_t) noexcept {}
        LicenseSatisfactionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
