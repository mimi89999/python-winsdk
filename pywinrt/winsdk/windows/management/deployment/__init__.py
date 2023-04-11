# WARNING: Please don't edit this file. It was generated by Python/WinRT v0.0.0

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Management.Deployment")

try:
    import winsdk.windows.applicationmodel
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

class AddPackageByAppInstallerOptions(enum.IntFlag):
    NONE = 0
    INSTALL_ALL_RESOURCES = 0x20
    FORCE_TARGET_APP_SHUTDOWN = 0x40
    REQUIRED_CONTENT_GROUP_ONLY = 0x100
    LIMIT_TO_EXISTING_PACKAGES = 0x200

class DeploymentOptions(enum.IntFlag):
    NONE = 0
    FORCE_APPLICATION_SHUTDOWN = 0x1
    DEVELOPMENT_MODE = 0x2
    INSTALL_ALL_RESOURCES = 0x20
    FORCE_TARGET_APPLICATION_SHUTDOWN = 0x40
    REQUIRED_CONTENT_GROUP_ONLY = 0x100
    FORCE_UPDATE_FROM_ANY_VERSION = 0x40000
    RETAIN_FILES_ON_FAILURE = 0x200000
    STAGE_IN_PLACE = 0x400000

class DeploymentProgressState(enum.IntEnum):
    QUEUED = 0
    PROCESSING = 1

class PackageInstallState(enum.IntEnum):
    NOT_INSTALLED = 0
    STAGED = 1
    INSTALLED = 2
    PAUSED = 6

class PackageState(enum.IntEnum):
    NORMAL = 0
    LICENSE_INVALID = 1
    MODIFIED = 2
    TAMPERED = 3

class PackageStatus(enum.IntFlag):
    O_K = 0
    LICENSE_ISSUE = 0x1
    MODIFIED = 0x2
    TAMPERED = 0x4
    DISABLED = 0x8

class PackageStubPreference(enum.IntEnum):
    FULL = 0
    STUB = 1

class PackageTypes(enum.IntFlag):
    NONE = 0
    MAIN = 0x1
    FRAMEWORK = 0x2
    RESOURCE = 0x4
    BUNDLE = 0x8
    XAP = 0x10
    OPTIONAL = 0x20
    ALL = 0xffffffff

class RemovalOptions(enum.IntFlag):
    NONE = 0
    PRESERVE_APPLICATION_DATA = 0x1000
    PRESERVE_ROAMABLE_APPLICATION_DATA = 0x80
    REMOVE_FOR_ALL_USERS = 0x80000

class SharedPackageContainerCreationCollisionOptions(enum.IntEnum):
    FAIL_IF_EXISTS = 0
    MERGE_WITH_EXISTING = 1
    REPLACE_EXISTING = 2

class SharedPackageContainerOperationStatus(enum.IntEnum):
    SUCCESS = 0
    BLOCKED_BY_POLICY = 1
    ALREADY_EXISTS = 2
    PACKAGE_FAMILY_EXISTS_IN_ANOTHER_CONTAINER = 3
    NOT_FOUND = 4
    UNKNOWN_FAILURE = 5

class StubPackageOption(enum.IntEnum):
    DEFAULT = 0
    INSTALL_FULL = 1
    INSTALL_STUB = 2
    USE_PREFERENCE = 3

_ns_module._register_AddPackageByAppInstallerOptions(AddPackageByAppInstallerOptions)
_ns_module._register_DeploymentOptions(DeploymentOptions)
_ns_module._register_DeploymentProgressState(DeploymentProgressState)
_ns_module._register_PackageInstallState(PackageInstallState)
_ns_module._register_PackageState(PackageState)
_ns_module._register_PackageStatus(PackageStatus)
_ns_module._register_PackageStubPreference(PackageStubPreference)
_ns_module._register_PackageTypes(PackageTypes)
_ns_module._register_RemovalOptions(RemovalOptions)
_ns_module._register_SharedPackageContainerCreationCollisionOptions(SharedPackageContainerCreationCollisionOptions)
_ns_module._register_SharedPackageContainerOperationStatus(SharedPackageContainerOperationStatus)
_ns_module._register_StubPackageOption(StubPackageOption)

DeploymentProgress = _ns_module.DeploymentProgress
AddPackageOptions = _ns_module.AddPackageOptions
AppInstallerManager = _ns_module.AppInstallerManager
AutoUpdateSettingsOptions = _ns_module.AutoUpdateSettingsOptions
CreateSharedPackageContainerOptions = _ns_module.CreateSharedPackageContainerOptions
CreateSharedPackageContainerResult = _ns_module.CreateSharedPackageContainerResult
DeleteSharedPackageContainerOptions = _ns_module.DeleteSharedPackageContainerOptions
DeleteSharedPackageContainerResult = _ns_module.DeleteSharedPackageContainerResult
DeploymentResult = _ns_module.DeploymentResult
FindSharedPackageContainerOptions = _ns_module.FindSharedPackageContainerOptions
PackageAllUserProvisioningOptions = _ns_module.PackageAllUserProvisioningOptions
PackageManager = _ns_module.PackageManager
PackageManagerDebugSettings = _ns_module.PackageManagerDebugSettings
PackageUserInformation = _ns_module.PackageUserInformation
PackageVolume = _ns_module.PackageVolume
RegisterPackageOptions = _ns_module.RegisterPackageOptions
SharedPackageContainer = _ns_module.SharedPackageContainer
SharedPackageContainerManager = _ns_module.SharedPackageContainerManager
SharedPackageContainerMember = _ns_module.SharedPackageContainerMember
StagePackageOptions = _ns_module.StagePackageOptions
UpdateSharedPackageContainerOptions = _ns_module.UpdateSharedPackageContainerOptions
UpdateSharedPackageContainerResult = _ns_module.UpdateSharedPackageContainerResult
