// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Media.h")
#include "py.Windows.Media.h"
#endif

#if __has_include("py.Windows.Media.Capture.h")
#include "py.Windows.Media.Capture.h"
#endif

#if __has_include("py.Windows.Media.Core.h")
#include "py.Windows.Media.Core.h"
#endif

#if __has_include("py.Windows.Media.Devices.h")
#include "py.Windows.Media.Devices.h"
#endif

#if __has_include("py.Windows.Media.Effects.h")
#include "py.Windows.Media.Effects.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Media.Render.h")
#include "py.Windows.Media.Render.h"
#endif

#if __has_include("py.Windows.Media.Transcoding.h")
#include "py.Windows.Media.Transcoding.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.Media.Audio.h>

namespace py::proj::Windows::Media::Audio
{}

namespace py::impl::Windows::Media::Audio
{}

namespace py::wrapper::Windows::Media::Audio
{
    using AudioDeviceInputNode = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioDeviceInputNode>;
    using AudioDeviceOutputNode = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioDeviceOutputNode>;
    using AudioFileInputNode = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioFileInputNode>;
    using AudioFileOutputNode = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioFileOutputNode>;
    using AudioFrameCompletedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioFrameCompletedEventArgs>;
    using AudioFrameInputNode = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioFrameInputNode>;
    using AudioFrameOutputNode = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioFrameOutputNode>;
    using AudioGraph = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioGraph>;
    using AudioGraphBatchUpdater = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioGraphBatchUpdater>;
    using AudioGraphConnection = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioGraphConnection>;
    using AudioGraphSettings = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioGraphSettings>;
    using AudioGraphUnrecoverableErrorOccurredEventArgs = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs>;
    using AudioNodeEmitter = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioNodeEmitter>;
    using AudioNodeEmitterConeProperties = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioNodeEmitterConeProperties>;
    using AudioNodeEmitterDecayModel = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioNodeEmitterDecayModel>;
    using AudioNodeEmitterNaturalDecayModelProperties = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>;
    using AudioNodeEmitterShape = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioNodeEmitterShape>;
    using AudioNodeListener = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioNodeListener>;
    using AudioPlaybackConnection = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioPlaybackConnection>;
    using AudioPlaybackConnectionOpenResult = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioPlaybackConnectionOpenResult>;
    using AudioStateMonitor = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioStateMonitor>;
    using AudioSubmixNode = py::winrt_wrapper<winrt::Windows::Media::Audio::AudioSubmixNode>;
    using CreateAudioDeviceInputNodeResult = py::winrt_wrapper<winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult>;
    using CreateAudioDeviceOutputNodeResult = py::winrt_wrapper<winrt::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult>;
    using CreateAudioFileInputNodeResult = py::winrt_wrapper<winrt::Windows::Media::Audio::CreateAudioFileInputNodeResult>;
    using CreateAudioFileOutputNodeResult = py::winrt_wrapper<winrt::Windows::Media::Audio::CreateAudioFileOutputNodeResult>;
    using CreateAudioGraphResult = py::winrt_wrapper<winrt::Windows::Media::Audio::CreateAudioGraphResult>;
    using CreateMediaSourceAudioInputNodeResult = py::winrt_wrapper<winrt::Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult>;
    using EchoEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Audio::EchoEffectDefinition>;
    using EqualizerBand = py::winrt_wrapper<winrt::Windows::Media::Audio::EqualizerBand>;
    using EqualizerEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Audio::EqualizerEffectDefinition>;
    using FrameInputNodeQuantumStartedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs>;
    using LimiterEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Audio::LimiterEffectDefinition>;
    using MediaSourceAudioInputNode = py::winrt_wrapper<winrt::Windows::Media::Audio::MediaSourceAudioInputNode>;
    using ReverbEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Audio::ReverbEffectDefinition>;
    using SetDefaultSpatialAudioFormatResult = py::winrt_wrapper<winrt::Windows::Media::Audio::SetDefaultSpatialAudioFormatResult>;
    using SpatialAudioDeviceConfiguration = py::winrt_wrapper<winrt::Windows::Media::Audio::SpatialAudioDeviceConfiguration>;
    using SpatialAudioFormatConfiguration = py::winrt_wrapper<winrt::Windows::Media::Audio::SpatialAudioFormatConfiguration>;
    using SpatialAudioFormatSubtype = py::winrt_wrapper<winrt::Windows::Media::Audio::SpatialAudioFormatSubtype>;
    using IAudioInputNode = py::winrt_wrapper<winrt::Windows::Media::Audio::IAudioInputNode>;
    using IAudioInputNode2 = py::winrt_wrapper<winrt::Windows::Media::Audio::IAudioInputNode2>;
    using IAudioNode = py::winrt_wrapper<winrt::Windows::Media::Audio::IAudioNode>;
    using IAudioNodeWithListener = py::winrt_wrapper<winrt::Windows::Media::Audio::IAudioNodeWithListener>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioDeviceNodeCreationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioFileNodeCreationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioGraphCreationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioGraphUnrecoverableError>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioNodeEmitterDecayKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioNodeEmitterSettings>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioNodeEmitterShapeKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioPlaybackConnectionOpenResultStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::AudioPlaybackConnectionState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::MediaSourceAudioInputNodeCreationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::MixedRealitySpatialAudioFormatPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::QuantumSizeSelectionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::SetDefaultSpatialAudioFormatStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Audio::SpatialAudioModel>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioDeviceInputNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioDeviceOutputNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioFileInputNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioFileOutputNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioFrameCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioFrameInputNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioFrameOutputNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioGraph>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioGraphBatchUpdater>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioGraphConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioGraphSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioNodeEmitter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioNodeEmitterConeProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioNodeEmitterDecayModel>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioNodeEmitterShape>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioNodeListener>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioPlaybackConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioPlaybackConnectionOpenResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioStateMonitor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::AudioSubmixNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::CreateAudioFileInputNodeResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::CreateAudioFileOutputNodeResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::CreateAudioGraphResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::EchoEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::EqualizerBand>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::EqualizerEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::LimiterEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::MediaSourceAudioInputNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::ReverbEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::SetDefaultSpatialAudioFormatResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::SpatialAudioDeviceConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::SpatialAudioFormatConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::SpatialAudioFormatSubtype>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::IAudioInputNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::IAudioNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Audio::IAudioNodeWithListener>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
