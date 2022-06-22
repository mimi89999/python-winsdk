// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.ApplicationModel.UserActivities.Core.h"


namespace py::cpp::Windows::ApplicationModel::UserActivities::Core
{
    struct module_state
    {
        PyTypeObject* type_CoreUserActivityManager;
    };

    // ----- CoreUserActivityManager class --------------------
    constexpr const char* const type_name_CoreUserActivityManager = "CoreUserActivityManager";

    static PyObject* _new_CoreUserActivityManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CoreUserActivityManager);
        return nullptr;
    }

    static PyObject* CoreUserActivityManager_CreateUserActivitySessionInBackground(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::UserActivities::UserActivity>(args, 0);

                return py::convert(winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager::CreateUserActivitySessionInBackground(param0));
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

    static PyObject* CoreUserActivityManager_DeleteUserActivitySessionsInTimeRangeAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::DateTime>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Foundation::DateTime>(args, 2);

                return py::convert(winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager::DeleteUserActivitySessionsInTimeRangeAsync(param0, param1, param2));
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

    static PyMethodDef _methods_CoreUserActivityManager[] = {
        { "create_user_activity_session_in_background", reinterpret_cast<PyCFunction>(CoreUserActivityManager_CreateUserActivitySessionInBackground), METH_VARARGS | METH_STATIC, nullptr },
        { "delete_user_activity_sessions_in_time_range_async", reinterpret_cast<PyCFunction>(CoreUserActivityManager_DeleteUserActivitySessionsInTimeRangeAsync), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CoreUserActivityManager[] = {
        { }
    };

    static PyType_Slot _type_slots_CoreUserActivityManager[] = 
    {
        { Py_tp_new, _new_CoreUserActivityManager },
        { Py_tp_methods, _methods_CoreUserActivityManager },
        { Py_tp_getset, _getset_CoreUserActivityManager },
        { },
    };

    static PyType_Spec type_spec_CoreUserActivityManager =
    {
        "_winsdk_Windows_ApplicationModel_UserActivities_Core.CoreUserActivityManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CoreUserActivityManager
    };

    // ----- Windows.ApplicationModel.UserActivities.Core Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::UserActivities::Core");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_CoreUserActivityManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_CoreUserActivityManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_UserActivities_Core",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::UserActivities::Core

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_UserActivities_Core(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::UserActivities::Core;

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

    state->type_CoreUserActivityManager = py::register_python_type(module.get(), type_name_CoreUserActivityManager, &type_spec_CoreUserActivityManager, nullptr);
    if (!state->type_CoreUserActivityManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_CoreUserActivityManager);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::UserActivities::Core;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::UserActivities::Core");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CoreUserActivityManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::UserActivities::Core::CoreUserActivityManager is not registered");
        return nullptr;
    }

    return python_type;
}
