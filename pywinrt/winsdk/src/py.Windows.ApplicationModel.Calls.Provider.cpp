// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.ApplicationModel.Calls.Provider.h"


namespace py::cpp::Windows::ApplicationModel::Calls::Provider
{
    struct module_state
    {
        PyTypeObject* type_PhoneCallOrigin;
        PyTypeObject* type_PhoneCallOriginManager;
    };

    // ----- PhoneCallOrigin class --------------------
    constexpr const char* const type_name_PhoneCallOrigin = "PhoneCallOrigin";

    static PyObject* _new_PhoneCallOrigin(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
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
                winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin instance{  };
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

    static void _dealloc_PhoneCallOrigin(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PhoneCallOrigin_get_Location(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Location());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PhoneCallOrigin_put_Location(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.Location(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* PhoneCallOrigin_get_CategoryDescription(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.CategoryDescription());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PhoneCallOrigin_put_CategoryDescription(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.CategoryDescription(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* PhoneCallOrigin_get_Category(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Category());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PhoneCallOrigin_put_Category(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.Category(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* PhoneCallOrigin_get_DisplayName(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PhoneCallOrigin_put_DisplayName(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.DisplayName(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* PhoneCallOrigin_get_DisplayPicture(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayPicture());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PhoneCallOrigin_put_DisplayPicture(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Storage::StorageFile>(arg);

            self->obj.DisplayPicture(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _from_PhoneCallOrigin(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PhoneCallOrigin[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_PhoneCallOrigin), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PhoneCallOrigin[] = {
        { "location", reinterpret_cast<getter>(PhoneCallOrigin_get_Location), reinterpret_cast<setter>(PhoneCallOrigin_put_Location), nullptr, nullptr },
        { "category_description", reinterpret_cast<getter>(PhoneCallOrigin_get_CategoryDescription), reinterpret_cast<setter>(PhoneCallOrigin_put_CategoryDescription), nullptr, nullptr },
        { "category", reinterpret_cast<getter>(PhoneCallOrigin_get_Category), reinterpret_cast<setter>(PhoneCallOrigin_put_Category), nullptr, nullptr },
        { "display_name", reinterpret_cast<getter>(PhoneCallOrigin_get_DisplayName), reinterpret_cast<setter>(PhoneCallOrigin_put_DisplayName), nullptr, nullptr },
        { "display_picture", reinterpret_cast<getter>(PhoneCallOrigin_get_DisplayPicture), reinterpret_cast<setter>(PhoneCallOrigin_put_DisplayPicture), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PhoneCallOrigin[] = 
    {
        { Py_tp_new, _new_PhoneCallOrigin },
        { Py_tp_dealloc, _dealloc_PhoneCallOrigin },
        { Py_tp_methods, _methods_PhoneCallOrigin },
        { Py_tp_getset, _getset_PhoneCallOrigin },
        { },
    };

    static PyType_Spec type_spec_PhoneCallOrigin =
    {
        "_winsdk_Windows_ApplicationModel_Calls_Provider.PhoneCallOrigin",
        sizeof(py::wrapper::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PhoneCallOrigin
    };

    // ----- PhoneCallOriginManager class --------------------
    constexpr const char* const type_name_PhoneCallOriginManager = "PhoneCallOriginManager";

    static PyObject* _new_PhoneCallOriginManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_PhoneCallOriginManager);
        return nullptr;
    }

    static PyObject* PhoneCallOriginManager_RequestSetAsActiveCallOriginAppAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager::RequestSetAsActiveCallOriginAppAsync());
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

    static PyObject* PhoneCallOriginManager_SetCallOrigin(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>(args, 1);

                winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager::SetCallOrigin(param0, param1);
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

    static PyObject* PhoneCallOriginManager_ShowPhoneCallOriginSettingsUI(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager::ShowPhoneCallOriginSettingsUI();
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

    static PyObject* PhoneCallOriginManager_get_IsCurrentAppActiveCallOriginApp(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager::IsCurrentAppActiveCallOriginApp());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PhoneCallOriginManager_get_IsSupported(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager::IsSupported());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PhoneCallOriginManager[] = {
        { "request_set_as_active_call_origin_app_async", reinterpret_cast<PyCFunction>(PhoneCallOriginManager_RequestSetAsActiveCallOriginAppAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "set_call_origin", reinterpret_cast<PyCFunction>(PhoneCallOriginManager_SetCallOrigin), METH_VARARGS | METH_STATIC, nullptr },
        { "show_phone_call_origin_settings_u_i", reinterpret_cast<PyCFunction>(PhoneCallOriginManager_ShowPhoneCallOriginSettingsUI), METH_VARARGS | METH_STATIC, nullptr },
        { "get_is_current_app_active_call_origin_app", reinterpret_cast<PyCFunction>(PhoneCallOriginManager_get_IsCurrentAppActiveCallOriginApp), METH_NOARGS | METH_STATIC, nullptr },
        { "get_is_supported", reinterpret_cast<PyCFunction>(PhoneCallOriginManager_get_IsSupported), METH_NOARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PhoneCallOriginManager[] = {
        { }
    };

    static PyType_Slot _type_slots_PhoneCallOriginManager[] = 
    {
        { Py_tp_new, _new_PhoneCallOriginManager },
        { Py_tp_methods, _methods_PhoneCallOriginManager },
        { Py_tp_getset, _getset_PhoneCallOriginManager },
        { },
    };

    static PyType_Spec type_spec_PhoneCallOriginManager =
    {
        "_winsdk_Windows_ApplicationModel_Calls_Provider.PhoneCallOriginManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PhoneCallOriginManager
    };

    // ----- Windows.ApplicationModel.Calls.Provider Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::Calls::Provider");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_PhoneCallOrigin);
        Py_VISIT(state->type_PhoneCallOriginManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_PhoneCallOrigin);
        Py_CLEAR(state->type_PhoneCallOriginManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_Calls_Provider",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::Calls::Provider

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_Calls_Provider(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::Calls::Provider;

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

    state->type_PhoneCallOrigin = py::register_python_type(module.get(), type_name_PhoneCallOrigin, &type_spec_PhoneCallOrigin, bases.get());
    if (!state->type_PhoneCallOrigin)
    {
        return nullptr;
    }

    Py_INCREF(state->type_PhoneCallOrigin);

    state->type_PhoneCallOriginManager = py::register_python_type(module.get(), type_name_PhoneCallOriginManager, &type_spec_PhoneCallOriginManager, nullptr);
    if (!state->type_PhoneCallOriginManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_PhoneCallOriginManager);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Calls::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Calls::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PhoneCallOrigin;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Calls::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Calls::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PhoneCallOriginManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager is not registered");
        return nullptr;
    }

    return python_type;
}
