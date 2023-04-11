// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Globalization.h")
#include "py.Windows.Globalization.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Globalization.h>
#include <winrt/Windows.Storage.h>

#include <winrt/Windows.Media.SpeechRecognition.h>

namespace py::proj::Windows::Media::SpeechRecognition
{}

namespace py::impl::Windows::Media::SpeechRecognition
{}

namespace py::wrapper::Windows::Media::SpeechRecognition
{
    using SpeechContinuousRecognitionCompletedEventArgs = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>;
    using SpeechContinuousRecognitionResultGeneratedEventArgs = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>;
    using SpeechContinuousRecognitionSession = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>;
    using SpeechRecognitionCompilationResult = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>;
    using SpeechRecognitionGrammarFileConstraint = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>;
    using SpeechRecognitionHypothesis = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>;
    using SpeechRecognitionHypothesisGeneratedEventArgs = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>;
    using SpeechRecognitionListConstraint = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>;
    using SpeechRecognitionQualityDegradingEventArgs = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>;
    using SpeechRecognitionResult = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionResult>;
    using SpeechRecognitionSemanticInterpretation = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>;
    using SpeechRecognitionTopicConstraint = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>;
    using SpeechRecognitionVoiceCommandDefinitionConstraint = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint>;
    using SpeechRecognizer = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognizer>;
    using SpeechRecognizerStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>;
    using SpeechRecognizerTimeouts = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>;
    using SpeechRecognizerUIOptions = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>;
    using VoiceCommandManager = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::VoiceCommandManager>;
    using VoiceCommandSet = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::VoiceCommandSet>;
    using ISpeechRecognitionConstraint = py::winrt_wrapper<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionConfidence> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionScenario> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerState> = "i";


    template<>
    struct py_type<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionAudioProblem>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionConfidence>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionConstraintProbability>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionConstraintType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionResultStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionScenario>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionResultGeneratedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechContinuousRecognitionSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionCompilationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionGrammarFileConstraint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionHypothesis>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionHypothesisGeneratedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionListConstraint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionQualityDegradingEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionSemanticInterpretation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionTopicConstraint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognitionVoiceCommandDefinitionConstraint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognizer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerTimeouts>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::SpeechRecognizerUIOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::VoiceCommandManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::VoiceCommandSet>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::SpeechRecognition::ISpeechRecognitionConstraint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
