// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.System.Update.h"


namespace py::cpp::Windows::System::Update
{
    struct module_state
    {
        PyObject* type_SystemUpdateAttentionRequiredReason;
        PyObject* type_SystemUpdateItemState;
        PyObject* type_SystemUpdateManagerState;
        PyObject* type_SystemUpdateStartInstallAction;
        PyTypeObject* type_SystemUpdateItem;
        PyTypeObject* type_SystemUpdateLastErrorInfo;
        PyTypeObject* type_SystemUpdateManager;
    };

    static PyObject* register_SystemUpdateAttentionRequiredReason(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_SystemUpdateAttentionRequiredReason)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_SystemUpdateAttentionRequiredReason = type;
        Py_INCREF(state->type_SystemUpdateAttentionRequiredReason);


        Py_RETURN_NONE;
    }

    static PyObject* register_SystemUpdateItemState(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_SystemUpdateItemState)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_SystemUpdateItemState = type;
        Py_INCREF(state->type_SystemUpdateItemState);


        Py_RETURN_NONE;
    }

    static PyObject* register_SystemUpdateManagerState(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_SystemUpdateManagerState)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_SystemUpdateManagerState = type;
        Py_INCREF(state->type_SystemUpdateManagerState);


        Py_RETURN_NONE;
    }

    static PyObject* register_SystemUpdateStartInstallAction(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_SystemUpdateStartInstallAction)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_SystemUpdateStartInstallAction = type;
        Py_INCREF(state->type_SystemUpdateStartInstallAction);


        Py_RETURN_NONE;
    }

    // ----- SystemUpdateItem class --------------------
    constexpr const char* const type_name_SystemUpdateItem = "SystemUpdateItem";

    static PyObject* _new_SystemUpdateItem(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_SystemUpdateItem);
        return nullptr;
    }

    static void _dealloc_SystemUpdateItem(py::wrapper::Windows::System::Update::SystemUpdateItem* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* SystemUpdateItem_get_Description(py::wrapper::Windows::System::Update::SystemUpdateItem* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Description());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateItem_get_DownloadProgress(py::wrapper::Windows::System::Update::SystemUpdateItem* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DownloadProgress());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateItem_get_ExtendedError(py::wrapper::Windows::System::Update::SystemUpdateItem* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ExtendedError());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateItem_get_Id(py::wrapper::Windows::System::Update::SystemUpdateItem* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Id());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateItem_get_InstallProgress(py::wrapper::Windows::System::Update::SystemUpdateItem* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.InstallProgress());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateItem_get_Revision(py::wrapper::Windows::System::Update::SystemUpdateItem* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Revision());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateItem_get_State(py::wrapper::Windows::System::Update::SystemUpdateItem* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.State());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateItem_get_Title(py::wrapper::Windows::System::Update::SystemUpdateItem* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Title());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_SystemUpdateItem(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Update::SystemUpdateItem>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_SystemUpdateItem[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_SystemUpdateItem), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_SystemUpdateItem[] = {
        { "description", reinterpret_cast<getter>(SystemUpdateItem_get_Description), nullptr, nullptr, nullptr },
        { "download_progress", reinterpret_cast<getter>(SystemUpdateItem_get_DownloadProgress), nullptr, nullptr, nullptr },
        { "extended_error", reinterpret_cast<getter>(SystemUpdateItem_get_ExtendedError), nullptr, nullptr, nullptr },
        { "id", reinterpret_cast<getter>(SystemUpdateItem_get_Id), nullptr, nullptr, nullptr },
        { "install_progress", reinterpret_cast<getter>(SystemUpdateItem_get_InstallProgress), nullptr, nullptr, nullptr },
        { "revision", reinterpret_cast<getter>(SystemUpdateItem_get_Revision), nullptr, nullptr, nullptr },
        { "state", reinterpret_cast<getter>(SystemUpdateItem_get_State), nullptr, nullptr, nullptr },
        { "title", reinterpret_cast<getter>(SystemUpdateItem_get_Title), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_SystemUpdateItem[] = 
    {
        { Py_tp_new, _new_SystemUpdateItem },
        { Py_tp_dealloc, _dealloc_SystemUpdateItem },
        { Py_tp_methods, _methods_SystemUpdateItem },
        { Py_tp_getset, _getset_SystemUpdateItem },
        { },
    };

    static PyType_Spec type_spec_SystemUpdateItem =
    {
        "_winsdk_Windows_System_Update.SystemUpdateItem",
        sizeof(py::wrapper::Windows::System::Update::SystemUpdateItem),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_SystemUpdateItem
    };

    // ----- SystemUpdateLastErrorInfo class --------------------
    constexpr const char* const type_name_SystemUpdateLastErrorInfo = "SystemUpdateLastErrorInfo";

    static PyObject* _new_SystemUpdateLastErrorInfo(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_SystemUpdateLastErrorInfo);
        return nullptr;
    }

    static void _dealloc_SystemUpdateLastErrorInfo(py::wrapper::Windows::System::Update::SystemUpdateLastErrorInfo* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* SystemUpdateLastErrorInfo_get_ExtendedError(py::wrapper::Windows::System::Update::SystemUpdateLastErrorInfo* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ExtendedError());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateLastErrorInfo_get_IsInteractive(py::wrapper::Windows::System::Update::SystemUpdateLastErrorInfo* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.IsInteractive());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateLastErrorInfo_get_State(py::wrapper::Windows::System::Update::SystemUpdateLastErrorInfo* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.State());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_SystemUpdateLastErrorInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Update::SystemUpdateLastErrorInfo>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_SystemUpdateLastErrorInfo[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_SystemUpdateLastErrorInfo), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_SystemUpdateLastErrorInfo[] = {
        { "extended_error", reinterpret_cast<getter>(SystemUpdateLastErrorInfo_get_ExtendedError), nullptr, nullptr, nullptr },
        { "is_interactive", reinterpret_cast<getter>(SystemUpdateLastErrorInfo_get_IsInteractive), nullptr, nullptr, nullptr },
        { "state", reinterpret_cast<getter>(SystemUpdateLastErrorInfo_get_State), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_SystemUpdateLastErrorInfo[] = 
    {
        { Py_tp_new, _new_SystemUpdateLastErrorInfo },
        { Py_tp_dealloc, _dealloc_SystemUpdateLastErrorInfo },
        { Py_tp_methods, _methods_SystemUpdateLastErrorInfo },
        { Py_tp_getset, _getset_SystemUpdateLastErrorInfo },
        { },
    };

    static PyType_Spec type_spec_SystemUpdateLastErrorInfo =
    {
        "_winsdk_Windows_System_Update.SystemUpdateLastErrorInfo",
        sizeof(py::wrapper::Windows::System::Update::SystemUpdateLastErrorInfo),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_SystemUpdateLastErrorInfo
    };

    // ----- SystemUpdateManager class --------------------
    constexpr const char* const type_name_SystemUpdateManager = "SystemUpdateManager";

    static PyObject* _new_SystemUpdateManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_SystemUpdateManager);
        return nullptr;
    }

    static PyObject* SystemUpdateManager_BlockAutomaticRebootAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::System::Update::SystemUpdateManager::BlockAutomaticRebootAsync(param0));
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

    static PyObject* SystemUpdateManager_GetAutomaticRebootBlockIds(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::System::Update::SystemUpdateManager::GetAutomaticRebootBlockIds());
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

    static PyObject* SystemUpdateManager_GetFlightRing(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::System::Update::SystemUpdateManager::GetFlightRing());
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

    static PyObject* SystemUpdateManager_GetUpdateItems(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::System::Update::SystemUpdateManager::GetUpdateItems());
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

    static PyObject* SystemUpdateManager_IsSupported(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::System::Update::SystemUpdateManager::IsSupported());
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

    static PyObject* SystemUpdateManager_RebootToCompleteInstall(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                winrt::Windows::System::Update::SystemUpdateManager::RebootToCompleteInstall();
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

    static PyObject* SystemUpdateManager_SetFlightRing(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::System::Update::SystemUpdateManager::SetFlightRing(param0));
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

    static PyObject* SystemUpdateManager_StartCancelUpdates(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                winrt::Windows::System::Update::SystemUpdateManager::StartCancelUpdates();
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

    static PyObject* SystemUpdateManager_StartInstall(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::Update::SystemUpdateStartInstallAction>(args, 0);

                winrt::Windows::System::Update::SystemUpdateManager::StartInstall(param0);
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

    static PyObject* SystemUpdateManager_TrySetUserActiveHours(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 1);

                return py::convert(winrt::Windows::System::Update::SystemUpdateManager::TrySetUserActiveHours(param0, param1));
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

    static PyObject* SystemUpdateManager_UnblockAutomaticRebootAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::System::Update::SystemUpdateManager::UnblockAutomaticRebootAsync(param0));
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

    static PyObject* SystemUpdateManager_get_AttentionRequiredReason(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::AttentionRequiredReason());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_DownloadProgress(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::DownloadProgress());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_ExtendedError(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::ExtendedError());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_InstallProgress(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::InstallProgress());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_LastErrorInfo(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::LastErrorInfo());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_LastUpdateCheckTime(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::LastUpdateCheckTime());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_LastUpdateInstallTime(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::LastUpdateInstallTime());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_State(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::State());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_UserActiveHoursEnd(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::UserActiveHoursEnd());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_UserActiveHoursMax(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::UserActiveHoursMax());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_get_UserActiveHoursStart(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::UserActiveHoursStart());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_add_StateChanged(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(winrt::Windows::System::Update::SystemUpdateManager::StateChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemUpdateManager_remove_StateChanged(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            winrt::Windows::System::Update::SystemUpdateManager::StateChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_SystemUpdateManager[] = {
        { "block_automatic_reboot_async", reinterpret_cast<PyCFunction>(SystemUpdateManager_BlockAutomaticRebootAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_automatic_reboot_block_ids", reinterpret_cast<PyCFunction>(SystemUpdateManager_GetAutomaticRebootBlockIds), METH_VARARGS | METH_STATIC, nullptr },
        { "get_flight_ring", reinterpret_cast<PyCFunction>(SystemUpdateManager_GetFlightRing), METH_VARARGS | METH_STATIC, nullptr },
        { "get_update_items", reinterpret_cast<PyCFunction>(SystemUpdateManager_GetUpdateItems), METH_VARARGS | METH_STATIC, nullptr },
        { "is_supported", reinterpret_cast<PyCFunction>(SystemUpdateManager_IsSupported), METH_VARARGS | METH_STATIC, nullptr },
        { "reboot_to_complete_install", reinterpret_cast<PyCFunction>(SystemUpdateManager_RebootToCompleteInstall), METH_VARARGS | METH_STATIC, nullptr },
        { "set_flight_ring", reinterpret_cast<PyCFunction>(SystemUpdateManager_SetFlightRing), METH_VARARGS | METH_STATIC, nullptr },
        { "start_cancel_updates", reinterpret_cast<PyCFunction>(SystemUpdateManager_StartCancelUpdates), METH_VARARGS | METH_STATIC, nullptr },
        { "start_install", reinterpret_cast<PyCFunction>(SystemUpdateManager_StartInstall), METH_VARARGS | METH_STATIC, nullptr },
        { "try_set_user_active_hours", reinterpret_cast<PyCFunction>(SystemUpdateManager_TrySetUserActiveHours), METH_VARARGS | METH_STATIC, nullptr },
        { "unblock_automatic_reboot_async", reinterpret_cast<PyCFunction>(SystemUpdateManager_UnblockAutomaticRebootAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_attention_required_reason", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_AttentionRequiredReason), METH_NOARGS | METH_STATIC, nullptr },
        { "get_download_progress", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_DownloadProgress), METH_NOARGS | METH_STATIC, nullptr },
        { "get_extended_error", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_ExtendedError), METH_NOARGS | METH_STATIC, nullptr },
        { "get_install_progress", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_InstallProgress), METH_NOARGS | METH_STATIC, nullptr },
        { "get_last_error_info", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_LastErrorInfo), METH_NOARGS | METH_STATIC, nullptr },
        { "get_last_update_check_time", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_LastUpdateCheckTime), METH_NOARGS | METH_STATIC, nullptr },
        { "get_last_update_install_time", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_LastUpdateInstallTime), METH_NOARGS | METH_STATIC, nullptr },
        { "get_state", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_State), METH_NOARGS | METH_STATIC, nullptr },
        { "get_user_active_hours_end", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_UserActiveHoursEnd), METH_NOARGS | METH_STATIC, nullptr },
        { "get_user_active_hours_max", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_UserActiveHoursMax), METH_NOARGS | METH_STATIC, nullptr },
        { "get_user_active_hours_start", reinterpret_cast<PyCFunction>(SystemUpdateManager_get_UserActiveHoursStart), METH_NOARGS | METH_STATIC, nullptr },
        { "add_state_changed", reinterpret_cast<PyCFunction>(SystemUpdateManager_add_StateChanged), METH_O | METH_STATIC, nullptr },
        { "remove_state_changed", reinterpret_cast<PyCFunction>(SystemUpdateManager_remove_StateChanged), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_SystemUpdateManager[] = {
        { }
    };

    static PyType_Slot _type_slots_SystemUpdateManager[] = 
    {
        { Py_tp_new, _new_SystemUpdateManager },
        { Py_tp_methods, _methods_SystemUpdateManager },
        { Py_tp_getset, _getset_SystemUpdateManager },
        { },
    };

    static PyType_Spec type_spec_SystemUpdateManager =
    {
        "_winsdk_Windows_System_Update.SystemUpdateManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_SystemUpdateManager
    };

    // ----- Windows.System.Update Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::System::Update");

    static PyMethodDef module_methods[] = {
        {"_register_SystemUpdateAttentionRequiredReason", register_SystemUpdateAttentionRequiredReason, METH_O, "registers type"},
        {"_register_SystemUpdateItemState", register_SystemUpdateItemState, METH_O, "registers type"},
        {"_register_SystemUpdateManagerState", register_SystemUpdateManagerState, METH_O, "registers type"},
        {"_register_SystemUpdateStartInstallAction", register_SystemUpdateStartInstallAction, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_SystemUpdateAttentionRequiredReason);
        Py_VISIT(state->type_SystemUpdateItemState);
        Py_VISIT(state->type_SystemUpdateManagerState);
        Py_VISIT(state->type_SystemUpdateStartInstallAction);
        Py_VISIT(state->type_SystemUpdateItem);
        Py_VISIT(state->type_SystemUpdateLastErrorInfo);
        Py_VISIT(state->type_SystemUpdateManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_SystemUpdateAttentionRequiredReason);
        Py_CLEAR(state->type_SystemUpdateItemState);
        Py_CLEAR(state->type_SystemUpdateManagerState);
        Py_CLEAR(state->type_SystemUpdateStartInstallAction);
        Py_CLEAR(state->type_SystemUpdateItem);
        Py_CLEAR(state->type_SystemUpdateLastErrorInfo);
        Py_CLEAR(state->type_SystemUpdateManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_System_Update",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::System::Update

PyMODINIT_FUNC PyInit__winsdk_Windows_System_Update(void) noexcept
{
    using namespace py::cpp::Windows::System::Update;

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

    state->type_SystemUpdateItem = py::register_python_type(module.get(), type_name_SystemUpdateItem, &type_spec_SystemUpdateItem, bases.get());
    if (!state->type_SystemUpdateItem)
    {
        return nullptr;
    }

    Py_INCREF(state->type_SystemUpdateItem);

    state->type_SystemUpdateLastErrorInfo = py::register_python_type(module.get(), type_name_SystemUpdateLastErrorInfo, &type_spec_SystemUpdateLastErrorInfo, bases.get());
    if (!state->type_SystemUpdateLastErrorInfo)
    {
        return nullptr;
    }

    Py_INCREF(state->type_SystemUpdateLastErrorInfo);

    state->type_SystemUpdateManager = py::register_python_type(module.get(), type_name_SystemUpdateManager, &type_spec_SystemUpdateManager, nullptr);
    if (!state->type_SystemUpdateManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_SystemUpdateManager);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::System::Update::SystemUpdateAttentionRequiredReason>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemUpdateAttentionRequiredReason;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Update::SystemUpdateAttentionRequiredReason is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::System::Update::SystemUpdateItemState>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemUpdateItemState;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Update::SystemUpdateItemState is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::System::Update::SystemUpdateManagerState>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemUpdateManagerState;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Update::SystemUpdateManagerState is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::System::Update::SystemUpdateStartInstallAction>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemUpdateStartInstallAction;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Update::SystemUpdateStartInstallAction is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Update::SystemUpdateItem>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemUpdateItem;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Update::SystemUpdateItem is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Update::SystemUpdateLastErrorInfo>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemUpdateLastErrorInfo;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Update::SystemUpdateLastErrorInfo is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Update::SystemUpdateManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemUpdateManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Update::SystemUpdateManager is not registered");
        return nullptr;
    }

    return python_type;
}
