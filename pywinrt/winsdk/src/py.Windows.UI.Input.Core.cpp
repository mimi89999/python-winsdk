// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#include "pybase.h"
#include "py.Windows.UI.Input.Core.h"


namespace py::cpp::Windows::UI::Input::Core
{
    struct module_state
    {
        PyTypeObject* type_RadialControllerIndependentInputSource;
    };

    // ----- RadialControllerIndependentInputSource class --------------------
    static constexpr const char* const type_name_RadialControllerIndependentInputSource = "RadialControllerIndependentInputSource";

    static PyObject* _new_RadialControllerIndependentInputSource(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_RadialControllerIndependentInputSource);
        return nullptr;
    }

    static void _dealloc_RadialControllerIndependentInputSource(py::wrapper::Windows::UI::Input::Core::RadialControllerIndependentInputSource* self) noexcept
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

    static PyObject* RadialControllerIndependentInputSource_CreateForView(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.UI.Input.Core.RadialControllerIndependentInputSource", L"CreateForView", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::Core::CoreApplicationView>(args, 0);

                return py::convert(winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource::CreateForView(param0));
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

    static PyObject* RadialControllerIndependentInputSource_get_Controller(py::wrapper::Windows::UI::Input::Core::RadialControllerIndependentInputSource* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.UI.Input.Core.RadialControllerIndependentInputSource", L"Controller"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Controller());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RadialControllerIndependentInputSource_get_Dispatcher(py::wrapper::Windows::UI::Input::Core::RadialControllerIndependentInputSource* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.UI.Input.Core.RadialControllerIndependentInputSource", L"Dispatcher"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Dispatcher());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RadialControllerIndependentInputSource_get_DispatcherQueue(py::wrapper::Windows::UI::Input::Core::RadialControllerIndependentInputSource* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.UI.Input.Core.RadialControllerIndependentInputSource", L"DispatcherQueue"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DispatcherQueue());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_RadialControllerIndependentInputSource(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_RadialControllerIndependentInputSource(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RadialControllerIndependentInputSource[] = {
        { "create_for_view", reinterpret_cast<PyCFunction>(RadialControllerIndependentInputSource_CreateForView), METH_VARARGS | METH_STATIC, nullptr },
        { "_assign_array_", _assign_array_RadialControllerIndependentInputSource, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_RadialControllerIndependentInputSource), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_RadialControllerIndependentInputSource[] = {
        { "controller", reinterpret_cast<getter>(RadialControllerIndependentInputSource_get_Controller), nullptr, nullptr, nullptr },
        { "dispatcher", reinterpret_cast<getter>(RadialControllerIndependentInputSource_get_Dispatcher), nullptr, nullptr, nullptr },
        { "dispatcher_queue", reinterpret_cast<getter>(RadialControllerIndependentInputSource_get_DispatcherQueue), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_RadialControllerIndependentInputSource[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_RadialControllerIndependentInputSource) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_RadialControllerIndependentInputSource) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_RadialControllerIndependentInputSource) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_RadialControllerIndependentInputSource) },
        { },
    };

    static PyType_Spec type_spec_RadialControllerIndependentInputSource =
    {
        "_winsdk_Windows_UI_Input_Core.RadialControllerIndependentInputSource",
        sizeof(py::wrapper::Windows::UI::Input::Core::RadialControllerIndependentInputSource),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RadialControllerIndependentInputSource
    };

    // ----- Windows.UI.Input.Core Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::UI::Input::Core");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_RadialControllerIndependentInputSource);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_RadialControllerIndependentInputSource);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_UI_Input_Core",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::UI::Input::Core

PyMODINIT_FUNC PyInit__winsdk_Windows_UI_Input_Core(void) noexcept
{
    using namespace py::cpp::Windows::UI::Input::Core;

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

    state->type_RadialControllerIndependentInputSource = py::register_python_type(module.get(), type_name_RadialControllerIndependentInputSource, &type_spec_RadialControllerIndependentInputSource, bases.get(), nullptr);
    if (!state->type_RadialControllerIndependentInputSource)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource>::get_python_type() noexcept {
    using namespace py::cpp::Windows::UI::Input::Core;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::UI::Input::Core");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_RadialControllerIndependentInputSource;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource is not registered");
        return nullptr;
    }

    return python_type;
}
