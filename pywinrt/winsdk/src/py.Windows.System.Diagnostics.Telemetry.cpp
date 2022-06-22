// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.System.Diagnostics.Telemetry.h"


namespace py::cpp::Windows::System::Diagnostics::Telemetry
{
    struct module_state
    {
        PyObject* type_PlatformTelemetryRegistrationStatus;
        PyTypeObject* type_PlatformTelemetryClient;
        PyTypeObject* type_PlatformTelemetryRegistrationResult;
        PyTypeObject* type_PlatformTelemetryRegistrationSettings;
    };

    static PyObject* register_PlatformTelemetryRegistrationStatus(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_PlatformTelemetryRegistrationStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_PlatformTelemetryRegistrationStatus = type;
        Py_INCREF(state->type_PlatformTelemetryRegistrationStatus);


        Py_RETURN_NONE;
    }

    // ----- PlatformTelemetryClient class --------------------
    constexpr const char* const type_name_PlatformTelemetryClient = "PlatformTelemetryClient";

    static PyObject* _new_PlatformTelemetryClient(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_PlatformTelemetryClient);
        return nullptr;
    }

    static PyObject* PlatformTelemetryClient_Register(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient::Register(param0));
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
                auto param1 = py::convert_to<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>(args, 1);

                return py::convert(winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient::Register(param0, param1));
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

    static PyMethodDef _methods_PlatformTelemetryClient[] = {
        { "register", reinterpret_cast<PyCFunction>(PlatformTelemetryClient_Register), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PlatformTelemetryClient[] = {
        { }
    };

    static PyType_Slot _type_slots_PlatformTelemetryClient[] = 
    {
        { Py_tp_new, _new_PlatformTelemetryClient },
        { Py_tp_methods, _methods_PlatformTelemetryClient },
        { Py_tp_getset, _getset_PlatformTelemetryClient },
        { },
    };

    static PyType_Spec type_spec_PlatformTelemetryClient =
    {
        "_winsdk_Windows_System_Diagnostics_Telemetry.PlatformTelemetryClient",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PlatformTelemetryClient
    };

    // ----- PlatformTelemetryRegistrationResult class --------------------
    constexpr const char* const type_name_PlatformTelemetryRegistrationResult = "PlatformTelemetryRegistrationResult";

    static PyObject* _new_PlatformTelemetryRegistrationResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_PlatformTelemetryRegistrationResult);
        return nullptr;
    }

    static void _dealloc_PlatformTelemetryRegistrationResult(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PlatformTelemetryRegistrationResult_get_Status(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Status());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_PlatformTelemetryRegistrationResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PlatformTelemetryRegistrationResult[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_PlatformTelemetryRegistrationResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PlatformTelemetryRegistrationResult[] = {
        { "status", reinterpret_cast<getter>(PlatformTelemetryRegistrationResult_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PlatformTelemetryRegistrationResult[] = 
    {
        { Py_tp_new, _new_PlatformTelemetryRegistrationResult },
        { Py_tp_dealloc, _dealloc_PlatformTelemetryRegistrationResult },
        { Py_tp_methods, _methods_PlatformTelemetryRegistrationResult },
        { Py_tp_getset, _getset_PlatformTelemetryRegistrationResult },
        { },
    };

    static PyType_Spec type_spec_PlatformTelemetryRegistrationResult =
    {
        "_winsdk_Windows_System_Diagnostics_Telemetry.PlatformTelemetryRegistrationResult",
        sizeof(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PlatformTelemetryRegistrationResult
    };

    // ----- PlatformTelemetryRegistrationSettings class --------------------
    constexpr const char* const type_name_PlatformTelemetryRegistrationSettings = "PlatformTelemetryRegistrationSettings";

    static PyObject* _new_PlatformTelemetryRegistrationSettings(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
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
                winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings instance{  };
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

    static void _dealloc_PlatformTelemetryRegistrationSettings(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* PlatformTelemetryRegistrationSettings_get_UploadQuotaSize(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UploadQuotaSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PlatformTelemetryRegistrationSettings_put_UploadQuotaSize(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<uint32_t>(arg);

            self->obj.UploadQuotaSize(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* PlatformTelemetryRegistrationSettings_get_StorageSize(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.StorageSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PlatformTelemetryRegistrationSettings_put_StorageSize(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<uint32_t>(arg);

            self->obj.StorageSize(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _from_PlatformTelemetryRegistrationSettings(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PlatformTelemetryRegistrationSettings[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_PlatformTelemetryRegistrationSettings), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PlatformTelemetryRegistrationSettings[] = {
        { "upload_quota_size", reinterpret_cast<getter>(PlatformTelemetryRegistrationSettings_get_UploadQuotaSize), reinterpret_cast<setter>(PlatformTelemetryRegistrationSettings_put_UploadQuotaSize), nullptr, nullptr },
        { "storage_size", reinterpret_cast<getter>(PlatformTelemetryRegistrationSettings_get_StorageSize), reinterpret_cast<setter>(PlatformTelemetryRegistrationSettings_put_StorageSize), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PlatformTelemetryRegistrationSettings[] = 
    {
        { Py_tp_new, _new_PlatformTelemetryRegistrationSettings },
        { Py_tp_dealloc, _dealloc_PlatformTelemetryRegistrationSettings },
        { Py_tp_methods, _methods_PlatformTelemetryRegistrationSettings },
        { Py_tp_getset, _getset_PlatformTelemetryRegistrationSettings },
        { },
    };

    static PyType_Spec type_spec_PlatformTelemetryRegistrationSettings =
    {
        "_winsdk_Windows_System_Diagnostics_Telemetry.PlatformTelemetryRegistrationSettings",
        sizeof(py::wrapper::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PlatformTelemetryRegistrationSettings
    };

    // ----- Windows.System.Diagnostics.Telemetry Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::System::Diagnostics::Telemetry");

    static PyMethodDef module_methods[] = {
        {"_register_PlatformTelemetryRegistrationStatus", register_PlatformTelemetryRegistrationStatus, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_PlatformTelemetryRegistrationStatus);
        Py_VISIT(state->type_PlatformTelemetryClient);
        Py_VISIT(state->type_PlatformTelemetryRegistrationResult);
        Py_VISIT(state->type_PlatformTelemetryRegistrationSettings);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_PlatformTelemetryRegistrationStatus);
        Py_CLEAR(state->type_PlatformTelemetryClient);
        Py_CLEAR(state->type_PlatformTelemetryRegistrationResult);
        Py_CLEAR(state->type_PlatformTelemetryRegistrationSettings);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_System_Diagnostics_Telemetry",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::System::Diagnostics::Telemetry

PyMODINIT_FUNC PyInit__winsdk_Windows_System_Diagnostics_Telemetry(void) noexcept
{
    using namespace py::cpp::Windows::System::Diagnostics::Telemetry;

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

    state->type_PlatformTelemetryClient = py::register_python_type(module.get(), type_name_PlatformTelemetryClient, &type_spec_PlatformTelemetryClient, nullptr);
    if (!state->type_PlatformTelemetryClient)
    {
        return nullptr;
    }

    Py_INCREF(state->type_PlatformTelemetryClient);

    state->type_PlatformTelemetryRegistrationResult = py::register_python_type(module.get(), type_name_PlatformTelemetryRegistrationResult, &type_spec_PlatformTelemetryRegistrationResult, bases.get());
    if (!state->type_PlatformTelemetryRegistrationResult)
    {
        return nullptr;
    }

    Py_INCREF(state->type_PlatformTelemetryRegistrationResult);

    state->type_PlatformTelemetryRegistrationSettings = py::register_python_type(module.get(), type_name_PlatformTelemetryRegistrationSettings, &type_spec_PlatformTelemetryRegistrationSettings, bases.get());
    if (!state->type_PlatformTelemetryRegistrationSettings)
    {
        return nullptr;
    }

    Py_INCREF(state->type_PlatformTelemetryRegistrationSettings);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Diagnostics::Telemetry;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Diagnostics::Telemetry");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PlatformTelemetryRegistrationStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Diagnostics::Telemetry;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Diagnostics::Telemetry");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PlatformTelemetryClient;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Diagnostics::Telemetry;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Diagnostics::Telemetry");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PlatformTelemetryRegistrationResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Diagnostics::Telemetry;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Diagnostics::Telemetry");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PlatformTelemetryRegistrationSettings;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings is not registered");
        return nullptr;
    }

    return python_type;
}
