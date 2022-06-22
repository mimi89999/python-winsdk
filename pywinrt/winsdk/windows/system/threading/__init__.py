# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.System.Threading")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

class WorkItemOptions(enum.IntFlag):
    NONE = 0
    TIME_SLICED = 0x1

class WorkItemPriority(enum.IntEnum):
    LOW = -1
    NORMAL = 0
    HIGH = 1

_ns_module._register_WorkItemOptions(WorkItemOptions)
_ns_module._register_WorkItemPriority(WorkItemPriority)

ThreadPool = _ns_module.ThreadPool
ThreadPoolTimer = _ns_module.ThreadPoolTimer
