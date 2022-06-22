// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Media.Core.h")
#include "py.Windows.Media.Core.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Media.Transcoding.h>

namespace py::proj::Windows::Media::Transcoding
{}

namespace py::impl::Windows::Media::Transcoding
{}

namespace py::wrapper::Windows::Media::Transcoding
{
    using MediaTranscoder = py::winrt_wrapper<winrt::Windows::Media::Transcoding::MediaTranscoder>;
    using PrepareTranscodeResult = py::winrt_wrapper<winrt::Windows::Media::Transcoding::PrepareTranscodeResult>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Media::Transcoding::MediaVideoProcessingAlgorithm>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Transcoding::TranscodeFailureReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Transcoding::MediaTranscoder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Transcoding::PrepareTranscodeResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
