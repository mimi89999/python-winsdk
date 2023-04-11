// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#include "pybase.h"
#include "py.Windows.Globalization.Fonts.h"


namespace py::cpp::Windows::Globalization::Fonts
{
    struct module_state
    {
        PyTypeObject* type_LanguageFont;
        PyTypeObject* type_LanguageFontGroup;
    };

    // ----- LanguageFont class --------------------
    static constexpr const char* const type_name_LanguageFont = "LanguageFont";

    static PyObject* _new_LanguageFont(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_LanguageFont);
        return nullptr;
    }

    static void _dealloc_LanguageFont(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self) noexcept
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

    static PyObject* LanguageFont_get_FontFamily(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFont", L"FontFamily"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.FontFamily());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFont_get_FontStretch(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFont", L"FontStretch"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.FontStretch());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFont_get_FontStyle(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFont", L"FontStyle"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.FontStyle());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFont_get_FontWeight(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFont", L"FontWeight"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.FontWeight());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFont_get_ScaleFactor(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFont", L"ScaleFactor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ScaleFactor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_LanguageFont(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Globalization::Fonts::LanguageFont>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_LanguageFont(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Globalization::Fonts::LanguageFont>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_LanguageFont[] = {
        { "_assign_array_", _assign_array_LanguageFont, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_LanguageFont), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_LanguageFont[] = {
        { "font_family", reinterpret_cast<getter>(LanguageFont_get_FontFamily), nullptr, nullptr, nullptr },
        { "font_stretch", reinterpret_cast<getter>(LanguageFont_get_FontStretch), nullptr, nullptr, nullptr },
        { "font_style", reinterpret_cast<getter>(LanguageFont_get_FontStyle), nullptr, nullptr, nullptr },
        { "font_weight", reinterpret_cast<getter>(LanguageFont_get_FontWeight), nullptr, nullptr, nullptr },
        { "scale_factor", reinterpret_cast<getter>(LanguageFont_get_ScaleFactor), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_LanguageFont[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_LanguageFont) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_LanguageFont) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_LanguageFont) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_LanguageFont) },
        { },
    };

    static PyType_Spec type_spec_LanguageFont =
    {
        "_winsdk_Windows_Globalization_Fonts.LanguageFont",
        sizeof(py::wrapper::Windows::Globalization::Fonts::LanguageFont),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_LanguageFont
    };

    // ----- LanguageFontGroup class --------------------
    static constexpr const char* const type_name_LanguageFontGroup = "LanguageFontGroup";

    static PyObject* _new_LanguageFontGroup(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        auto arg_count = PyTuple_Size(args);
        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                winrt::Windows::Globalization::Fonts::LanguageFontGroup instance{ param0 };
                return py::wrap(instance, type);
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

    static void _dealloc_LanguageFontGroup(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self) noexcept
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

    static PyObject* LanguageFontGroup_get_DocumentAlternate1Font(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"DocumentAlternate1Font"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DocumentAlternate1Font());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_DocumentAlternate2Font(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"DocumentAlternate2Font"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DocumentAlternate2Font());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_DocumentHeadingFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"DocumentHeadingFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DocumentHeadingFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_FixedWidthTextFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"FixedWidthTextFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.FixedWidthTextFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_ModernDocumentFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"ModernDocumentFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ModernDocumentFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_TraditionalDocumentFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"TraditionalDocumentFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.TraditionalDocumentFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UICaptionFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"UICaptionFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.UICaptionFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UIHeadingFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"UIHeadingFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.UIHeadingFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UINotificationHeadingFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"UINotificationHeadingFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.UINotificationHeadingFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UITextFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"UITextFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.UITextFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UITitleFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Globalization.Fonts.LanguageFontGroup", L"UITitleFont"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.UITitleFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_LanguageFontGroup(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Globalization::Fonts::LanguageFontGroup>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_LanguageFontGroup(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Globalization::Fonts::LanguageFontGroup>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_LanguageFontGroup[] = {
        { "_assign_array_", _assign_array_LanguageFontGroup, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_LanguageFontGroup), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_LanguageFontGroup[] = {
        { "document_alternate1_font", reinterpret_cast<getter>(LanguageFontGroup_get_DocumentAlternate1Font), nullptr, nullptr, nullptr },
        { "document_alternate2_font", reinterpret_cast<getter>(LanguageFontGroup_get_DocumentAlternate2Font), nullptr, nullptr, nullptr },
        { "document_heading_font", reinterpret_cast<getter>(LanguageFontGroup_get_DocumentHeadingFont), nullptr, nullptr, nullptr },
        { "fixed_width_text_font", reinterpret_cast<getter>(LanguageFontGroup_get_FixedWidthTextFont), nullptr, nullptr, nullptr },
        { "modern_document_font", reinterpret_cast<getter>(LanguageFontGroup_get_ModernDocumentFont), nullptr, nullptr, nullptr },
        { "traditional_document_font", reinterpret_cast<getter>(LanguageFontGroup_get_TraditionalDocumentFont), nullptr, nullptr, nullptr },
        { "u_i_caption_font", reinterpret_cast<getter>(LanguageFontGroup_get_UICaptionFont), nullptr, nullptr, nullptr },
        { "u_i_heading_font", reinterpret_cast<getter>(LanguageFontGroup_get_UIHeadingFont), nullptr, nullptr, nullptr },
        { "u_i_notification_heading_font", reinterpret_cast<getter>(LanguageFontGroup_get_UINotificationHeadingFont), nullptr, nullptr, nullptr },
        { "u_i_text_font", reinterpret_cast<getter>(LanguageFontGroup_get_UITextFont), nullptr, nullptr, nullptr },
        { "u_i_title_font", reinterpret_cast<getter>(LanguageFontGroup_get_UITitleFont), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_LanguageFontGroup[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_LanguageFontGroup) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_LanguageFontGroup) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_LanguageFontGroup) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_LanguageFontGroup) },
        { },
    };

    static PyType_Spec type_spec_LanguageFontGroup =
    {
        "_winsdk_Windows_Globalization_Fonts.LanguageFontGroup",
        sizeof(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_LanguageFontGroup
    };

    // ----- Windows.Globalization.Fonts Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Globalization::Fonts");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_LanguageFont);
        Py_VISIT(state->type_LanguageFontGroup);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_LanguageFont);
        Py_CLEAR(state->type_LanguageFontGroup);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Globalization_Fonts",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Globalization::Fonts

PyMODINIT_FUNC PyInit__winsdk_Windows_Globalization_Fonts(void) noexcept
{
    using namespace py::cpp::Windows::Globalization::Fonts;

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

    state->type_LanguageFont = py::register_python_type(module.get(), type_name_LanguageFont, &type_spec_LanguageFont, bases.get(), nullptr);
    if (!state->type_LanguageFont)
    {
        return nullptr;
    }

    state->type_LanguageFontGroup = py::register_python_type(module.get(), type_name_LanguageFontGroup, &type_spec_LanguageFontGroup, bases.get(), nullptr);
    if (!state->type_LanguageFontGroup)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Globalization::Fonts::LanguageFont>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Globalization::Fonts;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Globalization::Fonts");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_LanguageFont;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Globalization::Fonts::LanguageFont is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Globalization::Fonts::LanguageFontGroup>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Globalization::Fonts;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Globalization::Fonts");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_LanguageFontGroup;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Globalization::Fonts::LanguageFontGroup is not registered");
        return nullptr;
    }

    return python_type;
}
