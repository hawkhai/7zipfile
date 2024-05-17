set(PROJECT_NAME 7zLib_md)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "7zMainDll.cpp"
    "7zMainLib.c"
)
source_group("" FILES ${no_group_source_files})

set(Common
    "../../7z.h"
    "../../7zAlloc.c"
    "../../7zAlloc.h"
    "../../7zArcIn.c"
    "../../7zBuf.c"
    "../../7zBuf.h"
    "../../7zCrc.c"
    "../../7zCrc.h"
    "../../7zCrcOpt.c"
    "../../7zDec.c"
    "../../7zFile.c"
    "../../7zFile.h"
    "../../7zStream.c"
    "../../7zTypes.h"
    "../../7zWindows.h"
    "../../Bcj2.c"
    "../../Bcj2.h"
    "../../Bra.c"
    "../../Bra.h"
    "../../Bra86.c"
    "../../BraIA64.c"
    "../../CpuArch.c"
    "../../CpuArch.h"
    "../../Delta.c"
    "../../Delta.h"
    "../../Lzma2Dec.c"
    "../../Lzma2Dec.h"
    "../../LzmaDec.c"
    "../../LzmaDec.h"
    "../../Ppmd.h"
    "../../Ppmd7.c"
    "../../Ppmd7.h"
    "../../Ppmd7Dec.c"
)
source_group("Common" FILES ${Common})

set(Spec
    "../../Compiler.h"
    "Precomp.c"
    "Precomp.h"
)
source_group("Spec" FILES ${Spec})

set(ALL_FILES
    ${no_group_source_files}
    ${Common}
    ${Spec}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

target_precompile_headers(${PROJECT_NAME} PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/Precomp.h>"
)

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set(ROOT_NAMESPACE 7z)

################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DBGSTATIC "7z64mdd"
        TARGET_NAME_DEBUG     "7z64d"
        TARGET_NAME_RELEASE   "7z64"
        TARGET_NAME_RELSTATIC "7z64md"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DBGSTATIC "7zmdd"
        TARGET_NAME_DEBUG     "7zd"
        TARGET_NAME_RELEASE   "7z"
        TARGET_NAME_RELSTATIC "7zmd"
    )
endif()
################################################################################
# Output directory
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DBGSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./Debug/"
        OUTPUT_DIRECTORY_DEBUG     "${CMAKE_CURRENT_SOURCE_DIR}/./Debug/"
        OUTPUT_DIRECTORY_RELEASE   "${CMAKE_CURRENT_SOURCE_DIR}/./Release/"
        OUTPUT_DIRECTORY_RELSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./Release/"
    )
endif()
################################################################################
# MSVC runtime library
################################################################################
get_property(MSVC_RUNTIME_LIBRARY_DEFAULT TARGET ${PROJECT_NAME} PROPERTY MSVC_RUNTIME_LIBRARY)
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:DbgStatic>:
            MultiThreadedDebugDLL
        >
        $<$<CONFIG:Debug>:
            MultiThreadedDebugDLL
        >
        $<$<CONFIG:Release>:
            MultiThreadedDLL
        >
        $<$<CONFIG:RelStatic>:
            MultiThreadedDLL
        >
        $<$<NOT:$<OR:$<CONFIG:DbgStatic>,$<CONFIG:Debug>,$<CONFIG:Release>,$<CONFIG:RelStatic>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:DbgStatic>:
            MultiThreadedDebugDLL
        >
        $<$<CONFIG:Debug>:
            MultiThreadedDebugDLL
        >
        $<$<CONFIG:Release>:
            MultiThreadedDLL
        >
        $<$<CONFIG:RelStatic>:
            MultiThreadedDLL
        >
        $<$<NOT:$<OR:$<CONFIG:DbgStatic>,$<CONFIG:Debug>,$<CONFIG:Release>,$<CONFIG:RelStatic>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
endif()
set_target_properties(${PROJECT_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY ${MSVC_RUNTIME_LIBRARY_STR})

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:DbgStatic>:"
            "Z7_LIB_EXPOTS;"
            "_DEBUG;"
            "_SZ_ALLOC_DEBUG2;"
            "_SZ_NO_INT_64_A"
        ">"
        "$<$<CONFIG:Debug>:"
            "Z7_DLL_EXPOTS;"
            "_DEBUG;"
            "_SZ_ALLOC_DEBUG2;"
            "_SZ_NO_INT_64_A"
        ">"
        "$<$<CONFIG:Release>:"
            "Z7_DLL_EXPOTS;"
            "NDEBUG"
        ">"
        "$<$<CONFIG:RelStatic>:"
            "Z7_LIB_EXPOTS;"
            "NDEBUG"
        ">"
        "_CONSOLE;"
        "UNICODE;"
        "Z7_PPMD_SUPPORT;"
        "_UNICODE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:DbgStatic>:"
            "Z7_LIB_EXPOTS;"
            "_DEBUG;"
            "_SZ_ALLOC_DEBUG2;"
            "_SZ_NO_INT_64_A"
        ">"
        "$<$<CONFIG:Debug>:"
            "Z7_DLL_EXPOTS;"
            "_DEBUG;"
            "_SZ_ALLOC_DEBUG2;"
            "_SZ_NO_INT_64_A"
        ">"
        "$<$<CONFIG:Release>:"
            "Z7_DLL_EXPOTS;"
            "NDEBUG"
        ">"
        "$<$<CONFIG:RelStatic>:"
            "Z7_LIB_EXPOTS;"
            "NDEBUG"
        ">"
        "_CONSOLE;"
        "UNICODE;"
        "Z7_PPMD_SUPPORT;"
        "_UNICODE"
    )
