# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.6

import enum
import datetime
import sys
import types
import typing

import winsdk._winrt as _winrt

class DirectXAlphaMode(enum.IntEnum):
    UNSPECIFIED = 0
    PREMULTIPLIED = 1
    STRAIGHT = 2
    IGNORE = 3

class DirectXColorSpace(enum.IntEnum):
    RGB_FULL_G22_NONE_P709 = 0
    RGB_FULL_G10_NONE_P709 = 1
    RGB_STUDIO_G22_NONE_P709 = 2
    RGB_STUDIO_G22_NONE_P2020 = 3
    RESERVED = 4
    YCC_FULL_G22_NONE_P709_X601 = 5
    YCC_STUDIO_G22_LEFT_P601 = 6
    YCC_FULL_G22_LEFT_P601 = 7
    YCC_STUDIO_G22_LEFT_P709 = 8
    YCC_FULL_G22_LEFT_P709 = 9
    YCC_STUDIO_G22_LEFT_P2020 = 10
    YCC_FULL_G22_LEFT_P2020 = 11
    RGB_FULL_G2084_NONE_P2020 = 12
    YCC_STUDIO_G2084_LEFT_P2020 = 13
    RGB_STUDIO_G2084_NONE_P2020 = 14
    YCC_STUDIO_G22_TOP_LEFT_P2020 = 15
    YCC_STUDIO_G2084_TOP_LEFT_P2020 = 16
    RGB_FULL_G22_NONE_P2020 = 17
    YCC_STUDIO_G_HLG_TOP_LEFT_P2020 = 18
    YCC_FULL_G_HLG_TOP_LEFT_P2020 = 19
    RGB_STUDIO_G24_NONE_P709 = 20
    RGB_STUDIO_G24_NONE_P2020 = 21
    YCC_STUDIO_G24_LEFT_P709 = 22
    YCC_STUDIO_G24_LEFT_P2020 = 23
    YCC_STUDIO_G24_TOP_LEFT_P2020 = 24

