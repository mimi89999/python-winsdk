// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Phone.Media.Devices.h"


namespace py::cpp::Windows::Phone::Media::Devices
{
    struct module_state
    {
        PyObject* type_AudioRoutingEndpoint;
        PyObject* type_AvailableAudioRoutingEndpoints;
        PyTypeObject* type_AudioRoutingManager;
    };

    static PyObject* register_AudioRoutingEndpoint(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_AudioRoutingEndpoint)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_AudioRoutingEndpoint = type;
        Py_INCREF(state->type_AudioRoutingEndpoint);


        Py_RETURN_NONE;
    }

    static PyObject* register_AvailableAudioRoutingEndpoints(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_AvailableAudioRoutingEndpoints)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_AvailableAudioRoutingEndpoints = type;
        Py_INCREF(state->type_AvailableAudioRoutingEndpoints);


        Py_RETURN_NONE;
    }

    // ----- AudioRoutingManager class --------------------
    constexpr const char* const type_name_AudioRoutingManager = "AudioRoutingManager";

    static PyObject* _new_AudioRoutingManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_AudioRoutingManager);
        return nullptr;
    }

    static void _dealloc_AudioRoutingManager(py::wrapper::Windows::Phone::Media::Devices::AudioRoutingManager* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* AudioRoutingManager_GetAudioEndpoint(py::wrapper::Windows::Phone::Media::Devices::AudioRoutingManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.GetAudioEndpoint());
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

    static PyObject* AudioRoutingManager_GetDefault(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Phone::Media::Devices::AudioRoutingManager::GetDefault());
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

    static PyObject* AudioRoutingManager_SetAudioEndpoint(py::wrapper::Windows::Phone::Media::Devices::AudioRoutingManager* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Phone::Media::Devices::AudioRoutingEndpoint>(args, 0);

                self->obj.SetAudioEndpoint(param0);
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

    static PyObject* AudioRoutingManager_get_AvailableAudioEndpoints(py::wrapper::Windows::Phone::Media::Devices::AudioRoutingManager* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.AvailableAudioEndpoints());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* AudioRoutingManager_add_AudioEndpointChanged(py::wrapper::Windows::Phone::Media::Devices::AudioRoutingManager* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Phone::Media::Devices::AudioRoutingManager, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.AudioEndpointChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* AudioRoutingManager_remove_AudioEndpointChanged(py::wrapper::Windows::Phone::Media::Devices::AudioRoutingManager* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.AudioEndpointChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_AudioRoutingManager(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Phone::Media::Devices::AudioRoutingManager>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_AudioRoutingManager[] = {
        { "get_audio_endpoint", reinterpret_cast<PyCFunction>(AudioRoutingManager_GetAudioEndpoint), METH_VARARGS, nullptr },
        { "get_default", reinterpret_cast<PyCFunction>(AudioRoutingManager_GetDefault), METH_VARARGS | METH_STATIC, nullptr },
        { "set_audio_endpoint", reinterpret_cast<PyCFunction>(AudioRoutingManager_SetAudioEndpoint), METH_VARARGS, nullptr },
        { "add_audio_endpoint_changed", reinterpret_cast<PyCFunction>(AudioRoutingManager_add_AudioEndpointChanged), METH_O, nullptr },
        { "remove_audio_endpoint_changed", reinterpret_cast<PyCFunction>(AudioRoutingManager_remove_AudioEndpointChanged), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_AudioRoutingManager), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_AudioRoutingManager[] = {
        { "available_audio_endpoints", reinterpret_cast<getter>(AudioRoutingManager_get_AvailableAudioEndpoints), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_AudioRoutingManager[] = 
    {
        { Py_tp_new, _new_AudioRoutingManager },
        { Py_tp_dealloc, _dealloc_AudioRoutingManager },
        { Py_tp_methods, _methods_AudioRoutingManager },
        { Py_tp_getset, _getset_AudioRoutingManager },
        { },
    };

    static PyType_Spec type_spec_AudioRoutingManager =
    {
        "_winsdk_Windows_Phone_Media_Devices.AudioRoutingManager",
        sizeof(py::wrapper::Windows::Phone::Media::Devices::AudioRoutingManager),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_AudioRoutingManager
    };

    // ----- Windows.Phone.Media.Devices Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Phone::Media::Devices");

    static PyMethodDef module_methods[] = {
        {"_register_AudioRoutingEndpoint", register_AudioRoutingEndpoint, METH_O, "registers type"},
        {"_register_AvailableAudioRoutingEndpoints", register_AvailableAudioRoutingEndpoints, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_AudioRoutingEndpoint);
        Py_VISIT(state->type_AvailableAudioRoutingEndpoints);
        Py_VISIT(state->type_AudioRoutingManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_AudioRoutingEndpoint);
        Py_CLEAR(state->type_AvailableAudioRoutingEndpoints);
        Py_CLEAR(state->type_AudioRoutingManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Phone_Media_Devices",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Phone::Media::Devices

PyMODINIT_FUNC PyInit__winsdk_Windows_Phone_Media_Devices(void) noexcept
{
    using namespace py::cpp::Windows::Phone::Media::Devices;

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

    state->type_AudioRoutingManager = py::register_python_type(module.get(), type_name_AudioRoutingManager, &type_spec_AudioRoutingManager, bases.get());
    if (!state->type_AudioRoutingManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_AudioRoutingManager);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Phone::Media::Devices::AudioRoutingEndpoint>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Phone::Media::Devices;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Phone::Media::Devices");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_AudioRoutingEndpoint;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Phone::Media::Devices::AudioRoutingEndpoint is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Phone::Media::Devices;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Phone::Media::Devices");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_AvailableAudioRoutingEndpoints;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Phone::Media::Devices::AudioRoutingManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Phone::Media::Devices;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Phone::Media::Devices");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_AudioRoutingManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Phone::Media::Devices::AudioRoutingManager is not registered");
        return nullptr;
    }

    return python_type;
}
