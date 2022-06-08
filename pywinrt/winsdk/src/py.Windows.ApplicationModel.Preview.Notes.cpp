// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#include "pybase.h"
#include "py.Windows.ApplicationModel.Preview.Notes.h"


namespace py::cpp::Windows::ApplicationModel::Preview::Notes
{
    struct module_state
    {
        PyTypeObject* type_NotePlacementChangedPreviewEventArgs;
        PyTypeObject* type_NoteVisibilityChangedPreviewEventArgs;
        PyTypeObject* type_NotesWindowManagerPreview;
        PyTypeObject* type_NotesWindowManagerPreviewShowNoteOptions;
    };

    // ----- NotePlacementChangedPreviewEventArgs class --------------------
    constexpr const char* const type_name_NotePlacementChangedPreviewEventArgs = "NotePlacementChangedPreviewEventArgs";

    static PyObject* _new_NotePlacementChangedPreviewEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_NotePlacementChangedPreviewEventArgs);
        return nullptr;
    }

    static void _dealloc_NotePlacementChangedPreviewEventArgs(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* NotePlacementChangedPreviewEventArgs_get_ViewId(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ViewId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_NotePlacementChangedPreviewEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_NotePlacementChangedPreviewEventArgs[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_NotePlacementChangedPreviewEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_NotePlacementChangedPreviewEventArgs[] = {
        { "view_id", reinterpret_cast<getter>(NotePlacementChangedPreviewEventArgs_get_ViewId), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_NotePlacementChangedPreviewEventArgs[] = 
    {
        { Py_tp_new, _new_NotePlacementChangedPreviewEventArgs },
        { Py_tp_dealloc, _dealloc_NotePlacementChangedPreviewEventArgs },
        { Py_tp_methods, _methods_NotePlacementChangedPreviewEventArgs },
        { Py_tp_getset, _getset_NotePlacementChangedPreviewEventArgs },
        { },
    };

    static PyType_Spec type_spec_NotePlacementChangedPreviewEventArgs =
    {
        "_winsdk_Windows_ApplicationModel_Preview_Notes.NotePlacementChangedPreviewEventArgs",
        sizeof(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_NotePlacementChangedPreviewEventArgs
    };

    // ----- NoteVisibilityChangedPreviewEventArgs class --------------------
    constexpr const char* const type_name_NoteVisibilityChangedPreviewEventArgs = "NoteVisibilityChangedPreviewEventArgs";

    static PyObject* _new_NoteVisibilityChangedPreviewEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_NoteVisibilityChangedPreviewEventArgs);
        return nullptr;
    }

    static void _dealloc_NoteVisibilityChangedPreviewEventArgs(py::wrapper::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* NoteVisibilityChangedPreviewEventArgs_get_IsVisible(py::wrapper::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.IsVisible());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* NoteVisibilityChangedPreviewEventArgs_get_ViewId(py::wrapper::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ViewId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_NoteVisibilityChangedPreviewEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_NoteVisibilityChangedPreviewEventArgs[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_NoteVisibilityChangedPreviewEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_NoteVisibilityChangedPreviewEventArgs[] = {
        { "is_visible", reinterpret_cast<getter>(NoteVisibilityChangedPreviewEventArgs_get_IsVisible), nullptr, nullptr, nullptr },
        { "view_id", reinterpret_cast<getter>(NoteVisibilityChangedPreviewEventArgs_get_ViewId), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_NoteVisibilityChangedPreviewEventArgs[] = 
    {
        { Py_tp_new, _new_NoteVisibilityChangedPreviewEventArgs },
        { Py_tp_dealloc, _dealloc_NoteVisibilityChangedPreviewEventArgs },
        { Py_tp_methods, _methods_NoteVisibilityChangedPreviewEventArgs },
        { Py_tp_getset, _getset_NoteVisibilityChangedPreviewEventArgs },
        { },
    };

    static PyType_Spec type_spec_NoteVisibilityChangedPreviewEventArgs =
    {
        "_winsdk_Windows_ApplicationModel_Preview_Notes.NoteVisibilityChangedPreviewEventArgs",
        sizeof(py::wrapper::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_NoteVisibilityChangedPreviewEventArgs
    };

    // ----- NotesWindowManagerPreview class --------------------
    constexpr const char* const type_name_NotesWindowManagerPreview = "NotesWindowManagerPreview";

    static PyObject* _new_NotesWindowManagerPreview(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_NotesWindowManagerPreview);
        return nullptr;
    }

    static void _dealloc_NotesWindowManagerPreview(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* NotesWindowManagerPreview_GetForCurrentApp(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview::GetForCurrentApp());
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_GetNotePlacement(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);

                return py::convert(self->obj.GetNotePlacement(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_HideNote(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);

                self->obj.HideNote(param0);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_SetFocusToNextView(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.SetFocusToNextView();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_SetFocusToPreviousView(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.SetFocusToPreviousView();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_SetNotesThumbnailAsync(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 0);

                return py::convert(self->obj.SetNotesThumbnailAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_SetThumbnailImageForTaskSwitcherAsync(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::SoftwareBitmap>(args, 0);

                return py::convert(self->obj.SetThumbnailImageForTaskSwitcherAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_ShowNote(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);

                self->obj.ShowNote(param0);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_ShowNoteRelativeTo(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);
                auto param1 = py::convert_to<int32_t>(args, 1);

                self->obj.ShowNoteRelativeTo(param0, param1);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);
                auto param1 = py::convert_to<int32_t>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>(args, 2);

                self->obj.ShowNoteRelativeTo(param0, param1, param2);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_ShowNoteWithPlacement(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 1);

                self->obj.ShowNoteWithPlacement(param0, param1);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>(args, 2);

                self->obj.ShowNoteWithPlacement(param0, param1, param2);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_TrySetNoteSize(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Size>(args, 1);

                return py::convert(self->obj.TrySetNoteSize(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_get_IsScreenLocked(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.IsScreenLocked());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_add_NotePlacementChanged(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>>(arg);

            return py::convert(self->obj.NotePlacementChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_remove_NotePlacementChanged(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.NotePlacementChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_add_NoteVisibilityChanged(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>>(arg);

            return py::convert(self->obj.NoteVisibilityChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_remove_NoteVisibilityChanged(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.NoteVisibilityChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_add_SystemLockStateChanged(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.SystemLockStateChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* NotesWindowManagerPreview_remove_SystemLockStateChanged(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.SystemLockStateChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_NotesWindowManagerPreview(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_NotesWindowManagerPreview[] = {
        { "get_for_current_app", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_GetForCurrentApp), METH_VARARGS | METH_STATIC, nullptr },
        { "get_note_placement", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_GetNotePlacement), METH_VARARGS, nullptr },
        { "hide_note", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_HideNote), METH_VARARGS, nullptr },
        { "set_focus_to_next_view", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_SetFocusToNextView), METH_VARARGS, nullptr },
        { "set_focus_to_previous_view", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_SetFocusToPreviousView), METH_VARARGS, nullptr },
        { "set_notes_thumbnail_async", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_SetNotesThumbnailAsync), METH_VARARGS, nullptr },
        { "set_thumbnail_image_for_task_switcher_async", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_SetThumbnailImageForTaskSwitcherAsync), METH_VARARGS, nullptr },
        { "show_note", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_ShowNote), METH_VARARGS, nullptr },
        { "show_note_relative_to", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_ShowNoteRelativeTo), METH_VARARGS, nullptr },
        { "show_note_with_placement", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_ShowNoteWithPlacement), METH_VARARGS, nullptr },
        { "try_set_note_size", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_TrySetNoteSize), METH_VARARGS, nullptr },
        { "add_note_placement_changed", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_add_NotePlacementChanged), METH_O, nullptr },
        { "remove_note_placement_changed", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_remove_NotePlacementChanged), METH_O, nullptr },
        { "add_note_visibility_changed", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_add_NoteVisibilityChanged), METH_O, nullptr },
        { "remove_note_visibility_changed", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_remove_NoteVisibilityChanged), METH_O, nullptr },
        { "add_system_lock_state_changed", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_add_SystemLockStateChanged), METH_O, nullptr },
        { "remove_system_lock_state_changed", reinterpret_cast<PyCFunction>(NotesWindowManagerPreview_remove_SystemLockStateChanged), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_NotesWindowManagerPreview), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_NotesWindowManagerPreview[] = {
        { "is_screen_locked", reinterpret_cast<getter>(NotesWindowManagerPreview_get_IsScreenLocked), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_NotesWindowManagerPreview[] = 
    {
        { Py_tp_new, _new_NotesWindowManagerPreview },
        { Py_tp_dealloc, _dealloc_NotesWindowManagerPreview },
        { Py_tp_methods, _methods_NotesWindowManagerPreview },
        { Py_tp_getset, _getset_NotesWindowManagerPreview },
        { },
    };

    static PyType_Spec type_spec_NotesWindowManagerPreview =
    {
        "_winsdk_Windows_ApplicationModel_Preview_Notes.NotesWindowManagerPreview",
        sizeof(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_NotesWindowManagerPreview
    };

    // ----- NotesWindowManagerPreviewShowNoteOptions class --------------------
    constexpr const char* const type_name_NotesWindowManagerPreviewShowNoteOptions = "NotesWindowManagerPreviewShowNoteOptions";

    static PyObject* _new_NotesWindowManagerPreviewShowNoteOptions(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        Py_ssize_t arg_count = PyTuple_Size(args);
        if (arg_count == 0)
        {
            try
            {
                winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions instance{  };
                return py::wrap(instance, type);
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static void _dealloc_NotesWindowManagerPreviewShowNoteOptions(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* NotesWindowManagerPreviewShowNoteOptions_get_ShowWithFocus(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ShowWithFocus());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int NotesWindowManagerPreviewShowNoteOptions_put_ShowWithFocus(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<bool>(arg);

            self->obj.ShowWithFocus(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _from_NotesWindowManagerPreviewShowNoteOptions(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_NotesWindowManagerPreviewShowNoteOptions[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_NotesWindowManagerPreviewShowNoteOptions), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_NotesWindowManagerPreviewShowNoteOptions[] = {
        { "show_with_focus", reinterpret_cast<getter>(NotesWindowManagerPreviewShowNoteOptions_get_ShowWithFocus), reinterpret_cast<setter>(NotesWindowManagerPreviewShowNoteOptions_put_ShowWithFocus), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_NotesWindowManagerPreviewShowNoteOptions[] = 
    {
        { Py_tp_new, _new_NotesWindowManagerPreviewShowNoteOptions },
        { Py_tp_dealloc, _dealloc_NotesWindowManagerPreviewShowNoteOptions },
        { Py_tp_methods, _methods_NotesWindowManagerPreviewShowNoteOptions },
        { Py_tp_getset, _getset_NotesWindowManagerPreviewShowNoteOptions },
        { },
    };

    static PyType_Spec type_spec_NotesWindowManagerPreviewShowNoteOptions =
    {
        "_winsdk_Windows_ApplicationModel_Preview_Notes.NotesWindowManagerPreviewShowNoteOptions",
        sizeof(py::wrapper::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_NotesWindowManagerPreviewShowNoteOptions
    };

    // ----- Windows.ApplicationModel.Preview.Notes Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::Preview::Notes");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_NotePlacementChangedPreviewEventArgs);
        Py_VISIT(state->type_NoteVisibilityChangedPreviewEventArgs);
        Py_VISIT(state->type_NotesWindowManagerPreview);
        Py_VISIT(state->type_NotesWindowManagerPreviewShowNoteOptions);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_NotePlacementChangedPreviewEventArgs);
        Py_CLEAR(state->type_NoteVisibilityChangedPreviewEventArgs);
        Py_CLEAR(state->type_NotesWindowManagerPreview);
        Py_CLEAR(state->type_NotesWindowManagerPreviewShowNoteOptions);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_Preview_Notes",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::Preview::Notes

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_Preview_Notes(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::Preview::Notes;

    py::pyobj_handle module{PyModule_Create(&module_def)};

    if (!module)
    {
        return nullptr;
    }

    auto object_type = py::get_python_type<py::Object>();
    if (!object_type)
    {
        return nullptr;
    }

    py::pyobj_handle bases{PyTuple_Pack(1, object_type)};

    if (!bases)
    {
        return nullptr;
    }

    py::pyobj_handle collections_abc_module{PyImport_ImportModule("collections.abc")};

    if (!collections_abc_module)
    {
        return nullptr;
    }

    py::pyobj_handle sequence_type{PyObject_GetAttrString(collections_abc_module.get(), "Sequence")};

    if (!sequence_type)
    {
        return nullptr;
    }

    py::pyobj_handle sequence_bases{PyTuple_Pack(2, object_type, sequence_type.get())};

    if (!sequence_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_sequence_type{PyObject_GetAttrString(collections_abc_module.get(), "MutableSequence")};

    if (!mutable_sequence_type)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_sequence_bases{PyTuple_Pack(2, object_type, mutable_sequence_type.get())};

    if (!mutable_sequence_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mapping_type{PyObject_GetAttrString(collections_abc_module.get(), "Mapping")};

    if (!mapping_type)
    {
        return nullptr;
    }

    py::pyobj_handle mapping_bases{PyTuple_Pack(2, object_type, mapping_type.get())};

    if (!mapping_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_mapping_type{PyObject_GetAttrString(collections_abc_module.get(), "MutableMapping")};

    if (!mutable_mapping_type)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_mapping_bases{PyTuple_Pack(2, object_type, mutable_mapping_type.get())};

    if (!mutable_mapping_bases)
    {
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module.get()));
    assert(state);

    state->type_NotePlacementChangedPreviewEventArgs = py::register_python_type(module.get(), type_name_NotePlacementChangedPreviewEventArgs, &type_spec_NotePlacementChangedPreviewEventArgs, bases.get());
    if (!state->type_NotePlacementChangedPreviewEventArgs)
    {
        return nullptr;
    }

    Py_INCREF(state->type_NotePlacementChangedPreviewEventArgs);

    state->type_NoteVisibilityChangedPreviewEventArgs = py::register_python_type(module.get(), type_name_NoteVisibilityChangedPreviewEventArgs, &type_spec_NoteVisibilityChangedPreviewEventArgs, bases.get());
    if (!state->type_NoteVisibilityChangedPreviewEventArgs)
    {
        return nullptr;
    }

    Py_INCREF(state->type_NoteVisibilityChangedPreviewEventArgs);

    state->type_NotesWindowManagerPreview = py::register_python_type(module.get(), type_name_NotesWindowManagerPreview, &type_spec_NotesWindowManagerPreview, bases.get());
    if (!state->type_NotesWindowManagerPreview)
    {
        return nullptr;
    }

    Py_INCREF(state->type_NotesWindowManagerPreview);

    state->type_NotesWindowManagerPreviewShowNoteOptions = py::register_python_type(module.get(), type_name_NotesWindowManagerPreviewShowNoteOptions, &type_spec_NotesWindowManagerPreviewShowNoteOptions, bases.get());
    if (!state->type_NotesWindowManagerPreviewShowNoteOptions)
    {
        return nullptr;
    }

    Py_INCREF(state->type_NotesWindowManagerPreviewShowNoteOptions);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Preview::Notes;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Preview::Notes");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_NotePlacementChangedPreviewEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Preview::Notes;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Preview::Notes");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_NoteVisibilityChangedPreviewEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Preview::Notes;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Preview::Notes");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_NotesWindowManagerPreview;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Preview::Notes;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Preview::Notes");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_NotesWindowManagerPreviewShowNoteOptions;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions is not registered");
        return nullptr;
    }

    return python_type;
}
