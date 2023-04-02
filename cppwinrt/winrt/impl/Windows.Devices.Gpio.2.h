// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_Devices_Gpio_2_H
#define WINRT_Windows_Devices_Gpio_2_H
#include "winrt/impl/Windows.Devices.Gpio.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Gpio.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Gpio
{
    struct GpioChangeCount
    {
        uint64_t Count;
        winrt::Windows::Foundation::TimeSpan RelativeTime;
    };
    inline bool operator==(GpioChangeCount const& left, GpioChangeCount const& right) noexcept
    {
        return left.Count == right.Count && left.RelativeTime == right.RelativeTime;
    }
    inline bool operator!=(GpioChangeCount const& left, GpioChangeCount const& right) noexcept
    {
        return !(left == right);
    }
    struct GpioChangeRecord
    {
        winrt::Windows::Foundation::TimeSpan RelativeTime;
        winrt::Windows::Devices::Gpio::GpioPinEdge Edge;
    };
    inline bool operator==(GpioChangeRecord const& left, GpioChangeRecord const& right) noexcept
    {
        return left.RelativeTime == right.RelativeTime && left.Edge == right.Edge;
    }
    inline bool operator!=(GpioChangeRecord const& left, GpioChangeRecord const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_IMPL_EMPTY_BASES GpioChangeCounter : winrt::Windows::Devices::Gpio::IGpioChangeCounter
    {
        GpioChangeCounter(std::nullptr_t) noexcept {}
        GpioChangeCounter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Gpio::IGpioChangeCounter(ptr, take_ownership_from_abi) {}
        explicit GpioChangeCounter(winrt::Windows::Devices::Gpio::GpioPin const& pin);
    };
    struct WINRT_IMPL_EMPTY_BASES GpioChangeReader : winrt::Windows::Devices::Gpio::IGpioChangeReader
    {
        GpioChangeReader(std::nullptr_t) noexcept {}
        GpioChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Gpio::IGpioChangeReader(ptr, take_ownership_from_abi) {}
        explicit GpioChangeReader(winrt::Windows::Devices::Gpio::GpioPin const& pin);
        GpioChangeReader(winrt::Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity);
    };
    struct WINRT_IMPL_EMPTY_BASES GpioController : winrt::Windows::Devices::Gpio::IGpioController
    {
        GpioController(std::nullptr_t) noexcept {}
        GpioController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Gpio::IGpioController(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetControllersAsync(winrt::Windows::Devices::Gpio::Provider::IGpioProvider const& provider);
        static auto GetDefaultAsync();
    };
    struct WINRT_IMPL_EMPTY_BASES GpioPin : winrt::Windows::Devices::Gpio::IGpioPin
    {
        GpioPin(std::nullptr_t) noexcept {}
        GpioPin(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Gpio::IGpioPin(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES GpioPinValueChangedEventArgs : winrt::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs
    {
        GpioPinValueChangedEventArgs(std::nullptr_t) noexcept {}
        GpioPinValueChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
