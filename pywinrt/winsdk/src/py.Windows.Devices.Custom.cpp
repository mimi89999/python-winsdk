// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Devices.Custom.h"


namespace py::cpp::Windows::Devices::Custom
{
    struct module_state
    {
        PyObject* type_DeviceAccessMode;
        PyObject* type_DeviceSharingMode;
        PyObject* type_IOControlAccessMode;
        PyObject* type_IOControlBufferingMethod;
        PyTypeObject* type_CustomDevice;
        PyTypeObject* type_IOControlCode;
        PyTypeObject* type_KnownDeviceTypes;
        PyTypeObject* type_IIOControlCode;
    };

    static PyObject* register_DeviceAccessMode(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DeviceAccessMode)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DeviceAccessMode = type;
        Py_INCREF(state->type_DeviceAccessMode);


        Py_RETURN_NONE;
    }

    static PyObject* register_DeviceSharingMode(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DeviceSharingMode)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DeviceSharingMode = type;
        Py_INCREF(state->type_DeviceSharingMode);


        Py_RETURN_NONE;
    }

    static PyObject* register_IOControlAccessMode(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_IOControlAccessMode)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_IOControlAccessMode = type;
        Py_INCREF(state->type_IOControlAccessMode);


        Py_RETURN_NONE;
    }

    static PyObject* register_IOControlBufferingMethod(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_IOControlBufferingMethod)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_IOControlBufferingMethod = type;
        Py_INCREF(state->type_IOControlBufferingMethod);


        Py_RETURN_NONE;
    }

    // ----- CustomDevice class --------------------
    constexpr const char* const type_name_CustomDevice = "CustomDevice";

    static PyObject* _new_CustomDevice(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CustomDevice);
        return nullptr;
    }

    static void _dealloc_CustomDevice(py::wrapper::Windows::Devices::Custom::CustomDevice* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* CustomDevice_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::Custom::DeviceAccessMode>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Devices::Custom::DeviceSharingMode>(args, 2);

                return py::convert(winrt::Windows::Devices::Custom::CustomDevice::FromIdAsync(param0, param1, param2));
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

    static PyObject* CustomDevice_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(winrt::Windows::Devices::Custom::CustomDevice::GetDeviceSelector(param0));
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

    static PyObject* CustomDevice_SendIOControlAsync(py::wrapper::Windows::Devices::Custom::CustomDevice* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Custom::IIOControlCode>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 2);

                return py::convert(self->obj.SendIOControlAsync(param0, param1, param2));
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

    static PyObject* CustomDevice_TrySendIOControlAsync(py::wrapper::Windows::Devices::Custom::CustomDevice* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Custom::IIOControlCode>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 2);

                return py::convert(self->obj.TrySendIOControlAsync(param0, param1, param2));
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

    static PyObject* CustomDevice_get_InputStream(py::wrapper::Windows::Devices::Custom::CustomDevice* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.InputStream());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* CustomDevice_get_OutputStream(py::wrapper::Windows::Devices::Custom::CustomDevice* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.OutputStream());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_CustomDevice(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Custom::CustomDevice>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CustomDevice[] = {
        { "from_id_async", reinterpret_cast<PyCFunction>(CustomDevice_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(CustomDevice_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "send_i_o_control_async", reinterpret_cast<PyCFunction>(CustomDevice_SendIOControlAsync), METH_VARARGS, nullptr },
        { "try_send_i_o_control_async", reinterpret_cast<PyCFunction>(CustomDevice_TrySendIOControlAsync), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_CustomDevice), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CustomDevice[] = {
        { "input_stream", reinterpret_cast<getter>(CustomDevice_get_InputStream), nullptr, nullptr, nullptr },
        { "output_stream", reinterpret_cast<getter>(CustomDevice_get_OutputStream), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_CustomDevice[] = 
    {
        { Py_tp_new, _new_CustomDevice },
        { Py_tp_dealloc, _dealloc_CustomDevice },
        { Py_tp_methods, _methods_CustomDevice },
        { Py_tp_getset, _getset_CustomDevice },
        { },
    };

    static PyType_Spec type_spec_CustomDevice =
    {
        "_winsdk_Windows_Devices_Custom.CustomDevice",
        sizeof(py::wrapper::Windows::Devices::Custom::CustomDevice),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CustomDevice
    };

    // ----- IOControlCode class --------------------
    constexpr const char* const type_name_IOControlCode = "IOControlCode";

    static PyObject* _new_IOControlCode(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        Py_ssize_t arg_count = PyTuple_Size(args);
        if (arg_count == 4)
        {
            try
            {
                auto param0 = py::convert_to<uint16_t>(args, 0);
                auto param1 = py::convert_to<uint16_t>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Devices::Custom::IOControlAccessMode>(args, 2);
                auto param3 = py::convert_to<winrt::Windows::Devices::Custom::IOControlBufferingMethod>(args, 3);

                winrt::Windows::Devices::Custom::IOControlCode instance{ param0, param1, param2, param3 };
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

    static void _dealloc_IOControlCode(py::wrapper::Windows::Devices::Custom::IOControlCode* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* IOControlCode_get_AccessMode(py::wrapper::Windows::Devices::Custom::IOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.AccessMode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IOControlCode_get_BufferingMethod(py::wrapper::Windows::Devices::Custom::IOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.BufferingMethod());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IOControlCode_get_ControlCode(py::wrapper::Windows::Devices::Custom::IOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ControlCode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IOControlCode_get_DeviceType(py::wrapper::Windows::Devices::Custom::IOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DeviceType());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IOControlCode_get_Function(py::wrapper::Windows::Devices::Custom::IOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Function());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_IOControlCode(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Custom::IOControlCode>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IOControlCode[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_IOControlCode), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IOControlCode[] = {
        { "access_mode", reinterpret_cast<getter>(IOControlCode_get_AccessMode), nullptr, nullptr, nullptr },
        { "buffering_method", reinterpret_cast<getter>(IOControlCode_get_BufferingMethod), nullptr, nullptr, nullptr },
        { "control_code", reinterpret_cast<getter>(IOControlCode_get_ControlCode), nullptr, nullptr, nullptr },
        { "device_type", reinterpret_cast<getter>(IOControlCode_get_DeviceType), nullptr, nullptr, nullptr },
        { "function", reinterpret_cast<getter>(IOControlCode_get_Function), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_IOControlCode[] = 
    {
        { Py_tp_new, _new_IOControlCode },
        { Py_tp_dealloc, _dealloc_IOControlCode },
        { Py_tp_methods, _methods_IOControlCode },
        { Py_tp_getset, _getset_IOControlCode },
        { },
    };

    static PyType_Spec type_spec_IOControlCode =
    {
        "_winsdk_Windows_Devices_Custom.IOControlCode",
        sizeof(py::wrapper::Windows::Devices::Custom::IOControlCode),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IOControlCode
    };

    // ----- KnownDeviceTypes class --------------------
    constexpr const char* const type_name_KnownDeviceTypes = "KnownDeviceTypes";

    static PyObject* _new_KnownDeviceTypes(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_KnownDeviceTypes);
        return nullptr;
    }

    static PyObject* KnownDeviceTypes_get_Unknown(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Custom::KnownDeviceTypes::Unknown());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_KnownDeviceTypes[] = {
        { "get_unknown", reinterpret_cast<PyCFunction>(KnownDeviceTypes_get_Unknown), METH_NOARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_KnownDeviceTypes[] = {
        { }
    };

    static PyType_Slot _type_slots_KnownDeviceTypes[] = 
    {
        { Py_tp_new, _new_KnownDeviceTypes },
        { Py_tp_methods, _methods_KnownDeviceTypes },
        { Py_tp_getset, _getset_KnownDeviceTypes },
        { },
    };

    static PyType_Spec type_spec_KnownDeviceTypes =
    {
        "_winsdk_Windows_Devices_Custom.KnownDeviceTypes",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_KnownDeviceTypes
    };

    // ----- IIOControlCode interface --------------------
    constexpr const char* const type_name_IIOControlCode = "IIOControlCode";

    static PyObject* _new_IIOControlCode(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */)
    {
        py::set_invalid_activation_error(type_name_IIOControlCode);
        return nullptr;
    }

    static void _dealloc_IIOControlCode(py::wrapper::Windows::Devices::Custom::IIOControlCode* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* IIOControlCode_get_AccessMode(py::wrapper::Windows::Devices::Custom::IIOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.AccessMode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IIOControlCode_get_BufferingMethod(py::wrapper::Windows::Devices::Custom::IIOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.BufferingMethod());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IIOControlCode_get_ControlCode(py::wrapper::Windows::Devices::Custom::IIOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ControlCode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IIOControlCode_get_DeviceType(py::wrapper::Windows::Devices::Custom::IIOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DeviceType());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IIOControlCode_get_Function(py::wrapper::Windows::Devices::Custom::IIOControlCode* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Function());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_IIOControlCode(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Custom::IIOControlCode>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IIOControlCode[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_IIOControlCode), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IIOControlCode[] = {
        { "access_mode", reinterpret_cast<getter>(IIOControlCode_get_AccessMode), nullptr, nullptr, nullptr },
        { "buffering_method", reinterpret_cast<getter>(IIOControlCode_get_BufferingMethod), nullptr, nullptr, nullptr },
        { "control_code", reinterpret_cast<getter>(IIOControlCode_get_ControlCode), nullptr, nullptr, nullptr },
        { "device_type", reinterpret_cast<getter>(IIOControlCode_get_DeviceType), nullptr, nullptr, nullptr },
        { "function", reinterpret_cast<getter>(IIOControlCode_get_Function), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_IIOControlCode[] = 
    {
        { Py_tp_new, _new_IIOControlCode },
        { Py_tp_dealloc, _dealloc_IIOControlCode },
        { Py_tp_methods, _methods_IIOControlCode },
        { Py_tp_getset, _getset_IIOControlCode },
        { },
    };

    static PyType_Spec type_spec_IIOControlCode =
    {
        "_winsdk_Windows_Devices_Custom.IIOControlCode",
        sizeof(py::wrapper::Windows::Devices::Custom::IIOControlCode),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IIOControlCode
    };

    // ----- Windows.Devices.Custom Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Custom");

    static PyMethodDef module_methods[] = {
        {"_register_DeviceAccessMode", register_DeviceAccessMode, METH_O, "registers type"},
        {"_register_DeviceSharingMode", register_DeviceSharingMode, METH_O, "registers type"},
        {"_register_IOControlAccessMode", register_IOControlAccessMode, METH_O, "registers type"},
        {"_register_IOControlBufferingMethod", register_IOControlBufferingMethod, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_DeviceAccessMode);
        Py_VISIT(state->type_DeviceSharingMode);
        Py_VISIT(state->type_IOControlAccessMode);
        Py_VISIT(state->type_IOControlBufferingMethod);
        Py_VISIT(state->type_CustomDevice);
        Py_VISIT(state->type_IOControlCode);
        Py_VISIT(state->type_KnownDeviceTypes);
        Py_VISIT(state->type_IIOControlCode);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_DeviceAccessMode);
        Py_CLEAR(state->type_DeviceSharingMode);
        Py_CLEAR(state->type_IOControlAccessMode);
        Py_CLEAR(state->type_IOControlBufferingMethod);
        Py_CLEAR(state->type_CustomDevice);
        Py_CLEAR(state->type_IOControlCode);
        Py_CLEAR(state->type_KnownDeviceTypes);
        Py_CLEAR(state->type_IIOControlCode);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Custom",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Custom

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Custom(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Custom;

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

    state->type_CustomDevice = py::register_python_type(module.get(), type_name_CustomDevice, &type_spec_CustomDevice, bases.get());
    if (!state->type_CustomDevice)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CustomDevice);

    state->type_IOControlCode = py::register_python_type(module.get(), type_name_IOControlCode, &type_spec_IOControlCode, bases.get());
    if (!state->type_IOControlCode)
    {
        return nullptr;
    }

    Py_INCREF(state->type_IOControlCode);

    state->type_KnownDeviceTypes = py::register_python_type(module.get(), type_name_KnownDeviceTypes, &type_spec_KnownDeviceTypes, nullptr);
    if (!state->type_KnownDeviceTypes)
    {
        return nullptr;
    }

    Py_INCREF(state->type_KnownDeviceTypes);

    state->type_IIOControlCode = py::register_python_type(module.get(), type_name_IIOControlCode, &type_spec_IIOControlCode, bases.get());
    if (!state->type_IIOControlCode)
    {
        return nullptr;
    }

    Py_INCREF(state->type_IIOControlCode);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Devices::Custom::DeviceAccessMode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DeviceAccessMode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Custom::DeviceAccessMode is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Custom::DeviceSharingMode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DeviceSharingMode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Custom::DeviceSharingMode is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Custom::IOControlAccessMode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IOControlAccessMode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Custom::IOControlAccessMode is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Custom::IOControlBufferingMethod>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IOControlBufferingMethod;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Custom::IOControlBufferingMethod is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Custom::CustomDevice>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CustomDevice;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Custom::CustomDevice is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Custom::IOControlCode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IOControlCode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Custom::IOControlCode is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Custom::KnownDeviceTypes>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_KnownDeviceTypes;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Custom::KnownDeviceTypes is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Custom::IIOControlCode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IIOControlCode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Custom::IIOControlCode is not registered");
        return nullptr;
    }

    return python_type;
}
