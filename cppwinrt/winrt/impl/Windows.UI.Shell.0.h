// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220607.4

#pragma once
#ifndef WINRT_Windows_UI_Shell_0_H
#define WINRT_Windows_UI_Shell_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    struct AppListEntry;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct WindowId;
}
WINRT_EXPORT namespace winrt::Windows::UI::StartScreen
{
    struct SecondaryTile;
}
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    enum class SecurityAppKind : int32_t
    {
        WebProtection = 0,
    };
    enum class SecurityAppState : int32_t
    {
        Disabled = 0,
        Enabled = 1,
    };
    enum class SecurityAppSubstatus : int32_t
    {
        Undetermined = 0,
        NoActionNeeded = 1,
        ActionRecommended = 2,
        ActionNeeded = 3,
    };
    enum class ShareWindowCommand : int32_t
    {
        None = 0,
        StartSharing = 1,
        StopSharing = 2,
    };
    struct IAdaptiveCard;
    struct IAdaptiveCardBuilderStatics;
    struct ISecurityAppManager;
    struct IShareWindowCommandEventArgs;
    struct IShareWindowCommandSource;
    struct IShareWindowCommandSourceStatics;
    struct ITaskbarManager;
    struct ITaskbarManager2;
    struct ITaskbarManagerStatics;
    struct AdaptiveCardBuilder;
    struct SecurityAppManager;
    struct ShareWindowCommandEventArgs;
    struct ShareWindowCommandSource;
    struct TaskbarManager;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Shell::IAdaptiveCard>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ISecurityAppManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IShareWindowCommandSource>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ITaskbarManager>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ITaskbarManager2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::ITaskbarManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Shell::AdaptiveCardBuilder>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::SecurityAppManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::ShareWindowCommandSource>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::TaskbarManager>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Shell::SecurityAppKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Shell::SecurityAppState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Shell::SecurityAppSubstatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Shell::ShareWindowCommand>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::AdaptiveCardBuilder> = L"Windows.UI.Shell.AdaptiveCardBuilder";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::SecurityAppManager> = L"Windows.UI.Shell.SecurityAppManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> = L"Windows.UI.Shell.ShareWindowCommandEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ShareWindowCommandSource> = L"Windows.UI.Shell.ShareWindowCommandSource";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::TaskbarManager> = L"Windows.UI.Shell.TaskbarManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::SecurityAppKind> = L"Windows.UI.Shell.SecurityAppKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::SecurityAppState> = L"Windows.UI.Shell.SecurityAppState";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::SecurityAppSubstatus> = L"Windows.UI.Shell.SecurityAppSubstatus";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ShareWindowCommand> = L"Windows.UI.Shell.ShareWindowCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IAdaptiveCard> = L"Windows.UI.Shell.IAdaptiveCard";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> = L"Windows.UI.Shell.IAdaptiveCardBuilderStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ISecurityAppManager> = L"Windows.UI.Shell.ISecurityAppManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs> = L"Windows.UI.Shell.IShareWindowCommandEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IShareWindowCommandSource> = L"Windows.UI.Shell.IShareWindowCommandSource";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics> = L"Windows.UI.Shell.IShareWindowCommandSourceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ITaskbarManager> = L"Windows.UI.Shell.ITaskbarManager";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ITaskbarManager2> = L"Windows.UI.Shell.ITaskbarManager2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Shell::ITaskbarManagerStatics> = L"Windows.UI.Shell.ITaskbarManagerStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IAdaptiveCard>{ 0x72D0568C,0xA274,0x41CD,{ 0x82,0xA8,0x98,0x9D,0x40,0xB9,0xB0,0x5E } }; // 72D0568C-A274-41CD-82A8-989D40B9B05E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>{ 0x766D8F08,0xD3FE,0x4347,{ 0xA0,0xBC,0xB9,0xEA,0x9A,0x6D,0xC2,0x8E } }; // 766D8F08-D3FE-4347-A0BC-B9EA9A6DC28E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ISecurityAppManager>{ 0x96AC500C,0xAED4,0x561D,{ 0xBD,0xE8,0x95,0x35,0x20,0x34,0x3A,0x2D } }; // 96AC500C-AED4-561D-BDE8-953520343A2D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>{ 0x4578DC09,0xA523,0x5756,{ 0xA9,0x95,0xE4,0xFE,0xB9,0x91,0xFF,0xF0 } }; // 4578DC09-A523-5756-A995-E4FEB991FFF0
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IShareWindowCommandSource>{ 0xCB3B7AE3,0x6B9C,0x561E,{ 0xBC,0xCC,0x61,0xE6,0x8E,0x0A,0xBF,0xEF } }; // CB3B7AE3-6B9C-561E-BCCC-61E68E0ABFEF
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>{ 0xB0EB6656,0x9CAC,0x517C,{ 0xB6,0xC7,0x8E,0xF7,0x15,0x08,0x42,0x95 } }; // B0EB6656-9CAC-517C-B6C7-8EF715084295
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ITaskbarManager>{ 0x87490A19,0x1AD9,0x49F4,{ 0xB2,0xE8,0x86,0x73,0x8D,0xC5,0xAC,0x40 } }; // 87490A19-1AD9-49F4-B2E8-86738DC5AC40
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ITaskbarManager2>{ 0x79F0A06E,0x7B02,0x4911,{ 0x91,0x8C,0xDE,0xE0,0xBB,0xD2,0x0B,0xA4 } }; // 79F0A06E-7B02-4911-918C-DEE0BBD20BA4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Shell::ITaskbarManagerStatics>{ 0xDB32AB74,0xDE52,0x4FE6,{ 0xB7,0xB6,0x95,0xFF,0x9F,0x83,0x95,0xDF } }; // DB32AB74-DE52-4FE6-B7B6-95FF9F8395DF
    template <> struct default_interface<winrt::Windows::UI::Shell::SecurityAppManager>{ using type = winrt::Windows::UI::Shell::ISecurityAppManager; };
    template <> struct default_interface<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs>{ using type = winrt::Windows::UI::Shell::IShareWindowCommandEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::Shell::ShareWindowCommandSource>{ using type = winrt::Windows::UI::Shell::IShareWindowCommandSource; };
    template <> struct default_interface<winrt::Windows::UI::Shell::TaskbarManager>{ using type = winrt::Windows::UI::Shell::ITaskbarManager; };
    template <> struct abi<winrt::Windows::UI::Shell::IAdaptiveCard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ToJson(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAdaptiveCardFromJson(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ISecurityAppManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(int32_t, void*, void*, bool, winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall Unregister(int32_t, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall UpdateState(int32_t, winrt::guid, int32_t, int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WindowId(struct struct_Windows_UI_WindowId*) noexcept = 0;
            virtual int32_t __stdcall get_Command(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Command(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IShareWindowCommandSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall ReportCommandChanged() noexcept = 0;
            virtual int32_t __stdcall add_CommandRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommandRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CommandInvoked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CommandInvoked(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ITaskbarManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPinningAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsCurrentAppPinnedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsAppListEntryPinnedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinCurrentAppAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinAppListEntryAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ITaskbarManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSecondaryTilePinnedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinSecondaryTileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryUnpinSecondaryTileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Shell::ITaskbarManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IAdaptiveCard
    {
        auto ToJson() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IAdaptiveCard>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCard<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics
    {
        auto CreateAdaptiveCardFromJson(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ISecurityAppManager
    {
        auto Register(winrt::Windows::UI::Shell::SecurityAppKind const& kind, param::hstring const& displayName, winrt::Windows::Foundation::Uri const& detailsUri, bool registerPerUser) const;
        auto Unregister(winrt::Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration) const;
        auto UpdateState(winrt::Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration, winrt::Windows::UI::Shell::SecurityAppState const& state, winrt::Windows::UI::Shell::SecurityAppSubstatus const& substatus, winrt::Windows::Foundation::Uri const& detailsUri) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::ISecurityAppManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ISecurityAppManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IShareWindowCommandEventArgs
    {
        [[nodiscard]] auto WindowId() const;
        [[nodiscard]] auto Command() const;
        auto Command(winrt::Windows::UI::Shell::ShareWindowCommand const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IShareWindowCommandEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IShareWindowCommandSource
    {
        auto Start() const;
        auto Stop() const;
        auto ReportCommandChanged() const;
        auto CommandRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const;
        using CommandRequested_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IShareWindowCommandSource, &impl::abi_t<winrt::Windows::UI::Shell::IShareWindowCommandSource>::remove_CommandRequested>;
        [[nodiscard]] auto CommandRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const;
        auto CommandRequested(winrt::event_token const& token) const noexcept;
        auto CommandInvoked(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const;
        using CommandInvoked_revoker = impl::event_revoker<winrt::Windows::UI::Shell::IShareWindowCommandSource, &impl::abi_t<winrt::Windows::UI::Shell::IShareWindowCommandSource>::remove_CommandInvoked>;
        [[nodiscard]] auto CommandInvoked(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const;
        auto CommandInvoked(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IShareWindowCommandSource>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IShareWindowCommandSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IShareWindowCommandSourceStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IShareWindowCommandSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManager
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto IsPinningAllowed() const;
        auto IsCurrentAppPinnedAsync() const;
        auto IsAppListEntryPinnedAsync(winrt::Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
        auto RequestPinCurrentAppAsync() const;
        auto RequestPinAppListEntryAsync(winrt::Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::ITaskbarManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManager2
    {
        auto IsSecondaryTilePinnedAsync(param::hstring const& tileId) const;
        auto RequestPinSecondaryTileAsync(winrt::Windows::UI::StartScreen::SecondaryTile const& secondaryTile) const;
        auto TryUnpinSecondaryTileAsync(param::hstring const& tileId) const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::ITaskbarManager2>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManagerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<winrt::Windows::UI::Shell::ITaskbarManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManagerStatics<D>;
    };
}
#endif
