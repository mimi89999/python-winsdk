// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.ApplicationModel.Preview.Notes.h>

namespace py::proj::Windows::ApplicationModel::Preview::Notes
{}

namespace py::impl::Windows::ApplicationModel::Preview::Notes
{}

namespace py::wrapper::Windows::ApplicationModel::Preview::Notes
{
    using NotePlacementChangedPreviewEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>;
    using NoteVisibilityChangedPreviewEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>;
    using NotesWindowManagerPreview = py::winrt_wrapper<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>;
    using NotesWindowManagerPreviewShowNoteOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
