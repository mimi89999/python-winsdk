// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.h")
#include "py.Windows.ApplicationModel.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.Web.Http.h")
#include "py.Windows.Web.Http.h"
#endif

#include <winrt/Windows.Services.Store.h>

namespace py::proj::Windows::Services::Store
{}

namespace py::impl::Windows::Services::Store
{}

namespace py::wrapper::Windows::Services::Store
{
    using StoreAcquireLicenseResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreAcquireLicenseResult>;
    using StoreAppLicense = py::winrt_wrapper<winrt::Windows::Services::Store::StoreAppLicense>;
    using StoreAvailability = py::winrt_wrapper<winrt::Windows::Services::Store::StoreAvailability>;
    using StoreCanAcquireLicenseResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreCanAcquireLicenseResult>;
    using StoreCollectionData = py::winrt_wrapper<winrt::Windows::Services::Store::StoreCollectionData>;
    using StoreConsumableResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreConsumableResult>;
    using StoreContext = py::winrt_wrapper<winrt::Windows::Services::Store::StoreContext>;
    using StoreImage = py::winrt_wrapper<winrt::Windows::Services::Store::StoreImage>;
    using StoreLicense = py::winrt_wrapper<winrt::Windows::Services::Store::StoreLicense>;
    using StorePackageInstallOptions = py::winrt_wrapper<winrt::Windows::Services::Store::StorePackageInstallOptions>;
    using StorePackageLicense = py::winrt_wrapper<winrt::Windows::Services::Store::StorePackageLicense>;
    using StorePackageUpdate = py::winrt_wrapper<winrt::Windows::Services::Store::StorePackageUpdate>;
    using StorePackageUpdateResult = py::winrt_wrapper<winrt::Windows::Services::Store::StorePackageUpdateResult>;
    using StorePrice = py::winrt_wrapper<winrt::Windows::Services::Store::StorePrice>;
    using StoreProduct = py::winrt_wrapper<winrt::Windows::Services::Store::StoreProduct>;
    using StoreProductOptions = py::winrt_wrapper<winrt::Windows::Services::Store::StoreProductOptions>;
    using StoreProductPagedQueryResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreProductPagedQueryResult>;
    using StoreProductQueryResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreProductQueryResult>;
    using StoreProductResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreProductResult>;
    using StorePurchaseProperties = py::winrt_wrapper<winrt::Windows::Services::Store::StorePurchaseProperties>;
    using StorePurchaseResult = py::winrt_wrapper<winrt::Windows::Services::Store::StorePurchaseResult>;
    using StoreQueueItem = py::winrt_wrapper<winrt::Windows::Services::Store::StoreQueueItem>;
    using StoreQueueItemCompletedEventArgs = py::winrt_wrapper<winrt::Windows::Services::Store::StoreQueueItemCompletedEventArgs>;
    using StoreQueueItemStatus = py::winrt_wrapper<winrt::Windows::Services::Store::StoreQueueItemStatus>;
    using StoreRateAndReviewResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreRateAndReviewResult>;
    using StoreRequestHelper = py::winrt_wrapper<winrt::Windows::Services::Store::StoreRequestHelper>;
    using StoreSendRequestResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreSendRequestResult>;
    using StoreSku = py::winrt_wrapper<winrt::Windows::Services::Store::StoreSku>;
    using StoreSubscriptionInfo = py::winrt_wrapper<winrt::Windows::Services::Store::StoreSubscriptionInfo>;
    using StoreUninstallStorePackageResult = py::winrt_wrapper<winrt::Windows::Services::Store::StoreUninstallStorePackageResult>;
    using StoreVideo = py::winrt_wrapper<winrt::Windows::Services::Store::StoreVideo>;
    using StorePackageUpdateStatus = py::winrt_struct_wrapper<winrt::Windows::Services::Store::StorePackageUpdateStatus>;
}

namespace py
{

    template<>
    struct py_type<winrt::Windows::Services::Store::StoreCanLicenseStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StoreConsumableStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StoreDurationUnit>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StorePackageUpdateState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StorePurchaseStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StoreQueueItemExtendedState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StoreQueueItemKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StoreQueueItemState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StoreRateAndReviewStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Store::StoreUninstallStorePackageStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreAcquireLicenseResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreAppLicense>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreAvailability>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreCanAcquireLicenseResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreCollectionData>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreConsumableResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreImage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreLicense>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StorePackageInstallOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StorePackageLicense>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StorePackageUpdate>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StorePackageUpdateResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StorePrice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreProduct>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreProductOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreProductPagedQueryResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreProductQueryResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreProductResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StorePurchaseProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StorePurchaseResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreQueueItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreQueueItemCompletedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreQueueItemStatus>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreRateAndReviewResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreRequestHelper>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreSendRequestResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreSku>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreSubscriptionInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreUninstallStorePackageResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StoreVideo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Store::StorePackageUpdateStatus>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Services::Store::StorePackageUpdateStatus>
    {
        static PyObject* convert(winrt::Windows::Services::Store::StorePackageUpdateStatus instance) noexcept;
        static winrt::Windows::Services::Store::StorePackageUpdateStatus convert_to(PyObject* obj);
    };

}
