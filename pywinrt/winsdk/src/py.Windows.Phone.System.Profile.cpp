// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Phone.System.Profile.h"


namespace py::cpp::Windows::Phone::System::Profile
{
    struct module_state
    {
        PyTypeObject* type_RetailMode;
    };

    // ----- RetailMode class --------------------
    constexpr const char* const type_name_RetailMode = "RetailMode";

    static PyObject* _new_RetailMode(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_RetailMode);
        return nullptr;
    }

    static PyObject* RetailMode_get_RetailModeEnabled(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Phone::System::Profile::RetailMode::RetailModeEnabled());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RetailMode[] = {
        { "get_retail_mode_enabled", reinterpret_cast<PyCFunction>(RetailMode_get_RetailModeEnabled), METH_NOARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_RetailMode[] = {
        { }
    };

    static PyType_Slot _type_slots_RetailMode[] = 
    {
        { Py_tp_new, _new_RetailMode },
        { Py_tp_methods, _methods_RetailMode },
        { Py_tp_getset, _getset_RetailMode },
        { },
    };

    static PyType_Spec type_spec_RetailMode =
    {
        "_winsdk_Windows_Phone_System_Profile.RetailMode",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RetailMode
    };

    // ----- Windows.Phone.System.Profile Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Phone::System::Profile");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_RetailMode);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_RetailMode);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Phone_System_Profile",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Phone::System::Profile

PyMODINIT_FUNC PyInit__winsdk_Windows_Phone_System_Profile(void) noexcept
{
    using namespace py::cpp::Windows::Phone::System::Profile;

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

    state->type_RetailMode = py::register_python_type(module.get(), type_name_RetailMode, &type_spec_RetailMode, nullptr);
    if (!state->type_RetailMode)
    {
        return nullptr;
    }

    Py_INCREF(state->type_RetailMode);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Phone::System::Profile::RetailMode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Phone::System::Profile;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Phone::System::Profile");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_RetailMode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Phone::System::Profile::RetailMode is not registered");
        return nullptr;
    }

    return python_type;
}
