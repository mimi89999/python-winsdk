// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_Devices_Adc_1_H
#define WINRT_Windows_Devices_Adc_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Adc.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Adc
{
    struct WINRT_IMPL_EMPTY_BASES IAdcChannel :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAdcChannel>,
        impl::require<winrt::Windows::Devices::Adc::IAdcChannel, winrt::Windows::Foundation::IClosable>
    {
        IAdcChannel(std::nullptr_t = nullptr) noexcept {}
        IAdcChannel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAdcController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAdcController>
    {
        IAdcController(std::nullptr_t = nullptr) noexcept {}
        IAdcController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAdcControllerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAdcControllerStatics>
    {
        IAdcControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IAdcControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAdcControllerStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAdcControllerStatics2>
    {
        IAdcControllerStatics2(std::nullptr_t = nullptr) noexcept {}
        IAdcControllerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
