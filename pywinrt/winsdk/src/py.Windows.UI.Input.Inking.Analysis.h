// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.UI.Input.Inking.h")
#include "py.Windows.UI.Input.Inking.h"
#endif

#include <winrt/Windows.UI.Input.Inking.Analysis.h>

namespace py::proj::Windows::UI::Input::Inking::Analysis
{}

namespace py::impl::Windows::UI::Input::Inking::Analysis
{}

namespace py::wrapper::Windows::UI::Input::Inking::Analysis
{
    using InkAnalysisInkBullet = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>;
    using InkAnalysisInkDrawing = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>;
    using InkAnalysisInkWord = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>;
    using InkAnalysisLine = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisLine>;
    using InkAnalysisListItem = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>;
    using InkAnalysisNode = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNode>;
    using InkAnalysisParagraph = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>;
    using InkAnalysisResult = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisResult>;
    using InkAnalysisRoot = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>;
    using InkAnalysisWritingRegion = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>;
    using InkAnalyzer = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::InkAnalyzer>;
    using IInkAnalysisNode = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>;
    using IInkAnalyzerFactory = py::winrt_wrapper<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisDrawingKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNodeKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisStrokeKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkBullet>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkDrawing>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisInkWord>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisLine>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisListItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisParagraph>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisRoot>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalysisWritingRegion>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::InkAnalyzer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalysisNode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Input::Inking::Analysis::IInkAnalyzerFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
