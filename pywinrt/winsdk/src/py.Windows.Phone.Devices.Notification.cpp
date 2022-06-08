// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#include "pybase.h"
#include "py.Windows.Phone.Devices.Notification.h"


namespace py::cpp::Windows::Phone::Devices::Notification
{
    struct module_state
    {
        PyTypeObject* type_VibrationDevice;
    };

    // ----- VibrationDevice class --------------------
    constexpr const char* const type_name_VibrationDevice = "VibrationDevice";

    static PyObject* _new_VibrationDevice(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_VibrationDevice);
        return nullptr;
    }

    static void _dealloc_VibrationDevice(py::wrapper::Windows::Phone::Devices::Notification::VibrationDevice* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* VibrationDevice_Cancel(py::wrapper::Windows::Phone::Devices::Notification::VibrationDevice* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.Cancel();
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

    static PyObject* VibrationDevice_GetDefault(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Phone::Devices::Notification::VibrationDevice::GetDefault());
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

    static PyObject* VibrationDevice_Vibrate(py::wrapper::Windows::Phone::Devices::Notification::VibrationDevice* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 0);

                self->obj.Vibrate(param0);
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

    static PyObject* _from_VibrationDevice(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Phone::Devices::Notification::VibrationDevice>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_VibrationDevice[] = {
        { "cancel", reinterpret_cast<PyCFunction>(VibrationDevice_Cancel), METH_VARARGS, nullptr },
        { "get_default", reinterpret_cast<PyCFunction>(VibrationDevice_GetDefault), METH_VARARGS | METH_STATIC, nullptr },
        { "vibrate", reinterpret_cast<PyCFunction>(VibrationDevice_Vibrate), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_VibrationDevice), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_VibrationDevice[] = {
        { }
    };

    static PyType_Slot _type_slots_VibrationDevice[] = 
    {
        { Py_tp_new, _new_VibrationDevice },
        { Py_tp_dealloc, _dealloc_VibrationDevice },
        { Py_tp_methods, _methods_VibrationDevice },
        { Py_tp_getset, _getset_VibrationDevice },
        { },
    };

    static PyType_Spec type_spec_VibrationDevice =
    {
        "_winsdk_Windows_Phone_Devices_Notification.VibrationDevice",
        sizeof(py::wrapper::Windows::Phone::Devices::Notification::VibrationDevice),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_VibrationDevice
    };

    // ----- Windows.Phone.Devices.Notification Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Phone::Devices::Notification");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_VibrationDevice);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_VibrationDevice);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Phone_Devices_Notification",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Phone::Devices::Notification

PyMODINIT_FUNC PyInit__winsdk_Windows_Phone_Devices_Notification(void) noexcept
{
    using namespace py::cpp::Windows::Phone::Devices::Notification;

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

    state->type_VibrationDevice = py::register_python_type(module.get(), type_name_VibrationDevice, &type_spec_VibrationDevice, bases.get());
    if (!state->type_VibrationDevice)
    {
        return nullptr;
    }

    Py_INCREF(state->type_VibrationDevice);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Phone::Devices::Notification::VibrationDevice>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Phone::Devices::Notification;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Phone::Devices::Notification");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_VibrationDevice;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Phone::Devices::Notification::VibrationDevice is not registered");
        return nullptr;
    }

    return python_type;
}
