# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.UI.WebUI")

try:
    import winsdk.windows.applicationmodel
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.activation
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.appointments.appointmentsprovider
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.background
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.calls
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.contacts
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.contacts.provider
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.core
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.datatransfer
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.datatransfer.sharetarget
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.search
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.userdataaccounts.provider
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.wallet
except ImportError:
    pass

try:
    import winsdk.windows.devices.enumeration
except ImportError:
    pass

try:
    import winsdk.windows.devices.printers.extensions
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.media.speechrecognition
except ImportError:
    pass

try:
    import winsdk.windows.security.authentication.web
except ImportError:
    pass

try:
    import winsdk.windows.security.authentication.web.provider
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

try:
    import winsdk.windows.storage.pickers.provider
except ImportError:
    pass

try:
    import winsdk.windows.storage.provider
except ImportError:
    pass

try:
    import winsdk.windows.storage.search
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.ui
except ImportError:
    pass

try:
    import winsdk.windows.web
except ImportError:
    pass

try:
    import winsdk.windows.web.http
except ImportError:
    pass

try:
    import winsdk.windows.web.ui
except ImportError:
    pass

class PrintContent(enum.IntEnum):
    ALL_PAGES = 0
    CURRENT_PAGE = 1
    CUSTOM_PAGE_RANGE = 2
    CURRENT_SELECTION = 3

_ns_module._register_PrintContent(PrintContent)

