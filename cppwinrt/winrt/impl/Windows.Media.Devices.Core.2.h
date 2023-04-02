// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230225.1

#pragma once
#ifndef WINRT_Windows_Media_Devices_Core_2_H
#define WINRT_Windows_Media_Devices_Core_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.Media.Devices.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core
{
    struct WINRT_IMPL_EMPTY_BASES CameraIntrinsics : winrt::Windows::Media::Devices::Core::ICameraIntrinsics,
        impl::require<CameraIntrinsics, winrt::Windows::Media::Devices::Core::ICameraIntrinsics2>
    {
        CameraIntrinsics(std::nullptr_t) noexcept {}
        CameraIntrinsics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::ICameraIntrinsics(ptr, take_ownership_from_abi) {}
        CameraIntrinsics(winrt::Windows::Foundation::Numerics::float2 const& focalLength, winrt::Windows::Foundation::Numerics::float2 const& principalPoint, winrt::Windows::Foundation::Numerics::float3 const& radialDistortion, winrt::Windows::Foundation::Numerics::float2 const& tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight);
    };
    struct WINRT_IMPL_EMPTY_BASES DepthCorrelatedCoordinateMapper : winrt::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper
    {
        DepthCorrelatedCoordinateMapper(std::nullptr_t) noexcept {}
        DepthCorrelatedCoordinateMapper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameControlCapabilities : winrt::Windows::Media::Devices::Core::IFrameControlCapabilities,
        impl::require<FrameControlCapabilities, winrt::Windows::Media::Devices::Core::IFrameControlCapabilities2>
    {
        FrameControlCapabilities(std::nullptr_t) noexcept {}
        FrameControlCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameControlCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameController : winrt::Windows::Media::Devices::Core::IFrameController,
        impl::require<FrameController, winrt::Windows::Media::Devices::Core::IFrameController2>
    {
        FrameController(std::nullptr_t) noexcept {}
        FrameController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameController(ptr, take_ownership_from_abi) {}
        FrameController();
    };
    struct WINRT_IMPL_EMPTY_BASES FrameExposureCapabilities : winrt::Windows::Media::Devices::Core::IFrameExposureCapabilities
    {
        FrameExposureCapabilities(std::nullptr_t) noexcept {}
        FrameExposureCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameExposureCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameExposureCompensationCapabilities : winrt::Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities
    {
        FrameExposureCompensationCapabilities(std::nullptr_t) noexcept {}
        FrameExposureCompensationCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameExposureCompensationControl : winrt::Windows::Media::Devices::Core::IFrameExposureCompensationControl
    {
        FrameExposureCompensationControl(std::nullptr_t) noexcept {}
        FrameExposureCompensationControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameExposureCompensationControl(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameExposureControl : winrt::Windows::Media::Devices::Core::IFrameExposureControl
    {
        FrameExposureControl(std::nullptr_t) noexcept {}
        FrameExposureControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameExposureControl(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameFlashCapabilities : winrt::Windows::Media::Devices::Core::IFrameFlashCapabilities
    {
        FrameFlashCapabilities(std::nullptr_t) noexcept {}
        FrameFlashCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameFlashCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameFlashControl : winrt::Windows::Media::Devices::Core::IFrameFlashControl
    {
        FrameFlashControl(std::nullptr_t) noexcept {}
        FrameFlashControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameFlashControl(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameFocusCapabilities : winrt::Windows::Media::Devices::Core::IFrameFocusCapabilities
    {
        FrameFocusCapabilities(std::nullptr_t) noexcept {}
        FrameFocusCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameFocusCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameFocusControl : winrt::Windows::Media::Devices::Core::IFrameFocusControl
    {
        FrameFocusControl(std::nullptr_t) noexcept {}
        FrameFocusControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameFocusControl(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameIsoSpeedCapabilities : winrt::Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities
    {
        FrameIsoSpeedCapabilities(std::nullptr_t) noexcept {}
        FrameIsoSpeedCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FrameIsoSpeedControl : winrt::Windows::Media::Devices::Core::IFrameIsoSpeedControl
    {
        FrameIsoSpeedControl(std::nullptr_t) noexcept {}
        FrameIsoSpeedControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IFrameIsoSpeedControl(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES VariablePhotoSequenceController : winrt::Windows::Media::Devices::Core::IVariablePhotoSequenceController
    {
        VariablePhotoSequenceController(std::nullptr_t) noexcept {}
        VariablePhotoSequenceController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Devices::Core::IVariablePhotoSequenceController(ptr, take_ownership_from_abi) {}
    };
}
#endif
