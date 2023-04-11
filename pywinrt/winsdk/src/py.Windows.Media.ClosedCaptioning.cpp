// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#include "pybase.h"
#include "py.Windows.Media.ClosedCaptioning.h"


namespace py::cpp::Windows::Media::ClosedCaptioning
{
    struct module_state
    {
        PyObject* type_ClosedCaptionColor;
        PyObject* type_ClosedCaptionEdgeEffect;
        PyObject* type_ClosedCaptionOpacity;
        PyObject* type_ClosedCaptionSize;
        PyObject* type_ClosedCaptionStyle;
        PyTypeObject* type_ClosedCaptionProperties;
    };

    static PyObject* register_ClosedCaptionColor(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ClosedCaptionColor)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ClosedCaptionColor = type;
        Py_INCREF(state->type_ClosedCaptionColor);


        Py_RETURN_NONE;
    }

    static PyObject* register_ClosedCaptionEdgeEffect(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ClosedCaptionEdgeEffect)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ClosedCaptionEdgeEffect = type;
        Py_INCREF(state->type_ClosedCaptionEdgeEffect);


        Py_RETURN_NONE;
    }

    static PyObject* register_ClosedCaptionOpacity(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ClosedCaptionOpacity)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ClosedCaptionOpacity = type;
        Py_INCREF(state->type_ClosedCaptionOpacity);


        Py_RETURN_NONE;
    }

    static PyObject* register_ClosedCaptionSize(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ClosedCaptionSize)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ClosedCaptionSize = type;
        Py_INCREF(state->type_ClosedCaptionSize);


        Py_RETURN_NONE;
    }

    static PyObject* register_ClosedCaptionStyle(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ClosedCaptionStyle)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ClosedCaptionStyle = type;
        Py_INCREF(state->type_ClosedCaptionStyle);


        Py_RETURN_NONE;
    }

    // ----- ClosedCaptionProperties class --------------------
    static constexpr const char* const type_name_ClosedCaptionProperties = "ClosedCaptionProperties";

    static PyObject* _new_ClosedCaptionProperties(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ClosedCaptionProperties);
        return nullptr;
    }

    static PyObject* ClosedCaptionProperties_get_BackgroundColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"BackgroundColor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::BackgroundColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_BackgroundOpacity(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"BackgroundOpacity"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::BackgroundOpacity());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_ComputedBackgroundColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"ComputedBackgroundColor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::ComputedBackgroundColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_ComputedFontColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"ComputedFontColor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::ComputedFontColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_ComputedRegionColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"ComputedRegionColor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::ComputedRegionColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"FontColor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontEffect(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"FontEffect"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontEffect());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontOpacity(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"FontOpacity"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontOpacity());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontSize(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"FontSize"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontStyle(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"FontStyle"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontStyle());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_RegionColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"RegionColor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::RegionColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_RegionOpacity(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties", L"RegionOpacity"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::RegionOpacity());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ClosedCaptionProperties[] = {
        { }
    };

    static PyGetSetDef _getset_ClosedCaptionProperties[] = {
        { }
    };

    static PyType_Slot _type_slots_ClosedCaptionProperties[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_ClosedCaptionProperties) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_ClosedCaptionProperties) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_ClosedCaptionProperties) },
        { },
    };

    static PyType_Spec type_spec_ClosedCaptionProperties =
    {
        "_winsdk_Windows_Media_ClosedCaptioning.ClosedCaptionProperties",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ClosedCaptionProperties
    };

    static PyGetSetDef getset_ClosedCaptionProperties_Meta[] = {
        { "background_color", reinterpret_cast<getter>(ClosedCaptionProperties_get_BackgroundColor), nullptr, nullptr, nullptr },
        { "background_opacity", reinterpret_cast<getter>(ClosedCaptionProperties_get_BackgroundOpacity), nullptr, nullptr, nullptr },
        { "computed_background_color", reinterpret_cast<getter>(ClosedCaptionProperties_get_ComputedBackgroundColor), nullptr, nullptr, nullptr },
        { "computed_font_color", reinterpret_cast<getter>(ClosedCaptionProperties_get_ComputedFontColor), nullptr, nullptr, nullptr },
        { "computed_region_color", reinterpret_cast<getter>(ClosedCaptionProperties_get_ComputedRegionColor), nullptr, nullptr, nullptr },
        { "font_color", reinterpret_cast<getter>(ClosedCaptionProperties_get_FontColor), nullptr, nullptr, nullptr },
        { "font_effect", reinterpret_cast<getter>(ClosedCaptionProperties_get_FontEffect), nullptr, nullptr, nullptr },
        { "font_opacity", reinterpret_cast<getter>(ClosedCaptionProperties_get_FontOpacity), nullptr, nullptr, nullptr },
        { "font_size", reinterpret_cast<getter>(ClosedCaptionProperties_get_FontSize), nullptr, nullptr, nullptr },
        { "font_style", reinterpret_cast<getter>(ClosedCaptionProperties_get_FontStyle), nullptr, nullptr, nullptr },
        { "region_color", reinterpret_cast<getter>(ClosedCaptionProperties_get_RegionColor), nullptr, nullptr, nullptr },
        { "region_opacity", reinterpret_cast<getter>(ClosedCaptionProperties_get_RegionOpacity), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_ClosedCaptionProperties_Meta[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_ClosedCaptionProperties_Meta) },
        { }
    };

    static PyType_Spec type_spec_ClosedCaptionProperties_Meta =
    {
        "_winsdk_Windows_Media_ClosedCaptioning.ClosedCaptionProperties_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_ClosedCaptionProperties_Meta
    };

    // ----- Windows.Media.ClosedCaptioning Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Media::ClosedCaptioning");

    static PyMethodDef module_methods[] = {
        {"_register_ClosedCaptionColor", register_ClosedCaptionColor, METH_O, "registers type"},
        {"_register_ClosedCaptionEdgeEffect", register_ClosedCaptionEdgeEffect, METH_O, "registers type"},
        {"_register_ClosedCaptionOpacity", register_ClosedCaptionOpacity, METH_O, "registers type"},
        {"_register_ClosedCaptionSize", register_ClosedCaptionSize, METH_O, "registers type"},
        {"_register_ClosedCaptionStyle", register_ClosedCaptionStyle, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_ClosedCaptionColor);
        Py_VISIT(state->type_ClosedCaptionEdgeEffect);
        Py_VISIT(state->type_ClosedCaptionOpacity);
        Py_VISIT(state->type_ClosedCaptionSize);
        Py_VISIT(state->type_ClosedCaptionStyle);
        Py_VISIT(state->type_ClosedCaptionProperties);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_ClosedCaptionColor);
        Py_CLEAR(state->type_ClosedCaptionEdgeEffect);
        Py_CLEAR(state->type_ClosedCaptionOpacity);
        Py_CLEAR(state->type_ClosedCaptionSize);
        Py_CLEAR(state->type_ClosedCaptionStyle);
        Py_CLEAR(state->type_ClosedCaptionProperties);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Media_ClosedCaptioning",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Media::ClosedCaptioning

