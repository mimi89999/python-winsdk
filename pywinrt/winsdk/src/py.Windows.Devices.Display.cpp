// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Devices.Display.h"


namespace py::cpp::Windows::Devices::Display
{
    struct module_state
    {
        PyObject* type_DisplayMonitorConnectionKind;
        PyObject* type_DisplayMonitorDescriptorKind;
        PyObject* type_DisplayMonitorPhysicalConnectorKind;
        PyObject* type_DisplayMonitorUsageKind;
        PyTypeObject* type_DisplayMonitor;
    };

    static PyObject* register_DisplayMonitorConnectionKind(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DisplayMonitorConnectionKind)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DisplayMonitorConnectionKind = type;
        Py_INCREF(state->type_DisplayMonitorConnectionKind);


        Py_RETURN_NONE;
    }

    static PyObject* register_DisplayMonitorDescriptorKind(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DisplayMonitorDescriptorKind)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DisplayMonitorDescriptorKind = type;
        Py_INCREF(state->type_DisplayMonitorDescriptorKind);


        Py_RETURN_NONE;
    }

    static PyObject* register_DisplayMonitorPhysicalConnectorKind(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DisplayMonitorPhysicalConnectorKind)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DisplayMonitorPhysicalConnectorKind = type;
        Py_INCREF(state->type_DisplayMonitorPhysicalConnectorKind);


        Py_RETURN_NONE;
    }

    static PyObject* register_DisplayMonitorUsageKind(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DisplayMonitorUsageKind)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DisplayMonitorUsageKind = type;
        Py_INCREF(state->type_DisplayMonitorUsageKind);


        Py_RETURN_NONE;
    }

    // ----- DisplayMonitor class --------------------
    constexpr const char* const type_name_DisplayMonitor = "DisplayMonitor";

    static PyObject* _new_DisplayMonitor(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_DisplayMonitor);
        return nullptr;
    }

    static void _dealloc_DisplayMonitor(py::wrapper::Windows::Devices::Display::DisplayMonitor* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* DisplayMonitor_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Display::DisplayMonitor::FromIdAsync(param0));
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

    static PyObject* DisplayMonitor_FromInterfaceIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Display::DisplayMonitor::FromInterfaceIdAsync(param0));
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

    static PyObject* DisplayMonitor_GetDescriptor(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Display::DisplayMonitorDescriptorKind>(args, 0);

                return py::convert(self->obj.GetDescriptor(param0));
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

    static PyObject* DisplayMonitor_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::Display::DisplayMonitor::GetDeviceSelector());
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

    static PyObject* DisplayMonitor_get_BluePrimary(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.BluePrimary());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_ConnectionKind(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ConnectionKind());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_DeviceId(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
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

    static PyObject* DisplayMonitor_get_DisplayAdapterDeviceId(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayAdapterDeviceId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_DisplayAdapterId(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayAdapterId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_DisplayAdapterTargetId(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayAdapterTargetId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_DisplayName(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
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

    static PyObject* DisplayMonitor_get_GreenPrimary(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.GreenPrimary());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_MaxAverageFullFrameLuminanceInNits(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxAverageFullFrameLuminanceInNits());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_MaxLuminanceInNits(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxLuminanceInNits());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_MinLuminanceInNits(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MinLuminanceInNits());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_NativeResolutionInRawPixels(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.NativeResolutionInRawPixels());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_PhysicalConnector(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.PhysicalConnector());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_PhysicalSizeInInches(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.PhysicalSizeInInches());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_RawDpiX(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RawDpiX());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_RawDpiY(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RawDpiY());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_RedPrimary(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RedPrimary());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_UsageKind(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UsageKind());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_WhitePoint(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.WhitePoint());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_IsDolbyVisionSupportedInHdrMode(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.IsDolbyVisionSupportedInHdrMode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_DisplayMonitor(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Display::DisplayMonitor>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DisplayMonitor[] = {
        { "from_id_async", reinterpret_cast<PyCFunction>(DisplayMonitor_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "from_interface_id_async", reinterpret_cast<PyCFunction>(DisplayMonitor_FromInterfaceIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_descriptor", reinterpret_cast<PyCFunction>(DisplayMonitor_GetDescriptor), METH_VARARGS, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(DisplayMonitor_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DisplayMonitor), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DisplayMonitor[] = {
        { "blue_primary", reinterpret_cast<getter>(DisplayMonitor_get_BluePrimary), nullptr, nullptr, nullptr },
        { "connection_kind", reinterpret_cast<getter>(DisplayMonitor_get_ConnectionKind), nullptr, nullptr, nullptr },
        { "device_id", reinterpret_cast<getter>(DisplayMonitor_get_DeviceId), nullptr, nullptr, nullptr },
        { "display_adapter_device_id", reinterpret_cast<getter>(DisplayMonitor_get_DisplayAdapterDeviceId), nullptr, nullptr, nullptr },
        { "display_adapter_id", reinterpret_cast<getter>(DisplayMonitor_get_DisplayAdapterId), nullptr, nullptr, nullptr },
        { "display_adapter_target_id", reinterpret_cast<getter>(DisplayMonitor_get_DisplayAdapterTargetId), nullptr, nullptr, nullptr },
        { "display_name", reinterpret_cast<getter>(DisplayMonitor_get_DisplayName), nullptr, nullptr, nullptr },
        { "green_primary", reinterpret_cast<getter>(DisplayMonitor_get_GreenPrimary), nullptr, nullptr, nullptr },
        { "max_average_full_frame_luminance_in_nits", reinterpret_cast<getter>(DisplayMonitor_get_MaxAverageFullFrameLuminanceInNits), nullptr, nullptr, nullptr },
        { "max_luminance_in_nits", reinterpret_cast<getter>(DisplayMonitor_get_MaxLuminanceInNits), nullptr, nullptr, nullptr },
        { "min_luminance_in_nits", reinterpret_cast<getter>(DisplayMonitor_get_MinLuminanceInNits), nullptr, nullptr, nullptr },
        { "native_resolution_in_raw_pixels", reinterpret_cast<getter>(DisplayMonitor_get_NativeResolutionInRawPixels), nullptr, nullptr, nullptr },
        { "physical_connector", reinterpret_cast<getter>(DisplayMonitor_get_PhysicalConnector), nullptr, nullptr, nullptr },
        { "physical_size_in_inches", reinterpret_cast<getter>(DisplayMonitor_get_PhysicalSizeInInches), nullptr, nullptr, nullptr },
        { "raw_dpi_x", reinterpret_cast<getter>(DisplayMonitor_get_RawDpiX), nullptr, nullptr, nullptr },
        { "raw_dpi_y", reinterpret_cast<getter>(DisplayMonitor_get_RawDpiY), nullptr, nullptr, nullptr },
        { "red_primary", reinterpret_cast<getter>(DisplayMonitor_get_RedPrimary), nullptr, nullptr, nullptr },
        { "usage_kind", reinterpret_cast<getter>(DisplayMonitor_get_UsageKind), nullptr, nullptr, nullptr },
        { "white_point", reinterpret_cast<getter>(DisplayMonitor_get_WhitePoint), nullptr, nullptr, nullptr },
        { "is_dolby_vision_supported_in_hdr_mode", reinterpret_cast<getter>(DisplayMonitor_get_IsDolbyVisionSupportedInHdrMode), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DisplayMonitor[] = 
    {
        { Py_tp_new, _new_DisplayMonitor },
        { Py_tp_dealloc, _dealloc_DisplayMonitor },
        { Py_tp_methods, _methods_DisplayMonitor },
        { Py_tp_getset, _getset_DisplayMonitor },
        { },
    };

    static PyType_Spec type_spec_DisplayMonitor =
    {
        "_winsdk_Windows_Devices_Display.DisplayMonitor",
        sizeof(py::wrapper::Windows::Devices::Display::DisplayMonitor),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DisplayMonitor
    };

    // ----- Windows.Devices.Display Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Display");

    static PyMethodDef module_methods[] = {
        {"_register_DisplayMonitorConnectionKind", register_DisplayMonitorConnectionKind, METH_O, "registers type"},
        {"_register_DisplayMonitorDescriptorKind", register_DisplayMonitorDescriptorKind, METH_O, "registers type"},
        {"_register_DisplayMonitorPhysicalConnectorKind", register_DisplayMonitorPhysicalConnectorKind, METH_O, "registers type"},
        {"_register_DisplayMonitorUsageKind", register_DisplayMonitorUsageKind, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_DisplayMonitorConnectionKind);
        Py_VISIT(state->type_DisplayMonitorDescriptorKind);
        Py_VISIT(state->type_DisplayMonitorPhysicalConnectorKind);
        Py_VISIT(state->type_DisplayMonitorUsageKind);
        Py_VISIT(state->type_DisplayMonitor);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_DisplayMonitorConnectionKind);
        Py_CLEAR(state->type_DisplayMonitorDescriptorKind);
        Py_CLEAR(state->type_DisplayMonitorPhysicalConnectorKind);
        Py_CLEAR(state->type_DisplayMonitorUsageKind);
        Py_CLEAR(state->type_DisplayMonitor);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Display",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Display

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Display(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Display;

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

    state->type_DisplayMonitor = py::register_python_type(module.get(), type_name_DisplayMonitor, &type_spec_DisplayMonitor, bases.get());
    if (!state->type_DisplayMonitor)
    {
        return nullptr;
    }

    Py_INCREF(state->type_DisplayMonitor);


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Devices::Display::DisplayMonitorConnectionKind>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Display;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Display");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DisplayMonitorConnectionKind;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Display::DisplayMonitorConnectionKind is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Display::DisplayMonitorDescriptorKind>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Display;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Display");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DisplayMonitorDescriptorKind;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Display::DisplayMonitorDescriptorKind is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Display;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Display");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DisplayMonitorPhysicalConnectorKind;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Display::DisplayMonitorUsageKind>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Display;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Display");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DisplayMonitorUsageKind;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Display::DisplayMonitorUsageKind is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Display::DisplayMonitor>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Display;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Display");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DisplayMonitor;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Display::DisplayMonitor is not registered");
        return nullptr;
    }

    return python_type;
}
