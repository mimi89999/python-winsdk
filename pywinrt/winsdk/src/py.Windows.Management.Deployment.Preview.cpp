// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#include "pybase.h"
#include "py.Windows.Management.Deployment.Preview.h"


namespace py::cpp::Windows::Management::Deployment::Preview
{
    struct module_state
    {
        PyTypeObject* type_ClassicAppManager;
        PyTypeObject* type_InstalledClassicAppInfo;
    };

    // ----- ClassicAppManager class --------------------
    static constexpr const char* const type_name_ClassicAppManager = "ClassicAppManager";

    static PyObject* _new_ClassicAppManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ClassicAppManager);
        return nullptr;
    }

    static PyObject* ClassicAppManager_FindInstalledApp(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Management.Deployment.Preview.ClassicAppManager", L"FindInstalledApp", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Management::Deployment::Preview::ClassicAppManager::FindInstalledApp(param0));
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

    static PyMethodDef _methods_ClassicAppManager[] = {
        { "find_installed_app", reinterpret_cast<PyCFunction>(ClassicAppManager_FindInstalledApp), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ClassicAppManager[] = {
        { }
    };

    static PyType_Slot _type_slots_ClassicAppManager[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_ClassicAppManager) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_ClassicAppManager) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_ClassicAppManager) },
        { },
    };

    static PyType_Spec type_spec_ClassicAppManager =
    {
        "_winsdk_Windows_Management_Deployment_Preview.ClassicAppManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ClassicAppManager
    };

    // ----- InstalledClassicAppInfo class --------------------
    static constexpr const char* const type_name_InstalledClassicAppInfo = "InstalledClassicAppInfo";

    static PyObject* _new_InstalledClassicAppInfo(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_InstalledClassicAppInfo);
        return nullptr;
    }

    static void _dealloc_InstalledClassicAppInfo(py::wrapper::Windows::Management::Deployment::Preview::InstalledClassicAppInfo* self) noexcept
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

    static PyObject* InstalledClassicAppInfo_get_DisplayName(py::wrapper::Windows::Management::Deployment::Preview::InstalledClassicAppInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.Deployment.Preview.InstalledClassicAppInfo", L"DisplayName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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

    static PyObject* InstalledClassicAppInfo_get_DisplayVersion(py::wrapper::Windows::Management::Deployment::Preview::InstalledClassicAppInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Management.Deployment.Preview.InstalledClassicAppInfo", L"DisplayVersion"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DisplayVersion());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_InstalledClassicAppInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_InstalledClassicAppInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_InstalledClassicAppInfo[] = {
        { "_assign_array_", _assign_array_InstalledClassicAppInfo, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_InstalledClassicAppInfo), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_InstalledClassicAppInfo[] = {
        { "display_name", reinterpret_cast<getter>(InstalledClassicAppInfo_get_DisplayName), nullptr, nullptr, nullptr },
        { "display_version", reinterpret_cast<getter>(InstalledClassicAppInfo_get_DisplayVersion), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_InstalledClassicAppInfo[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_InstalledClassicAppInfo) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_InstalledClassicAppInfo) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_InstalledClassicAppInfo) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_InstalledClassicAppInfo) },
        { },
    };

    static PyType_Spec type_spec_InstalledClassicAppInfo =
    {
        "_winsdk_Windows_Management_Deployment_Preview.InstalledClassicAppInfo",
        sizeof(py::wrapper::Windows::Management::Deployment::Preview::InstalledClassicAppInfo),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_InstalledClassicAppInfo
    };

    // ----- Windows.Management.Deployment.Preview Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Management::Deployment::Preview");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_ClassicAppManager);
        Py_VISIT(state->type_InstalledClassicAppInfo);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_ClassicAppManager);
        Py_CLEAR(state->type_InstalledClassicAppInfo);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Management_Deployment_Preview",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Management::Deployment::Preview

PyMODINIT_FUNC PyInit__winsdk_Windows_Management_Deployment_Preview(void) noexcept
{
    using namespace py::cpp::Windows::Management::Deployment::Preview;

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

    state->type_ClassicAppManager = py::register_python_type(module.get(), type_name_ClassicAppManager, &type_spec_ClassicAppManager, nullptr, nullptr);
    if (!state->type_ClassicAppManager)
    {
        return nullptr;
    }

    state->type_InstalledClassicAppInfo = py::register_python_type(module.get(), type_name_InstalledClassicAppInfo, &type_spec_InstalledClassicAppInfo, bases.get(), nullptr);
    if (!state->type_InstalledClassicAppInfo)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::Deployment::Preview::ClassicAppManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management::Deployment::Preview;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management::Deployment::Preview");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ClassicAppManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::Deployment::Preview::ClassicAppManager is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Management::Deployment::Preview;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Management::Deployment::Preview");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_InstalledClassicAppInfo;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo is not registered");
        return nullptr;
    }

    return python_type;
}
