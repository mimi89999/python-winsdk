// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#include "pybase.h"
#include "py.Windows.Graphics.DirectX.h"


namespace py::cpp::Windows::Graphics::DirectX
{
    struct module_state
    {
        PyObject* type_DirectXAlphaMode;
        PyObject* type_DirectXColorSpace;
        PyObject* type_DirectXPixelFormat;
        PyObject* type_DirectXPrimitiveTopology;
    };

    static PyObject* register_DirectXAlphaMode(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DirectXAlphaMode)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DirectXAlphaMode = type;
        Py_INCREF(state->type_DirectXAlphaMode);


        Py_RETURN_NONE;
    }

    static PyObject* register_DirectXColorSpace(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DirectXColorSpace)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DirectXColorSpace = type;
        Py_INCREF(state->type_DirectXColorSpace);


        Py_RETURN_NONE;
    }

    static PyObject* register_DirectXPixelFormat(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DirectXPixelFormat)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DirectXPixelFormat = type;
        Py_INCREF(state->type_DirectXPixelFormat);


        Py_RETURN_NONE;
    }

    static PyObject* register_DirectXPrimitiveTopology(PyObject* module, PyObject* type)
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DirectXPrimitiveTopology)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DirectXPrimitiveTopology = type;
        Py_INCREF(state->type_DirectXPrimitiveTopology);


        Py_RETURN_NONE;
    }

    // ----- Windows.Graphics.DirectX Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Graphics::DirectX");

    static PyMethodDef module_methods[] = {
        {"_register_DirectXAlphaMode", register_DirectXAlphaMode, METH_O, "registers type"},
        {"_register_DirectXColorSpace", register_DirectXColorSpace, METH_O, "registers type"},
        {"_register_DirectXPixelFormat", register_DirectXPixelFormat, METH_O, "registers type"},
        {"_register_DirectXPrimitiveTopology", register_DirectXPrimitiveTopology, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_DirectXAlphaMode);
        Py_VISIT(state->type_DirectXColorSpace);
        Py_VISIT(state->type_DirectXPixelFormat);
        Py_VISIT(state->type_DirectXPrimitiveTopology);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_DirectXAlphaMode);
        Py_CLEAR(state->type_DirectXColorSpace);
        Py_CLEAR(state->type_DirectXPixelFormat);
        Py_CLEAR(state->type_DirectXPrimitiveTopology);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Graphics_DirectX",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Graphics::DirectX

PyMODINIT_FUNC PyInit__winsdk_Windows_Graphics_DirectX(void) noexcept
{
    using namespace py::cpp::Windows::Graphics::DirectX;

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


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Graphics::DirectX::DirectXAlphaMode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DirectXAlphaMode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::DirectXAlphaMode is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Graphics::DirectX::DirectXColorSpace>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DirectXColorSpace;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::DirectXColorSpace is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Graphics::DirectX::DirectXPixelFormat>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DirectXPixelFormat;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::DirectXPixelFormat is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Graphics::DirectX::DirectXPrimitiveTopology>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DirectXPrimitiveTopology;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::DirectXPrimitiveTopology is not registered");
        return nullptr;
    }

    return python_type;
}
