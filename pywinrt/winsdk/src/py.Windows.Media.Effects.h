// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Graphics.DirectX.Direct3D11.h")
#include "py.Windows.Graphics.DirectX.Direct3D11.h"
#endif

#if __has_include("py.Windows.Media.h")
#include "py.Windows.Media.h"
#endif

#if __has_include("py.Windows.Media.Capture.h")
#include "py.Windows.Media.Capture.h"
#endif

#if __has_include("py.Windows.Media.Editing.h")
#include "py.Windows.Media.Editing.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Media.Playback.h")
#include "py.Windows.Media.Playback.h"
#endif

#if __has_include("py.Windows.Media.Render.h")
#include "py.Windows.Media.Render.h"
#endif

#if __has_include("py.Windows.Media.Transcoding.h")
#include "py.Windows.Media.Transcoding.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.Media.Effects.h>

namespace py::proj::Windows::Media::Effects
{}

namespace py::impl::Windows::Media::Effects
{}

namespace py::wrapper::Windows::Media::Effects
{
    using AudioCaptureEffectsManager = py::winrt_wrapper<winrt::Windows::Media::Effects::AudioCaptureEffectsManager>;
    using AudioEffect = py::winrt_wrapper<winrt::Windows::Media::Effects::AudioEffect>;
    using AudioEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Effects::AudioEffectDefinition>;
    using AudioEffectsManager = py::winrt_wrapper<winrt::Windows::Media::Effects::AudioEffectsManager>;
    using AudioRenderEffectsManager = py::winrt_wrapper<winrt::Windows::Media::Effects::AudioRenderEffectsManager>;
    using CompositeVideoFrameContext = py::winrt_wrapper<winrt::Windows::Media::Effects::CompositeVideoFrameContext>;
    using ProcessAudioFrameContext = py::winrt_wrapper<winrt::Windows::Media::Effects::ProcessAudioFrameContext>;
    using ProcessVideoFrameContext = py::winrt_wrapper<winrt::Windows::Media::Effects::ProcessVideoFrameContext>;
    using VideoCompositorDefinition = py::winrt_wrapper<winrt::Windows::Media::Effects::VideoCompositorDefinition>;
    using VideoEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Effects::VideoEffectDefinition>;
    using VideoTransformEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Effects::VideoTransformEffectDefinition>;
    using VideoTransformSphericalProjection = py::winrt_wrapper<winrt::Windows::Media::Effects::VideoTransformSphericalProjection>;
    using IAudioEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Effects::IAudioEffectDefinition>;
    using IBasicAudioEffect = py::winrt_wrapper<winrt::Windows::Media::Effects::IBasicAudioEffect>;
    using IBasicVideoEffect = py::winrt_wrapper<winrt::Windows::Media::Effects::IBasicVideoEffect>;
    using IVideoCompositor = py::winrt_wrapper<winrt::Windows::Media::Effects::IVideoCompositor>;
    using IVideoCompositorDefinition = py::winrt_wrapper<winrt::Windows::Media::Effects::IVideoCompositorDefinition>;
    using IVideoEffectDefinition = py::winrt_wrapper<winrt::Windows::Media::Effects::IVideoEffectDefinition>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Media::Effects::AudioEffectType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Effects::MediaEffectClosedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Effects::MediaMemoryTypes>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::AudioCaptureEffectsManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::AudioEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::AudioEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::AudioEffectsManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::AudioRenderEffectsManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::CompositeVideoFrameContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::ProcessAudioFrameContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::ProcessVideoFrameContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::VideoCompositorDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::VideoEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::VideoTransformEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::VideoTransformSphericalProjection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::IAudioEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::IBasicAudioEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::IBasicVideoEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::IVideoCompositor>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::IVideoCompositorDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Effects::IVideoEffectDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
