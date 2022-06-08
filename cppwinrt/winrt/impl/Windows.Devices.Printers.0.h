// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220607.4

#pragma once
#ifndef WINRT_Windows_Devices_Printers_0_H
#define WINRT_Windows_Devices_Printers_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct HResult;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IKeyValuePair;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Printers
{
    enum class IppAttributeErrorReason : int32_t
    {
        RequestEntityTooLarge = 0,
        AttributeNotSupported = 1,
        AttributeValuesNotSupported = 2,
        AttributeNotSettable = 3,
        ConflictingAttributes = 4,
    };
    enum class IppAttributeValueKind : int32_t
    {
        Unsupported = 0,
        Unknown = 1,
        NoValue = 2,
        Integer = 3,
        Boolean = 4,
        Enum = 5,
        OctetString = 6,
        DateTime = 7,
        Resolution = 8,
        RangeOfInteger = 9,
        Collection = 10,
        TextWithLanguage = 11,
        NameWithLanguage = 12,
        TextWithoutLanguage = 13,
        NameWithoutLanguage = 14,
        Keyword = 15,
        Uri = 16,
        UriSchema = 17,
        Charset = 18,
        NaturalLanguage = 19,
        MimeMediaType = 20,
    };
    enum class IppResolutionUnit : int32_t
    {
        DotsPerInch = 0,
        DotsPerCentimeter = 1,
    };
    struct IIppAttributeError;
    struct IIppAttributeValue;
    struct IIppAttributeValueStatics;
    struct IIppIntegerRange;
    struct IIppIntegerRangeFactory;
    struct IIppPrintDevice;
    struct IIppResolution;
    struct IIppResolutionFactory;
    struct IIppSetAttributesResult;
    struct IIppTextWithLanguage;
    struct IIppTextWithLanguageFactory;
    struct IPrint3DDevice;
    struct IPrint3DDeviceStatics;
    struct IPrintSchema;
    struct IppAttributeError;
    struct IppAttributeValue;
    struct IppIntegerRange;
    struct IppPrintDevice;
    struct IppResolution;
    struct IppSetAttributesResult;
    struct IppTextWithLanguage;
    struct Print3DDevice;
    struct PrintSchema;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Printers::IIppAttributeError>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppAttributeValue>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppAttributeValueStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppIntegerRange>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppIntegerRangeFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppPrintDevice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppResolution>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppResolutionFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppSetAttributesResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppTextWithLanguage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IIppTextWithLanguageFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IPrint3DDevice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IPrintSchema>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppAttributeError>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppAttributeValue>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppIntegerRange>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppPrintDevice>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppResolution>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppSetAttributesResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppTextWithLanguage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::Print3DDevice>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::PrintSchema>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppAttributeErrorReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppAttributeValueKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Printers::IppResolutionUnit>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppAttributeError> = L"Windows.Devices.Printers.IppAttributeError";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppAttributeValue> = L"Windows.Devices.Printers.IppAttributeValue";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppIntegerRange> = L"Windows.Devices.Printers.IppIntegerRange";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppPrintDevice> = L"Windows.Devices.Printers.IppPrintDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppResolution> = L"Windows.Devices.Printers.IppResolution";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppSetAttributesResult> = L"Windows.Devices.Printers.IppSetAttributesResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppTextWithLanguage> = L"Windows.Devices.Printers.IppTextWithLanguage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::Print3DDevice> = L"Windows.Devices.Printers.Print3DDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::PrintSchema> = L"Windows.Devices.Printers.PrintSchema";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppAttributeErrorReason> = L"Windows.Devices.Printers.IppAttributeErrorReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppAttributeValueKind> = L"Windows.Devices.Printers.IppAttributeValueKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IppResolutionUnit> = L"Windows.Devices.Printers.IppResolutionUnit";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppAttributeError> = L"Windows.Devices.Printers.IIppAttributeError";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppAttributeValue> = L"Windows.Devices.Printers.IIppAttributeValue";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppAttributeValueStatics> = L"Windows.Devices.Printers.IIppAttributeValueStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppIntegerRange> = L"Windows.Devices.Printers.IIppIntegerRange";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppIntegerRangeFactory> = L"Windows.Devices.Printers.IIppIntegerRangeFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppPrintDevice> = L"Windows.Devices.Printers.IIppPrintDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppResolution> = L"Windows.Devices.Printers.IIppResolution";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppResolutionFactory> = L"Windows.Devices.Printers.IIppResolutionFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppSetAttributesResult> = L"Windows.Devices.Printers.IIppSetAttributesResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppTextWithLanguage> = L"Windows.Devices.Printers.IIppTextWithLanguage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IIppTextWithLanguageFactory> = L"Windows.Devices.Printers.IIppTextWithLanguageFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IPrint3DDevice> = L"Windows.Devices.Printers.IPrint3DDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics> = L"Windows.Devices.Printers.IPrint3DDeviceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Printers::IPrintSchema> = L"Windows.Devices.Printers.IPrintSchema";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppAttributeError>{ 0x750FEDA1,0x9EEF,0x5C39,{ 0x93,0xE4,0x46,0x14,0x9B,0xBC,0xEF,0x27 } }; // 750FEDA1-9EEF-5C39-93E4-46149BBCEF27
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppAttributeValue>{ 0x99407FED,0xE2BB,0x59A3,{ 0x98,0x8B,0x28,0xA9,0x74,0x05,0x2A,0x26 } }; // 99407FED-E2BB-59A3-988B-28A974052A26
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppAttributeValueStatics>{ 0x10D43942,0xDD94,0x5998,{ 0xB2,0x35,0xAF,0xAF,0xB6,0xFA,0x79,0x35 } }; // 10D43942-DD94-5998-B235-AFAFB6FA7935
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppIntegerRange>{ 0x92907346,0xC3EA,0x5ED6,{ 0xBD,0xB1,0x37,0x52,0xC6,0x2C,0x6F,0x7F } }; // 92907346-C3EA-5ED6-BDB1-3752C62C6F7F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppIntegerRangeFactory>{ 0x75D4ECAE,0xF87E,0x54AD,{ 0xB5,0xD0,0x46,0x52,0x04,0xDB,0x75,0x53 } }; // 75D4ECAE-F87E-54AD-B5D0-465204DB7553
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppPrintDevice>{ 0xD748AC56,0x76F3,0x5DC6,{ 0xAF,0xD4,0xC2,0xA8,0x68,0x6B,0x93,0x59 } }; // D748AC56-76F3-5DC6-AFD4-C2A8686B9359
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppResolution>{ 0xCB493F86,0x6BF3,0x56F5,{ 0x86,0xCE,0x26,0x3D,0x08,0xAE,0xAD,0x63 } }; // CB493F86-6BF3-56F5-86CE-263D08AEAD63
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppResolutionFactory>{ 0xE481C2AE,0x251A,0x5326,{ 0xB1,0x73,0x95,0x54,0x3E,0xD9,0x9A,0x35 } }; // E481C2AE-251A-5326-B173-95543ED99A35
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppSetAttributesResult>{ 0x7D1C7F55,0xAA9D,0x58A3,{ 0x90,0xE9,0x17,0xBD,0xC5,0x28,0x1F,0x07 } }; // 7D1C7F55-AA9D-58A3-90E9-17BDC5281F07
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppTextWithLanguage>{ 0x326447A6,0x5149,0x5936,{ 0x90,0xE8,0x0C,0x73,0x60,0x36,0xBF,0x77 } }; // 326447A6-5149-5936-90E8-0C736036BF77
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IIppTextWithLanguageFactory>{ 0xCA4A1E8D,0x2968,0x5775,{ 0x99,0x7C,0x8A,0x46,0xF1,0xA5,0x74,0xED } }; // CA4A1E8D-2968-5775-997C-8A46F1A574ED
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IPrint3DDevice>{ 0x041C3D19,0x9713,0x42A2,{ 0x98,0x13,0x7D,0xC3,0x33,0x74,0x28,0xD3 } }; // 041C3D19-9713-42A2-9813-7DC3337428D3
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics>{ 0xFDE3620A,0x67CD,0x41B7,{ 0xA3,0x44,0x51,0x50,0xA1,0xFD,0x75,0xB5 } }; // FDE3620A-67CD-41B7-A344-5150A1FD75B5
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Printers::IPrintSchema>{ 0xC2B98316,0x26B8,0x4BFB,{ 0x81,0x38,0x9F,0x96,0x2C,0x22,0xA3,0x5B } }; // C2B98316-26B8-4BFB-8138-9F962C22A35B
    template <> struct default_interface<winrt::Windows::Devices::Printers::IppAttributeError>{ using type = winrt::Windows::Devices::Printers::IIppAttributeError; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::IppAttributeValue>{ using type = winrt::Windows::Devices::Printers::IIppAttributeValue; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::IppIntegerRange>{ using type = winrt::Windows::Devices::Printers::IIppIntegerRange; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::IppPrintDevice>{ using type = winrt::Windows::Devices::Printers::IIppPrintDevice; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::IppResolution>{ using type = winrt::Windows::Devices::Printers::IIppResolution; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::IppSetAttributesResult>{ using type = winrt::Windows::Devices::Printers::IIppSetAttributesResult; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::IppTextWithLanguage>{ using type = winrt::Windows::Devices::Printers::IIppTextWithLanguage; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::Print3DDevice>{ using type = winrt::Windows::Devices::Printers::IPrint3DDevice; };
    template <> struct default_interface<winrt::Windows::Devices::Printers::PrintSchema>{ using type = winrt::Windows::Devices::Printers::IPrintSchema; };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppAttributeError>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall GetUnsupportedValues(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppAttributeValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetIntegerArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetBooleanArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetEnumArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetOctetStringArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetDateTimeArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetResolutionArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetRangeOfIntegerArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetCollectionArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetTextWithLanguageArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetNameWithLanguageArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetTextWithoutLanguageArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetNameWithoutLanguageArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetKeywordArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetUriArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetUriSchemaArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetCharsetArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetNaturalLanguageArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetMimeMediaTypeArray(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppAttributeValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateUnsupported(void**) noexcept = 0;
            virtual int32_t __stdcall CreateUnknown(void**) noexcept = 0;
            virtual int32_t __stdcall CreateNoValue(void**) noexcept = 0;
            virtual int32_t __stdcall CreateInteger(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateIntegerArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBoolean(bool, void**) noexcept = 0;
            virtual int32_t __stdcall CreateBooleanArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEnum(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEnumArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateOctetString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateOctetStringArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDateTime(int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateDateTimeArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateResolution(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateResolutionArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateRangeOfInteger(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateRangeOfIntegerArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCollection(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCollectionArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTextWithLanguage(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTextWithLanguageArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateNameWithLanguage(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateNameWithLanguageArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTextWithoutLanguage(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTextWithoutLanguageArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateNameWithoutLanguage(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateNameWithoutLanguageArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateKeyword(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateKeywordArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUri(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUriArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUriSchema(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateUriSchemaArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCharset(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCharsetArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateNaturalLanguage(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateNaturalLanguageArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMimeMedia(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateMimeMediaArray(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppIntegerRange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Start(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_End(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppIntegerRangeFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppPrintDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrinterName(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrinterUri(void**) noexcept = 0;
            virtual int32_t __stdcall GetPrinterAttributesAsBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetPrinterAttributes(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPrinterAttributesFromBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetPrinterAttributes(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppResolution>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Width(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Height(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Unit(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppResolutionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(int32_t, int32_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppSetAttributesResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Succeeded(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AttributeErrors(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppTextWithLanguage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Language(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IIppTextWithLanguageFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IPrint3DDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintSchema(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Printers::IPrintSchema>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefaultPrintTicketAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetCapabilitiesAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall MergeAndValidateWithDefaultPrintTicketAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppAttributeError
    {
        [[nodiscard]] auto Reason() const;
        [[nodiscard]] auto ExtendedError() const;
        auto GetUnsupportedValues() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppAttributeError>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppAttributeError<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppAttributeValue
    {
        [[nodiscard]] auto Kind() const;
        auto GetIntegerArray() const;
        auto GetBooleanArray() const;
        auto GetEnumArray() const;
        auto GetOctetStringArray() const;
        auto GetDateTimeArray() const;
        auto GetResolutionArray() const;
        auto GetRangeOfIntegerArray() const;
        auto GetCollectionArray() const;
        auto GetTextWithLanguageArray() const;
        auto GetNameWithLanguageArray() const;
        auto GetTextWithoutLanguageArray() const;
        auto GetNameWithoutLanguageArray() const;
        auto GetKeywordArray() const;
        auto GetUriArray() const;
        auto GetUriSchemaArray() const;
        auto GetCharsetArray() const;
        auto GetNaturalLanguageArray() const;
        auto GetMimeMediaTypeArray() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppAttributeValue>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppAttributeValue<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppAttributeValueStatics
    {
        auto CreateUnsupported() const;
        auto CreateUnknown() const;
        auto CreateNoValue() const;
        auto CreateInteger(int32_t value) const;
        auto CreateIntegerArray(param::iterable<int32_t> const& values) const;
        auto CreateBoolean(bool value) const;
        auto CreateBooleanArray(param::iterable<bool> const& values) const;
        auto CreateEnum(int32_t value) const;
        auto CreateEnumArray(param::iterable<int32_t> const& values) const;
        auto CreateOctetString(winrt::Windows::Storage::Streams::IBuffer const& value) const;
        auto CreateOctetStringArray(param::iterable<winrt::Windows::Storage::Streams::IBuffer> const& values) const;
        auto CreateDateTime(winrt::Windows::Foundation::DateTime const& value) const;
        auto CreateDateTimeArray(param::iterable<winrt::Windows::Foundation::DateTime> const& values) const;
        auto CreateResolution(winrt::Windows::Devices::Printers::IppResolution const& value) const;
        auto CreateResolutionArray(param::iterable<winrt::Windows::Devices::Printers::IppResolution> const& values) const;
        auto CreateRangeOfInteger(winrt::Windows::Devices::Printers::IppIntegerRange const& value) const;
        auto CreateRangeOfIntegerArray(param::iterable<winrt::Windows::Devices::Printers::IppIntegerRange> const& values) const;
        auto CreateCollection(param::iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Devices::Printers::IppAttributeValue>> const& memberAttributes) const;
        auto CreateCollectionArray(param::iterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Devices::Printers::IppAttributeValue>>> const& memberAttributesArray) const;
        auto CreateTextWithLanguage(winrt::Windows::Devices::Printers::IppTextWithLanguage const& value) const;
        auto CreateTextWithLanguageArray(param::iterable<winrt::Windows::Devices::Printers::IppTextWithLanguage> const& values) const;
        auto CreateNameWithLanguage(winrt::Windows::Devices::Printers::IppTextWithLanguage const& value) const;
        auto CreateNameWithLanguageArray(param::iterable<winrt::Windows::Devices::Printers::IppTextWithLanguage> const& values) const;
        auto CreateTextWithoutLanguage(param::hstring const& value) const;
        auto CreateTextWithoutLanguageArray(param::iterable<hstring> const& values) const;
        auto CreateNameWithoutLanguage(param::hstring const& value) const;
        auto CreateNameWithoutLanguageArray(param::iterable<hstring> const& values) const;
        auto CreateKeyword(param::hstring const& value) const;
        auto CreateKeywordArray(param::iterable<hstring> const& values) const;
        auto CreateUri(winrt::Windows::Foundation::Uri const& value) const;
        auto CreateUriArray(param::iterable<winrt::Windows::Foundation::Uri> const& values) const;
        auto CreateUriSchema(param::hstring const& value) const;
        auto CreateUriSchemaArray(param::iterable<hstring> const& values) const;
        auto CreateCharset(param::hstring const& value) const;
        auto CreateCharsetArray(param::iterable<hstring> const& values) const;
        auto CreateNaturalLanguage(param::hstring const& value) const;
        auto CreateNaturalLanguageArray(param::iterable<hstring> const& values) const;
        auto CreateMimeMedia(param::hstring const& value) const;
        auto CreateMimeMediaArray(param::iterable<hstring> const& values) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppAttributeValueStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppAttributeValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppIntegerRange
    {
        [[nodiscard]] auto Start() const;
        [[nodiscard]] auto End() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppIntegerRange>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppIntegerRange<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppIntegerRangeFactory
    {
        auto CreateInstance(int32_t start, int32_t end) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppIntegerRangeFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppIntegerRangeFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppPrintDevice
    {
        [[nodiscard]] auto PrinterName() const;
        [[nodiscard]] auto PrinterUri() const;
        auto GetPrinterAttributesAsBuffer(param::iterable<hstring> const& attributeNames) const;
        auto GetPrinterAttributes(param::iterable<hstring> const& attributeNames) const;
        auto SetPrinterAttributesFromBuffer(winrt::Windows::Storage::Streams::IBuffer const& printerAttributesBuffer) const;
        auto SetPrinterAttributes(param::iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Devices::Printers::IppAttributeValue>> const& printerAttributes) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppPrintDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppPrintDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppResolution
    {
        [[nodiscard]] auto Width() const;
        [[nodiscard]] auto Height() const;
        [[nodiscard]] auto Unit() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppResolution>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppResolution<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppResolutionFactory
    {
        auto CreateInstance(int32_t width, int32_t height, winrt::Windows::Devices::Printers::IppResolutionUnit const& unit) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppResolutionFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppResolutionFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppSetAttributesResult
    {
        [[nodiscard]] auto Succeeded() const;
        [[nodiscard]] auto AttributeErrors() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppSetAttributesResult>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppSetAttributesResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppTextWithLanguage
    {
        [[nodiscard]] auto Language() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppTextWithLanguage>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppTextWithLanguage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IIppTextWithLanguageFactory
    {
        auto CreateInstance(param::hstring const& language, param::hstring const& text) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IIppTextWithLanguageFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IIppTextWithLanguageFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrint3DDevice
    {
        [[nodiscard]] auto PrintSchema() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IPrint3DDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrint3DDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrint3DDeviceStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IPrint3DDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrint3DDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Printers_IPrintSchema
    {
        auto GetDefaultPrintTicketAsync() const;
        auto GetCapabilitiesAsync(winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType const& constrainTicket) const;
        auto MergeAndValidateWithDefaultPrintTicketAsync(winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType const& deltaTicket) const;
    };
    template <> struct consume<winrt::Windows::Devices::Printers::IPrintSchema>
    {
        template <typename D> using type = consume_Windows_Devices_Printers_IPrintSchema<D>;
    };
}
#endif
