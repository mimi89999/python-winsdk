// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.Perception.Automation.Core.h"


namespace py::cpp::Windows::Perception::Automation::Core
{
    struct module_state
    {
        PyTypeObject* type_CorePerceptionAutomation;
    };

    // ----- CorePerceptionAutomation class --------------------
    constexpr const char* const type_name_CorePerceptionAutomation = "CorePerceptionAutomation";

    static PyObject* _new_CorePerceptionAutomation(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CorePerceptionAutomation);
        return nullptr;
    }

    static PyObject* CorePerceptionAutomation_SetActivationFactoryProvider(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Perception.Automation.Core.CorePerceptionAutomation", L"SetActivationFactoryProvider", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::IGetActivationFactory>(args, 0);

                winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation::SetActivationFactoryProvider(param0);
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

    static PyMethodDef _methods_CorePerceptionAutomation[] = {
        { "set_activation_factory_provider", reinterpret_cast<PyCFunction>(CorePerceptionAutomation_SetActivationFactoryProvider), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CorePerceptionAutomation[] = {
        { }
    };

    static PyType_Slot _type_slots_CorePerceptionAutomation[] = 
    {
        { Py_tp_new, _new_CorePerceptionAutomation },
        { Py_tp_methods, _methods_CorePerceptionAutomation },
        { Py_tp_getset, _getset_CorePerceptionAutomation },
        { },
    };

    static PyType_Spec type_spec_CorePerceptionAutomation =
    {
        "_winsdk_Windows_Perception_Automation_Core.CorePerceptionAutomation",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CorePerceptionAutomation
    };

    // ----- Windows.Perception.Automation.Core Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Perception::Automation::Core");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_CorePerceptionAutomation);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_CorePerceptionAutomation);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Perception_Automation_Core",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Perception::Automation::Core

PyMODINIT_FUNC PyInit__winsdk_Windows_Perception_Automation_Core(void) noexcept
{
    using namespace py::cpp::Windows::Perception::Automation::Core;

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

    state->type_CorePerceptionAutomation = py::register_python_type(module.get(), type_name_CorePerceptionAutomation, &type_spec_CorePerceptionAutomation, nullptr, nullptr);
    if (!state->type_CorePerceptionAutomation)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Perception::Automation::Core;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Perception::Automation::Core");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CorePerceptionAutomation;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation is not registered");
        return nullptr;
    }

    return python_type;
}
