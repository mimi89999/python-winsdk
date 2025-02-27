// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.PointOfService.h>

namespace py::proj::Windows::Devices::PointOfService
{}

namespace py::impl::Windows::Devices::PointOfService
{}

namespace py::wrapper::Windows::Devices::PointOfService
{
    using BarcodeScanner = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeScanner>;
    using BarcodeScannerCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeScannerCapabilities>;
    using BarcodeScannerDataReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>;
    using BarcodeScannerErrorOccurredEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>;
    using BarcodeScannerImagePreviewReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>;
    using BarcodeScannerReport = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeScannerReport>;
    using BarcodeScannerStatusUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>;
    using BarcodeSymbologies = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeSymbologies>;
    using BarcodeSymbologyAttributes = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::BarcodeSymbologyAttributes>;
    using CashDrawer = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::CashDrawer>;
    using CashDrawerCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::CashDrawerCapabilities>;
    using CashDrawerCloseAlarm = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::CashDrawerCloseAlarm>;
    using CashDrawerClosedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::CashDrawerClosedEventArgs>;
    using CashDrawerEventSource = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::CashDrawerEventSource>;
    using CashDrawerOpenedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>;
    using CashDrawerStatus = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::CashDrawerStatus>;
    using CashDrawerStatusUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>;
    using ClaimedBarcodeScanner = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedBarcodeScanner>;
    using ClaimedBarcodeScannerClosedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedBarcodeScannerClosedEventArgs>;
    using ClaimedCashDrawer = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedCashDrawer>;
    using ClaimedCashDrawerClosedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedCashDrawerClosedEventArgs>;
    using ClaimedJournalPrinter = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedJournalPrinter>;
    using ClaimedLineDisplay = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedLineDisplay>;
    using ClaimedLineDisplayClosedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedLineDisplayClosedEventArgs>;
    using ClaimedMagneticStripeReader = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedMagneticStripeReader>;
    using ClaimedMagneticStripeReaderClosedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedMagneticStripeReaderClosedEventArgs>;
    using ClaimedPosPrinter = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedPosPrinter>;
    using ClaimedPosPrinterClosedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedPosPrinterClosedEventArgs>;
    using ClaimedReceiptPrinter = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedReceiptPrinter>;
    using ClaimedSlipPrinter = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ClaimedSlipPrinter>;
    using JournalPrintJob = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::JournalPrintJob>;
    using JournalPrinterCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::JournalPrinterCapabilities>;
    using LineDisplay = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplay>;
    using LineDisplayAttributes = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayAttributes>;
    using LineDisplayCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayCapabilities>;
    using LineDisplayCursor = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayCursor>;
    using LineDisplayCursorAttributes = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayCursorAttributes>;
    using LineDisplayCustomGlyphs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayCustomGlyphs>;
    using LineDisplayMarquee = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayMarquee>;
    using LineDisplayStatisticsCategorySelector = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector>;
    using LineDisplayStatusUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs>;
    using LineDisplayStoredBitmap = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayStoredBitmap>;
    using LineDisplayWindow = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::LineDisplayWindow>;
    using MagneticStripeReader = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReader>;
    using MagneticStripeReaderAamvaCardDataReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>;
    using MagneticStripeReaderBankCardDataReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>;
    using MagneticStripeReaderCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>;
    using MagneticStripeReaderCardTypes = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderCardTypes>;
    using MagneticStripeReaderEncryptionAlgorithms = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms>;
    using MagneticStripeReaderErrorOccurredEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>;
    using MagneticStripeReaderReport = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderReport>;
    using MagneticStripeReaderStatusUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>;
    using MagneticStripeReaderTrackData = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackData>;
    using MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>;
    using PosPrinter = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::PosPrinter>;
    using PosPrinterCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::PosPrinterCapabilities>;
    using PosPrinterCharacterSetIds = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::PosPrinterCharacterSetIds>;
    using PosPrinterFontProperty = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::PosPrinterFontProperty>;
    using PosPrinterPrintOptions = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::PosPrinterPrintOptions>;
    using PosPrinterReleaseDeviceRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>;
    using PosPrinterStatus = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::PosPrinterStatus>;
    using PosPrinterStatusUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>;
    using ReceiptPrintJob = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ReceiptPrintJob>;
    using ReceiptPrinterCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ReceiptPrinterCapabilities>;
    using SlipPrintJob = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::SlipPrintJob>;
    using SlipPrinterCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::SlipPrinterCapabilities>;
    using UnifiedPosErrorData = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::UnifiedPosErrorData>;
    using ICashDrawerEventSourceEventArgs = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>;
    using ICommonClaimedPosPrinterStation = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>;
    using ICommonPosPrintStationCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>;
    using ICommonReceiptSlipCapabilities = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>;
    using IPosPrinterJob = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::IPosPrinterJob>;
    using IReceiptOrSlipJob = py::winrt_wrapper<winrt::Windows::Devices::PointOfService::IReceiptOrSlipJob>;
    using SizeUInt32 = py::winrt_struct_wrapper<winrt::Windows::Devices::PointOfService::SizeUInt32>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::BarcodeScannerStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::CashDrawerStatusKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayCursorType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayDescriptorState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayHorizontalAlignment> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayMarqueeFormat> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayPowerStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayScrollDirection> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayTextAttribute> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::LineDisplayVerticalAlignment> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::MagneticStripeReaderStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackIds> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosConnectionTypes> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterAlignment> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterCartridgeSensors> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterColorCapabilities> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterColorCartridge> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterLineDirection> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterLineStyle> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterMapMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterMarkFeedKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterPrintSide> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterRotation> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::PosPrinterStatusKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::UnifiedPosErrorReason> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::UnifiedPosErrorSeverity> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::UnifiedPosPowerReportingType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::PointOfService::SizeUInt32> = "T{I:width:I:height:}";


    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::BarcodeScannerStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::BarcodeSymbologyDecodeLengthKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::CashDrawerStatusKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayCursorType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayDescriptorState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayHorizontalAlignment>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayMarqueeFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayPowerStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayScrollDirection>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayTextAttribute>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayTextAttributeGranularity>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::LineDisplayVerticalAlignment>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationLevel>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderAuthenticationProtocol>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderErrorReportingType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackErrorType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackIds>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosConnectionTypes>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterAlignment>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterBarcodeTextPosition>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterCartridgeSensors>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterColorCapabilities>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterColorCartridge>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterLineDirection>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterLineStyle>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterMapMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterMarkFeedCapabilities>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterMarkFeedKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterPrintSide>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterRotation>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterRuledLineCapabilities>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::PosPrinterStatusKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::UnifiedPosErrorReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::UnifiedPosErrorSeverity>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::UnifiedPosHealthCheckLevel>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::PointOfService::UnifiedPosPowerReportingType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeScanner>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeScannerCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeScannerDataReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeScannerErrorOccurredEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeScannerImagePreviewReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeScannerReport>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeScannerStatusUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeSymbologies>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::BarcodeSymbologyAttributes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::CashDrawer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::CashDrawerCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::CashDrawerCloseAlarm>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::CashDrawerClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::CashDrawerEventSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::CashDrawerOpenedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::CashDrawerStatus>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::CashDrawerStatusUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedBarcodeScanner>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedBarcodeScannerClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedCashDrawer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedCashDrawerClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedJournalPrinter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedLineDisplay>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedLineDisplayClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedMagneticStripeReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedMagneticStripeReaderClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedPosPrinter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedPosPrinterClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedReceiptPrinter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ClaimedSlipPrinter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::JournalPrintJob>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::JournalPrinterCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplay>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayAttributes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayCursor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayCursorAttributes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayCustomGlyphs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayMarquee>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayStatisticsCategorySelector>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayStatusUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayStoredBitmap>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::LineDisplayWindow>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderAamvaCardDataReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderBankCardDataReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderCardTypes>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderEncryptionAlgorithms>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderErrorOccurredEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderReport>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderStatusUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderTrackData>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::MagneticStripeReaderVendorSpecificCardDataReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::PosPrinter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::PosPrinterCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::PosPrinterCharacterSetIds>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::PosPrinterFontProperty>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::PosPrinterPrintOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::PosPrinterReleaseDeviceRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::PosPrinterStatus>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::PosPrinterStatusUpdatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ReceiptPrintJob>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ReceiptPrinterCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::SlipPrintJob>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::SlipPrinterCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::UnifiedPosErrorData>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ICashDrawerEventSourceEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ICommonClaimedPosPrinterStation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ICommonPosPrintStationCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::ICommonReceiptSlipCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::IPosPrinterJob>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::IReceiptOrSlipJob>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::PointOfService::SizeUInt32>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Devices::PointOfService::SizeUInt32>
    {
        static PyObject* convert(winrt::Windows::Devices::PointOfService::SizeUInt32 instance) noexcept;
        static winrt::Windows::Devices::PointOfService::SizeUInt32 convert_to(PyObject* obj);
    };

}