class DirectXPixelFormat(enum.IntEnum):
    UNKNOWN = 0
    R32_G32_B32_A32_TYPELESS = 1
    R32_G32_B32_A32_FLOAT = 2
    R32_G32_B32_A32_UINT = 3
    R32_G32_B32_A32_INT = 4
    R32_G32_B32_TYPELESS = 5
    R32_G32_B32_FLOAT = 6
    R32_G32_B32_UINT = 7
    R32_G32_B32_INT = 8
    R16_G16_B16_A16_TYPELESS = 9
    R16_G16_B16_A16_FLOAT = 10
    R16_G16_B16_A16_UINT_NORMALIZED = 11
    R16_G16_B16_A16_UINT = 12
    R16_G16_B16_A16_INT_NORMALIZED = 13
    R16_G16_B16_A16_INT = 14
    R32_G32_TYPELESS = 15
    R32_G32_FLOAT = 16
    R32_G32_UINT = 17
    R32_G32_INT = 18
    R32_G8_X24_TYPELESS = 19
    D32_FLOAT_S8_X24_UINT = 20
    R32_FLOAT_X8_X24_TYPELESS = 21
    X32_TYPELESS_G8_X24_UINT = 22
    R10_G10_B10_A2_TYPELESS = 23
    R10_G10_B10_A2_UINT_NORMALIZED = 24
    R10_G10_B10_A2_UINT = 25
    R11_G11_B10_FLOAT = 26
    R8_G8_B8_A8_TYPELESS = 27
    R8_G8_B8_A8_UINT_NORMALIZED = 28
    R8_G8_B8_A8_UINT_NORMALIZED_SRGB = 29
    R8_G8_B8_A8_UINT = 30
    R8_G8_B8_A8_INT_NORMALIZED = 31
    R8_G8_B8_A8_INT = 32
    R16_G16_TYPELESS = 33
    R16_G16_FLOAT = 34
    R16_G16_UINT_NORMALIZED = 35
    R16_G16_UINT = 36
    R16_G16_INT_NORMALIZED = 37
    R16_G16_INT = 38
    R32_TYPELESS = 39
    D32_FLOAT = 40
    R32_FLOAT = 41
    R32_UINT = 42
    R32_INT = 43
    R24_G8_TYPELESS = 44
    D24_UINT_NORMALIZED_S8_UINT = 45
    R24_UINT_NORMALIZED_X8_TYPELESS = 46
    X24_TYPELESS_G8_UINT = 47
    R8_G8_TYPELESS = 48
    R8_G8_UINT_NORMALIZED = 49
    R8_G8_UINT = 50
    R8_G8_INT_NORMALIZED = 51
    R8_G8_INT = 52
    R16_TYPELESS = 53
    R16_FLOAT = 54
    D16_UINT_NORMALIZED = 55
    R16_UINT_NORMALIZED = 56
    R16_UINT = 57
    R16_INT_NORMALIZED = 58
    R16_INT = 59
    R8_TYPELESS = 60
    R8_UINT_NORMALIZED = 61
    R8_UINT = 62
    R8_INT_NORMALIZED = 63
    R8_INT = 64
    A8_UINT_NORMALIZED = 65
    R1_UINT_NORMALIZED = 66
    R9_G9_B9_E5_SHARED_EXPONENT = 67
    R8_G8_B8_G8_UINT_NORMALIZED = 68
    G8_R8_G8_B8_UINT_NORMALIZED = 69
    B_C1_TYPELESS = 70
    B_C1_UINT_NORMALIZED = 71
    B_C1_UINT_NORMALIZED_SRGB = 72
    B_C2_TYPELESS = 73
    B_C2_UINT_NORMALIZED = 74
    B_C2_UINT_NORMALIZED_SRGB = 75
    B_C3_TYPELESS = 76
    B_C3_UINT_NORMALIZED = 77
    B_C3_UINT_NORMALIZED_SRGB = 78
    B_C4_TYPELESS = 79
    B_C4_UINT_NORMALIZED = 80
    B_C4_INT_NORMALIZED = 81
    B_C5_TYPELESS = 82
    B_C5_UINT_NORMALIZED = 83
    B_C5_INT_NORMALIZED = 84
    B5_G6_R5_UINT_NORMALIZED = 85
    B5_G5_R5_A1_UINT_NORMALIZED = 86
    B8_G8_R8_A8_UINT_NORMALIZED = 87
    B8_G8_R8_X8_UINT_NORMALIZED = 88
    R10_G10_B10_X_R_BIAS_A2_UINT_NORMALIZED = 89
    B8_G8_R8_A8_TYPELESS = 90
    B8_G8_R8_A8_UINT_NORMALIZED_SRGB = 91
    B8_G8_R8_X8_TYPELESS = 92
    B8_G8_R8_X8_UINT_NORMALIZED_SRGB = 93
    B_C6_H_TYPELESS = 94
    B_C6_H16_UNSIGNED_FLOAT = 95
    B_C6_H16_FLOAT = 96
    B_C7_TYPELESS = 97
    B_C7_UINT_NORMALIZED = 98
    B_C7_UINT_NORMALIZED_SRGB = 99
    AYUV = 100
    Y410 = 101
    Y416 = 102
    N_V12 = 103
    P010 = 104
    P016 = 105
    OPAQUE420 = 106
    YUY2 = 107
    Y210 = 108
    Y216 = 109
    N_V11 = 110
    A_I44 = 111
    I_A44 = 112
    P8 = 113
    A8_P8 = 114
    B4_G4_R4_A4_UINT_NORMALIZED = 115
    P208 = 130
    V208 = 131
    V408 = 132
    SAMPLER_FEEDBACK_MIN_MIP_OPAQUE = 189
    SAMPLER_FEEDBACK_MIP_REGION_USED_OPAQUE = 190

class DirectXPrimitiveTopology(enum.IntEnum):
    UNDEFINED = 0
    POINT_LIST = 1
    LINE_LIST = 2
    LINE_STRIP = 3
    TRIANGLE_LIST = 4
    TRIANGLE_STRIP = 5

Self = typing.TypeVar('Self')

