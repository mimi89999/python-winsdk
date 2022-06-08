// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.AppService.h")
#include "py.Windows.ApplicationModel.AppService.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Globalization.h")
#include "py.Windows.Globalization.h"
#endif

#if __has_include("py.Windows.Media.SpeechRecognition.h")
#include "py.Windows.Media.SpeechRecognition.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.ApplicationModel.VoiceCommands.h>

namespace py::proj::Windows::ApplicationModel::VoiceCommands
{}

namespace py::impl::Windows::ApplicationModel::VoiceCommands
{}

namespace py::wrapper::Windows::ApplicationModel::VoiceCommands
{
    using VoiceCommand = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommand>;
    using VoiceCommandCompletedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs>;
    using VoiceCommandConfirmationResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult>;
    using VoiceCommandContentTile = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile>;
    using VoiceCommandDefinition = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition>;
    using VoiceCommandDefinitionManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinitionManager>;
    using VoiceCommandDisambiguationResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult>;
    using VoiceCommandResponse = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>;
    using VoiceCommandServiceConnection = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection>;
    using VoiceCommandUserMessage = py::winrt_wrapper<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletionReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommand>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinitionManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
