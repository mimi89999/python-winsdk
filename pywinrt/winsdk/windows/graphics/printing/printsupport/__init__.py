# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Graphics.Printing.PrintSupport")

try:
    import winsdk.windows.applicationmodel
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.activation
except ImportError:
    pass

try:
    import winsdk.windows.data.xml.dom
except ImportError:
    pass

try:
    import winsdk.windows.devices.printers
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
    import winsdk.windows.graphics.printing.printticket
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.ui.shell
except ImportError:
    pass

class SettingsLaunchKind(enum.IntEnum):
    JOB_PRINT_TICKET = 0
    USER_DEFAULT_PRINT_TICKET = 1

class WorkflowPrintTicketValidationStatus(enum.IntEnum):
    RESOLVED = 0
    CONFLICTING = 1
    INVALID = 2

_ns_module._register_SettingsLaunchKind(SettingsLaunchKind)
_ns_module._register_WorkflowPrintTicketValidationStatus(WorkflowPrintTicketValidationStatus)

PrintSupportExtensionSession = _ns_module.PrintSupportExtensionSession
PrintSupportExtensionTriggerDetails = _ns_module.PrintSupportExtensionTriggerDetails
PrintSupportPrintDeviceCapabilitiesChangedEventArgs = _ns_module.PrintSupportPrintDeviceCapabilitiesChangedEventArgs
PrintSupportPrintDeviceCapabilitiesUpdatePolicy = _ns_module.PrintSupportPrintDeviceCapabilitiesUpdatePolicy
PrintSupportPrintTicketElement = _ns_module.PrintSupportPrintTicketElement
PrintSupportPrintTicketValidationRequestedEventArgs = _ns_module.PrintSupportPrintTicketValidationRequestedEventArgs
PrintSupportPrinterSelectedEventArgs = _ns_module.PrintSupportPrinterSelectedEventArgs
PrintSupportSessionInfo = _ns_module.PrintSupportSessionInfo
PrintSupportSettingsActivatedEventArgs = _ns_module.PrintSupportSettingsActivatedEventArgs
PrintSupportSettingsUISession = _ns_module.PrintSupportSettingsUISession
