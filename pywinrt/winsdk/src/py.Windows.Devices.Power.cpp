// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Devices.Power.h"


namespace py::cpp::Windows::Devices::Power
{
    struct module_state
    {
        PyTypeObject* type_Battery;
        PyTypeObject* type_BatteryReport;
    };

    // ----- Battery class --------------------
    constexpr const char* const type_name_Battery = "Battery";

    static PyObject* _new_Battery(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_Battery);
        return nullptr;
    }

    static void _dealloc_Battery(py::wrapper::Windows::Devices::Power::Battery* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* Battery_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Power::Battery::FromIdAsync(param0));
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

    static PyObject* Battery_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::Power::Battery::GetDeviceSelector());
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

    static PyObject* Battery_GetReport(py::wrapper::Windows::Devices::Power::Battery* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.GetReport());
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

    static PyObject* Battery_get_DeviceId(py::wrapper::Windows::Devices::Power::Battery* self, void* /*unused*/) noexcept
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

    static PyObject* Battery_get_AggregateBattery(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Power::Battery::AggregateBattery());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* Battery_add_ReportUpdated(py::wrapper::Windows::Devices::Power::Battery* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Power::Battery, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.ReportUpdated(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* Battery_remove_ReportUpdated(py::wrapper::Windows::Devices::Power::Battery* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.ReportUpdated(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_Battery(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Power::Battery>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_Battery[] = {
        { "from_id_async", reinterpret_cast<PyCFunction>(Battery_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(Battery_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "get_report", reinterpret_cast<PyCFunction>(Battery_GetReport), METH_VARARGS, nullptr },
        { "get_aggregate_battery", reinterpret_cast<PyCFunction>(Battery_get_AggregateBattery), METH_NOARGS | METH_STATIC, nullptr },
        { "add_report_updated", reinterpret_cast<PyCFunction>(Battery_add_ReportUpdated), METH_O, nullptr },
        { "remove_report_updated", reinterpret_cast<PyCFunction>(Battery_remove_ReportUpdated), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_Battery), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_Battery[] = {
        { "device_id", reinterpret_cast<getter>(Battery_get_DeviceId), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_Battery[] = 
    {
        { Py_tp_new, _new_Battery },
        { Py_tp_dealloc, _dealloc_Battery },
        { Py_tp_methods, _methods_Battery },
        { Py_tp_getset, _getset_Battery },
        { },
    };

    static PyType_Spec type_spec_Battery =
    {
        "_winsdk_Windows_Devices_Power.Battery",
        sizeof(py::wrapper::Windows::Devices::Power::Battery),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_Battery
    };

    // ----- BatteryReport class --------------------
    constexpr const char* const type_name_BatteryReport = "BatteryReport";

    static PyObject* _new_BatteryReport(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_BatteryReport);
        return nullptr;
    }

    static void _dealloc_BatteryReport(py::wrapper::Windows::Devices::Power::BatteryReport* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* BatteryReport_get_ChargeRateInMilliwatts(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ChargeRateInMilliwatts());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BatteryReport_get_DesignCapacityInMilliwattHours(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DesignCapacityInMilliwattHours());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BatteryReport_get_FullChargeCapacityInMilliwattHours(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.FullChargeCapacityInMilliwattHours());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BatteryReport_get_RemainingCapacityInMilliwattHours(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RemainingCapacityInMilliwattHours());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BatteryReport_get_Status(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
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

    static PyObject* _from_BatteryReport(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Power::BatteryReport>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_BatteryReport[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_BatteryReport), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_BatteryReport[] = {
        { "charge_rate_in_milliwatts", reinterpret_cast<getter>(BatteryReport_get_ChargeRateInMilliwatts), nullptr, nullptr, nullptr },
        { "design_capacity_in_milliwatt_hours", reinterpret_cast<getter>(BatteryReport_get_DesignCapacityInMilliwattHours), nullptr, nullptr, nullptr },
        { "full_charge_capacity_in_milliwatt_hours", reinterpret_cast<getter>(BatteryReport_get_FullChargeCapacityInMilliwattHours), nullptr, nullptr, nullptr },
        { "remaining_capacity_in_milliwatt_hours", reinterpret_cast<getter>(BatteryReport_get_RemainingCapacityInMilliwattHours), nullptr, nullptr, nullptr },
        { "status", reinterpret_cast<getter>(BatteryReport_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_BatteryReport[] = 
    {
        { Py_tp_new, _new_BatteryReport },
        { Py_tp_dealloc, _dealloc_BatteryReport },
        { Py_tp_methods, _methods_BatteryReport },
        { Py_tp_getset, _getset_BatteryReport },
        { },
    };

    static PyType_Spec type_spec_BatteryReport =
    {
        "_winsdk_Windows_Devices_Power.BatteryReport",
        sizeof(py::wrapper::Windows::Devices::Power::BatteryReport),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_BatteryReport
    };

    // ----- Windows.Devices.Power Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Power");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_Battery);
        Py_VISIT(state->type_BatteryReport);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_Battery);
        Py_CLEAR(state->type_BatteryReport);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Power",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Power

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Power(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Power;

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

    state->type_Battery = py::register_python_type(module.get(), type_name_Battery, &type_spec_Battery, bases.get());
    if (!state->type_Battery)
    {
        return nullptr;
    }

    Py_INCREF(state->type_Battery);

    state->type_BatteryReport = py::register_python_type(module.get(), type_name_BatteryReport, &type_spec_BatteryReport, bases.get());
    if (!state->type_BatteryReport)
    {
        return nullptr;
    }

    Py_INCREF(state->type_BatteryReport);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Power::Battery>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Power;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Power");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_Battery;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Power::Battery is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Power::BatteryReport>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Power;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Power");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_BatteryReport;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Power::BatteryReport is not registered");
        return nullptr;
    }

    return python_type;
}
