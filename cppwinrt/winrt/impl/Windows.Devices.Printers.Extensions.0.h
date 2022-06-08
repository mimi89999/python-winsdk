// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220607.4

#pragma once
#ifndef WINRT_Windows_Devices_Printers_Extensions_0_H
#define WINRT_Windows_Devices_Printers_Extensions_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Printers::Extensions
{
    enum class Print3DWorkflowDetail : int32_t
    {
        Unknown = 0,
        ModelExceedsPrintBed = 1,
        UploadFailed = 2,
        InvalidMaterialSelection = 3,
        InvalidModel = 4,
        ModelNotManifold = 5,
        InvalidPrintTicket = 6,
    };
    enum class Print3DWorkflowStatus : int32_t
    {
        Abandoned = 0,
        Canceled = 1,
        Failed = 2,
        Slicing = 3,
        Submitted = 4,
    };
    struct IPrint3DWorkflow;
    struct IPrint3DWorkflow2;
    struct IPrint3DWorkflowPrintRequestedEventArgs;
    struct IPrint3DWorkflowPrinterChangedEventArgs;
    struct IPrintExtensionContextStatic;
    struct IPrintNotificationEventDetails;
    struct IPrintTaskConfiguration;
    struct IPrintTaskConfigurationSaveRequest;
    struct IPrintTaskConfigurationSaveRequestedDeferral;
    struct IPrintTaskConfigurationSaveRequestedEventArgs;
    struct Print3DWorkflow;
    struct Print3DWorkflowPrintRequestedEventArgs;
    struct Print3DWorkflowPrinterChangedEventArgs;
    struct PrintExtensionContext;
    struct PrintNotificationEventDetails;
    struct PrintTaskConfiguration;
    struct PrintTaskConfigurationSaveRequest;
    struct PrintTaskConfigurationSaveRequestedDeferral;
    struct PrintTaskConfigurationSaveRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::PrintExtensionContext>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowDetail>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow> = L"Windows.Devices.Printers.Extensions.Print3DWorkflow";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrintRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowPrinterChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::PrintExtensionContext> = L"Windows.Devices.Printers.Extensions.PrintExtensionContext";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::PrintNotificationEventDetails> = L"Windows.Devices.Printers.Extensions.PrintNotificationEventDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration> = L"Windows.Devices.Printers.Extensions.PrintTaskConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest> = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral> = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequestedDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.PrintTaskConfigurationSaveRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowDetail> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowDetail";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowStatus> = L"Windows.Devices.Printers.Extensions.Print3DWorkflowStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflow2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrintRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs> = L"Windows.Devices.Printers.Extensions.IPrint3DWorkflowPrinterChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic> = L"Windows.Devices.Printers.Extensions.IPrintExtensionContextStatic";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails> = L"Windows.Devices.Printers.Extensions.IPrintNotificationEventDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration> = L"Windows.Devices.Printers.Extensions.IPrintTaskConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest> = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral> = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequestedDeferral";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs> = L"Windows.Devices.Printers.Extensions.IPrintTaskConfigurationSaveRequestedEventArgs";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>{ 0xC56F74BD,0x3669,0x4A66,{ 0xAB,0x42,0xC8,0x15,0x19,0x30,0xCD,0x34 } }; // C56F74BD-3669-4A66-AB42-C8151930CD34
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>{ 0xA2A6C54F,0x8AC1,0x4918,{ 0x97,0x41,0xE3,0x4F,0x30,0x04,0x23,0x9E } }; // A2A6C54F-8AC1-4918-9741-E34F3004239E
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>{ 0x19F8C858,0x5AC8,0x4B55,{ 0x8A,0x5F,0xE6,0x15,0x67,0xDA,0xFB,0x4D } }; // 19F8C858-5AC8-4B55-8A5F-E61567DAFB4D
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>{ 0x45226402,0x95FC,0x4847,{ 0x93,0xB3,0x13,0x4D,0xBF,0x5C,0x60,0xF7 } }; // 45226402-95FC-4847-93B3-134DBF5C60F7
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>{ 0xE70D9FC1,0xFF79,0x4AA4,{ 0x8C,0x9B,0x0C,0x93,0xAE,0xDF,0xDE,0x8A } }; // E70D9FC1-FF79-4AA4-8C9B-0C93AEDFDE8A
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>{ 0xE00E4C8A,0x4828,0x4DA1,{ 0x8B,0xB8,0x86,0x72,0xDF,0x85,0x15,0xE7 } }; // E00E4C8A-4828-4DA1-8BB8-8672DF8515E7
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>{ 0xE3C22451,0x3AA4,0x4885,{ 0x92,0x40,0x31,0x1F,0x5F,0x8F,0xBE,0x9D } }; // E3C22451-3AA4-4885-9240-311F5F8FBE9D
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>{ 0xEEAF2FCB,0x621E,0x4B62,{ 0xAC,0x77,0xB2,0x81,0xCC,0xE0,0x8D,0x60 } }; // EEAF2FCB-621E-4B62-AC77-B281CCE08D60
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>{ 0xE959D568,0xF729,0x44A4,{ 0x87,0x1D,0xBD,0x06,0x28,0x69,0x6A,0x33 } }; // E959D568-F729-44A4-871D-BD0628696A33
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>{ 0xE06C2879,0x0D61,0x4938,{ 0x91,0xD0,0x96,0xA4,0x5B,0xEE,0x84,0x79 } }; // E06C2879-0D61-4938-91D0-96A45BEE8479
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::PrintNotificationEventDetails>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequest>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedDeferral>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs>{ using type = winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs; };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceID(void**) noexcept = 0;
            virtual int32_t __stdcall GetPrintModelPackage(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPrintReady(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsPrintReady(bool) noexcept = 0;
            virtual int32_t __stdcall add_PrintRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PrinterChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrinterChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetExtendedStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetSource(void*) noexcept = 0;
            virtual int32_t __stdcall SetSourceChanged(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromDeviceId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrinterName(void**) noexcept = 0;
            virtual int32_t __stdcall get_EventData(void**) noexcept = 0;
            virtual int32_t __stdcall put_EventData(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrinterExtensionContext(void**) noexcept = 0;
            virtual int32_t __stdcall add_SaveRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SaveRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Cancel() noexcept = 0;
            virtual int32_t __stdcall Save(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow
    {
        [[nodiscard]] auto DeviceID() const;
        auto GetPrintModelPackage() const;
        [[nodiscard]] auto IsPrintReady() const;
        auto IsPrintReady(bool value) const;
        auto PrintRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow, winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
        using PrintRequested_revoker = impl::event_revoker<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow, &impl::abi_t<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>::remove_PrintRequested>;
        [[nodiscard]] auto PrintRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow, winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrintRequestedEventArgs> const& eventHandler) const;
        auto PrintRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2
    {
        auto PrinterChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow, winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
        using PrinterChanged_revoker = impl::event_revoker<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2, &impl::abi_t<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>::remove_PrinterChanged>;
        [[nodiscard]] auto PrinterChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::Print3DWorkflow, winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowPrinterChangedEventArgs> const& eventHandler) const;
        auto PrinterChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflow2>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflow2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs
    {
        [[nodiscard]] auto Status() const;
        auto SetExtendedStatus(winrt::Windows::Devices::Printers::Extensions::Print3DWorkflowDetail const& value) const;
        auto SetSource(winrt::Windows::Foundation::IInspectable const& source) const;
        auto SetSourceChanged(bool value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrintRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrintRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs
    {
        [[nodiscard]] auto NewDeviceId() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrint3DWorkflowPrinterChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrint3DWorkflowPrinterChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintExtensionContextStatic
    {
        auto FromDeviceId(param::hstring const& deviceId) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrintExtensionContextStatic>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintExtensionContextStatic<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails
    {
        [[nodiscard]] auto PrinterName() const;
        [[nodiscard]] auto EventData() const;
        auto EventData(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrintNotificationEventDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintNotificationEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration
    {
        [[nodiscard]] auto PrinterExtensionContext() const;
        auto SaveRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration, winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const& eventHandler) const;
        using SaveRequested_revoker = impl::event_revoker<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration, &impl::abi_t<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>::remove_SaveRequested>;
        [[nodiscard]] auto SaveRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Printers::Extensions::PrintTaskConfiguration, winrt::Windows::Devices::Printers::Extensions::PrintTaskConfigurationSaveRequestedEventArgs> const& eventHandler) const;
        auto SaveRequested(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfiguration>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest
    {
        auto Cancel() const;
        auto Save(winrt::Windows::Foundation::IInspectable const& printerExtensionContext) const;
        auto GetDeferral() const;
        [[nodiscard]] auto Deadline() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequest>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedDeferral
    {
        auto Complete() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedDeferral>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedEventArgs
    {
        [[nodiscard]] auto Request() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::Extensions::IPrintTaskConfigurationSaveRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_Extensions_IPrintTaskConfigurationSaveRequestedEventArgs<D>;
    };
}
#endif
