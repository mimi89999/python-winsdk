// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_UI_Input_Preview_Injection_1_H
#define WINRT_Windows_UI_Input_Preview_Injection_1_H
#include "winrt/impl/Windows.UI.Input.Preview.Injection.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection
{
    struct WINRT_IMPL_EMPTY_BASES IInjectedInputGamepadInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputGamepadInfo>
    {
        IInjectedInputGamepadInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputGamepadInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInjectedInputGamepadInfoFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputGamepadInfoFactory>
    {
        IInjectedInputGamepadInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputGamepadInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInjectedInputKeyboardInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputKeyboardInfo>
    {
        IInjectedInputKeyboardInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputKeyboardInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInjectedInputMouseInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputMouseInfo>
    {
        IInjectedInputMouseInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputMouseInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInjectedInputPenInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputPenInfo>
    {
        IInjectedInputPenInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputPenInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInjectedInputTouchInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputTouchInfo>
    {
        IInjectedInputTouchInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputTouchInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInputInjector :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjector>
    {
        IInputInjector(std::nullptr_t = nullptr) noexcept {}
        IInputInjector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInputInjector2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjector2>,
        impl::require<winrt::Windows::UI::Input::Preview::Injection::IInputInjector2, winrt::Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        IInputInjector2(std::nullptr_t = nullptr) noexcept {}
        IInputInjector2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInputInjectorStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjectorStatics>
    {
        IInputInjectorStatics(std::nullptr_t = nullptr) noexcept {}
        IInputInjectorStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IInputInjectorStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjectorStatics2>,
        impl::require<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics2, winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        IInputInjectorStatics2(std::nullptr_t = nullptr) noexcept {}
        IInputInjectorStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
