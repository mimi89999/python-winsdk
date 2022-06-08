// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

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

#if __has_include("py.Windows.Graphics.DirectX.Direct3D11.h")
#include "py.Windows.Graphics.DirectX.Direct3D11.h"
#endif

#if __has_include("py.Windows.Media.h")
#include "py.Windows.Media.h"
#endif

#if __has_include("py.Windows.Media.Audio.h")
#include "py.Windows.Media.Audio.h"
#endif

#if __has_include("py.Windows.Media.Casting.h")
#include "py.Windows.Media.Casting.h"
#endif

#if __has_include("py.Windows.Media.Core.h")
#include "py.Windows.Media.Core.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Media.Protection.h")
#include "py.Windows.Media.Protection.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.Composition.h")
#include "py.Windows.UI.Composition.h"
#endif

#include <winrt/Windows.Media.Playback.h>

namespace py::proj::Windows::Media::Playback
{}

namespace py::impl::Windows::Media::Playback
{}

namespace py::wrapper::Windows::Media::Playback
{
    using BackgroundMediaPlayer = py::winrt_wrapper<winrt::Windows::Media::Playback::BackgroundMediaPlayer>;
    using CurrentMediaPlaybackItemChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs>;
    using MediaBreak = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaBreak>;
    using MediaBreakEndedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaBreakEndedEventArgs>;
    using MediaBreakManager = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaBreakManager>;
    using MediaBreakSchedule = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaBreakSchedule>;
    using MediaBreakSeekedOverEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs>;
    using MediaBreakSkippedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs>;
    using MediaBreakStartedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaBreakStartedEventArgs>;
    using MediaItemDisplayProperties = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaItemDisplayProperties>;
    using MediaPlaybackAudioTrackList = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackAudioTrackList>;
    using MediaPlaybackCommandManager = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManager>;
    using MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>;
    using MediaPlaybackCommandManagerCommandBehavior = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>;
    using MediaPlaybackCommandManagerFastForwardReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs>;
    using MediaPlaybackCommandManagerNextReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs>;
    using MediaPlaybackCommandManagerPauseReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs>;
    using MediaPlaybackCommandManagerPlayReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs>;
    using MediaPlaybackCommandManagerPositionReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs>;
    using MediaPlaybackCommandManagerPreviousReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs>;
    using MediaPlaybackCommandManagerRateReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs>;
    using MediaPlaybackCommandManagerRewindReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs>;
    using MediaPlaybackCommandManagerShuffleReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs>;
    using MediaPlaybackItem = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackItem>;
    using MediaPlaybackItemError = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackItemError>;
    using MediaPlaybackItemFailedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs>;
    using MediaPlaybackItemOpenedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs>;
    using MediaPlaybackList = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackList>;
    using MediaPlaybackSession = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackSession>;
    using MediaPlaybackSessionBufferingStartedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackSessionBufferingStartedEventArgs>;
    using MediaPlaybackSessionOutputDegradationPolicyState = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState>;
    using MediaPlaybackSphericalVideoProjection = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackSphericalVideoProjection>;
    using MediaPlaybackTimedMetadataTrackList = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList>;
    using MediaPlaybackVideoTrackList = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlaybackVideoTrackList>;
    using MediaPlayer = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlayer>;
    using MediaPlayerDataReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>;
    using MediaPlayerFailedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs>;
    using MediaPlayerRateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs>;
    using MediaPlayerSurface = py::winrt_wrapper<winrt::Windows::Media::Playback::MediaPlayerSurface>;
    using PlaybackMediaMarker = py::winrt_wrapper<winrt::Windows::Media::Playback::PlaybackMediaMarker>;
    using PlaybackMediaMarkerReachedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs>;
    using PlaybackMediaMarkerSequence = py::winrt_wrapper<winrt::Windows::Media::Playback::PlaybackMediaMarkerSequence>;
    using TimedMetadataPresentationModeChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs>;
    using IMediaEnginePlaybackSource = py::winrt_wrapper<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource>;
    using IMediaPlaybackSource = py::winrt_wrapper<winrt::Windows::Media::Playback::IMediaPlaybackSource>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Media::Playback::AutoLoadedDisplayPropertyKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::FailedMediaStreamKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaBreakInsertionMethod>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaCommandEnablingRule>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaPlaybackItemChangedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaPlaybackItemErrorCode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaPlaybackSessionVideoConstrictionReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaPlaybackState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaPlayerAudioCategory>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaPlayerAudioDeviceType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaPlayerError>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::MediaPlayerState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::SphericalVideoProjectionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::StereoscopicVideoRenderMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Playback::TimedMetadataTrackPresentationMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::BackgroundMediaPlayer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaBreak>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaBreakEndedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaBreakManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaBreakSchedule>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaBreakSeekedOverEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaBreakSkippedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaBreakStartedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaItemDisplayProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackAudioTrackList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackItemError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackItemFailedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackSessionBufferingStartedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackSessionOutputDegradationPolicyState>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackSphericalVideoProjection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlaybackVideoTrackList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlayer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlayerDataReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlayerFailedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlayerRateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::MediaPlayerSurface>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::PlaybackMediaMarker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::PlaybackMediaMarkerSequence>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::IMediaEnginePlaybackSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Playback::IMediaPlaybackSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