ActivatedDeferral = _ns_module.ActivatedDeferral
ActivatedOperation = _ns_module.ActivatedOperation
BackgroundActivatedEventArgs = _ns_module.BackgroundActivatedEventArgs
EnteredBackgroundEventArgs = _ns_module.EnteredBackgroundEventArgs
HtmlPrintDocumentSource = _ns_module.HtmlPrintDocumentSource
LeavingBackgroundEventArgs = _ns_module.LeavingBackgroundEventArgs
NewWebUIViewCreatedEventArgs = _ns_module.NewWebUIViewCreatedEventArgs
SuspendingDeferral = _ns_module.SuspendingDeferral
SuspendingEventArgs = _ns_module.SuspendingEventArgs
SuspendingOperation = _ns_module.SuspendingOperation
WebUIApplication = _ns_module.WebUIApplication
WebUIAppointmentsProviderAddAppointmentActivatedEventArgs = _ns_module.WebUIAppointmentsProviderAddAppointmentActivatedEventArgs
WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs = _ns_module.WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs
WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs = _ns_module.WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs
WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs = _ns_module.WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs
WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs = _ns_module.WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs
WebUIBackgroundTaskInstance = _ns_module.WebUIBackgroundTaskInstance
WebUIBackgroundTaskInstanceRuntimeClass = _ns_module.WebUIBackgroundTaskInstanceRuntimeClass
WebUIBarcodeScannerPreviewActivatedEventArgs = _ns_module.WebUIBarcodeScannerPreviewActivatedEventArgs
WebUICachedFileUpdaterActivatedEventArgs = _ns_module.WebUICachedFileUpdaterActivatedEventArgs
WebUICameraSettingsActivatedEventArgs = _ns_module.WebUICameraSettingsActivatedEventArgs
WebUICommandLineActivatedEventArgs = _ns_module.WebUICommandLineActivatedEventArgs
WebUIContactCallActivatedEventArgs = _ns_module.WebUIContactCallActivatedEventArgs
WebUIContactMapActivatedEventArgs = _ns_module.WebUIContactMapActivatedEventArgs
WebUIContactMessageActivatedEventArgs = _ns_module.WebUIContactMessageActivatedEventArgs
WebUIContactPanelActivatedEventArgs = _ns_module.WebUIContactPanelActivatedEventArgs
WebUIContactPickerActivatedEventArgs = _ns_module.WebUIContactPickerActivatedEventArgs
WebUIContactPostActivatedEventArgs = _ns_module.WebUIContactPostActivatedEventArgs
WebUIContactVideoCallActivatedEventArgs = _ns_module.WebUIContactVideoCallActivatedEventArgs
WebUIDeviceActivatedEventArgs = _ns_module.WebUIDeviceActivatedEventArgs
WebUIDevicePairingActivatedEventArgs = _ns_module.WebUIDevicePairingActivatedEventArgs
WebUIDialReceiverActivatedEventArgs = _ns_module.WebUIDialReceiverActivatedEventArgs
WebUIFileActivatedEventArgs = _ns_module.WebUIFileActivatedEventArgs
WebUIFileOpenPickerActivatedEventArgs = _ns_module.WebUIFileOpenPickerActivatedEventArgs
WebUIFileOpenPickerContinuationEventArgs = _ns_module.WebUIFileOpenPickerContinuationEventArgs
WebUIFileSavePickerActivatedEventArgs = _ns_module.WebUIFileSavePickerActivatedEventArgs
WebUIFileSavePickerContinuationEventArgs = _ns_module.WebUIFileSavePickerContinuationEventArgs
WebUIFolderPickerContinuationEventArgs = _ns_module.WebUIFolderPickerContinuationEventArgs
WebUILaunchActivatedEventArgs = _ns_module.WebUILaunchActivatedEventArgs
WebUILockScreenActivatedEventArgs = _ns_module.WebUILockScreenActivatedEventArgs
WebUILockScreenCallActivatedEventArgs = _ns_module.WebUILockScreenCallActivatedEventArgs
WebUILockScreenComponentActivatedEventArgs = _ns_module.WebUILockScreenComponentActivatedEventArgs
WebUINavigatedDeferral = _ns_module.WebUINavigatedDeferral
WebUINavigatedEventArgs = _ns_module.WebUINavigatedEventArgs
WebUINavigatedOperation = _ns_module.WebUINavigatedOperation
WebUIPhoneCallActivatedEventArgs = _ns_module.WebUIPhoneCallActivatedEventArgs
WebUIPrint3DWorkflowActivatedEventArgs = _ns_module.WebUIPrint3DWorkflowActivatedEventArgs
WebUIPrintTaskSettingsActivatedEventArgs = _ns_module.WebUIPrintTaskSettingsActivatedEventArgs
WebUIPrintWorkflowForegroundTaskActivatedEventArgs = _ns_module.WebUIPrintWorkflowForegroundTaskActivatedEventArgs
WebUIProtocolActivatedEventArgs = _ns_module.WebUIProtocolActivatedEventArgs
WebUIProtocolForResultsActivatedEventArgs = _ns_module.WebUIProtocolForResultsActivatedEventArgs
WebUIRestrictedLaunchActivatedEventArgs = _ns_module.WebUIRestrictedLaunchActivatedEventArgs
WebUISearchActivatedEventArgs = _ns_module.WebUISearchActivatedEventArgs
WebUIShareTargetActivatedEventArgs = _ns_module.WebUIShareTargetActivatedEventArgs
WebUIStartupTaskActivatedEventArgs = _ns_module.WebUIStartupTaskActivatedEventArgs
WebUIToastNotificationActivatedEventArgs = _ns_module.WebUIToastNotificationActivatedEventArgs
WebUIUserDataAccountProviderActivatedEventArgs = _ns_module.WebUIUserDataAccountProviderActivatedEventArgs
WebUIView = _ns_module.WebUIView
WebUIVoiceCommandActivatedEventArgs = _ns_module.WebUIVoiceCommandActivatedEventArgs
WebUIWalletActionActivatedEventArgs = _ns_module.WebUIWalletActionActivatedEventArgs
WebUIWebAccountProviderActivatedEventArgs = _ns_module.WebUIWebAccountProviderActivatedEventArgs
WebUIWebAuthenticationBrokerContinuationEventArgs = _ns_module.WebUIWebAuthenticationBrokerContinuationEventArgs
IActivatedEventArgsDeferral = _ns_module.IActivatedEventArgsDeferral
IWebUIBackgroundTaskInstance = _ns_module.IWebUIBackgroundTaskInstance
IWebUINavigatedEventArgs = _ns_module.IWebUINavigatedEventArgs
