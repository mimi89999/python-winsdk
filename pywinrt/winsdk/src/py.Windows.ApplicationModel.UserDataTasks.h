// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.ApplicationModel.UserDataTasks.h>

namespace py::proj::Windows::ApplicationModel::UserDataTasks
{}

namespace py::impl::Windows::ApplicationModel::UserDataTasks
{}

namespace py::wrapper::Windows::ApplicationModel::UserDataTasks
{
    using UserDataTask = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTask>;
    using UserDataTaskBatch = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>;
    using UserDataTaskList = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskList>;
    using UserDataTaskListLimitedWriteOperations = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>;
    using UserDataTaskListSyncManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>;
    using UserDataTaskManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>;
    using UserDataTaskQueryOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>;
    using UserDataTaskReader = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>;
    using UserDataTaskRecurrenceProperties = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>;
    using UserDataTaskRegenerationProperties = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>;
    using UserDataTaskStore = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTask>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskList>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