endif()
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_source_files_properties(../../7zDec.c PROPERTIES
        COMPILE_DEFINITIONS "_7ZIP_PPMD_SUPPPORT"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_source_files_properties(../../7zDec.c PROPERTIES
        COMPILE_DEFINITIONS "_7ZIP_PPMD_SUPPPORT"
    )
endif()

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /Od;
                /RTC1;
                /Zi
            >
            $<$<CONFIG:Debug>:
                /Od;
                /RTC1;
                /Zi
            >
            $<$<CONFIG:Release>:
                /O2;
                /Ob1;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /FAcs
            >
            $<$<CONFIG:RelStatic>:
                /O2;
                /Ob1;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /FAcs
            >
            /W4;
            /WX;
            ${DEFAULT_CXX_EXCEPTION_HANDLING}
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /Gm;
                /Od;
                /RTC1;
                /ZI
            >
            $<$<CONFIG:Debug>:
                /Gm;
                /Od;
                /RTC1;
                /ZI
            >
            $<$<CONFIG:Release>:
                /O2;
                /Ob1;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /FAcs
            >
            $<$<CONFIG:RelStatic>:
                /O2;
                /Ob1;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /FAcs
            >
            /W4;
            /WX;
            ${DEFAULT_CXX_EXCEPTION_HANDLING}
        )
    endif()
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(7zMainDll.cpp ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Debug>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Release>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            /NOLOGO;
            /MACHINE:X64;
            /SUBSYSTEM:CONSOLE
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Debug>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Release>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            /NOLOGO;
            /MACHINE:X86;
            /SUBSYSTEM:CONSOLE
        )
    endif()
endif()

################################################################################
# Post build events
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    add_custom_command_if(
        TARGET ${PROJECT_NAME}
        POST_BUILD
        COMMANDS
        COMMAND $<CONFIG:DbgStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.lib" "${OUTPUT_DIRECTORY}..\\..\\..\\bin\\md\\win64-lib\\" /y
        COMMAND $<CONFIG:DbgStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.pdb" "${OUTPUT_DIRECTORY}..\\..\\..\\bin\\md\\win64-lib\\" /y
        COMMAND     $<CONFIG:Debug> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.dll" "${OUTPUT_DIRECTORY}..\\..\\..\\bin\\md\\win64-dll\\" /y
        COMMAND     $<CONFIG:Debug> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.pdb" "${OUTPUT_DIRECTORY}..\\..\\..\\bin\\md\\win64-dll\\" /y
        COMMAND     $<CONFIG:Debug> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.dll" "$<SHELL_PATH:${CMAKE_SOURCE_DIR}/>$<CONFIG>\\" /y
        COMMAND   $<CONFIG:Release> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.dll" "${OUTPUT_DIRECTORY}..\\..\\..\\bin\\md\\win64-dll\\" /y
        COMMAND   $<CONFIG:Release> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.pdb" "${OUTPUT_DIRECTORY}..\\..\\..\\bin\\md\\win64-dll\\" /y
        COMMAND   $<CONFIG:Release> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.dll" "$<SHELL_PATH:${CMAKE_SOURCE_DIR}/>$<CONFIG>\\" /y
        COMMAND $<CONFIG:RelStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.lib" "${OUTPUT_DIRECTORY}..\\..\\..\\bin\\md\\win64-lib\\" /y
        COMMAND $<CONFIG:RelStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.pdb" "${OUTPUT_DIRECTORY}..\\..\\..\\bin\\md\\win64-lib\\" /y
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    add_custom_command_if(
        TARGET ${PROJECT_NAME}
        POST_BUILD
        COMMANDS
        COMMAND $<CONFIG:DbgStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.lib" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\bin\\md\\win32-lib\\" /y
        COMMAND $<CONFIG:DbgStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.pdb" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\bin\\md\\win32-lib\\" /y
        COMMAND     $<CONFIG:Debug> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.dll" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND     $<CONFIG:Debug> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.pdb" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND     $<CONFIG:Debug> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.dll" "$<SHELL_PATH:${CMAKE_SOURCE_DIR}/>$<CONFIG>\\" /y
        COMMAND   $<CONFIG:Release> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.dll" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND   $<CONFIG:Release> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.pdb" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND   $<CONFIG:Release> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.dll" "$<SHELL_PATH:${CMAKE_SOURCE_DIR}/>$<CONFIG>\\" /y
        COMMAND $<CONFIG:RelStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.lib" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\bin\\md\\win32-lib\\" /y
        COMMAND $<CONFIG:RelStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.pdb" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\bin\\md\\win32-lib\\" /y
    )
endif()

