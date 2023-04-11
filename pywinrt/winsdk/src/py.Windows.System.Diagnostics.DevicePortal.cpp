// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#include "pybase.h"
#include "py.Windows.System.Diagnostics.DevicePortal.h"


namespace py::cpp::Windows::System::Diagnostics::DevicePortal
{
    struct module_state
    {
        PyObject* type_DevicePortalConnectionClosedReason;
        PyTypeObject* type_DevicePortalConnection;
        PyTypeObject* type_DevicePortalConnectionClosedEventArgs;
        PyTypeObject* type_DevicePortalConnectionRequestReceivedEventArgs;
    };

    static PyObject* register_DevicePortalConnectionClosedReason(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DevicePortalConnectionClosedReason)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DevicePortalConnectionClosedReason = type;
        Py_INCREF(state->type_DevicePortalConnectionClosedReason);


        Py_RETURN_NONE;
    }

    // ----- DevicePortalConnection class --------------------
    static constexpr const char* const type_name_DevicePortalConnection = "DevicePortalConnection";

    static PyObject* _new_DevicePortalConnection(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_DevicePortalConnection);
        return nullptr;
    }

    static void _dealloc_DevicePortalConnection(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection* self) noexcept
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

    static PyObject* DevicePortalConnection_GetForAppServiceConnection(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"GetForAppServiceConnection", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::AppService::AppServiceConnection>(args, 0);

                return py::convert(winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection::GetForAppServiceConnection(param0));
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

    static PyObject* DevicePortalConnection_GetServerMessageWebSocketForRequest(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"GetServerMessageWebSocketForRequest", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Web::Http::HttpRequestMessage>(args, 0);

                return py::convert(self->obj.GetServerMessageWebSocketForRequest(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"GetServerMessageWebSocketForRequest", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Web::Http::HttpRequestMessage>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Networking::Sockets::SocketMessageType>(args, 1);
                auto param2 = py::convert_to<winrt::hstring>(args, 2);

                return py::convert(self->obj.GetServerMessageWebSocketForRequest(param0, param1, param2));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 6)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"GetServerMessageWebSocketForRequest", 6))
            {
                py::set_arg_count_version_error(6);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Web::Http::HttpRequestMessage>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Networking::Sockets::SocketMessageType>(args, 1);
                auto param2 = py::convert_to<winrt::hstring>(args, 2);
                auto param3 = py::convert_to<uint32_t>(args, 3);
                auto param4 = py::convert_to<uint32_t>(args, 4);
                auto param5 = py::convert_to<winrt::Windows::Networking::Sockets::MessageWebSocketReceiveMode>(args, 5);

                return py::convert(self->obj.GetServerMessageWebSocketForRequest(param0, param1, param2, param3, param4, param5));
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

    static PyObject* DevicePortalConnection_GetServerStreamWebSocketForRequest(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"GetServerStreamWebSocketForRequest", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Web::Http::HttpRequestMessage>(args, 0);

                return py::convert(self->obj.GetServerStreamWebSocketForRequest(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 4)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"GetServerStreamWebSocketForRequest", 4))
            {
                py::set_arg_count_version_error(4);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Web::Http::HttpRequestMessage>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);
                auto param2 = py::convert_to<uint32_t>(args, 2);
                auto param3 = py::convert_to<bool>(args, 3);

                return py::convert(self->obj.GetServerStreamWebSocketForRequest(param0, param1, param2, param3));
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

    static PyObject* DevicePortalConnection_add_Closed(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"Closed"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>>(arg);

            return py::convert(self->obj.Closed(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DevicePortalConnection_remove_Closed(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"Closed"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.Closed(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DevicePortalConnection_add_RequestReceived(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"RequestReceived"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>>(arg);

            return py::convert(self->obj.RequestReceived(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DevicePortalConnection_remove_RequestReceived(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection", L"RequestReceived"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.RequestReceived(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_DevicePortalConnection(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_DevicePortalConnection(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DevicePortalConnection[] = {
        { "get_for_app_service_connection", reinterpret_cast<PyCFunction>(DevicePortalConnection_GetForAppServiceConnection), METH_VARARGS | METH_STATIC, nullptr },
        { "get_server_message_web_socket_for_request", reinterpret_cast<PyCFunction>(DevicePortalConnection_GetServerMessageWebSocketForRequest), METH_VARARGS, nullptr },
        { "get_server_stream_web_socket_for_request", reinterpret_cast<PyCFunction>(DevicePortalConnection_GetServerStreamWebSocketForRequest), METH_VARARGS, nullptr },
        { "add_closed", reinterpret_cast<PyCFunction>(DevicePortalConnection_add_Closed), METH_O, nullptr },
        { "remove_closed", reinterpret_cast<PyCFunction>(DevicePortalConnection_remove_Closed), METH_O, nullptr },
        { "add_request_received", reinterpret_cast<PyCFunction>(DevicePortalConnection_add_RequestReceived), METH_O, nullptr },
        { "remove_request_received", reinterpret_cast<PyCFunction>(DevicePortalConnection_remove_RequestReceived), METH_O, nullptr },
        { "_assign_array_", _assign_array_DevicePortalConnection, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DevicePortalConnection), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DevicePortalConnection[] = {
        { }
    };

    static PyType_Slot _type_slots_DevicePortalConnection[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_DevicePortalConnection) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_DevicePortalConnection) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_DevicePortalConnection) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_DevicePortalConnection) },
        { },
    };

    static PyType_Spec type_spec_DevicePortalConnection =
    {
        "_winsdk_Windows_System_Diagnostics_DevicePortal.DevicePortalConnection",
        sizeof(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DevicePortalConnection
    };

    // ----- DevicePortalConnectionClosedEventArgs class --------------------
    static constexpr const char* const type_name_DevicePortalConnectionClosedEventArgs = "DevicePortalConnectionClosedEventArgs";

    static PyObject* _new_DevicePortalConnectionClosedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_DevicePortalConnectionClosedEventArgs);
        return nullptr;
    }

    static void _dealloc_DevicePortalConnectionClosedEventArgs(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs* self) noexcept
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

    static PyObject* DevicePortalConnectionClosedEventArgs_get_Reason(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionClosedEventArgs", L"Reason"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Reason());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_DevicePortalConnectionClosedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_DevicePortalConnectionClosedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DevicePortalConnectionClosedEventArgs[] = {
        { "_assign_array_", _assign_array_DevicePortalConnectionClosedEventArgs, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DevicePortalConnectionClosedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DevicePortalConnectionClosedEventArgs[] = {
        { "reason", reinterpret_cast<getter>(DevicePortalConnectionClosedEventArgs_get_Reason), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DevicePortalConnectionClosedEventArgs[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_DevicePortalConnectionClosedEventArgs) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_DevicePortalConnectionClosedEventArgs) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_DevicePortalConnectionClosedEventArgs) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_DevicePortalConnectionClosedEventArgs) },
        { },
    };

    static PyType_Spec type_spec_DevicePortalConnectionClosedEventArgs =
    {
        "_winsdk_Windows_System_Diagnostics_DevicePortal.DevicePortalConnectionClosedEventArgs",
        sizeof(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DevicePortalConnectionClosedEventArgs
    };

    // ----- DevicePortalConnectionRequestReceivedEventArgs class --------------------
    static constexpr const char* const type_name_DevicePortalConnectionRequestReceivedEventArgs = "DevicePortalConnectionRequestReceivedEventArgs";

    static PyObject* _new_DevicePortalConnectionRequestReceivedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_DevicePortalConnectionRequestReceivedEventArgs);
        return nullptr;
    }

    static void _dealloc_DevicePortalConnectionRequestReceivedEventArgs(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs* self) noexcept
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

    static PyObject* DevicePortalConnectionRequestReceivedEventArgs_GetDeferral(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionRequestReceivedEventArgs", L"GetDeferral", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.GetDeferral());
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

    static PyObject* DevicePortalConnectionRequestReceivedEventArgs_get_RequestMessage(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionRequestReceivedEventArgs", L"RequestMessage"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.RequestMessage());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DevicePortalConnectionRequestReceivedEventArgs_get_ResponseMessage(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionRequestReceivedEventArgs", L"ResponseMessage"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ResponseMessage());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DevicePortalConnectionRequestReceivedEventArgs_get_IsWebSocketUpgradeRequest(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionRequestReceivedEventArgs", L"IsWebSocketUpgradeRequest"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.IsWebSocketUpgradeRequest());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DevicePortalConnectionRequestReceivedEventArgs_get_WebSocketProtocolsRequested(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionRequestReceivedEventArgs", L"WebSocketProtocolsRequested"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.WebSocketProtocolsRequested());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_DevicePortalConnectionRequestReceivedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_DevicePortalConnectionRequestReceivedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DevicePortalConnectionRequestReceivedEventArgs[] = {
        { "get_deferral", reinterpret_cast<PyCFunction>(DevicePortalConnectionRequestReceivedEventArgs_GetDeferral), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_DevicePortalConnectionRequestReceivedEventArgs, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DevicePortalConnectionRequestReceivedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DevicePortalConnectionRequestReceivedEventArgs[] = {
        { "request_message", reinterpret_cast<getter>(DevicePortalConnectionRequestReceivedEventArgs_get_RequestMessage), nullptr, nullptr, nullptr },
        { "response_message", reinterpret_cast<getter>(DevicePortalConnectionRequestReceivedEventArgs_get_ResponseMessage), nullptr, nullptr, nullptr },
        { "is_web_socket_upgrade_request", reinterpret_cast<getter>(DevicePortalConnectionRequestReceivedEventArgs_get_IsWebSocketUpgradeRequest), nullptr, nullptr, nullptr },
        { "web_socket_protocols_requested", reinterpret_cast<getter>(DevicePortalConnectionRequestReceivedEventArgs_get_WebSocketProtocolsRequested), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DevicePortalConnectionRequestReceivedEventArgs[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_DevicePortalConnectionRequestReceivedEventArgs) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_DevicePortalConnectionRequestReceivedEventArgs) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_DevicePortalConnectionRequestReceivedEventArgs) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_DevicePortalConnectionRequestReceivedEventArgs) },
        { },
    };

    static PyType_Spec type_spec_DevicePortalConnectionRequestReceivedEventArgs =
    {
        "_winsdk_Windows_System_Diagnostics_DevicePortal.DevicePortalConnectionRequestReceivedEventArgs",
        sizeof(py::wrapper::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DevicePortalConnectionRequestReceivedEventArgs
    };

    // ----- Windows.System.Diagnostics.DevicePortal Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::System::Diagnostics::DevicePortal");

    static PyMethodDef module_methods[] = {
        {"_register_DevicePortalConnectionClosedReason", register_DevicePortalConnectionClosedReason, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_DevicePortalConnectionClosedReason);
        Py_VISIT(state->type_DevicePortalConnection);
        Py_VISIT(state->type_DevicePortalConnectionClosedEventArgs);
        Py_VISIT(state->type_DevicePortalConnectionRequestReceivedEventArgs);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_DevicePortalConnectionClosedReason);
        Py_CLEAR(state->type_DevicePortalConnection);
        Py_CLEAR(state->type_DevicePortalConnectionClosedEventArgs);
        Py_CLEAR(state->type_DevicePortalConnectionRequestReceivedEventArgs);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_System_Diagnostics_DevicePortal",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::System::Diagnostics::DevicePortal

PyMODINIT_FUNC PyInit__winsdk_Windows_System_Diagnostics_DevicePortal(void) noexcept
{
    using namespace py::cpp::Windows::System::Diagnostics::DevicePortal;

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

    state->type_DevicePortalConnection = py::register_python_type(module.get(), type_name_DevicePortalConnection, &type_spec_DevicePortalConnection, bases.get(), nullptr);
    if (!state->type_DevicePortalConnection)
    {
        return nullptr;
    }

    state->type_DevicePortalConnectionClosedEventArgs = py::register_python_type(module.get(), type_name_DevicePortalConnectionClosedEventArgs, &type_spec_DevicePortalConnectionClosedEventArgs, bases.get(), nullptr);
    if (!state->type_DevicePortalConnectionClosedEventArgs)
    {
        return nullptr;
    }

    state->type_DevicePortalConnectionRequestReceivedEventArgs = py::register_python_type(module.get(), type_name_DevicePortalConnectionRequestReceivedEventArgs, &type_spec_DevicePortalConnectionRequestReceivedEventArgs, bases.get(), nullptr);
    if (!state->type_DevicePortalConnectionRequestReceivedEventArgs)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Diagnostics::DevicePortal;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Diagnostics::DevicePortal");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DevicePortalConnectionClosedReason;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Diagnostics::DevicePortal;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Diagnostics::DevicePortal");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DevicePortalConnection;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Diagnostics::DevicePortal;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Diagnostics::DevicePortal");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DevicePortalConnectionClosedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Diagnostics::DevicePortal;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Diagnostics::DevicePortal");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DevicePortalConnectionRequestReceivedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}
