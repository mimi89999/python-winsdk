# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.SocialInfo.Provider")

try:
    import winsdk.windows.applicationmodel.socialinfo
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


SocialDashboardItemUpdater = _ns_module.SocialDashboardItemUpdater
SocialFeedUpdater = _ns_module.SocialFeedUpdater
SocialInfoProviderManager = _ns_module.SocialInfoProviderManager
