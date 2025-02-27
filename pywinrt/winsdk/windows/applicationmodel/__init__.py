# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel")

try:
    import winsdk.windows.applicationmodel.activation
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.core
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
    import winsdk.windows.storage
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

class AddResourcePackageOptions(enum.IntFlag):
    NONE = 0
    FORCE_TARGET_APP_SHUTDOWN = 0x1
    APPLY_UPDATE_IF_AVAILABLE = 0x2

class AppExecutionContext(enum.IntEnum):
    UNKNOWN = 0
    HOST = 1
    GUEST = 2

class AppInstallerPolicySource(enum.IntEnum):
    DEFAULT = 0
    SYSTEM = 1

class FullTrustLaunchResult(enum.IntEnum):
    SUCCESS = 0
    ACCESS_DENIED = 1
    FILE_NOT_FOUND = 2
    UNKNOWN = 3

class LimitedAccessFeatureStatus(enum.IntEnum):
    UNAVAILABLE = 0
    AVAILABLE = 1
    AVAILABLE_WITHOUT_TOKEN = 2
    UNKNOWN = 3

class PackageContentGroupState(enum.IntEnum):
    NOT_STAGED = 0
    QUEUED = 1
    STAGING = 2
    STAGED = 3

class PackageRelationship(enum.IntEnum):
    DEPENDENCIES = 0
    DEPENDENTS = 1
    ALL = 2

class PackageSignatureKind(enum.IntEnum):
    NONE = 0
    DEVELOPER = 1
    ENTERPRISE = 2
    STORE = 3
    SYSTEM = 4

class PackageUpdateAvailability(enum.IntEnum):
    UNKNOWN = 0
    NO_UPDATES = 1
    AVAILABLE = 2
    REQUIRED = 3
    ERROR = 4

class StartupTaskState(enum.IntEnum):
    DISABLED = 0
    DISABLED_BY_USER = 1
    ENABLED = 2
    DISABLED_BY_POLICY = 3
    ENABLED_BY_POLICY = 4

_ns_module._register_AddResourcePackageOptions(AddResourcePackageOptions)
_ns_module._register_AppExecutionContext(AppExecutionContext)
_ns_module._register_AppInstallerPolicySource(AppInstallerPolicySource)
_ns_module._register_FullTrustLaunchResult(FullTrustLaunchResult)
_ns_module._register_LimitedAccessFeatureStatus(LimitedAccessFeatureStatus)
_ns_module._register_PackageContentGroupState(PackageContentGroupState)
_ns_module._register_PackageRelationship(PackageRelationship)
_ns_module._register_PackageSignatureKind(PackageSignatureKind)
_ns_module._register_PackageUpdateAvailability(PackageUpdateAvailability)
_ns_module._register_StartupTaskState(StartupTaskState)

PackageInstallProgress = _ns_module.PackageInstallProgress
PackageVersion = _ns_module.PackageVersion
AppDisplayInfo = _ns_module.AppDisplayInfo
AppInfo = _ns_module.AppInfo
AppInstallerInfo = _ns_module.AppInstallerInfo
AppInstance = _ns_module.AppInstance
CameraApplicationManager = _ns_module.CameraApplicationManager
DesignMode = _ns_module.DesignMode
EnteredBackgroundEventArgs = _ns_module.EnteredBackgroundEventArgs
FindRelatedPackagesOptions = _ns_module.FindRelatedPackagesOptions
FullTrustProcessLaunchResult = _ns_module.FullTrustProcessLaunchResult
FullTrustProcessLauncher = _ns_module.FullTrustProcessLauncher
LeavingBackgroundEventArgs = _ns_module.LeavingBackgroundEventArgs
LimitedAccessFeatureRequestResult = _ns_module.LimitedAccessFeatureRequestResult
LimitedAccessFeatures = _ns_module.LimitedAccessFeatures
Package = _ns_module.Package
PackageCatalog = _ns_module.PackageCatalog
PackageCatalogAddOptionalPackageResult = _ns_module.PackageCatalogAddOptionalPackageResult
PackageCatalogAddResourcePackageResult = _ns_module.PackageCatalogAddResourcePackageResult
PackageCatalogRemoveOptionalPackagesResult = _ns_module.PackageCatalogRemoveOptionalPackagesResult
PackageCatalogRemoveResourcePackagesResult = _ns_module.PackageCatalogRemoveResourcePackagesResult
PackageContentGroup = _ns_module.PackageContentGroup
PackageContentGroupStagingEventArgs = _ns_module.PackageContentGroupStagingEventArgs
PackageId = _ns_module.PackageId
PackageInstallingEventArgs = _ns_module.PackageInstallingEventArgs
PackageStagingEventArgs = _ns_module.PackageStagingEventArgs
PackageStatus = _ns_module.PackageStatus
PackageStatusChangedEventArgs = _ns_module.PackageStatusChangedEventArgs
PackageUninstallingEventArgs = _ns_module.PackageUninstallingEventArgs
PackageUpdateAvailabilityResult = _ns_module.PackageUpdateAvailabilityResult
PackageUpdatingEventArgs = _ns_module.PackageUpdatingEventArgs
StartupTask = _ns_module.StartupTask
SuspendingDeferral = _ns_module.SuspendingDeferral
SuspendingEventArgs = _ns_module.SuspendingEventArgs
SuspendingOperation = _ns_module.SuspendingOperation
IEnteredBackgroundEventArgs = _ns_module.IEnteredBackgroundEventArgs
ILeavingBackgroundEventArgs = _ns_module.ILeavingBackgroundEventArgs
IPackageCatalogStatics2 = _ns_module.IPackageCatalogStatics2
ISuspendingDeferral = _ns_module.ISuspendingDeferral
ISuspendingEventArgs = _ns_module.ISuspendingEventArgs
ISuspendingOperation = _ns_module.ISuspendingOperation
