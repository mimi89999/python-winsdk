// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_System_Power_Diagnostics_1_H
#define WINRT_Windows_System_Power_Diagnostics_1_H
#include "winrt/impl/Windows.System.Power.Diagnostics.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics
{
    struct WINRT_IMPL_EMPTY_BASES IBackgroundEnergyDiagnosticsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundEnergyDiagnosticsStatics>
    {
        IBackgroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundEnergyDiagnosticsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IForegroundEnergyDiagnosticsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IForegroundEnergyDiagnosticsStatics>
    {
        IForegroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
        IForegroundEnergyDiagnosticsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
