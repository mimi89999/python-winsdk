// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

#include "pybase.h"
#include "py.Windows.Devices.Bluetooth.Rfcomm.h"


namespace py::cpp::Windows::Devices::Bluetooth::Rfcomm
{
    struct module_state
    {
        PyTypeObject* type_RfcommDeviceService;
        PyTypeObject* type_RfcommDeviceServicesResult;
        PyTypeObject* type_RfcommServiceId;
        PyTypeObject* type_RfcommServiceProvider;
    };

    // ----- RfcommDeviceService class --------------------
    constexpr const char* const type_name_RfcommDeviceService = "RfcommDeviceService";

    static PyObject* _new_RfcommDeviceService(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_RfcommDeviceService);
        return nullptr;
    }

    static void _dealloc_RfcommDeviceService(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* RfcommDeviceService_Close(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
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

    static PyObject* RfcommDeviceService_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService::FromIdAsync(param0));
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

    static PyObject* RfcommDeviceService_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>(args, 0);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService::GetDeviceSelector(param0));
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

    static PyObject* RfcommDeviceService_GetDeviceSelectorForBluetoothDevice(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::BluetoothDevice>(args, 0);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService::GetDeviceSelectorForBluetoothDevice(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::BluetoothDevice>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::Bluetooth::BluetoothCacheMode>(args, 1);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService::GetDeviceSelectorForBluetoothDevice(param0, param1));
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

    static PyObject* RfcommDeviceService_GetDeviceSelectorForBluetoothDeviceAndServiceId(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::BluetoothDevice>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>(args, 1);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService::GetDeviceSelectorForBluetoothDeviceAndServiceId(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::BluetoothDevice>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Devices::Bluetooth::BluetoothCacheMode>(args, 2);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService::GetDeviceSelectorForBluetoothDeviceAndServiceId(param0, param1, param2));
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

    static PyObject* RfcommDeviceService_GetSdpRawAttributesAsync(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.GetSdpRawAttributesAsync());
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::BluetoothCacheMode>(args, 0);

                return py::convert(self->obj.GetSdpRawAttributesAsync(param0));
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

    static PyObject* RfcommDeviceService_RequestAccessAsync(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.RequestAccessAsync());
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

    static PyObject* RfcommDeviceService_get_ConnectionHostName(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ConnectionHostName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommDeviceService_get_ConnectionServiceName(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ConnectionServiceName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommDeviceService_get_MaxProtectionLevel(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxProtectionLevel());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommDeviceService_get_ProtectionLevel(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ProtectionLevel());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommDeviceService_get_ServiceId(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ServiceId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommDeviceService_get_Device(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Device());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommDeviceService_get_DeviceAccessInformation(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DeviceAccessInformation());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_RfcommDeviceService(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _enter_RfcommDeviceService(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self) noexcept
    {
        Py_INCREF(self);
        return reinterpret_cast<PyObject*>(self);
    }

    static PyObject* _exit_RfcommDeviceService(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService* self) noexcept
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

    static PyMethodDef _methods_RfcommDeviceService[] = {
        { "close", reinterpret_cast<PyCFunction>(RfcommDeviceService_Close), METH_VARARGS, nullptr },
        { "from_id_async", reinterpret_cast<PyCFunction>(RfcommDeviceService_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(RfcommDeviceService_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector_for_bluetooth_device", reinterpret_cast<PyCFunction>(RfcommDeviceService_GetDeviceSelectorForBluetoothDevice), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector_for_bluetooth_device_and_service_id", reinterpret_cast<PyCFunction>(RfcommDeviceService_GetDeviceSelectorForBluetoothDeviceAndServiceId), METH_VARARGS | METH_STATIC, nullptr },
        { "get_sdp_raw_attributes_async", reinterpret_cast<PyCFunction>(RfcommDeviceService_GetSdpRawAttributesAsync), METH_VARARGS, nullptr },
        { "request_access_async", reinterpret_cast<PyCFunction>(RfcommDeviceService_RequestAccessAsync), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_RfcommDeviceService), METH_O | METH_STATIC, nullptr },
        { "__enter__", reinterpret_cast<PyCFunction>(_enter_RfcommDeviceService), METH_NOARGS, nullptr },
        { "__exit__",  reinterpret_cast<PyCFunction>(_exit_RfcommDeviceService), METH_VARARGS, nullptr },
        { }
    };

    static PyGetSetDef _getset_RfcommDeviceService[] = {
        { "connection_host_name", reinterpret_cast<getter>(RfcommDeviceService_get_ConnectionHostName), nullptr, nullptr, nullptr },
        { "connection_service_name", reinterpret_cast<getter>(RfcommDeviceService_get_ConnectionServiceName), nullptr, nullptr, nullptr },
        { "max_protection_level", reinterpret_cast<getter>(RfcommDeviceService_get_MaxProtectionLevel), nullptr, nullptr, nullptr },
        { "protection_level", reinterpret_cast<getter>(RfcommDeviceService_get_ProtectionLevel), nullptr, nullptr, nullptr },
        { "service_id", reinterpret_cast<getter>(RfcommDeviceService_get_ServiceId), nullptr, nullptr, nullptr },
        { "device", reinterpret_cast<getter>(RfcommDeviceService_get_Device), nullptr, nullptr, nullptr },
        { "device_access_information", reinterpret_cast<getter>(RfcommDeviceService_get_DeviceAccessInformation), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_RfcommDeviceService[] = 
    {
        { Py_tp_new, _new_RfcommDeviceService },
        { Py_tp_dealloc, _dealloc_RfcommDeviceService },
        { Py_tp_methods, _methods_RfcommDeviceService },
        { Py_tp_getset, _getset_RfcommDeviceService },
        { },
    };

    static PyType_Spec type_spec_RfcommDeviceService =
    {
        "_winsdk_Windows_Devices_Bluetooth_Rfcomm.RfcommDeviceService",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RfcommDeviceService
    };

    // ----- RfcommDeviceServicesResult class --------------------
    constexpr const char* const type_name_RfcommDeviceServicesResult = "RfcommDeviceServicesResult";

    static PyObject* _new_RfcommDeviceServicesResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_RfcommDeviceServicesResult);
        return nullptr;
    }

    static void _dealloc_RfcommDeviceServicesResult(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* RfcommDeviceServicesResult_get_Error(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Error());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommDeviceServicesResult_get_Services(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Services());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_RfcommDeviceServicesResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RfcommDeviceServicesResult[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_RfcommDeviceServicesResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_RfcommDeviceServicesResult[] = {
        { "error", reinterpret_cast<getter>(RfcommDeviceServicesResult_get_Error), nullptr, nullptr, nullptr },
        { "services", reinterpret_cast<getter>(RfcommDeviceServicesResult_get_Services), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_RfcommDeviceServicesResult[] = 
    {
        { Py_tp_new, _new_RfcommDeviceServicesResult },
        { Py_tp_dealloc, _dealloc_RfcommDeviceServicesResult },
        { Py_tp_methods, _methods_RfcommDeviceServicesResult },
        { Py_tp_getset, _getset_RfcommDeviceServicesResult },
        { },
    };

    static PyType_Spec type_spec_RfcommDeviceServicesResult =
    {
        "_winsdk_Windows_Devices_Bluetooth_Rfcomm.RfcommDeviceServicesResult",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RfcommDeviceServicesResult
    };

    // ----- RfcommServiceId class --------------------
    constexpr const char* const type_name_RfcommServiceId = "RfcommServiceId";

    static PyObject* _new_RfcommServiceId(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_RfcommServiceId);
        return nullptr;
    }

    static void _dealloc_RfcommServiceId(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* RfcommServiceId_AsShortId(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.AsShortId());
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

    static PyObject* RfcommServiceId_AsString(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.AsString());
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

    static PyObject* RfcommServiceId_FromShortId(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<uint32_t>(args, 0);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId::FromShortId(param0));
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

    static PyObject* RfcommServiceId_FromUuid(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId::FromUuid(param0));
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

    static PyObject* RfcommServiceId_get_Uuid(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Uuid());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommServiceId_get_GenericFileTransfer(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId::GenericFileTransfer());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommServiceId_get_ObexFileTransfer(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId::ObexFileTransfer());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommServiceId_get_ObexObjectPush(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId::ObexObjectPush());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommServiceId_get_PhoneBookAccessPce(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId::PhoneBookAccessPce());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommServiceId_get_PhoneBookAccessPse(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId::PhoneBookAccessPse());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommServiceId_get_SerialPort(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId::SerialPort());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_RfcommServiceId(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RfcommServiceId[] = {
        { "as_short_id", reinterpret_cast<PyCFunction>(RfcommServiceId_AsShortId), METH_VARARGS, nullptr },
        { "as_string", reinterpret_cast<PyCFunction>(RfcommServiceId_AsString), METH_VARARGS, nullptr },
        { "from_short_id", reinterpret_cast<PyCFunction>(RfcommServiceId_FromShortId), METH_VARARGS | METH_STATIC, nullptr },
        { "from_uuid", reinterpret_cast<PyCFunction>(RfcommServiceId_FromUuid), METH_VARARGS | METH_STATIC, nullptr },
        { "get_generic_file_transfer", reinterpret_cast<PyCFunction>(RfcommServiceId_get_GenericFileTransfer), METH_NOARGS | METH_STATIC, nullptr },
        { "get_obex_file_transfer", reinterpret_cast<PyCFunction>(RfcommServiceId_get_ObexFileTransfer), METH_NOARGS | METH_STATIC, nullptr },
        { "get_obex_object_push", reinterpret_cast<PyCFunction>(RfcommServiceId_get_ObexObjectPush), METH_NOARGS | METH_STATIC, nullptr },
        { "get_phone_book_access_pce", reinterpret_cast<PyCFunction>(RfcommServiceId_get_PhoneBookAccessPce), METH_NOARGS | METH_STATIC, nullptr },
        { "get_phone_book_access_pse", reinterpret_cast<PyCFunction>(RfcommServiceId_get_PhoneBookAccessPse), METH_NOARGS | METH_STATIC, nullptr },
        { "get_serial_port", reinterpret_cast<PyCFunction>(RfcommServiceId_get_SerialPort), METH_NOARGS | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_RfcommServiceId), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_RfcommServiceId[] = {
        { "uuid", reinterpret_cast<getter>(RfcommServiceId_get_Uuid), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_RfcommServiceId[] = 
    {
        { Py_tp_new, _new_RfcommServiceId },
        { Py_tp_dealloc, _dealloc_RfcommServiceId },
        { Py_tp_methods, _methods_RfcommServiceId },
        { Py_tp_getset, _getset_RfcommServiceId },
        { },
    };

    static PyType_Spec type_spec_RfcommServiceId =
    {
        "_winsdk_Windows_Devices_Bluetooth_Rfcomm.RfcommServiceId",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RfcommServiceId
    };

    // ----- RfcommServiceProvider class --------------------
    constexpr const char* const type_name_RfcommServiceProvider = "RfcommServiceProvider";

    static PyObject* _new_RfcommServiceProvider(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_RfcommServiceProvider);
        return nullptr;
    }

    static void _dealloc_RfcommServiceProvider(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* RfcommServiceProvider_CreateAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>(args, 0);

                return py::convert(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider::CreateAsync(param0));
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

    static PyObject* RfcommServiceProvider_StartAdvertising(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::Sockets::StreamSocketListener>(args, 0);

                self->obj.StartAdvertising(param0);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::Sockets::StreamSocketListener>(args, 0);
                auto param1 = py::convert_to<bool>(args, 1);

                self->obj.StartAdvertising(param0, param1);
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

    static PyObject* RfcommServiceProvider_StopAdvertising(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.StopAdvertising();
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

    static PyObject* RfcommServiceProvider_get_SdpRawAttributes(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SdpRawAttributes());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* RfcommServiceProvider_get_ServiceId(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ServiceId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_RfcommServiceProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_RfcommServiceProvider[] = {
        { "create_async", reinterpret_cast<PyCFunction>(RfcommServiceProvider_CreateAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "start_advertising", reinterpret_cast<PyCFunction>(RfcommServiceProvider_StartAdvertising), METH_VARARGS, nullptr },
        { "stop_advertising", reinterpret_cast<PyCFunction>(RfcommServiceProvider_StopAdvertising), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_RfcommServiceProvider), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_RfcommServiceProvider[] = {
        { "sdp_raw_attributes", reinterpret_cast<getter>(RfcommServiceProvider_get_SdpRawAttributes), nullptr, nullptr, nullptr },
        { "service_id", reinterpret_cast<getter>(RfcommServiceProvider_get_ServiceId), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_RfcommServiceProvider[] = 
    {
        { Py_tp_new, _new_RfcommServiceProvider },
        { Py_tp_dealloc, _dealloc_RfcommServiceProvider },
        { Py_tp_methods, _methods_RfcommServiceProvider },
        { Py_tp_getset, _getset_RfcommServiceProvider },
        { },
    };

    static PyType_Spec type_spec_RfcommServiceProvider =
    {
        "_winsdk_Windows_Devices_Bluetooth_Rfcomm.RfcommServiceProvider",
        sizeof(py::wrapper::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_RfcommServiceProvider
    };

    // ----- Windows.Devices.Bluetooth.Rfcomm Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Bluetooth::Rfcomm");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_RfcommDeviceService);
        Py_VISIT(state->type_RfcommDeviceServicesResult);
        Py_VISIT(state->type_RfcommServiceId);
        Py_VISIT(state->type_RfcommServiceProvider);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_RfcommDeviceService);
        Py_CLEAR(state->type_RfcommDeviceServicesResult);
        Py_CLEAR(state->type_RfcommServiceId);
        Py_CLEAR(state->type_RfcommServiceProvider);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Bluetooth_Rfcomm",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Bluetooth::Rfcomm

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Bluetooth_Rfcomm(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Bluetooth::Rfcomm;

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

    state->type_RfcommDeviceService = py::register_python_type(module.get(), type_name_RfcommDeviceService, &type_spec_RfcommDeviceService, bases.get());
    if (!state->type_RfcommDeviceService)
    {
        return nullptr;
    }

    Py_INCREF(state->type_RfcommDeviceService);

    state->type_RfcommDeviceServicesResult = py::register_python_type(module.get(), type_name_RfcommDeviceServicesResult, &type_spec_RfcommDeviceServicesResult, bases.get());
    if (!state->type_RfcommDeviceServicesResult)
    {
        return nullptr;
    }

    Py_INCREF(state->type_RfcommDeviceServicesResult);

    state->type_RfcommServiceId = py::register_python_type(module.get(), type_name_RfcommServiceId, &type_spec_RfcommServiceId, bases.get());
    if (!state->type_RfcommServiceId)
    {
        return nullptr;
    }

    Py_INCREF(state->type_RfcommServiceId);

    state->type_RfcommServiceProvider = py::register_python_type(module.get(), type_name_RfcommServiceProvider, &type_spec_RfcommServiceProvider, bases.get());
    if (!state->type_RfcommServiceProvider)
    {
        return nullptr;
    }

    Py_INCREF(state->type_RfcommServiceProvider);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Bluetooth::Rfcomm;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Bluetooth::Rfcomm");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_RfcommDeviceService;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Bluetooth::Rfcomm;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Bluetooth::Rfcomm");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_RfcommDeviceServicesResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Bluetooth::Rfcomm;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Bluetooth::Rfcomm");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_RfcommServiceId;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Bluetooth::Rfcomm;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Bluetooth::Rfcomm");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_RfcommServiceProvider;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider is not registered");
        return nullptr;
    }

    return python_type;
}
