// WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.ApplicationModel.Search.h>

namespace py::proj::Windows::ApplicationModel::Search
{}

namespace py::impl::Windows::ApplicationModel::Search
{}

namespace py::wrapper::Windows::ApplicationModel::Search
{
    using LocalContentSuggestionSettings = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings>;
    using SearchPane = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPane>;
    using SearchPaneQueryChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>;
    using SearchPaneQueryLinguisticDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>;
    using SearchPaneQuerySubmittedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>;
    using SearchPaneResultSuggestionChosenEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>;
    using SearchPaneSuggestionsRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>;
    using SearchPaneSuggestionsRequestDeferral = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>;
    using SearchPaneSuggestionsRequestedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>;
    using SearchPaneVisibilityChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>;
    using SearchQueryLinguisticDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>;
    using SearchSuggestionCollection = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection>;
    using SearchSuggestionsRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest>;
    using SearchSuggestionsRequestDeferral = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>;
    using ISearchPaneQueryChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::LocalContentSuggestionSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPane>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPaneQueryChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPaneQuerySubmittedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPaneResultSuggestionChosenEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPaneSuggestionsRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchPaneVisibilityChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchQueryLinguisticDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchSuggestionCollection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::SearchSuggestionsRequestDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Search::ISearchPaneQueryChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
