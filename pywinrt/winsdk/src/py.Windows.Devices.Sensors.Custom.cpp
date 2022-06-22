// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Devices.Sensors.Custom.h"


namespace py::cpp::Windows::Devices::Sensors::Custom
{
    struct module_state
    {
        PyTypeObject* type_CustomSensor;
        PyTypeObject* type_CustomSensorReading;
        PyTypeObject* type_CustomSensorReadingChangedEventArgs;
    };

    // ----- CustomSensor class --------------------
    constexpr const char* const type_name_CustomSensor = "CustomSensor";

    static PyObject* _new_CustomSensor(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CustomSensor);
        return nullptr;
    }

    static void _dealloc_CustomSensor(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* CustomSensor_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Sensors::Custom::CustomSensor::FromIdAsync(param0));
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

    static PyObject* CustomSensor_GetCurrentReading(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.GetCurrentReading());
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

    static PyObject* CustomSensor_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(winrt::Windows::Devices::Sensors::Custom::CustomSensor::GetDeviceSelector(param0));
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

    static PyObject* CustomSensor_get_ReportInterval(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ReportInterval());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int CustomSensor_put_ReportInterval(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<uint32_t>(arg);

            self->obj.ReportInterval(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* CustomSensor_get_DeviceId(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DeviceId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* CustomSensor_get_MinimumReportInterval(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MinimumReportInterval());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* CustomSensor_get_ReportLatency(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ReportLatency());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int CustomSensor_put_ReportLatency(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<uint32_t>(arg);

            self->obj.ReportLatency(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* CustomSensor_get_MaxBatchSize(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxBatchSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* CustomSensor_add_ReadingChanged(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Sensors::Custom::CustomSensor, winrt::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>>(arg);

            return py::convert(self->obj.ReadingChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* CustomSensor_remove_ReadingChanged(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.ReadingChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_CustomSensor(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Sensors::Custom::CustomSensor>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CustomSensor[] = {
        { "from_id_async", reinterpret_cast<PyCFunction>(CustomSensor_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_current_reading", reinterpret_cast<PyCFunction>(CustomSensor_GetCurrentReading), METH_VARARGS, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(CustomSensor_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "add_reading_changed", reinterpret_cast<PyCFunction>(CustomSensor_add_ReadingChanged), METH_O, nullptr },
        { "remove_reading_changed", reinterpret_cast<PyCFunction>(CustomSensor_remove_ReadingChanged), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_CustomSensor), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CustomSensor[] = {
        { "report_interval", reinterpret_cast<getter>(CustomSensor_get_ReportInterval), reinterpret_cast<setter>(CustomSensor_put_ReportInterval), nullptr, nullptr },
        { "device_id", reinterpret_cast<getter>(CustomSensor_get_DeviceId), nullptr, nullptr, nullptr },
        { "minimum_report_interval", reinterpret_cast<getter>(CustomSensor_get_MinimumReportInterval), nullptr, nullptr, nullptr },
        { "report_latency", reinterpret_cast<getter>(CustomSensor_get_ReportLatency), reinterpret_cast<setter>(CustomSensor_put_ReportLatency), nullptr, nullptr },
        { "max_batch_size", reinterpret_cast<getter>(CustomSensor_get_MaxBatchSize), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_CustomSensor[] = 
    {
        { Py_tp_new, _new_CustomSensor },
        { Py_tp_dealloc, _dealloc_CustomSensor },
        { Py_tp_methods, _methods_CustomSensor },
        { Py_tp_getset, _getset_CustomSensor },
        { },
    };

    static PyType_Spec type_spec_CustomSensor =
    {
        "_winsdk_Windows_Devices_Sensors_Custom.CustomSensor",
        sizeof(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensor),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CustomSensor
    };

    // ----- CustomSensorReading class --------------------
    constexpr const char* const type_name_CustomSensorReading = "CustomSensorReading";

    static PyObject* _new_CustomSensorReading(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CustomSensorReading);
        return nullptr;
    }

    static void _dealloc_CustomSensorReading(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensorReading* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* CustomSensorReading_get_Properties(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensorReading* self, void* /*unused*/) noexcept
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

    static PyObject* CustomSensorReading_get_Timestamp(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensorReading* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Timestamp());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* CustomSensorReading_get_PerformanceCount(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensorReading* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.PerformanceCount());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_CustomSensorReading(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Sensors::Custom::CustomSensorReading>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CustomSensorReading[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_CustomSensorReading), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CustomSensorReading[] = {
        { "properties", reinterpret_cast<getter>(CustomSensorReading_get_Properties), nullptr, nullptr, nullptr },
        { "timestamp", reinterpret_cast<getter>(CustomSensorReading_get_Timestamp), nullptr, nullptr, nullptr },
        { "performance_count", reinterpret_cast<getter>(CustomSensorReading_get_PerformanceCount), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_CustomSensorReading[] = 
    {
        { Py_tp_new, _new_CustomSensorReading },
        { Py_tp_dealloc, _dealloc_CustomSensorReading },
        { Py_tp_methods, _methods_CustomSensorReading },
        { Py_tp_getset, _getset_CustomSensorReading },
        { },
    };

    static PyType_Spec type_spec_CustomSensorReading =
    {
        "_winsdk_Windows_Devices_Sensors_Custom.CustomSensorReading",
        sizeof(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensorReading),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CustomSensorReading
    };

    // ----- CustomSensorReadingChangedEventArgs class --------------------
    constexpr const char* const type_name_CustomSensorReadingChangedEventArgs = "CustomSensorReadingChangedEventArgs";

    static PyObject* _new_CustomSensorReadingChangedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CustomSensorReadingChangedEventArgs);
        return nullptr;
    }

    static void _dealloc_CustomSensorReadingChangedEventArgs(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* CustomSensorReadingChangedEventArgs_get_Reading(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Reading());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_CustomSensorReadingChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CustomSensorReadingChangedEventArgs[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_CustomSensorReadingChangedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CustomSensorReadingChangedEventArgs[] = {
        { "reading", reinterpret_cast<getter>(CustomSensorReadingChangedEventArgs_get_Reading), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_CustomSensorReadingChangedEventArgs[] = 
    {
        { Py_tp_new, _new_CustomSensorReadingChangedEventArgs },
        { Py_tp_dealloc, _dealloc_CustomSensorReadingChangedEventArgs },
        { Py_tp_methods, _methods_CustomSensorReadingChangedEventArgs },
        { Py_tp_getset, _getset_CustomSensorReadingChangedEventArgs },
        { },
    };

    static PyType_Spec type_spec_CustomSensorReadingChangedEventArgs =
    {
        "_winsdk_Windows_Devices_Sensors_Custom.CustomSensorReadingChangedEventArgs",
        sizeof(py::wrapper::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CustomSensorReadingChangedEventArgs
    };

    // ----- Windows.Devices.Sensors.Custom Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Sensors::Custom");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_CustomSensor);
        Py_VISIT(state->type_CustomSensorReading);
        Py_VISIT(state->type_CustomSensorReadingChangedEventArgs);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_CustomSensor);
        Py_CLEAR(state->type_CustomSensorReading);
        Py_CLEAR(state->type_CustomSensorReadingChangedEventArgs);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Sensors_Custom",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Sensors::Custom

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Sensors_Custom(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Sensors::Custom;

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

    state->type_CustomSensor = py::register_python_type(module.get(), type_name_CustomSensor, &type_spec_CustomSensor, bases.get());
    if (!state->type_CustomSensor)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CustomSensor);

    state->type_CustomSensorReading = py::register_python_type(module.get(), type_name_CustomSensorReading, &type_spec_CustomSensorReading, bases.get());
    if (!state->type_CustomSensorReading)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CustomSensorReading);

    state->type_CustomSensorReadingChangedEventArgs = py::register_python_type(module.get(), type_name_CustomSensorReadingChangedEventArgs, &type_spec_CustomSensorReadingChangedEventArgs, bases.get());
    if (!state->type_CustomSensorReadingChangedEventArgs)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CustomSensorReadingChangedEventArgs);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Sensors::Custom::CustomSensor>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Sensors::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Sensors::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CustomSensor;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Sensors::Custom::CustomSensor is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Sensors::Custom::CustomSensorReading>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Sensors::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Sensors::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CustomSensorReading;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Sensors::Custom::CustomSensorReading is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Sensors::Custom;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Sensors::Custom");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CustomSensorReadingChangedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}
