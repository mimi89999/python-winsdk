// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.Graphics.DirectX.Direct3D11.h"


PyObject* py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::convert(winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription instance) noexcept
{
    auto type = py::get_python_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>();
    if (!type)
    {
        return nullptr;
    }

    return py::wrap_struct(instance, type);
}
winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::convert_to(PyObject* obj)
{
    throw_if_pyobj_null(obj);

    auto type =  py::get_python_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>();

    if (!type) {
        throw python_exception();
    }

    if (Py_TYPE(obj) == type)
    {
        return reinterpret_cast<py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>*>(obj)->obj;
    }

    PyErr_SetString(PyExc_TypeError, "expecting winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription");
    throw python_exception();
}

PyObject* py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>::convert(winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription instance) noexcept
{
    auto type = py::get_python_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>();
    if (!type)
    {
        return nullptr;
    }

    return py::wrap_struct(instance, type);
}
winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>::convert_to(PyObject* obj)
{
    throw_if_pyobj_null(obj);

    auto type =  py::get_python_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>();

    if (!type) {
        throw python_exception();
    }

    if (Py_TYPE(obj) == type)
    {
        return reinterpret_cast<py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>*>(obj)->obj;
    }

    PyErr_SetString(PyExc_TypeError, "expecting winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription");
    throw python_exception();
}

namespace py::cpp::Windows::Graphics::DirectX::Direct3D11
{
    struct module_state
    {
        PyObject* type_Direct3DBindings;
        PyObject* type_Direct3DUsage;
        PyTypeObject* type_IDirect3DDevice;
        PyTypeObject* type_IDirect3DSurface;
        PyTypeObject* type_Direct3DMultisampleDescription;
        PyTypeObject* type_Direct3DSurfaceDescription;
    };

    static PyObject* register_Direct3DBindings(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_Direct3DBindings)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_Direct3DBindings = type;
        Py_INCREF(state->type_Direct3DBindings);


