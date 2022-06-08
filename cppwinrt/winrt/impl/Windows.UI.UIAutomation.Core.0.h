// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220607.4

#pragma once
#ifndef WINRT_Windows_UI_UIAutomation_Core_0_H
#define WINRT_Windows_UI_UIAutomation_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation
{
    struct AutomationConnectionBoundObject;
    struct AutomationElement;
    struct AutomationTextRange;
}
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation::Core
{
    enum class AutomationRemoteOperationStatus : int32_t
    {
        Success = 0,
        MalformedBytecode = 1,
        InstructionLimitExceeded = 2,
        UnhandledException = 3,
        ExecutionFailure = 4,
    };
    struct IAutomationRemoteOperationResult;
    struct ICoreAutomationConnectionBoundObjectProvider;
    struct ICoreAutomationRegistrarStatics;
    struct ICoreAutomationRemoteOperation;
    struct ICoreAutomationRemoteOperation2;
    struct ICoreAutomationRemoteOperationContext;
    struct ICoreAutomationRemoteOperationExtensionProvider;
    struct IRemoteAutomationClientSession;
    struct IRemoteAutomationClientSessionFactory;
    struct IRemoteAutomationConnectionRequestedEventArgs;
    struct IRemoteAutomationDisconnectedEventArgs;
    struct IRemoteAutomationServerStatics;
    struct IRemoteAutomationWindow;
    struct AutomationRemoteOperationResult;
    struct CoreAutomationRegistrar;
    struct CoreAutomationRemoteOperation;
    struct CoreAutomationRemoteOperationContext;
    struct RemoteAutomationClientSession;
    struct RemoteAutomationConnectionRequestedEventArgs;
    struct RemoteAutomationDisconnectedEventArgs;
    struct RemoteAutomationServer;
    struct RemoteAutomationWindow;
    struct AutomationAnnotationTypeRegistration;
    struct AutomationRemoteOperationOperandId;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationConnectionBoundObjectProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRegistrarStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationContext>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationExtensionProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSessionFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationConnectionRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationDisconnectedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationServerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationWindow>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRegistrar>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperationContext>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationConnectionRequestedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationDisconnectedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationServer>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationWindow>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration>{ using type = struct_category<int32_t>; };
    template <> struct category<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId>{ using type = struct_category<int32_t>; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult> = L"Windows.UI.UIAutomation.Core.AutomationRemoteOperationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRegistrar> = L"Windows.UI.UIAutomation.Core.CoreAutomationRegistrar";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation> = L"Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperationContext> = L"Windows.UI.UIAutomation.Core.CoreAutomationRemoteOperationContext";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession> = L"Windows.UI.UIAutomation.Core.RemoteAutomationClientSession";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationConnectionRequestedEventArgs> = L"Windows.UI.UIAutomation.Core.RemoteAutomationConnectionRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationDisconnectedEventArgs> = L"Windows.UI.UIAutomation.Core.RemoteAutomationDisconnectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationServer> = L"Windows.UI.UIAutomation.Core.RemoteAutomationServer";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationWindow> = L"Windows.UI.UIAutomation.Core.RemoteAutomationWindow";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus> = L"Windows.UI.UIAutomation.Core.AutomationRemoteOperationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration> = L"Windows.UI.UIAutomation.Core.AutomationAnnotationTypeRegistration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId> = L"Windows.UI.UIAutomation.Core.AutomationRemoteOperationOperandId";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult> = L"Windows.UI.UIAutomation.Core.IAutomationRemoteOperationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationConnectionBoundObjectProvider> = L"Windows.UI.UIAutomation.Core.ICoreAutomationConnectionBoundObjectProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRegistrarStatics> = L"Windows.UI.UIAutomation.Core.ICoreAutomationRegistrarStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation> = L"Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation2> = L"Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperation2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationContext> = L"Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperationContext";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationExtensionProvider> = L"Windows.UI.UIAutomation.Core.ICoreAutomationRemoteOperationExtensionProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession> = L"Windows.UI.UIAutomation.Core.IRemoteAutomationClientSession";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSessionFactory> = L"Windows.UI.UIAutomation.Core.IRemoteAutomationClientSessionFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationConnectionRequestedEventArgs> = L"Windows.UI.UIAutomation.Core.IRemoteAutomationConnectionRequestedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationDisconnectedEventArgs> = L"Windows.UI.UIAutomation.Core.IRemoteAutomationDisconnectedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationServerStatics> = L"Windows.UI.UIAutomation.Core.IRemoteAutomationServerStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationWindow> = L"Windows.UI.UIAutomation.Core.IRemoteAutomationWindow";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>{ 0xE0F80C42,0x4A67,0x5534,{ 0xBF,0x5A,0x09,0xE8,0xA9,0x9B,0x36,0xB1 } }; // E0F80C42-4A67-5534-BF5A-09E8A99B36B1
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationConnectionBoundObjectProvider>{ 0x0620BB64,0x9616,0x5593,{ 0xBE,0x3A,0xEB,0x8E,0x6D,0xAE,0xB3,0xFA } }; // 0620BB64-9616-5593-BE3A-EB8E6DAEB3FA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRegistrarStatics>{ 0x3E50129B,0xD6DC,0x5680,{ 0xB5,0x80,0xFF,0xFF,0x78,0x30,0x03,0x04 } }; // 3E50129B-D6DC-5680-B580-FFFF78300304
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>{ 0x3AC656F4,0xE2BC,0x5C6E,{ 0xB8,0xE7,0xB2,0x24,0xFB,0x74,0xB0,0x60 } }; // 3AC656F4-E2BC-5C6E-B8E7-B224FB74B060
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation2>{ 0xEEFAF86F,0xE953,0x5099,{ 0x8C,0xE9,0xDC,0xA8,0x13,0x48,0x2B,0xA0 } }; // EEFAF86F-E953-5099-8CE9-DCA813482BA0
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationContext>{ 0xB9AF9CBB,0x3D3E,0x5918,{ 0xA1,0x6B,0x78,0x61,0x62,0x6A,0x3A,0xEB } }; // B9AF9CBB-3D3E-5918-A16B-7861626A3AEB
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationExtensionProvider>{ 0x88F53E67,0xDC69,0x553B,{ 0xA0,0xAA,0x70,0x47,0x7E,0x72,0x4D,0xA8 } }; // 88F53E67-DC69-553B-A0AA-70477E724DA8
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession>{ 0x5C8A091D,0x94CC,0x5B33,{ 0xAF,0xDB,0x67,0x8C,0xDE,0xD2,0xBD,0x54 } }; // 5C8A091D-94CC-5B33-AFDB-678CDED2BD54
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSessionFactory>{ 0xF250263D,0x6057,0x5373,{ 0xA5,0xA5,0xED,0x72,0x65,0xFE,0x03,0x76 } }; // F250263D-6057-5373-A5A5-ED7265FE0376
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationConnectionRequestedEventArgs>{ 0xEA3319A8,0xE3A8,0x5DC6,{ 0xAD,0xF8,0x04,0x4E,0x46,0xB1,0x4A,0xF5 } }; // EA3319A8-E3A8-5DC6-ADF8-044E46B14AF5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationDisconnectedEventArgs>{ 0xBBB33A3D,0x5D90,0x5C38,{ 0x9E,0xB2,0xDD,0x9D,0xCC,0x1B,0x2E,0x3F } }; // BBB33A3D-5D90-5C38-9EB2-DD9DCC1B2E3F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationServerStatics>{ 0xE6E8945E,0x0C11,0x5028,{ 0x9A,0xE3,0xC2,0x77,0x12,0x88,0xB6,0xB7 } }; // E6E8945E-0C11-5028-9AE3-C2771288B6B7
    template <> inline constexpr guid guid_v<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationWindow>{ 0x7C607689,0x496D,0x512A,{ 0x9B,0xD5,0xC0,0x50,0xCF,0xAF,0x14,0x28 } }; // 7C607689-496D-512A-9BD5-C050CFAF1428
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult>{ using type = winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation>{ using type = winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperationContext>{ using type = winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationContext; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession>{ using type = winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationConnectionRequestedEventArgs>{ using type = winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationConnectionRequestedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationDisconnectedEventArgs>{ using type = winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationDisconnectedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationWindow>{ using type = winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationWindow; };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorLocation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall HasOperand(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, bool*) noexcept = 0;
            virtual int32_t __stdcall GetOperand(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationConnectionBoundObjectProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsComThreadingRequired(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRegistrarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterAnnotationType(winrt::guid, struct struct_Windows_UI_UIAutomation_Core_AutomationAnnotationTypeRegistration*) noexcept = 0;
            virtual int32_t __stdcall UnregisterAnnotationType(struct struct_Windows_UI_UIAutomation_Core_AutomationAnnotationTypeRegistration) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsOpcodeSupported(uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall ImportElement(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void*) noexcept = 0;
            virtual int32_t __stdcall ImportTextRange(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void*) noexcept = 0;
            virtual int32_t __stdcall AddToResults(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId) noexcept = 0;
            virtual int32_t __stdcall Execute(uint32_t, uint8_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ImportConnectionBoundObject(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetOperand(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void**) noexcept = 0;
            virtual int32_t __stdcall SetOperand(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void*) noexcept = 0;
            virtual int32_t __stdcall SetOperand2(struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId, void*, winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationExtensionProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CallExtension(winrt::guid, void*, uint32_t, struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId*) noexcept = 0;
            virtual int32_t __stdcall IsExtensionSupported(winrt::guid, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall CreateWindowAsync(uint64_t, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall add_ConnectionRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Disconnected(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Disconnected(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSessionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstance2(void*, winrt::guid, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationConnectionRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalPipeName(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteProcessId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationDisconnectedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalPipeName(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationServerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportSession(winrt::guid) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationWindow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutomationProvider(void**) noexcept = 0;
            virtual int32_t __stdcall UnregisterAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto ExtendedError() const;
        [[nodiscard]] auto ErrorLocation() const;
        auto HasOperand(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const;
        auto GetOperand(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::IAutomationRemoteOperationResult>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_IAutomationRemoteOperationResult<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_ICoreAutomationConnectionBoundObjectProvider
    {
        [[nodiscard]] auto IsComThreadingRequired() const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationConnectionBoundObjectProvider>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_ICoreAutomationConnectionBoundObjectProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_ICoreAutomationRegistrarStatics
    {
        auto RegisterAnnotationType(winrt::guid const& guid) const;
        auto UnregisterAnnotationType(winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration const& registration) const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRegistrarStatics>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_ICoreAutomationRegistrarStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation
    {
        auto IsOpcodeSupported(uint32_t opcode) const;
        auto ImportElement(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId, winrt::Windows::UI::UIAutomation::AutomationElement const& element) const;
        auto ImportTextRange(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId, winrt::Windows::UI::UIAutomation::AutomationTextRange const& textRange) const;
        auto AddToResults(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId) const;
        auto Execute(array_view<uint8_t const> bytecodeBuffer) const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation2
    {
        auto ImportConnectionBoundObject(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& operandId, winrt::Windows::UI::UIAutomation::AutomationConnectionBoundObject const& connectionBoundObject) const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperation2>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperation2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperationContext
    {
        auto GetOperand(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& id) const;
        auto SetOperand(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& id, winrt::Windows::Foundation::IInspectable const& operand) const;
        auto SetOperand(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const& id, winrt::Windows::Foundation::IInspectable const& operand, winrt::guid const& operandInterfaceId) const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationContext>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperationContext<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperationExtensionProvider
    {
        auto CallExtension(winrt::guid const& extensionId, winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperationContext const& context, array_view<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId const> operandIds) const;
        auto IsExtensionSupported(winrt::guid const& extensionId) const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationExtensionProvider>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_ICoreAutomationRemoteOperationExtensionProvider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_IRemoteAutomationClientSession
    {
        auto Start() const;
        auto Stop() const;
        auto CreateWindowAsync(uint64_t remoteWindowId, uint32_t remoteProcessId, winrt::Windows::Foundation::IInspectable const& parentAutomationElement) const;
        [[nodiscard]] auto SessionId() const;
        auto ConnectionRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession, winrt::Windows::UI::UIAutomation::Core::RemoteAutomationConnectionRequestedEventArgs> const& handler) const;
        using ConnectionRequested_revoker = impl::event_revoker<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession, &impl::abi_t<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession>::remove_ConnectionRequested>;
        [[nodiscard]] auto ConnectionRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession, winrt::Windows::UI::UIAutomation::Core::RemoteAutomationConnectionRequestedEventArgs> const& handler) const;
        auto ConnectionRequested(winrt::event_token const& token) const noexcept;
        auto Disconnected(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession, winrt::Windows::UI::UIAutomation::Core::RemoteAutomationDisconnectedEventArgs> const& handler) const;
        using Disconnected_revoker = impl::event_revoker<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession, &impl::abi_t<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession>::remove_Disconnected>;
        [[nodiscard]] auto Disconnected(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession, winrt::Windows::UI::UIAutomation::Core::RemoteAutomationDisconnectedEventArgs> const& handler) const;
        auto Disconnected(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSession>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_IRemoteAutomationClientSession<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_IRemoteAutomationClientSessionFactory
    {
        auto CreateInstance(param::hstring const& name) const;
        auto CreateInstance2(param::hstring const& name, winrt::guid const& sessionId) const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationClientSessionFactory>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_IRemoteAutomationClientSessionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_IRemoteAutomationConnectionRequestedEventArgs
    {
        [[nodiscard]] auto LocalPipeName() const;
        [[nodiscard]] auto RemoteProcessId() const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationConnectionRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_IRemoteAutomationConnectionRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_IRemoteAutomationDisconnectedEventArgs
    {
        [[nodiscard]] auto LocalPipeName() const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationDisconnectedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_IRemoteAutomationDisconnectedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_IRemoteAutomationServerStatics
    {
        auto ReportSession(winrt::guid const& sessionId) const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationServerStatics>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_IRemoteAutomationServerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_Core_IRemoteAutomationWindow
    {
        [[nodiscard]] auto AutomationProvider() const;
        auto UnregisterAsync() const;
    };
    template <> struct consume<winrt::Windows::UI::UIAutomation::Core::IRemoteAutomationWindow>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_Core_IRemoteAutomationWindow<D>;
    };
    struct struct_Windows_UI_UIAutomation_Core_AutomationAnnotationTypeRegistration
    {
        int32_t LocalId;
    };
    template <> struct abi<Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration>
    {
        using type = struct_Windows_UI_UIAutomation_Core_AutomationAnnotationTypeRegistration;
    };
    struct struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId
    {
        int32_t Value;
    };
    template <> struct abi<Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId>
    {
        using type = struct_Windows_UI_UIAutomation_Core_AutomationRemoteOperationOperandId;
    };
}
#endif
