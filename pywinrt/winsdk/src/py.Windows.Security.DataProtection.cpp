// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Security.DataProtection.h"


namespace py::cpp::Windows::Security::DataProtection
{
    struct module_state
    {
        PyObject* type_UserDataAvailability;
        PyObject* type_UserDataBufferUnprotectStatus;
        PyObject* type_UserDataStorageItemProtectionStatus;
        PyTypeObject* type_UserDataAvailabilityStateChangedEventArgs;
        PyTypeObject* type_UserDataBufferUnprotectResult;
        PyTypeObject* type_UserDataProtectionManager;
        PyTypeObject* type_UserDataStorageItemProtectionInfo;
    };

    static PyObject* register_UserDataAvailability(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_UserDataAvailability)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_UserDataAvailability = type;
        Py_INCREF(state->type_UserDataAvailability);


        Py_RETURN_NONE;
    }

    static PyObject* register_UserDataBufferUnprotectStatus(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_UserDataBufferUnprotectStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_UserDataBufferUnprotectStatus = type;
        Py_INCREF(state->type_UserDataBufferUnprotectStatus);


        Py_RETURN_NONE;
    }

    static PyObject* register_UserDataStorageItemProtectionStatus(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_UserDataStorageItemProtectionStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_UserDataStorageItemProtectionStatus = type;
        Py_INCREF(state->type_UserDataStorageItemProtectionStatus);


        Py_RETURN_NONE;
    }

    // ----- UserDataAvailabilityStateChangedEventArgs class --------------------
    constexpr const char* const type_name_UserDataAvailabilityStateChangedEventArgs = "UserDataAvailabilityStateChangedEventArgs";

    static PyObject* _new_UserDataAvailabilityStateChangedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_UserDataAvailabilityStateChangedEventArgs);
        return nullptr;
    }

    static void _dealloc_UserDataAvailabilityStateChangedEventArgs(py::wrapper::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* UserDataAvailabilityStateChangedEventArgs_GetDeferral(py::wrapper::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.GetDeferral());
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

    static PyObject* _from_UserDataAvailabilityStateChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_UserDataAvailabilityStateChangedEventArgs[] = {
        { "get_deferral", reinterpret_cast<PyCFunction>(UserDataAvailabilityStateChangedEventArgs_GetDeferral), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_UserDataAvailabilityStateChangedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_UserDataAvailabilityStateChangedEventArgs[] = {
        { }
    };

    static PyType_Slot _type_slots_UserDataAvailabilityStateChangedEventArgs[] = 
    {
        { Py_tp_new, _new_UserDataAvailabilityStateChangedEventArgs },
        { Py_tp_dealloc, _dealloc_UserDataAvailabilityStateChangedEventArgs },
        { Py_tp_methods, _methods_UserDataAvailabilityStateChangedEventArgs },
        { Py_tp_getset, _getset_UserDataAvailabilityStateChangedEventArgs },
        { },
    };

    static PyType_Spec type_spec_UserDataAvailabilityStateChangedEventArgs =
    {
        "_winsdk_Windows_Security_DataProtection.UserDataAvailabilityStateChangedEventArgs",
        sizeof(py::wrapper::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_UserDataAvailabilityStateChangedEventArgs
    };

    // ----- UserDataBufferUnprotectResult class --------------------
    constexpr const char* const type_name_UserDataBufferUnprotectResult = "UserDataBufferUnprotectResult";

    static PyObject* _new_UserDataBufferUnprotectResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_UserDataBufferUnprotectResult);
        return nullptr;
    }

    static void _dealloc_UserDataBufferUnprotectResult(py::wrapper::Windows::Security::DataProtection::UserDataBufferUnprotectResult* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* UserDataBufferUnprotectResult_get_Status(py::wrapper::Windows::Security::DataProtection::UserDataBufferUnprotectResult* self, void* /*unused*/) noexcept
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

    static PyObject* UserDataBufferUnprotectResult_get_UnprotectedBuffer(py::wrapper::Windows::Security::DataProtection::UserDataBufferUnprotectResult* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UnprotectedBuffer());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_UserDataBufferUnprotectResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::DataProtection::UserDataBufferUnprotectResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_UserDataBufferUnprotectResult[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_UserDataBufferUnprotectResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_UserDataBufferUnprotectResult[] = {
        { "status", reinterpret_cast<getter>(UserDataBufferUnprotectResult_get_Status), nullptr, nullptr, nullptr },
        { "unprotected_buffer", reinterpret_cast<getter>(UserDataBufferUnprotectResult_get_UnprotectedBuffer), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_UserDataBufferUnprotectResult[] = 
    {
        { Py_tp_new, _new_UserDataBufferUnprotectResult },
        { Py_tp_dealloc, _dealloc_UserDataBufferUnprotectResult },
        { Py_tp_methods, _methods_UserDataBufferUnprotectResult },
        { Py_tp_getset, _getset_UserDataBufferUnprotectResult },
        { },
    };

    static PyType_Spec type_spec_UserDataBufferUnprotectResult =
    {
        "_winsdk_Windows_Security_DataProtection.UserDataBufferUnprotectResult",
        sizeof(py::wrapper::Windows::Security::DataProtection::UserDataBufferUnprotectResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_UserDataBufferUnprotectResult
    };

    // ----- UserDataProtectionManager class --------------------
    constexpr const char* const type_name_UserDataProtectionManager = "UserDataProtectionManager";

    static PyObject* _new_UserDataProtectionManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_UserDataProtectionManager);
        return nullptr;
    }

    static void _dealloc_UserDataProtectionManager(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* UserDataProtectionManager_GetStorageItemProtectionInfoAsync(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::IStorageItem>(args, 0);

                return py::convert(self->obj.GetStorageItemProtectionInfoAsync(param0));
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

    static PyObject* UserDataProtectionManager_IsContinuedDataAvailabilityExpected(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Security::DataProtection::UserDataAvailability>(args, 0);

                return py::convert(self->obj.IsContinuedDataAvailabilityExpected(param0));
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

    static PyObject* UserDataProtectionManager_ProtectBufferAsync(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Security::DataProtection::UserDataAvailability>(args, 1);

                return py::convert(self->obj.ProtectBufferAsync(param0, param1));
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

    static PyObject* UserDataProtectionManager_ProtectStorageItemAsync(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::IStorageItem>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Security::DataProtection::UserDataAvailability>(args, 1);

                return py::convert(self->obj.ProtectStorageItemAsync(param0, param1));
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

    static PyObject* UserDataProtectionManager_TryGetDefault(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Security::DataProtection::UserDataProtectionManager::TryGetDefault());
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

    static PyObject* UserDataProtectionManager_TryGetForUser(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::User>(args, 0);

                return py::convert(winrt::Windows::Security::DataProtection::UserDataProtectionManager::TryGetForUser(param0));
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

    static PyObject* UserDataProtectionManager_UnprotectBufferAsync(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 0);

                return py::convert(self->obj.UnprotectBufferAsync(param0));
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

    static PyObject* UserDataProtectionManager_add_DataAvailabilityStateChanged(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Security::DataProtection::UserDataProtectionManager, winrt::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs>>(arg);

            return py::convert(self->obj.DataAvailabilityStateChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* UserDataProtectionManager_remove_DataAvailabilityStateChanged(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.DataAvailabilityStateChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_UserDataProtectionManager(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::DataProtection::UserDataProtectionManager>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_UserDataProtectionManager[] = {
        { "get_storage_item_protection_info_async", reinterpret_cast<PyCFunction>(UserDataProtectionManager_GetStorageItemProtectionInfoAsync), METH_VARARGS, nullptr },
        { "is_continued_data_availability_expected", reinterpret_cast<PyCFunction>(UserDataProtectionManager_IsContinuedDataAvailabilityExpected), METH_VARARGS, nullptr },
        { "protect_buffer_async", reinterpret_cast<PyCFunction>(UserDataProtectionManager_ProtectBufferAsync), METH_VARARGS, nullptr },
        { "protect_storage_item_async", reinterpret_cast<PyCFunction>(UserDataProtectionManager_ProtectStorageItemAsync), METH_VARARGS, nullptr },
        { "try_get_default", reinterpret_cast<PyCFunction>(UserDataProtectionManager_TryGetDefault), METH_VARARGS | METH_STATIC, nullptr },
        { "try_get_for_user", reinterpret_cast<PyCFunction>(UserDataProtectionManager_TryGetForUser), METH_VARARGS | METH_STATIC, nullptr },
        { "unprotect_buffer_async", reinterpret_cast<PyCFunction>(UserDataProtectionManager_UnprotectBufferAsync), METH_VARARGS, nullptr },
        { "add_data_availability_state_changed", reinterpret_cast<PyCFunction>(UserDataProtectionManager_add_DataAvailabilityStateChanged), METH_O, nullptr },
        { "remove_data_availability_state_changed", reinterpret_cast<PyCFunction>(UserDataProtectionManager_remove_DataAvailabilityStateChanged), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_UserDataProtectionManager), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_UserDataProtectionManager[] = {
        { }
    };

    static PyType_Slot _type_slots_UserDataProtectionManager[] = 
    {
        { Py_tp_new, _new_UserDataProtectionManager },
        { Py_tp_dealloc, _dealloc_UserDataProtectionManager },
        { Py_tp_methods, _methods_UserDataProtectionManager },
        { Py_tp_getset, _getset_UserDataProtectionManager },
        { },
    };

    static PyType_Spec type_spec_UserDataProtectionManager =
    {
        "_winsdk_Windows_Security_DataProtection.UserDataProtectionManager",
        sizeof(py::wrapper::Windows::Security::DataProtection::UserDataProtectionManager),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_UserDataProtectionManager
    };

    // ----- UserDataStorageItemProtectionInfo class --------------------
    constexpr const char* const type_name_UserDataStorageItemProtectionInfo = "UserDataStorageItemProtectionInfo";

    static PyObject* _new_UserDataStorageItemProtectionInfo(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_UserDataStorageItemProtectionInfo);
        return nullptr;
    }

    static void _dealloc_UserDataStorageItemProtectionInfo(py::wrapper::Windows::Security::DataProtection::UserDataStorageItemProtectionInfo* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* UserDataStorageItemProtectionInfo_get_Availability(py::wrapper::Windows::Security::DataProtection::UserDataStorageItemProtectionInfo* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Availability());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_UserDataStorageItemProtectionInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::DataProtection::UserDataStorageItemProtectionInfo>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_UserDataStorageItemProtectionInfo[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_UserDataStorageItemProtectionInfo), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_UserDataStorageItemProtectionInfo[] = {
        { "availability", reinterpret_cast<getter>(UserDataStorageItemProtectionInfo_get_Availability), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_UserDataStorageItemProtectionInfo[] = 
    {
        { Py_tp_new, _new_UserDataStorageItemProtectionInfo },
        { Py_tp_dealloc, _dealloc_UserDataStorageItemProtectionInfo },
        { Py_tp_methods, _methods_UserDataStorageItemProtectionInfo },
        { Py_tp_getset, _getset_UserDataStorageItemProtectionInfo },
        { },
    };

    static PyType_Spec type_spec_UserDataStorageItemProtectionInfo =
    {
        "_winsdk_Windows_Security_DataProtection.UserDataStorageItemProtectionInfo",
        sizeof(py::wrapper::Windows::Security::DataProtection::UserDataStorageItemProtectionInfo),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_UserDataStorageItemProtectionInfo
    };

    // ----- Windows.Security.DataProtection Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Security::DataProtection");

    static PyMethodDef module_methods[] = {
        {"_register_UserDataAvailability", register_UserDataAvailability, METH_O, "registers type"},
        {"_register_UserDataBufferUnprotectStatus", register_UserDataBufferUnprotectStatus, METH_O, "registers type"},
        {"_register_UserDataStorageItemProtectionStatus", register_UserDataStorageItemProtectionStatus, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_UserDataAvailability);
        Py_VISIT(state->type_UserDataBufferUnprotectStatus);
        Py_VISIT(state->type_UserDataStorageItemProtectionStatus);
        Py_VISIT(state->type_UserDataAvailabilityStateChangedEventArgs);
        Py_VISIT(state->type_UserDataBufferUnprotectResult);
        Py_VISIT(state->type_UserDataProtectionManager);
        Py_VISIT(state->type_UserDataStorageItemProtectionInfo);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_UserDataAvailability);
        Py_CLEAR(state->type_UserDataBufferUnprotectStatus);
        Py_CLEAR(state->type_UserDataStorageItemProtectionStatus);
        Py_CLEAR(state->type_UserDataAvailabilityStateChangedEventArgs);
        Py_CLEAR(state->type_UserDataBufferUnprotectResult);
        Py_CLEAR(state->type_UserDataProtectionManager);
        Py_CLEAR(state->type_UserDataStorageItemProtectionInfo);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Security_DataProtection",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Security::DataProtection

PyMODINIT_FUNC PyInit__winsdk_Windows_Security_DataProtection(void) noexcept
{
    using namespace py::cpp::Windows::Security::DataProtection;

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

    state->type_UserDataAvailabilityStateChangedEventArgs = py::register_python_type(module.get(), type_name_UserDataAvailabilityStateChangedEventArgs, &type_spec_UserDataAvailabilityStateChangedEventArgs, bases.get());
    if (!state->type_UserDataAvailabilityStateChangedEventArgs)
    {
        return nullptr;
    }

    Py_INCREF(state->type_UserDataAvailabilityStateChangedEventArgs);

    state->type_UserDataBufferUnprotectResult = py::register_python_type(module.get(), type_name_UserDataBufferUnprotectResult, &type_spec_UserDataBufferUnprotectResult, bases.get());
    if (!state->type_UserDataBufferUnprotectResult)
    {
        return nullptr;
    }

    Py_INCREF(state->type_UserDataBufferUnprotectResult);

    state->type_UserDataProtectionManager = py::register_python_type(module.get(), type_name_UserDataProtectionManager, &type_spec_UserDataProtectionManager, bases.get());
    if (!state->type_UserDataProtectionManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_UserDataProtectionManager);

    state->type_UserDataStorageItemProtectionInfo = py::register_python_type(module.get(), type_name_UserDataStorageItemProtectionInfo, &type_spec_UserDataStorageItemProtectionInfo, bases.get());
    if (!state->type_UserDataStorageItemProtectionInfo)
    {
        return nullptr;
    }

    Py_INCREF(state->type_UserDataStorageItemProtectionInfo);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Security::DataProtection::UserDataAvailability>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::DataProtection;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::DataProtection");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_UserDataAvailability;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::DataProtection::UserDataAvailability is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Security::DataProtection::UserDataBufferUnprotectStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::DataProtection;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::DataProtection");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_UserDataBufferUnprotectStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::DataProtection::UserDataBufferUnprotectStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Security::DataProtection::UserDataStorageItemProtectionStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::DataProtection;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::DataProtection");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_UserDataStorageItemProtectionStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::DataProtection::UserDataStorageItemProtectionStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::DataProtection;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::DataProtection");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_UserDataAvailabilityStateChangedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::DataProtection::UserDataAvailabilityStateChangedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::DataProtection::UserDataBufferUnprotectResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::DataProtection;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::DataProtection");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_UserDataBufferUnprotectResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::DataProtection::UserDataBufferUnprotectResult is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::DataProtection::UserDataProtectionManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::DataProtection;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::DataProtection");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_UserDataProtectionManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::DataProtection::UserDataProtectionManager is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::DataProtection::UserDataStorageItemProtectionInfo>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::DataProtection;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::DataProtection");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_UserDataStorageItemProtectionInfo;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::DataProtection::UserDataStorageItemProtectionInfo is not registered");
        return nullptr;
    }

    return python_type;
}
