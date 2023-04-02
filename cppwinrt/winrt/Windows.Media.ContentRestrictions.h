// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_Media_ContentRestrictions_H
#define WINRT_Windows_Media_ContentRestrictions_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230225.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230225.1"
#include "winrt/Windows.Media.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.ContentRestrictions.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy<D>::GeographicRegion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy)->get_GeographicRegion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy<D>::MaxBrowsableAgeRating() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy)->get_MaxBrowsableAgeRating(&value));
        return winrt::Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy<D>::PreferredAgeRating() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy)->get_PreferredAgeRating(&value));
        return winrt::Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Id(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Id(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Title(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Image() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Image(&value));
        return winrt::Windows::Storage::Streams::IRandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Image(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Image(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Category() const
    {
        winrt::Windows::Media::ContentRestrictions::RatedContentCategory value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Category(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Category(winrt::Windows::Media::ContentRestrictions::RatedContentCategory const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Category(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Ratings() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->get_Ratings(&value));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescription<D>::Ratings(param::vector<hstring> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescription)->put_Ratings(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory<D>::Create(param::hstring const& id, param::hstring const& title, winrt::Windows::Media::ContentRestrictions::RatedContentCategory const& category) const
    {
        void* RatedContentDescription{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory)->Create(*(void**)(&id), *(void**)(&title), static_cast<int32_t>(category), &RatedContentDescription));
        return winrt::Windows::Media::ContentRestrictions::RatedContentDescription{ RatedContentDescription, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::GetBrowsePolicyAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions)->GetBrowsePolicyAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::GetRestrictionLevelAsync(winrt::Windows::Media::ContentRestrictions::RatedContentDescription const& RatedContentDescription) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions)->GetRestrictionLevelAsync(*(void**)(&RatedContentDescription), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::RequestContentAccessAsync(winrt::Windows::Media::ContentRestrictions::RatedContentDescription const& RatedContentDescription) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions)->RequestContentAccessAsync(*(void**)(&RatedContentDescription), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::RestrictionsChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions)->add_RestrictionsChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::RestrictionsChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, RestrictionsChanged_revoker>(this, RestrictionsChanged(handler));
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentRestrictions<D>::RestrictionsChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions)->remove_RestrictionsChanged(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory<D>::CreateWithMaxAgeRating(uint32_t maxAgeRating) const
    {
        void* ratedContentRestrictions{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory)->CreateWithMaxAgeRating(maxAgeRating, &ratedContentRestrictions));
        return winrt::Windows::Media::ContentRestrictions::RatedContentRestrictions{ ratedContentRestrictions, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy> : produce_base<D, winrt::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy>
    {
        int32_t __stdcall get_GeographicRegion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GeographicRegion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxBrowsableAgeRating(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint32_t>>(this->shim().MaxBrowsableAgeRating());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PreferredAgeRating(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint32_t>>(this->shim().PreferredAgeRating());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ContentRestrictions::IRatedContentDescription> : produce_base<D, winrt::Windows::Media::ContentRestrictions::IRatedContentDescription>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Id(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Image(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Image());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Image(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<winrt::Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Category(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Media::ContentRestrictions::RatedContentCategory>(this->shim().Category());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Category(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Category(*reinterpret_cast<winrt::Windows::Media::ContentRestrictions::RatedContentCategory const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Ratings(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().Ratings());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Ratings(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ratings(*reinterpret_cast<winrt::Windows::Foundation::Collections::IVector<hstring> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory> : produce_base<D, winrt::Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory>
    {
        int32_t __stdcall Create(void* id, void* title, int32_t category, void** RatedContentDescription) noexcept final try
        {
            clear_abi(RatedContentDescription);
            typename D::abi_guard guard(this->shim());
            *RatedContentDescription = detach_from<winrt::Windows::Media::ContentRestrictions::RatedContentDescription>(this->shim().Create(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<hstring const*>(&title), *reinterpret_cast<winrt::Windows::Media::ContentRestrictions::RatedContentCategory const*>(&category)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions> : produce_base<D, winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions>
    {
        int32_t __stdcall GetBrowsePolicyAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy>>(this->shim().GetBrowsePolicyAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetRestrictionLevelAsync(void* RatedContentDescription, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>>(this->shim().GetRestrictionLevelAsync(*reinterpret_cast<winrt::Windows::Media::ContentRestrictions::RatedContentDescription const*>(&RatedContentDescription)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestContentAccessAsync(void* RatedContentDescription, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestContentAccessAsync(*reinterpret_cast<winrt::Windows::Media::ContentRestrictions::RatedContentDescription const*>(&RatedContentDescription)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_RestrictionsChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().RestrictionsChanged(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_RestrictionsChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestrictionsChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory> : produce_base<D, winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory>
    {
        int32_t __stdcall CreateWithMaxAgeRating(uint32_t maxAgeRating, void** ratedContentRestrictions) noexcept final try
        {
            clear_abi(ratedContentRestrictions);
            typename D::abi_guard guard(this->shim());
            *ratedContentRestrictions = detach_from<winrt::Windows::Media::ContentRestrictions::RatedContentRestrictions>(this->shim().CreateWithMaxAgeRating(maxAgeRating));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions
{
    inline RatedContentDescription::RatedContentDescription(param::hstring const& id, param::hstring const& title, winrt::Windows::Media::ContentRestrictions::RatedContentCategory const& category) :
        RatedContentDescription(impl::call_factory<RatedContentDescription, IRatedContentDescriptionFactory>([&](IRatedContentDescriptionFactory const& f) { return f.Create(id, title, category); }))
    {
    }
    inline RatedContentRestrictions::RatedContentRestrictions() :
        RatedContentRestrictions(impl::call_factory_cast<RatedContentRestrictions(*)(winrt::Windows::Foundation::IActivationFactory const&), RatedContentRestrictions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RatedContentRestrictions>(); }))
    {
    }
    inline RatedContentRestrictions::RatedContentRestrictions(uint32_t maxAgeRating) :
        RatedContentRestrictions(impl::call_factory<RatedContentRestrictions, IRatedContentRestrictionsFactory>([&](IRatedContentRestrictionsFactory const& f) { return f.CreateWithMaxAgeRating(maxAgeRating); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ContentRestrictions::IRatedContentDescription> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ContentRestrictions::RatedContentDescription> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Media::ContentRestrictions::RatedContentRestrictions> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
