cmake_minimum_required(VERSION 3.16)
project(winsdk)

file(GLOB sources "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/${CMAKE_PROJECT_NAME}/src/*.cpp")

file(GLOB headers RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    "pywinrt/${CMAKE_PROJECT_NAME}/src/py.*.h"
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

if (MSVC)
    # TODO: re-enable /GL and /LTCG when we get a bigger build machine
    add_compile_options(/bigobj /GR- /permissive- /MP)

    string(REGEX REPLACE "/GR" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    # TODO: re-enable /GL and /LTCG when we get a bigger build machine
    # string(APPEND CMAKE_MODULE_LINKER_FLAGS " /LTCG:STATUS")

    if (CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL "19.20.27404.0")
        string(APPEND CMAKE_CXX_FLAGS " /d2FH4")
    endif()
else()
    add_compile_options(-Werror)
endif()

find_package(Python3 REQUIRED COMPONENTS Development.Module)

Python3_add_library (_winrt MODULE ${sources})
set_target_properties(_winrt PROPERTIES LIBRARY_OUTPUT_NAME_DEBUG _winrt_d)
target_precompile_headers(_winrt PRIVATE ${headers})
target_include_directories(_winrt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/cppwinrt" "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/${CMAKE_PROJECT_NAME}/src")
target_link_libraries(_winrt PRIVATE onecore)

if($ENV{CI})
    # CI has limited resources (runs out of heap space), so we limit the number
    # of concurrent processes to combat this
    set_property(GLOBAL PROPERTY JOB_POOLS compile_job=2)
    set_property(TARGET _winrt PROPERTY JOB_POOL_COMPILE compile_job)
endif()

install(TARGETS _winrt DESTINATION "pywinrt/${CMAKE_PROJECT_NAME}")
