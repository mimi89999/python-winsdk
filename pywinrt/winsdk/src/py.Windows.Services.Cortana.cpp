// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#include "pybase.h"
#include "py.Windows.Services.Cortana.h"


namespace py::cpp::Windows::Services::Cortana
{
    struct module_state
    {
        PyObject* type_CortanaPermission;
        PyObject* type_CortanaPermissionsChangeResult;
        PyTypeObject* type_CortanaActionableInsights;
        PyTypeObject* type_CortanaActionableInsightsOptions;
        PyTypeObject* type_CortanaPermissionsManager;
        PyTypeObject* type_CortanaSettings;
    };

    static PyObject* register_CortanaPermission(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_CortanaPermission)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_CortanaPermission = type;
        Py_INCREF(state->type_CortanaPermission);


        Py_RETURN_NONE;
    }

    static PyObject* register_CortanaPermissionsChangeResult(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_CortanaPermissionsChangeResult)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_CortanaPermissionsChangeResult = type;
        Py_INCREF(state->type_CortanaPermissionsChangeResult);


        Py_RETURN_NONE;
    }

    // ----- CortanaActionableInsights class --------------------
    constexpr const char* const type_name_CortanaActionableInsights = "CortanaActionableInsights";

    static PyObject* _new_CortanaActionableInsights(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CortanaActionableInsights);
        return nullptr;
    }

    static void _dealloc_CortanaActionableInsights(py::wrapper::Windows::Services::Cortana::CortanaActionableInsights* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* CortanaActionableInsights_GetDefault(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Services::Cortana::CortanaActionableInsights::GetDefault());
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

    static PyObject* CortanaActionableInsights_GetForUser(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::User>(args, 0);

                return py::convert(winrt::Windows::Services::Cortana::CortanaActionableInsights::GetForUser(param0));
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

    static PyObject* CortanaActionableInsights_IsAvailableAsync(py::wrapper::Windows::Services::Cortana::CortanaActionableInsights* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.IsAvailableAsync());
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

    static PyObject* CortanaActionableInsights_ShowInsightsAsync(py::wrapper::Windows::Services::Cortana::CortanaActionableInsights* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::DataTransfer::DataPackage>(args, 0);

                return py::convert(self->obj.ShowInsightsAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::DataTransfer::DataPackage>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions>(args, 1);

                return py::convert(self->obj.ShowInsightsAsync(param0, param1));
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

    static PyObject* CortanaActionableInsights_ShowInsightsForImageAsync(py::wrapper::Windows::Services::Cortana::CortanaActionableInsights* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>(args, 0);

                return py::convert(self->obj.ShowInsightsForImageAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions>(args, 1);

                return py::convert(self->obj.ShowInsightsForImageAsync(param0, param1));
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

    static PyObject* CortanaActionableInsights_ShowInsightsForTextAsync(py::wrapper::Windows::Services::Cortana::CortanaActionableInsights* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(self->obj.ShowInsightsForTextAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions>(args, 1);

                return py::convert(self->obj.ShowInsightsForTextAsync(param0, param1));
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

    static PyObject* CortanaActionableInsights_get_User(py::wrapper::Windows::Services::Cortana::CortanaActionableInsights* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.User());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_CortanaActionableInsights(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Services::Cortana::CortanaActionableInsights>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CortanaActionableInsights[] = {
        { "get_default", reinterpret_cast<PyCFunction>(CortanaActionableInsights_GetDefault), METH_VARARGS | METH_STATIC, nullptr },
        { "get_for_user", reinterpret_cast<PyCFunction>(CortanaActionableInsights_GetForUser), METH_VARARGS | METH_STATIC, nullptr },
        { "is_available_async", reinterpret_cast<PyCFunction>(CortanaActionableInsights_IsAvailableAsync), METH_VARARGS, nullptr },
        { "show_insights_async", reinterpret_cast<PyCFunction>(CortanaActionableInsights_ShowInsightsAsync), METH_VARARGS, nullptr },
        { "show_insights_for_image_async", reinterpret_cast<PyCFunction>(CortanaActionableInsights_ShowInsightsForImageAsync), METH_VARARGS, nullptr },
        { "show_insights_for_text_async", reinterpret_cast<PyCFunction>(CortanaActionableInsights_ShowInsightsForTextAsync), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_CortanaActionableInsights), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CortanaActionableInsights[] = {
        { "user", reinterpret_cast<getter>(CortanaActionableInsights_get_User), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_CortanaActionableInsights[] = 
    {
        { Py_tp_new, _new_CortanaActionableInsights },
        { Py_tp_dealloc, _dealloc_CortanaActionableInsights },
        { Py_tp_methods, _methods_CortanaActionableInsights },
        { Py_tp_getset, _getset_CortanaActionableInsights },
        { },
    };

    static PyType_Spec type_spec_CortanaActionableInsights =
    {
        "_winsdk_Windows_Services_Cortana.CortanaActionableInsights",
        sizeof(py::wrapper::Windows::Services::Cortana::CortanaActionableInsights),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CortanaActionableInsights
    };

    // ----- CortanaActionableInsightsOptions class --------------------
    constexpr const char* const type_name_CortanaActionableInsightsOptions = "CortanaActionableInsightsOptions";

    static PyObject* _new_CortanaActionableInsightsOptions(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
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
                winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions instance{  };
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

    static void _dealloc_CortanaActionableInsightsOptions(py::wrapper::Windows::Services::Cortana::CortanaActionableInsightsOptions* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* CortanaActionableInsightsOptions_get_SurroundingText(py::wrapper::Windows::Services::Cortana::CortanaActionableInsightsOptions* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SurroundingText());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int CortanaActionableInsightsOptions_put_SurroundingText(py::wrapper::Windows::Services::Cortana::CortanaActionableInsightsOptions* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.SurroundingText(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* CortanaActionableInsightsOptions_get_ContentSourceWebLink(py::wrapper::Windows::Services::Cortana::CortanaActionableInsightsOptions* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ContentSourceWebLink());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int CortanaActionableInsightsOptions_put_ContentSourceWebLink(py::wrapper::Windows::Services::Cortana::CortanaActionableInsightsOptions* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::Uri>(arg);

            self->obj.ContentSourceWebLink(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _from_CortanaActionableInsightsOptions(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CortanaActionableInsightsOptions[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_CortanaActionableInsightsOptions), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CortanaActionableInsightsOptions[] = {
        { "surrounding_text", reinterpret_cast<getter>(CortanaActionableInsightsOptions_get_SurroundingText), reinterpret_cast<setter>(CortanaActionableInsightsOptions_put_SurroundingText), nullptr, nullptr },
        { "content_source_web_link", reinterpret_cast<getter>(CortanaActionableInsightsOptions_get_ContentSourceWebLink), reinterpret_cast<setter>(CortanaActionableInsightsOptions_put_ContentSourceWebLink), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_CortanaActionableInsightsOptions[] = 
    {
        { Py_tp_new, _new_CortanaActionableInsightsOptions },
        { Py_tp_dealloc, _dealloc_CortanaActionableInsightsOptions },
        { Py_tp_methods, _methods_CortanaActionableInsightsOptions },
        { Py_tp_getset, _getset_CortanaActionableInsightsOptions },
        { },
    };

    static PyType_Spec type_spec_CortanaActionableInsightsOptions =
    {
        "_winsdk_Windows_Services_Cortana.CortanaActionableInsightsOptions",
        sizeof(py::wrapper::Windows::Services::Cortana::CortanaActionableInsightsOptions),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CortanaActionableInsightsOptions
    };

    // ----- CortanaPermissionsManager class --------------------
    constexpr const char* const type_name_CortanaPermissionsManager = "CortanaPermissionsManager";

    static PyObject* _new_CortanaPermissionsManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CortanaPermissionsManager);
        return nullptr;
    }

    static void _dealloc_CortanaPermissionsManager(py::wrapper::Windows::Services::Cortana::CortanaPermissionsManager* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* CortanaPermissionsManager_ArePermissionsGrantedAsync(py::wrapper::Windows::Services::Cortana::CortanaPermissionsManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission>>(args, 0);

                return py::convert(self->obj.ArePermissionsGrantedAsync(param0));
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

    static PyObject* CortanaPermissionsManager_GetDefault(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Services::Cortana::CortanaPermissionsManager::GetDefault());
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

    static PyObject* CortanaPermissionsManager_GrantPermissionsAsync(py::wrapper::Windows::Services::Cortana::CortanaPermissionsManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission>>(args, 0);

                return py::convert(self->obj.GrantPermissionsAsync(param0));
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

    static PyObject* CortanaPermissionsManager_IsSupported(py::wrapper::Windows::Services::Cortana::CortanaPermissionsManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.IsSupported());
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

    static PyObject* CortanaPermissionsManager_RevokePermissionsAsync(py::wrapper::Windows::Services::Cortana::CortanaPermissionsManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Services::Cortana::CortanaPermission>>(args, 0);

                return py::convert(self->obj.RevokePermissionsAsync(param0));
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

    static PyObject* _from_CortanaPermissionsManager(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Services::Cortana::CortanaPermissionsManager>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CortanaPermissionsManager[] = {
        { "are_permissions_granted_async", reinterpret_cast<PyCFunction>(CortanaPermissionsManager_ArePermissionsGrantedAsync), METH_VARARGS, nullptr },
        { "get_default", reinterpret_cast<PyCFunction>(CortanaPermissionsManager_GetDefault), METH_VARARGS | METH_STATIC, nullptr },
        { "grant_permissions_async", reinterpret_cast<PyCFunction>(CortanaPermissionsManager_GrantPermissionsAsync), METH_VARARGS, nullptr },
        { "is_supported", reinterpret_cast<PyCFunction>(CortanaPermissionsManager_IsSupported), METH_VARARGS, nullptr },
        { "revoke_permissions_async", reinterpret_cast<PyCFunction>(CortanaPermissionsManager_RevokePermissionsAsync), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_CortanaPermissionsManager), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CortanaPermissionsManager[] = {
        { }
    };

    static PyType_Slot _type_slots_CortanaPermissionsManager[] = 
    {
        { Py_tp_new, _new_CortanaPermissionsManager },
        { Py_tp_dealloc, _dealloc_CortanaPermissionsManager },
        { Py_tp_methods, _methods_CortanaPermissionsManager },
        { Py_tp_getset, _getset_CortanaPermissionsManager },
        { },
    };

    static PyType_Spec type_spec_CortanaPermissionsManager =
    {
        "_winsdk_Windows_Services_Cortana.CortanaPermissionsManager",
        sizeof(py::wrapper::Windows::Services::Cortana::CortanaPermissionsManager),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CortanaPermissionsManager
    };

    // ----- CortanaSettings class --------------------
    constexpr const char* const type_name_CortanaSettings = "CortanaSettings";

    static PyObject* _new_CortanaSettings(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CortanaSettings);
        return nullptr;
    }

    static void _dealloc_CortanaSettings(py::wrapper::Windows::Services::Cortana::CortanaSettings* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* CortanaSettings_GetDefault(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Services::Cortana::CortanaSettings::GetDefault());
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

    static PyObject* CortanaSettings_IsSupported(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Services::Cortana::CortanaSettings::IsSupported());
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

    static PyObject* CortanaSettings_get_IsVoiceActivationEnabled(py::wrapper::Windows::Services::Cortana::CortanaSettings* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.IsVoiceActivationEnabled());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int CortanaSettings_put_IsVoiceActivationEnabled(py::wrapper::Windows::Services::Cortana::CortanaSettings* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<bool>(arg);

            self->obj.IsVoiceActivationEnabled(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* CortanaSettings_get_HasUserConsentToVoiceActivation(py::wrapper::Windows::Services::Cortana::CortanaSettings* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.HasUserConsentToVoiceActivation());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_CortanaSettings(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Services::Cortana::CortanaSettings>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CortanaSettings[] = {
        { "get_default", reinterpret_cast<PyCFunction>(CortanaSettings_GetDefault), METH_VARARGS | METH_STATIC, nullptr },
        { "is_supported", reinterpret_cast<PyCFunction>(CortanaSettings_IsSupported), METH_VARARGS | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_CortanaSettings), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CortanaSettings[] = {
        { "is_voice_activation_enabled", reinterpret_cast<getter>(CortanaSettings_get_IsVoiceActivationEnabled), reinterpret_cast<setter>(CortanaSettings_put_IsVoiceActivationEnabled), nullptr, nullptr },
        { "has_user_consent_to_voice_activation", reinterpret_cast<getter>(CortanaSettings_get_HasUserConsentToVoiceActivation), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_CortanaSettings[] = 
    {
        { Py_tp_new, _new_CortanaSettings },
        { Py_tp_dealloc, _dealloc_CortanaSettings },
        { Py_tp_methods, _methods_CortanaSettings },
        { Py_tp_getset, _getset_CortanaSettings },
        { },
    };

    static PyType_Spec type_spec_CortanaSettings =
    {
        "_winsdk_Windows_Services_Cortana.CortanaSettings",
        sizeof(py::wrapper::Windows::Services::Cortana::CortanaSettings),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CortanaSettings
    };

    // ----- Windows.Services.Cortana Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Services::Cortana");

    static PyMethodDef module_methods[] = {
        {"_register_CortanaPermission", register_CortanaPermission, METH_O, "registers type"},
        {"_register_CortanaPermissionsChangeResult", register_CortanaPermissionsChangeResult, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_CortanaPermission);
        Py_VISIT(state->type_CortanaPermissionsChangeResult);
        Py_VISIT(state->type_CortanaActionableInsights);
        Py_VISIT(state->type_CortanaActionableInsightsOptions);
        Py_VISIT(state->type_CortanaPermissionsManager);
        Py_VISIT(state->type_CortanaSettings);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_CortanaPermission);
        Py_CLEAR(state->type_CortanaPermissionsChangeResult);
        Py_CLEAR(state->type_CortanaActionableInsights);
        Py_CLEAR(state->type_CortanaActionableInsightsOptions);
        Py_CLEAR(state->type_CortanaPermissionsManager);
        Py_CLEAR(state->type_CortanaSettings);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Services_Cortana",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Services::Cortana

PyMODINIT_FUNC PyInit__winsdk_Windows_Services_Cortana(void) noexcept
{
    using namespace py::cpp::Windows::Services::Cortana;

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

    state->type_CortanaActionableInsights = py::register_python_type(module.get(), type_name_CortanaActionableInsights, &type_spec_CortanaActionableInsights, bases.get());
    if (!state->type_CortanaActionableInsights)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CortanaActionableInsights);

    state->type_CortanaActionableInsightsOptions = py::register_python_type(module.get(), type_name_CortanaActionableInsightsOptions, &type_spec_CortanaActionableInsightsOptions, bases.get());
    if (!state->type_CortanaActionableInsightsOptions)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CortanaActionableInsightsOptions);

    state->type_CortanaPermissionsManager = py::register_python_type(module.get(), type_name_CortanaPermissionsManager, &type_spec_CortanaPermissionsManager, bases.get());
    if (!state->type_CortanaPermissionsManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CortanaPermissionsManager);

    state->type_CortanaSettings = py::register_python_type(module.get(), type_name_CortanaSettings, &type_spec_CortanaSettings, bases.get());
    if (!state->type_CortanaSettings)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CortanaSettings);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Services::Cortana::CortanaPermission>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Cortana;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Cortana");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CortanaPermission;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Cortana::CortanaPermission is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Cortana;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Cortana");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CortanaPermissionsChangeResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Cortana::CortanaPermissionsChangeResult is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Services::Cortana::CortanaActionableInsights>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Cortana;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Cortana");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CortanaActionableInsights;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Cortana::CortanaActionableInsights is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Cortana;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Cortana");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CortanaActionableInsightsOptions;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Services::Cortana::CortanaPermissionsManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Cortana;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Cortana");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CortanaPermissionsManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Cortana::CortanaPermissionsManager is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Services::Cortana::CortanaSettings>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Cortana;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Cortana");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CortanaSettings;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Cortana::CortanaSettings is not registered");
        return nullptr;
    }

    return python_type;
}