PyMODINIT_FUNC PyInit__winsdk_Windows_Media_ClosedCaptioning(void) noexcept
{
    using namespace py::cpp::Windows::Media::ClosedCaptioning;

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

    py::pyobj_handle type_ClosedCaptionProperties_Meta{PyType_FromSpec(&type_spec_ClosedCaptionProperties_Meta)};
    if (!type_ClosedCaptionProperties_Meta)
    {
        return nullptr;
    }

    state->type_ClosedCaptionProperties = py::register_python_type(module.get(), type_name_ClosedCaptionProperties, &type_spec_ClosedCaptionProperties, nullptr, reinterpret_cast<PyTypeObject*>(type_ClosedCaptionProperties_Meta.get()));
    if (!state->type_ClosedCaptionProperties)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::ClosedCaptioning;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::ClosedCaptioning");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ClosedCaptionColor;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::ClosedCaptioning;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::ClosedCaptioning");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ClosedCaptionEdgeEffect;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::ClosedCaptioning;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::ClosedCaptioning");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ClosedCaptionOpacity;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::ClosedCaptioning;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::ClosedCaptioning");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ClosedCaptionSize;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::ClosedCaptioning;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::ClosedCaptioning");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ClosedCaptionStyle;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::ClosedCaptioning;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::ClosedCaptioning");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ClosedCaptionProperties;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties is not registered");
        return nullptr;
    }

    return python_type;
}