        Py_RETURN_NONE;
    }

    static PyObject* register_Direct3DUsage(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_Direct3DUsage)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_Direct3DUsage = type;
        Py_INCREF(state->type_Direct3DUsage);


        Py_RETURN_NONE;
    }

    // ----- IDirect3DDevice interface --------------------
    constexpr const char* const type_name_IDirect3DDevice = "IDirect3DDevice";

    static PyObject* _new_IDirect3DDevice(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */) noexcept
    {
        py::set_invalid_activation_error(type_name_IDirect3DDevice);
        return nullptr;
    }

    static void _dealloc_IDirect3DDevice(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice* self) noexcept
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

    static PyObject* IDirect3DDevice_Close(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.IClosable", L"Close", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Close();
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

    static PyObject* IDirect3DDevice_Trim(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice", L"Trim", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Trim();
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

    static PyObject* _assign_array_IDirect3DDevice(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_IDirect3DDevice(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _enter_IDirect3DDevice(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice* self) noexcept
    {
        Py_INCREF(self);
        return reinterpret_cast<PyObject*>(self);
    }

    static PyObject* _exit_IDirect3DDevice(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice* self) noexcept
    {
        try
        {
            self->obj.Close();
            Py_RETURN_FALSE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IDirect3DDevice[] = {
        { "close", reinterpret_cast<PyCFunction>(IDirect3DDevice_Close), METH_VARARGS, nullptr },
        { "trim", reinterpret_cast<PyCFunction>(IDirect3DDevice_Trim), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_IDirect3DDevice, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IDirect3DDevice), METH_O | METH_STATIC, nullptr },
        { "__enter__", reinterpret_cast<PyCFunction>(_enter_IDirect3DDevice), METH_NOARGS, nullptr },
        { "__exit__",  reinterpret_cast<PyCFunction>(_exit_IDirect3DDevice), METH_VARARGS, nullptr },
        { }
    };

    static PyGetSetDef _getset_IDirect3DDevice[] = {
        { }
    };

    static PyType_Slot _type_slots_IDirect3DDevice[] = 
    {
        { Py_tp_new, _new_IDirect3DDevice },
        { Py_tp_dealloc, _dealloc_IDirect3DDevice },
        { Py_tp_methods, _methods_IDirect3DDevice },
        { Py_tp_getset, _getset_IDirect3DDevice },
        { },
    };

    static PyType_Spec type_spec_IDirect3DDevice =
    {
        "_winsdk_Windows_Graphics_DirectX_Direct3D11.IDirect3DDevice",
        sizeof(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IDirect3DDevice
    };

    // ----- IDirect3DSurface interface --------------------
    constexpr const char* const type_name_IDirect3DSurface = "IDirect3DSurface";

    static PyObject* _new_IDirect3DSurface(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */) noexcept
    {
        py::set_invalid_activation_error(type_name_IDirect3DSurface);
        return nullptr;
    }

    static void _dealloc_IDirect3DSurface(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* self) noexcept
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

    static PyObject* IDirect3DSurface_Close(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.IClosable", L"Close", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Close();
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

    static PyObject* IDirect3DSurface_get_Description(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface", L"Description"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Description());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_IDirect3DSurface(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_IDirect3DSurface(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _enter_IDirect3DSurface(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* self) noexcept
    {
        Py_INCREF(self);
        return reinterpret_cast<PyObject*>(self);
    }

    static PyObject* _exit_IDirect3DSurface(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface* self) noexcept
    {
        try
        {
            self->obj.Close();
            Py_RETURN_FALSE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IDirect3DSurface[] = {
        { "close", reinterpret_cast<PyCFunction>(IDirect3DSurface_Close), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_IDirect3DSurface, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IDirect3DSurface), METH_O | METH_STATIC, nullptr },
        { "__enter__", reinterpret_cast<PyCFunction>(_enter_IDirect3DSurface), METH_NOARGS, nullptr },
        { "__exit__",  reinterpret_cast<PyCFunction>(_exit_IDirect3DSurface), METH_VARARGS, nullptr },
        { }
    };

    static PyGetSetDef _getset_IDirect3DSurface[] = {
        { "description", reinterpret_cast<getter>(IDirect3DSurface_get_Description), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_IDirect3DSurface[] = 
    {
        { Py_tp_new, _new_IDirect3DSurface },
        { Py_tp_dealloc, _dealloc_IDirect3DSurface },
        { Py_tp_methods, _methods_IDirect3DSurface },
        { Py_tp_getset, _getset_IDirect3DSurface },
        { },
    };

    static PyType_Spec type_spec_IDirect3DSurface =
    {
        "_winsdk_Windows_Graphics_DirectX_Direct3D11.IDirect3DSurface",
        sizeof(py::wrapper::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IDirect3DSurface
    };

    // ----- Direct3DMultisampleDescription struct --------------------
    constexpr const char* const type_name_Direct3DMultisampleDescription = "Direct3DMultisampleDescription";

    PyObject* _new_Direct3DMultisampleDescription(PyTypeObject* type, PyObject* args, PyObject* kwds)
    {
        auto tuple_size = PyTuple_Size(args);

        if ((tuple_size == 0) && (kwds == nullptr))
        {
            try
            {
                winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription return_value{};
                return py::convert(return_value);
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }

        int32_t _Count{};
        int32_t _Quality{};

        static const char* kwlist[] = {"count", "quality", nullptr};
        if (!PyArg_ParseTupleAndKeywords(args, kwds, "ii", const_cast<char**>(kwlist), &_Count, &_Quality))
        {
            return nullptr;
        }

        try
        {
            winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription return_value{ _Count, _Quality };
            return py::convert(return_value);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static void _dealloc_Direct3DMultisampleDescription(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription* self) noexcept
    {
    }

    static PyObject* Direct3DMultisampleDescription_get_Count(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Count);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int Direct3DMultisampleDescription_set_Count(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.Count = py::converter<int32_t>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* Direct3DMultisampleDescription_get_Quality(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Quality);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int Direct3DMultisampleDescription_set_Quality(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.Quality = py::converter<int32_t>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyGetSetDef _getset_Direct3DMultisampleDescription[] = {
        { "count", reinterpret_cast<getter>(Direct3DMultisampleDescription_get_Count), reinterpret_cast<setter>(Direct3DMultisampleDescription_set_Count), nullptr, nullptr },
        { "quality", reinterpret_cast<getter>(Direct3DMultisampleDescription_get_Quality), reinterpret_cast<setter>(Direct3DMultisampleDescription_set_Quality), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_Direct3DMultisampleDescription[] = 
    {
        { Py_tp_new, _new_Direct3DMultisampleDescription },
        { Py_tp_dealloc, _dealloc_Direct3DMultisampleDescription },
        { Py_tp_getset, _getset_Direct3DMultisampleDescription },
        { },
    };

    static PyType_Spec type_spec_Direct3DMultisampleDescription =
    {
        "_winsdk_Windows_Graphics_DirectX_Direct3D11.Direct3DMultisampleDescription",
        sizeof(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_Direct3DMultisampleDescription
    };

    // ----- Direct3DSurfaceDescription struct --------------------
    constexpr const char* const type_name_Direct3DSurfaceDescription = "Direct3DSurfaceDescription";

    PyObject* _new_Direct3DSurfaceDescription(PyTypeObject* type, PyObject* args, PyObject* kwds)
    {
        auto tuple_size = PyTuple_Size(args);

        if ((tuple_size == 0) && (kwds == nullptr))
        {
            try
            {
                winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription return_value{};
                return py::convert(return_value);
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }

        int32_t _Width{};
        int32_t _Height{};
        int32_t _Format{};
        PyObject* _MultisampleDescription{};

        static const char* kwlist[] = {"width", "height", "format", "multisample_description", nullptr};
        if (!PyArg_ParseTupleAndKeywords(args, kwds, "iiiO", const_cast<char**>(kwlist), &_Width, &_Height, &_Format, &_MultisampleDescription))
        {
            return nullptr;
        }

        try
        {
            winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription return_value{ _Width, _Height, static_cast<winrt::Windows::Graphics::DirectX::DirectXPixelFormat>(_Format), py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::convert_to(_MultisampleDescription) };
            return py::convert(return_value);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static void _dealloc_Direct3DSurfaceDescription(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self) noexcept
    {
    }

    static PyObject* Direct3DSurfaceDescription_get_Width(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Width);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int Direct3DSurfaceDescription_set_Width(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.Width = py::converter<int32_t>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* Direct3DSurfaceDescription_get_Height(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Height);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int Direct3DSurfaceDescription_set_Height(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.Height = py::converter<int32_t>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* Direct3DSurfaceDescription_get_Format(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Format);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int Direct3DSurfaceDescription_set_Format(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.Format = py::converter<winrt::Windows::Graphics::DirectX::DirectXPixelFormat>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* Direct3DSurfaceDescription_get_MultisampleDescription(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MultisampleDescription);
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int Direct3DSurfaceDescription_set_MultisampleDescription(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            self->obj.MultisampleDescription = py::converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::convert_to(arg);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyGetSetDef _getset_Direct3DSurfaceDescription[] = {
        { "width", reinterpret_cast<getter>(Direct3DSurfaceDescription_get_Width), reinterpret_cast<setter>(Direct3DSurfaceDescription_set_Width), nullptr, nullptr },
        { "height", reinterpret_cast<getter>(Direct3DSurfaceDescription_get_Height), reinterpret_cast<setter>(Direct3DSurfaceDescription_set_Height), nullptr, nullptr },
        { "format", reinterpret_cast<getter>(Direct3DSurfaceDescription_get_Format), reinterpret_cast<setter>(Direct3DSurfaceDescription_set_Format), nullptr, nullptr },
        { "multisample_description", reinterpret_cast<getter>(Direct3DSurfaceDescription_get_MultisampleDescription), reinterpret_cast<setter>(Direct3DSurfaceDescription_set_MultisampleDescription), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_Direct3DSurfaceDescription[] = 
    {
        { Py_tp_new, _new_Direct3DSurfaceDescription },
        { Py_tp_dealloc, _dealloc_Direct3DSurfaceDescription },
        { Py_tp_getset, _getset_Direct3DSurfaceDescription },
        { },
    };

    static PyType_Spec type_spec_Direct3DSurfaceDescription =
    {
        "_winsdk_Windows_Graphics_DirectX_Direct3D11.Direct3DSurfaceDescription",
        sizeof(py::wrapper::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_Direct3DSurfaceDescription
    };

    // ----- Windows.Graphics.DirectX.Direct3D11 Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Graphics::DirectX::Direct3D11");

    static PyMethodDef module_methods[] = {
        {"_register_Direct3DBindings", register_Direct3DBindings, METH_O, "registers type"},
        {"_register_Direct3DUsage", register_Direct3DUsage, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_Direct3DBindings);
        Py_VISIT(state->type_Direct3DUsage);
        Py_VISIT(state->type_IDirect3DDevice);
        Py_VISIT(state->type_IDirect3DSurface);
        Py_VISIT(state->type_Direct3DMultisampleDescription);
        Py_VISIT(state->type_Direct3DSurfaceDescription);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_Direct3DBindings);
        Py_CLEAR(state->type_Direct3DUsage);
        Py_CLEAR(state->type_IDirect3DDevice);
        Py_CLEAR(state->type_IDirect3DSurface);
        Py_CLEAR(state->type_Direct3DMultisampleDescription);
        Py_CLEAR(state->type_Direct3DSurfaceDescription);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Graphics_DirectX_Direct3D11",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Graphics::DirectX::Direct3D11

PyMODINIT_FUNC PyInit__winsdk_Windows_Graphics_DirectX_Direct3D11(void) noexcept
{
    using namespace py::cpp::Windows::Graphics::DirectX::Direct3D11;

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

    state->type_IDirect3DDevice = py::register_python_type(module.get(), type_name_IDirect3DDevice, &type_spec_IDirect3DDevice, bases.get(), nullptr);
    if (!state->type_IDirect3DDevice)
    {
        return nullptr;
    }

    state->type_IDirect3DSurface = py::register_python_type(module.get(), type_name_IDirect3DSurface, &type_spec_IDirect3DSurface, bases.get(), nullptr);
    if (!state->type_IDirect3DSurface)
    {
        return nullptr;
    }

    state->type_Direct3DMultisampleDescription = py::register_python_type(module.get(), type_name_Direct3DMultisampleDescription, &type_spec_Direct3DMultisampleDescription, bases.get(), nullptr);
    if (!state->type_Direct3DMultisampleDescription)
    {
        return nullptr;
    }

    state->type_Direct3DSurfaceDescription = py::register_python_type(module.get(), type_name_Direct3DSurfaceDescription, &type_spec_Direct3DSurfaceDescription, bases.get(), nullptr);
    if (!state->type_Direct3DSurfaceDescription)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DBindings>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX::Direct3D11;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX::Direct3D11");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_Direct3DBindings;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DBindings is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DUsage>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX::Direct3D11;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX::Direct3D11");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_Direct3DUsage;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DUsage is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX::Direct3D11;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX::Direct3D11");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IDirect3DDevice;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX::Direct3D11;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX::Direct3D11");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IDirect3DSurface;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX::Direct3D11;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX::Direct3D11");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_Direct3DMultisampleDescription;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::DirectX::Direct3D11;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::DirectX::Direct3D11");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_Direct3DSurfaceDescription;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription is not registered");
        return nullptr;
    }

    return python_type;
}
