// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220608.4

#pragma once
#ifndef WINRT_Windows_Phone_Devices_Notification_H
#define WINRT_Windows_Phone_Devices_Notification_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220608.4"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220608.4"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Phone.Devices.Notification.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Phone_Devices_Notification_IVibrationDevice<D>::Vibrate(winrt::Windows::Foundation::TimeSpan const& duration) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Devices::Notification::IVibrationDevice)->Vibrate(impl::bind_in(duration)));
    }
    template <typename D> auto consume_Windows_Phone_Devices_Notification_IVibrationDevice<D>::Cancel() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Devices::Notification::IVibrationDevice)->Cancel());
    }
    template <typename D> auto consume_Windows_Phone_Devices_Notification_IVibrationDeviceStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Phone::Devices::Notification::IVibrationDeviceStatics)->GetDefault(&result));
        return winrt::Windows::Phone::Devices::Notification::VibrationDevice{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Devices::Notification::IVibrationDevice> : produce_base<D, winrt::Windows::Phone::Devices::Notification::IVibrationDevice>
    {
        int32_t __stdcall Vibrate(int64_t duration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Vibrate(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&duration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Cancel() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Phone::Devices::Notification::IVibrationDeviceStatics> : produce_base<D, winrt::Windows::Phone::Devices::Notification::IVibrationDeviceStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Phone::Devices::Notification::VibrationDevice>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Notification
{
    inline auto VibrationDevice::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::Phone::Devices::Notification::VibrationDevice(*)(IVibrationDeviceStatics const&), VibrationDevice, IVibrationDeviceStatics>([](IVibrationDeviceStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Phone::Devices::Notification::IVibrationDevice> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Devices::Notification::IVibrationDeviceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Phone::Devices::Notification::VibrationDevice> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
