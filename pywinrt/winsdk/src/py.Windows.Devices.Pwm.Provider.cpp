// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Devices.Pwm.Provider.h"


namespace py::cpp::Windows::Devices::Pwm::Provider
{
    struct module_state
    {
        PyTypeObject* type_IPwmControllerProvider;
        PyTypeObject* type_IPwmProvider;
    };

    // ----- IPwmControllerProvider interface --------------------
    constexpr const char* const type_name_IPwmControllerProvider = "IPwmControllerProvider";

    static PyObject* _new_IPwmControllerProvider(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */)
    {
        py::set_invalid_activation_error(type_name_IPwmControllerProvider);
        return nullptr;
    }

    static void _dealloc_IPwmControllerProvider(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* IPwmControllerProvider_AcquirePin(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);

                self->obj.AcquirePin(param0);
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

    static PyObject* IPwmControllerProvider_DisablePin(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);

                self->obj.DisablePin(param0);
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

    static PyObject* IPwmControllerProvider_EnablePin(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);

                self->obj.EnablePin(param0);
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

    static PyObject* IPwmControllerProvider_ReleasePin(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);

                self->obj.ReleasePin(param0);
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

    static PyObject* IPwmControllerProvider_SetDesiredFrequency(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<double>(args, 0);

                return py::convert(self->obj.SetDesiredFrequency(param0));
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

    static PyObject* IPwmControllerProvider_SetPulseParameters(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);
                auto param1 = py::convert_to<double>(args, 1);
                auto param2 = py::convert_to<bool>(args, 2);

                self->obj.SetPulseParameters(param0, param1, param2);
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

    static PyObject* IPwmControllerProvider_get_ActualFrequency(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ActualFrequency());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IPwmControllerProvider_get_MaxFrequency(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxFrequency());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IPwmControllerProvider_get_MinFrequency(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MinFrequency());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IPwmControllerProvider_get_PinCount(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.PinCount());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_IPwmControllerProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IPwmControllerProvider[] = {
        { "acquire_pin", reinterpret_cast<PyCFunction>(IPwmControllerProvider_AcquirePin), METH_VARARGS, nullptr },
        { "disable_pin", reinterpret_cast<PyCFunction>(IPwmControllerProvider_DisablePin), METH_VARARGS, nullptr },
        { "enable_pin", reinterpret_cast<PyCFunction>(IPwmControllerProvider_EnablePin), METH_VARARGS, nullptr },
        { "release_pin", reinterpret_cast<PyCFunction>(IPwmControllerProvider_ReleasePin), METH_VARARGS, nullptr },
        { "set_desired_frequency", reinterpret_cast<PyCFunction>(IPwmControllerProvider_SetDesiredFrequency), METH_VARARGS, nullptr },
        { "set_pulse_parameters", reinterpret_cast<PyCFunction>(IPwmControllerProvider_SetPulseParameters), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IPwmControllerProvider), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IPwmControllerProvider[] = {
        { "actual_frequency", reinterpret_cast<getter>(IPwmControllerProvider_get_ActualFrequency), nullptr, nullptr, nullptr },
        { "max_frequency", reinterpret_cast<getter>(IPwmControllerProvider_get_MaxFrequency), nullptr, nullptr, nullptr },
        { "min_frequency", reinterpret_cast<getter>(IPwmControllerProvider_get_MinFrequency), nullptr, nullptr, nullptr },
        { "pin_count", reinterpret_cast<getter>(IPwmControllerProvider_get_PinCount), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_IPwmControllerProvider[] = 
    {
        { Py_tp_new, _new_IPwmControllerProvider },
        { Py_tp_dealloc, _dealloc_IPwmControllerProvider },
        { Py_tp_methods, _methods_IPwmControllerProvider },
        { Py_tp_getset, _getset_IPwmControllerProvider },
        { },
    };

    static PyType_Spec type_spec_IPwmControllerProvider =
    {
        "_winsdk_Windows_Devices_Pwm_Provider.IPwmControllerProvider",
        sizeof(py::wrapper::Windows::Devices::Pwm::Provider::IPwmControllerProvider),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IPwmControllerProvider
    };

    // ----- IPwmProvider interface --------------------
    constexpr const char* const type_name_IPwmProvider = "IPwmProvider";

    static PyObject* _new_IPwmProvider(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */)
    {
        py::set_invalid_activation_error(type_name_IPwmProvider);
        return nullptr;
    }

    static void _dealloc_IPwmProvider(py::wrapper::Windows::Devices::Pwm::Provider::IPwmProvider* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* IPwmProvider_GetControllers(py::wrapper::Windows::Devices::Pwm::Provider::IPwmProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.GetControllers());
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

    static PyObject* _from_IPwmProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Pwm::Provider::IPwmProvider>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IPwmProvider[] = {
        { "get_controllers", reinterpret_cast<PyCFunction>(IPwmProvider_GetControllers), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IPwmProvider), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IPwmProvider[] = {
        { }
    };

    static PyType_Slot _type_slots_IPwmProvider[] = 
    {
        { Py_tp_new, _new_IPwmProvider },
        { Py_tp_dealloc, _dealloc_IPwmProvider },
        { Py_tp_methods, _methods_IPwmProvider },
        { Py_tp_getset, _getset_IPwmProvider },
        { },
    };

    static PyType_Spec type_spec_IPwmProvider =
    {
        "_winsdk_Windows_Devices_Pwm_Provider.IPwmProvider",
        sizeof(py::wrapper::Windows::Devices::Pwm::Provider::IPwmProvider),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IPwmProvider
    };

    // ----- Windows.Devices.Pwm.Provider Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Pwm::Provider");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_IPwmControllerProvider);
        Py_VISIT(state->type_IPwmProvider);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_IPwmControllerProvider);
        Py_CLEAR(state->type_IPwmProvider);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Pwm_Provider",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Pwm::Provider

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Pwm_Provider(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Pwm::Provider;

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

    state->type_IPwmControllerProvider = py::register_python_type(module.get(), type_name_IPwmControllerProvider, &type_spec_IPwmControllerProvider, bases.get());
    if (!state->type_IPwmControllerProvider)
    {
        return nullptr;
    }

    Py_INCREF(state->type_IPwmControllerProvider);

    state->type_IPwmProvider = py::register_python_type(module.get(), type_name_IPwmProvider, &type_spec_IPwmProvider, bases.get());
    if (!state->type_IPwmProvider)
    {
        return nullptr;
    }

    Py_INCREF(state->type_IPwmProvider);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Pwm::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Pwm::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IPwmControllerProvider;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Pwm::Provider::IPwmProvider>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Pwm::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Pwm::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IPwmProvider;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Pwm::Provider::IPwmProvider is not registered");
        return nullptr;
    }

    return python_type;
}
