// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220608.4

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Resources_H
#define WINRT_Windows_UI_Xaml_Resources_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220608.4"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220608.4"
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/impl/Windows.UI.Xaml.Resources.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory<D>::CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory)->CreateInstance(*(void**)(&baseInterface), impl::bind_out(innerInterface), &value));
        return winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides<D>::GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides)->GetResource(*(void**)(&resourceId), *(void**)(&objectType), *(void**)(&propertyName), *(void**)(&propertyType), &result));
        return winrt::Windows::Foundation::IInspectable{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>::Current() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics)->get_Current(&value));
        return winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>::Current(winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics)->put_Current(*(void**)(&value)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> : produce_base<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> : produce_base<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>
    {
        int32_t __stdcall CreateInstance(void* baseInterface, void** innerInterface, void** value) noexcept final try
        {
            if (innerInterface) *innerInterface = nullptr;
            winrt::Windows::Foundation::IInspectable winrt_impl_innerInterface;
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Foundation::IInspectable const*>(&baseInterface), winrt_impl_innerInterface));
                if (innerInterface) *innerInterface = detach_abi(winrt_impl_innerInterface);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> : produce_base<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    {
        int32_t __stdcall GetResource(void* resourceId, void* objectType, void* propertyName, void* propertyType, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IInspectable>(this->shim().GetResource(*reinterpret_cast<hstring const*>(&resourceId), *reinterpret_cast<hstring const*>(&objectType), *reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<hstring const*>(&propertyType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> : produce_base<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>
    {
        int32_t __stdcall get_Current(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Current(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Current(*reinterpret_cast<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
template <typename T, typename D>
struct __declspec(empty_bases) produce_dispatch_to_overridable<T, D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    : produce_dispatch_to_overridable_base<T, D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
{
    auto GetResource(hstring const& resourceId, hstring const& objectType, hstring const& propertyName, hstring const& propertyType)
    {
        if (auto overridable = this->shim_overridable())
        {
            return overridable.GetResource(resourceId, objectType, propertyName, propertyType);
        }

        return this->shim().GetResource(resourceId, objectType, propertyName, propertyType);
    }
};
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Resources
{
    inline CustomXamlResourceLoader::CustomXamlResourceLoader()
    {
        winrt::Windows::Foundation::IInspectable baseInterface, innerInterface;
        *this = impl::call_factory<CustomXamlResourceLoader, ICustomXamlResourceLoaderFactory>([&](ICustomXamlResourceLoaderFactory const& f) { return f.CreateInstance(baseInterface, innerInterface); });
    }
    inline auto CustomXamlResourceLoader::Current()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader(*)(ICustomXamlResourceLoaderStatics const&), CustomXamlResourceLoader, ICustomXamlResourceLoaderStatics>([](ICustomXamlResourceLoaderStatics const& f) { return f.Current(); });
    }
    inline auto CustomXamlResourceLoader::Current(winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value)
    {
        impl::call_factory<CustomXamlResourceLoader, ICustomXamlResourceLoaderStatics>([&](ICustomXamlResourceLoaderStatics const& f) { return f.Current(value); });
    }
    template <typename D> auto ICustomXamlResourceLoaderOverridesT<D>::GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const
    {
        return shim().template try_as<ICustomXamlResourceLoaderOverrides>().GetResource(resourceId, objectType, propertyName, propertyType);
    }
    template <typename D, typename... Interfaces>
    struct CustomXamlResourceLoaderT :
        implements<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides, composing, Interfaces...>,
        impl::require<D, winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>,
        impl::base<D, CustomXamlResourceLoader>,
        winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverridesT<D>
    {
        using composable = CustomXamlResourceLoader;
    protected:
        CustomXamlResourceLoaderT()
        {
            impl::call_factory<CustomXamlResourceLoader, ICustomXamlResourceLoaderFactory>([&](ICustomXamlResourceLoaderFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
        }
    };
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
