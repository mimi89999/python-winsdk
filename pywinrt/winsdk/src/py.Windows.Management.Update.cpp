// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#include "pybase.h"
#include "py.Windows.Management.Update.h"


namespace py::cpp::Windows::Management::Update
{
    struct module_state
    {
        PyTypeObject* type_PreviewBuildsManager;
        PyTypeObject* type_PreviewBuildsState;
    };

    // ----- PreviewBuildsManager class --------------------
    constexpr const char* const type_name_PreviewBuildsManager = "PreviewBuildsManager";

    static PyObject* _new_PreviewBuildsManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_PreviewBuildsManager);
        return nullptr;
    }

    static void _dealloc_PreviewBuildsManager(py::wrapper::Windows::Management::Update::PreviewBuildsManager* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PreviewBuildsManager_GetCurrentState(py::wrapper::Windows::Management::Update::PreviewBuildsManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.GetCurrentState());
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

    static PyObject* PreviewBuildsManager_GetDefault(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Management::Update::PreviewBuildsManager::GetDefault());
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

    static PyObject* PreviewBuildsManager_IsSupported(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Management::Update::PreviewBuildsManager::IsSupported());
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

    static PyObject* PreviewBuildsManager_SyncAsync(py::wrapper::Windows::Management::Update::PreviewBuildsManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.SyncAsync());
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

    static PyObject* PreviewBuildsManager_get_ArePreviewBuildsAllowed(py::wrapper::Windows::Management::Update::PreviewBuildsManager* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ArePreviewBuildsAllowed());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PreviewBuildsManager_put_ArePreviewBuildsAllowed(py::wrapper::Windows::Management::Update::PreviewBuildsManager* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<bool>(arg);

            self->obj.ArePreviewBuildsAllowed(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _from_PreviewBuildsManager(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Management::Update::PreviewBuildsManager>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PreviewBuildsManager[] = {
        { "get_current_state", reinterpret_cast<PyCFunction>(PreviewBuildsManager_GetCurrentState), METH_VARARGS, nullptr },
        { "get_default", reinterpret_cast<PyCFunction>(PreviewBuildsManager_GetDefault), METH_VARARGS | METH_STATIC, nullptr },
        { "is_supported", reinterpret_cast<PyCFunction>(PreviewBuildsManager_IsSupported), METH_VARARGS | METH_STATIC, nullptr },
        { "sync_async", reinterpret_cast<PyCFunction>(PreviewBuildsManager_SyncAsync), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PreviewBuildsManager), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PreviewBuildsManager[] = {
        { "are_preview_builds_allowed", reinterpret_cast<getter>(PreviewBuildsManager_get_ArePreviewBuildsAllowed), reinterpret_cast<setter>(PreviewBuildsManager_put_ArePreviewBuildsAllowed), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PreviewBuildsManager[] = 
    {
        { Py_tp_new, _new_PreviewBuildsManager },
        { Py_tp_dealloc, _dealloc_PreviewBuildsManager },
        { Py_tp_methods, _methods_PreviewBuildsManager },
        { Py_tp_getset, _getset_PreviewBuildsManager },
        { },
    };

    static PyType_Spec type_spec_PreviewBuildsManager =
    {
        "_winsdk_Windows_Management_Update.PreviewBuildsManager",
        sizeof(py::wrapper::Windows::Management::Update::PreviewBuildsManager),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PreviewBuildsManager
    };

    // ----- PreviewBuildsState class --------------------
    constexpr const char* const type_name_PreviewBuildsState = "PreviewBuildsState";

    static PyObject* _new_PreviewBuildsState(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_PreviewBuildsState);
        return nullptr;
    }

    static void _dealloc_PreviewBuildsState(py::wrapper::Windows::Management::Update::PreviewBuildsState* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PreviewBuildsState_get_Properties(py::wrapper::Windows::Management::Update::PreviewBuildsState* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Properties());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_PreviewBuildsState(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Management::Update::PreviewBuildsState>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PreviewBuildsState[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_PreviewBuildsState), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PreviewBuildsState[] = {
        { "properties", reinterpret_cast<getter>(PreviewBuildsState_get_Properties), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PreviewBuildsState[] = 
    {
        { Py_tp_new, _new_PreviewBuildsState },
        { Py_tp_dealloc, _dealloc_PreviewBuildsState },
        { Py_tp_methods, _methods_PreviewBuildsState },
        { Py_tp_getset, _getset_PreviewBuildsState },
        { },
    };

    static PyType_Spec type_spec_PreviewBuildsState =
    {
        "_winsdk_Windows_Management_Update.PreviewBuildsState",
        sizeof(py::wrapper::Windows::Management::Update::PreviewBuildsState),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PreviewBuildsState
    };

    // ----- Windows.Management.Update Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Management::Update");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_PreviewBuildsManager);
        Py_VISIT(state->type_PreviewBuildsState);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_PreviewBuildsManager);
        Py_CLEAR(state->type_PreviewBuildsState);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Management_Update",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Management::Update

PyMODINIT_FUNC PyInit__winsdk_Windows_Management_Update(void) noexcept
{
    using namespace py::cpp::Windows::Management::Update;

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

    state->type_PreviewBuildsManager = py::register_python_type(module.get(), type_name_PreviewBuildsManager, &type_spec_PreviewBuildsManager, bases.get());
    if (!state->type_PreviewBuildsManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_PreviewBuildsManager);

    state->type_PreviewBuildsState = py::register_python_type(module.get(), type_name_PreviewBuildsState, &type_spec_PreviewBuildsState, bases.get());
    if (!state->type_PreviewBuildsState)
    {
        return nullptr;
    }

    Py_INCREF(state->type_PreviewBuildsState);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::Update::PreviewBuildsManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PreviewBuildsManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::Update::PreviewBuildsManager is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::Update::PreviewBuildsState>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management::Update;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management::Update");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PreviewBuildsState;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::Update::PreviewBuildsState is not registered");
        return nullptr;
    }

    return python_type;
}
