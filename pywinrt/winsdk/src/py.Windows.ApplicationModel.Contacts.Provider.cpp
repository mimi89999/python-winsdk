// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.ApplicationModel.Contacts.Provider.h"


namespace py::cpp::Windows::ApplicationModel::Contacts::Provider
{
    struct module_state
    {
        PyObject* type_AddContactResult;
        PyTypeObject* type_ContactPickerUI;
        PyTypeObject* type_ContactRemovedEventArgs;
    };

    static PyObject* register_AddContactResult(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_AddContactResult)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_AddContactResult = type;
        Py_INCREF(state->type_AddContactResult);


        Py_RETURN_NONE;
    }

    // ----- ContactPickerUI class --------------------
    constexpr const char* const type_name_ContactPickerUI = "ContactPickerUI";

    static PyObject* _new_ContactPickerUI(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ContactPickerUI);
        return nullptr;
    }

    static void _dealloc_ContactPickerUI(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self) noexcept
    {
        auto tp = Py_TYPE(self);

        if (PyType_IS_GC(tp))
        {
            PyObject_GC_UnTrack(self);
        }

        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* ContactPickerUI_AddContact(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"AddContact", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::Contacts::Contact>(args, 0);

                return py::convert(self->obj.AddContact(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"AddContact", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::ApplicationModel::Contacts::Contact>(args, 1);

                return py::convert(self->obj.AddContact(param0, param1));
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

    static PyObject* ContactPickerUI_ContainsContact(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"ContainsContact", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(self->obj.ContainsContact(param0));
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

    static PyObject* ContactPickerUI_RemoveContact(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"RemoveContact", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                self->obj.RemoveContact(param0);
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

    static PyObject* ContactPickerUI_get_DesiredFields(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"DesiredFields"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DesiredFields());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ContactPickerUI_get_SelectionMode(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"SelectionMode"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SelectionMode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ContactPickerUI_get_DesiredFieldsWithContactFieldType(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"DesiredFieldsWithContactFieldType"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DesiredFieldsWithContactFieldType());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ContactPickerUI_add_ContactRemoved(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"ContactRemoved"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, winrt::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs>>(arg);

            return py::convert(self->obj.ContactRemoved(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ContactPickerUI_remove_ContactRemoved(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactPickerUI", L"ContactRemoved"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.ContactRemoved(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_ContactPickerUI(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_ContactPickerUI(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ContactPickerUI[] = {
        { "add_contact", reinterpret_cast<PyCFunction>(ContactPickerUI_AddContact), METH_VARARGS, nullptr },
        { "contains_contact", reinterpret_cast<PyCFunction>(ContactPickerUI_ContainsContact), METH_VARARGS, nullptr },
        { "remove_contact", reinterpret_cast<PyCFunction>(ContactPickerUI_RemoveContact), METH_VARARGS, nullptr },
        { "add_contact_removed", reinterpret_cast<PyCFunction>(ContactPickerUI_add_ContactRemoved), METH_O, nullptr },
        { "remove_contact_removed", reinterpret_cast<PyCFunction>(ContactPickerUI_remove_ContactRemoved), METH_O, nullptr },
        { "_assign_array_", _assign_array_ContactPickerUI, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_ContactPickerUI), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ContactPickerUI[] = {
        { "desired_fields", reinterpret_cast<getter>(ContactPickerUI_get_DesiredFields), nullptr, nullptr, nullptr },
        { "selection_mode", reinterpret_cast<getter>(ContactPickerUI_get_SelectionMode), nullptr, nullptr, nullptr },
        { "desired_fields_with_contact_field_type", reinterpret_cast<getter>(ContactPickerUI_get_DesiredFieldsWithContactFieldType), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_ContactPickerUI[] = 
    {
        { Py_tp_new, _new_ContactPickerUI },
        { Py_tp_dealloc, _dealloc_ContactPickerUI },
        { Py_tp_methods, _methods_ContactPickerUI },
        { Py_tp_getset, _getset_ContactPickerUI },
        { },
    };

    static PyType_Spec type_spec_ContactPickerUI =
    {
        "_winsdk_Windows_ApplicationModel_Contacts_Provider.ContactPickerUI",
        sizeof(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ContactPickerUI
    };

    // ----- ContactRemovedEventArgs class --------------------
    constexpr const char* const type_name_ContactRemovedEventArgs = "ContactRemovedEventArgs";

    static PyObject* _new_ContactRemovedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ContactRemovedEventArgs);
        return nullptr;
    }

    static void _dealloc_ContactRemovedEventArgs(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs* self) noexcept
    {
        auto tp = Py_TYPE(self);

        if (PyType_IS_GC(tp))
        {
            PyObject_GC_UnTrack(self);
        }

        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* ContactRemovedEventArgs_get_Id(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.Contacts.Provider.ContactRemovedEventArgs", L"Id"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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

    static PyObject* _assign_array_ContactRemovedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_ContactRemovedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ContactRemovedEventArgs[] = {
        { "_assign_array_", _assign_array_ContactRemovedEventArgs, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_ContactRemovedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ContactRemovedEventArgs[] = {
        { "id", reinterpret_cast<getter>(ContactRemovedEventArgs_get_Id), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_ContactRemovedEventArgs[] = 
    {
        { Py_tp_new, _new_ContactRemovedEventArgs },
        { Py_tp_dealloc, _dealloc_ContactRemovedEventArgs },
        { Py_tp_methods, _methods_ContactRemovedEventArgs },
        { Py_tp_getset, _getset_ContactRemovedEventArgs },
        { },
    };

    static PyType_Spec type_spec_ContactRemovedEventArgs =
    {
        "_winsdk_Windows_ApplicationModel_Contacts_Provider.ContactRemovedEventArgs",
        sizeof(py::wrapper::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ContactRemovedEventArgs
    };

    // ----- Windows.ApplicationModel.Contacts.Provider Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::Contacts::Provider");

    static PyMethodDef module_methods[] = {
        {"_register_AddContactResult", register_AddContactResult, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_AddContactResult);
        Py_VISIT(state->type_ContactPickerUI);
        Py_VISIT(state->type_ContactRemovedEventArgs);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_AddContactResult);
        Py_CLEAR(state->type_ContactPickerUI);
        Py_CLEAR(state->type_ContactRemovedEventArgs);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_Contacts_Provider",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::Contacts::Provider

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_Contacts_Provider(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::Contacts::Provider;

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

    state->type_ContactPickerUI = py::register_python_type(module.get(), type_name_ContactPickerUI, &type_spec_ContactPickerUI, bases.get(), nullptr);
    if (!state->type_ContactPickerUI)
    {
        return nullptr;
    }

    state->type_ContactRemovedEventArgs = py::register_python_type(module.get(), type_name_ContactRemovedEventArgs, &type_spec_ContactRemovedEventArgs, bases.get(), nullptr);
    if (!state->type_ContactRemovedEventArgs)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::ApplicationModel::Contacts::Provider::AddContactResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Contacts::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Contacts::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_AddContactResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Contacts::Provider::AddContactResult is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Contacts::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Contacts::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ContactPickerUI;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::Contacts::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::Contacts::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ContactRemovedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}
