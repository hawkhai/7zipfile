set(PROJECT_NAME Alone_md)

################################################################################
# Source groups
################################################################################
set(Headers
    "../../../../C/7zCrc.h"
    "../../../../C/7zTypes.h"
    "../../../../C/7zWindows.h"
    "../../../../C/Aes.h"
    "../../../../C/Alloc.h"
    "../../../../C/Bcj2.h"
    "../../../../C/Bra.h"
    "../../../../C/Compiler.h"
    "../../../../C/Compress/Lz/LzHash.h"
    "../../../../C/CpuArch.h"
    "../../../../C/Delta.h"
    "../../../../C/DllSecur.h"
    "../../../../C/IStream.h"
    "../../../../C/LzFind.h"
    "../../../../C/LzFindMt.h"
    "../../../../C/LzHash.h"
    "../../../../C/Lzma2Dec.h"
    "../../../../C/Lzma2DecMt.h"
    "../../../../C/Lzma2Enc.h"
    "../../../../C/LzmaDec.h"
    "../../../../C/LzmaEnc.h"
    "../../../../C/MtCoder.h"
    "../../../../C/MtDec.h"
    "../../../../C/RotateDefs.h"
    "../../../../C/Sha256.h"
    "../../../../C/SwapBytes.h"
    "../../../../C/Threads.h"
    "../../../../C/Xz.h"
    "../../../../C/XzCrc64.h"
    "../../../../C/XzEnc.h"
    "../../../Common/AutoPtr.h"
    "../../../Common/Buffer.h"
    "../../../Common/CommandLineParser.h"
    "../../../Common/Common.h"
    "../../../Common/ComTry.h"
    "../../../Common/Defs.h"
    "../../../Common/DynamicBuffer.h"
    "../../../Common/DynLimBuf.h"
    "../../../Common/IntToString.h"
    "../../../Common/ListFileUtils.h"
    "../../../Common/MyBuffer.h"
    "../../../Common/MyBuffer2.h"
    "../../../Common/MyCom.h"
    "../../../Common/MyException.h"
    "../../../Common/MyGuidDef.h"
    "../../../Common/MyInitGuid.h"
    "../../../Common/MyString.h"
    "../../../Common/MyTypes.h"
    "../../../Common/MyUnknown.h"
    "../../../Common/MyVector.h"
    "../../../Common/MyWindows.h"
    "../../../Common/NewHandler.h"
    "../../../Common/StdInStream.h"
    "../../../Common/StdOutStream.h"
    "../../../Common/StringConvert.h"
    "../../../Common/StringToInt.h"
    "../../../Common/Types.h"
    "../../../Common/UTFConvert.h"
    "../../../Common/Wildcard.h"
    "../../../Windows/Defs.h"
    "../../../Windows/Device.h"
    "../../../Windows/DLL.h"
    "../../../Windows/ErrorMsg.h"
    "../../../Windows/FileDir.h"
    "../../../Windows/FileFind.h"
    "../../../Windows/FileIO.h"
    "../../../Windows/FileMapping.h"
    "../../../Windows/FileName.h"
    "../../../Windows/FileSystem.h"
    "../../../Windows/Handle.h"
    "../../../Windows/MemoryLock.h"
    "../../../Windows/NtCheck.h"
    "../../../Windows/PropVariant.h"
    "../../../Windows/PropVariantConv.h"
    "../../../Windows/Registry.h"
    "../../../Windows/Synchronization.h"
    "../../../Windows/System.h"
    "../../../Windows/SystemInfo.h"
    "../../../Windows/Thread.h"
    "../../../Windows/TimeUtils.h"
    "../../Archive/7z/7zCompressionMode.h"
    "../../Archive/7z/7zDecode.h"
    "../../Archive/7z/7zEncode.h"
    "../../Archive/7z/7zFolderInStream.h"
    "../../Archive/7z/7zHandler.h"
    "../../Archive/7z/7zHeader.h"
    "../../Archive/7z/7zIn.h"
    "../../Archive/7z/7zItem.h"
    "../../Archive/7z/7zOut.h"
    "../../Archive/7z/7zProperties.h"
    "../../Archive/7z/7zSpecStream.h"
    "../../Archive/7z/7zUpdate.h"
    "../../Archive/Common/CoderMixer2.h"
    "../../Archive/Common/DummyOutStream.h"
    "../../Archive/Common/HandlerOut.h"
    "../../Archive/Common/InStreamWithCRC.h"
    "../../Archive/Common/ItemNameUtils.h"
    "../../Archive/Common/MultiStream.h"
    "../../Archive/Common/OutStreamWithCRC.h"
    "../../Archive/Common/ParseProperties.h"
    "../../Archive/IArchive.h"
    "../../Common/CreateCoder.h"
    "../../Common/CWrappers.h"
    "../../Common/FilePathAutoRename.h"
    "../../Common/FileStreams.h"
    "../../Common/FilterCoder.h"
    "../../Common/InBuffer.h"
    "../../Common/InOutTempBuffer.h"
    "../../Common/LimitedStreams.h"
    "../../Common/LockedStream.h"
    "../../Common/MethodId.h"
    "../../Common/MethodProps.h"
    "../../Common/MultiOutStream.h"
    "../../Common/OffsetStream.h"
    "../../Common/OutBuffer.h"
    "../../Common/ProgressUtils.h"
    "../../Common/RegisterArc.h"
    "../../Common/RegisterCodec.h"
    "../../Common/StreamBinder.h"
    "../../Common/StreamObjects.h"
    "../../Common/StreamUtils.h"
    "../../Common/UniqBlocks.h"
    "../../Common/VirtThread.h"
    "../../Compress/Bcj2Coder.h"
    "../../Compress/BcjCoder.h"
    "../../Compress/BranchMisc.h"
    "../../Compress/CopyCoder.h"
    "../../Compress/Lzma2Decoder.h"
    "../../Compress/Lzma2Encoder.h"
    "../../Compress/LzmaDecoder.h"
    "../../Compress/LzmaEncoder.h"
    "../../Compress/XzDecoder.h"
    "../../Compress/XzEncoder.h"
    "../../Crypto/7zAes.h"
    "../../Crypto/MyAes.h"
    "../../Crypto/RandGen.h"
    "../../ICoder.h"
    "../../IDecl.h"
    "../../IPassword.h"
    "../../IProgress.h"
    "../../IStream.h"
    "../../PropID.h"
    "../../UI/Common/ArchiveCommandLine.h"
    "../../UI/Common/ArchiveExtractCallback.h"
    "../../UI/Common/ArchiveOpenCallback.h"
    "../../UI/Common/Bench.h"
    "../../UI/Common/DefaultName.h"
    "../../UI/Common/EnumDirItems.h"
    "../../UI/Common/ExitCode.h"
    "../../UI/Common/Extract.h"
    "../../UI/Common/ExtractingFilePath.h"
    "../../UI/Common/HashCalc.h"
    "../../UI/Common/LoadCodecs.h"
    "../../UI/Common/OpenArchive.h"
    "../../UI/Common/Property.h"
    "../../UI/Common/PropIDUtils.h"
    "../../UI/Common/SetProperties.h"
    "../../UI/Common/SortUtils.h"
    "../../UI/Common/TempFiles.h"
    "../../UI/Common/Update.h"
    "../../UI/Common/UpdateAction.h"
    "../../UI/Common/UpdateCallback.h"
    "../../UI/Common/UpdatePair.h"
    "../../UI/Common/UpdateProduce.h"
    "../../UI/Console/BenchCon.h"
    "../../UI/Console/CompressionMode.h"
    "../../UI/Console/ConsoleClose.h"
    "../../UI/Console/ExtractCallbackConsole.h"
    "../../UI/Console/HashCon.h"
    "../../UI/Console/List.h"
    "../../UI/Console/OpenCallbackConsole.h"
    "../../UI/Console/PercentPrinter.h"
    "../../UI/Console/UpdateCallbackConsole.h"
    "../../UI/Console/UserInputUtils.h"
    "StdAfx.h"
)
source_group("Headers" FILES ${Headers})

set(Sources
    "../../../../C/7zCrc.c"
    "../../../../C/7zCrcOpt.c"
    "../../../../C/7zStream.c"
    "../../../../C/Aes.c"
    "../../../../C/AesOpt.c"
    "../../../../C/Alloc.c"
    "../../../../C/Bcj2.c"
    "../../../../C/Bcj2Enc.c"
    "../../../../C/Bra.c"
    "../../../../C/Bra86.c"
    "../../../../C/BraIA64.c"
    "../../../../C/CpuArch.c"
    "../../../../C/Delta.c"
    "../../../../C/DllSecur.c"
    "../../../../C/LzFind.c"
    "../../../../C/LzFindMt.c"
    "../../../../C/LzFindOpt.c"
    "../../../../C/Lzma2Dec.c"
    "../../../../C/Lzma2DecMt.c"
    "../../../../C/Lzma2Enc.c"
    "../../../../C/LzmaDec.c"
    "../../../../C/LzmaEnc.c"
    "../../../../C/MtCoder.c"
    "../../../../C/MtDec.c"
    "../../../../C/Sha256.c"
    "../../../../C/Sha256Opt.c"
    "../../../../C/SwapBytes.c"
    "../../../../C/Threads.c"
    "../../../../C/Xz.c"
    "../../../../C/XzCrc64.c"
    "../../../../C/XzCrc64Opt.c"
    "../../../../C/XzDec.c"
    "../../../../C/XzEnc.c"
    "../../../../C/XzIn.c"
    "../../../Common/CommandLineParser.cpp"
    "../../../Common/CRC.cpp"
    "../../../Common/CrcReg.cpp"
    "../../../Common/DynLimBuf.cpp"
    "../../../Common/IntToString.cpp"
    "../../../Common/ListFileUtils.cpp"
    "../../../Common/LzFindPrepare.cpp"
    "../../../Common/MyString.cpp"
    "../../../Common/MyVector.cpp"
    "../../../Common/MyWindows.cpp"
    "../../../Common/NewHandler.cpp"
    "../../../Common/Sha256Prepare.cpp"
    "../../../Common/Sha256Reg.cpp"
    "../../../Common/StdInStream.cpp"
    "../../../Common/StdOutStream.cpp"
    "../../../Common/StringConvert.cpp"
    "../../../Common/StringToInt.cpp"
    "../../../Common/UTFConvert.cpp"
    "../../../Common/Wildcard.cpp"
    "../../../Common/XzCrc64Init.cpp"
    "../../../Common/XzCrc64Reg.cpp"
    "../../../Windows/DLL.cpp"
    "../../../Windows/ErrorMsg.cpp"
    "../../../Windows/FileDir.cpp"
    "../../../Windows/FileFind.cpp"
    "../../../Windows/FileIO.cpp"
    "../../../Windows/FileLink.cpp"
    "../../../Windows/FileName.cpp"
    "../../../Windows/FileSystem.cpp"
    "../../../Windows/MemoryLock.cpp"
    "../../../Windows/PropVariant.cpp"
    "../../../Windows/PropVariantConv.cpp"
    "../../../Windows/Registry.cpp"
    "../../../Windows/System.cpp"
    "../../../Windows/SystemInfo.cpp"
    "../../../Windows/TimeUtils.cpp"
    "../../Archive/7z/7zCompressionMode.cpp"
    "../../Archive/7z/7zDecode.cpp"
    "../../Archive/7z/7zEncode.cpp"
    "../../Archive/7z/7zExtract.cpp"
    "../../Archive/7z/7zFolderInStream.cpp"
    "../../Archive/7z/7zHandler.cpp"
    "../../Archive/7z/7zHandlerOut.cpp"
    "../../Archive/7z/7zHeader.cpp"
    "../../Archive/7z/7zIn.cpp"
    "../../Archive/7z/7zOut.cpp"
    "../../Archive/7z/7zProperties.cpp"
    "../../Archive/7z/7zRegister.cpp"
    "../../Archive/7z/7zSpecStream.cpp"
    "../../Archive/7z/7zUpdate.cpp"
    "../../Archive/Common/CoderMixer2.cpp"
    "../../Archive/Common/DummyOutStream.cpp"
    "../../Archive/Common/HandlerOut.cpp"
    "../../Archive/Common/InStreamWithCRC.cpp"
    "../../Archive/Common/ItemNameUtils.cpp"
    "../../Archive/Common/MultiStream.cpp"
    "../../Archive/Common/OutStreamWithCRC.cpp"
    "../../Archive/Common/ParseProperties.cpp"
    "../../Archive/LzmaHandler.cpp"
    "../../Archive/SplitHandler.cpp"
    "../../Archive/XzHandler.cpp"
    "../../Common/CreateCoder.cpp"
    "../../Common/CWrappers.cpp"
    "../../Common/FilePathAutoRename.cpp"
    "../../Common/FileStreams.cpp"
    "../../Common/FilterCoder.cpp"
    "../../Common/InBuffer.cpp"
    "../../Common/InOutTempBuffer.cpp"
    "../../Common/LimitedStreams.cpp"
    "../../Common/LockedStream.cpp"
    "../../Common/MethodId.cpp"
    "../../Common/MethodProps.cpp"
    "../../Common/MultiOutStream.cpp"
    "../../Common/OffsetStream.cpp"
    "../../Common/OutBuffer.cpp"
    "../../Common/ProgressUtils.cpp"
    "../../Common/PropId.cpp"
    "../../Common/StreamBinder.cpp"
    "../../Common/StreamObjects.cpp"
    "../../Common/StreamUtils.cpp"
    "../../Common/UniqBlocks.cpp"
    "../../Common/VirtThread.cpp"
    "../../Compress/Bcj2Coder.cpp"
    "../../Compress/Bcj2Register.cpp"
    "../../Compress/BcjCoder.cpp"
    "../../Compress/BcjRegister.cpp"
    "../../Compress/BranchMisc.cpp"
    "../../Compress/BranchRegister.cpp"
    "../../Compress/ByteSwap.cpp"
    "../../Compress/CopyCoder.cpp"
    "../../Compress/CopyRegister.cpp"
    "../../Compress/DeltaFilter.cpp"
    "../../Compress/Lzma2Decoder.cpp"
    "../../Compress/Lzma2Encoder.cpp"
    "../../Compress/Lzma2Register.cpp"
    "../../Compress/LzmaDecoder.cpp"
    "../../Compress/LzmaEncoder.cpp"
    "../../Compress/LzmaRegister.cpp"
    "../../Compress/XzDecoder.cpp"
    "../../Compress/XzEncoder.cpp"
    "../../Crypto/7zAes.cpp"
    "../../Crypto/7zAesRegister.cpp"
    "../../Crypto/MyAes.cpp"
    "../../Crypto/MyAesReg.cpp"
    "../../Crypto/RandGen.cpp"
    "../../UI/Common/ArchiveCommandLine.cpp"
    "../../UI/Common/ArchiveExtractCallback.cpp"
    "../../UI/Common/ArchiveOpenCallback.cpp"
    "../../UI/Common/Bench.cpp"
    "../../UI/Common/DefaultName.cpp"
    "../../UI/Common/EnumDirItems.cpp"
    "../../UI/Common/Extract.cpp"
    "../../UI/Common/ExtractingFilePath.cpp"
    "../../UI/Common/HashCalc.cpp"
    "../../UI/Common/LoadCodecs.cpp"
    "../../UI/Common/OpenArchive.cpp"
    "../../UI/Common/PropIDUtils.cpp"
    "../../UI/Common/SetProperties.cpp"
    "../../UI/Common/SortUtils.cpp"
    "../../UI/Common/TempFiles.cpp"
    "../../UI/Common/Update.cpp"
    "../../UI/Common/UpdateAction.cpp"
    "../../UI/Common/UpdateCallback.cpp"
    "../../UI/Common/UpdatePair.cpp"
    "../../UI/Common/UpdateProduce.cpp"
    "../../UI/Console/BenchCon.cpp"
    "../../UI/Console/ConsoleClose.cpp"
    "../../UI/Console/ExtractCallbackConsole.cpp"
    "../../UI/Console/HashCon.cpp"
    "../../UI/Console/List.cpp"
    "../../UI/Console/Main.cpp"
    "../../UI/Console/MainAr.cpp"
    "../../UI/Console/OpenCallbackConsole.cpp"
    "../../UI/Console/PercentPrinter.cpp"
    "../../UI/Console/UpdateCallbackConsole.cpp"
    "../../UI/Console/UserInputUtils.cpp"
    "StdAfx.cpp"
)
source_group("Sources" FILES ${Sources})

set(ALL_FILES
    ${Headers}
    ${Sources}
)

################################################################################
# Target
################################################################################
add_executable(${PROJECT_NAME} ${ALL_FILES})

target_precompile_headers(${PROJECT_NAME} PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/StdAfx.h>"
)

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DBGSTATIC "7zrd"
        TARGET_NAME_DEBUG     "7zrd"
        TARGET_NAME_RELEASE   "7zr"
        TARGET_NAME_RELSTATIC "7zr"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DBGSTATIC "7zrd"
        TARGET_NAME_DEBUG     "7zrd"
        TARGET_NAME_RELEASE   "7zr"
        TARGET_NAME_RELSTATIC "7zr"
    )
endif()
################################################################################
# Output directory
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DBGSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./bin/"
        OUTPUT_DIRECTORY_DEBUG     "${CMAKE_CURRENT_SOURCE_DIR}/./bin/"
        OUTPUT_DIRECTORY_RELEASE   "${CMAKE_CURRENT_SOURCE_DIR}/./bin/"
        OUTPUT_DIRECTORY_RELSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./bin/"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DBGSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./bin/"
        OUTPUT_DIRECTORY_DEBUG     "${CMAKE_CURRENT_SOURCE_DIR}/./bin/"
        OUTPUT_DIRECTORY_RELEASE   "${CMAKE_CURRENT_SOURCE_DIR}/./bin/"
        OUTPUT_DIRECTORY_RELSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./bin/"
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
# Include directories
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../.."
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../.."
    )
endif()

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:DbgStatic>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Debug>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Release>:"
            "NDEBUG"
        ">"
        "$<$<CONFIG:RelStatic>:"
            "NDEBUG"
        ">"
        "WIN32;"
        "_CONSOLE;"
        "Z7_LARGE_PAGES;"
        "Z7_DEVICE_FILE;"
        "UNICODE;"
        "_UNICODE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:DbgStatic>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Debug>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Release>:"
            "NDEBUG"
        ">"
        "$<$<CONFIG:RelStatic>:"
            "NDEBUG"
        ">"
        "WIN32;"
        "_CONSOLE;"
        "Z7_LARGE_PAGES;"
        "Z7_DEVICE_FILE;"
        "UNICODE;"
        "_UNICODE"
    )
endif()
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_source_files_properties(../../UI/Console/Main.cpp PROPERTIES
        COMPILE_DEFINITIONS "PROG_VARIANT_R"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_source_files_properties(../../UI/Console/Main.cpp PROPERTIES
        COMPILE_DEFINITIONS "PROG_VARIANT_R"
    )
endif()

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /Gm;
                /Od;
                /RTC1;
                /Gy-
            >
            $<$<CONFIG:Debug>:
                /Gm;
                /Od;
                /RTC1;
                /Gy-
            >
            $<$<CONFIG:Release>:
                /O1;
                /GF;
                /Gy;
                /FAcs
            >
            $<$<CONFIG:RelStatic>:
                /O1;
                /GF;
                /Gy;
                /FAcs
            >
            /Gr;
            /W4;
            /WX;
            ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
            ${DEFAULT_CXX_EXCEPTION_HANDLING}
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /Gm;
                /Od;
                /RTC1;
                /Gy-
            >
            $<$<CONFIG:Debug>:
                /Gm;
                /Od;
                /RTC1;
                /Gy-
            >
            $<$<CONFIG:Release>:
                /O1;
                /GF;
                /Gy;
                /FAcs
            >
            $<$<CONFIG:RelStatic>:
                /O1;
                /GF;
                /Gy;
                /FAcs
            >
            /Gr;
            /W4;
            /WX;
            ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
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
    source_file_compile_options(../../../../C/7zCrc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/7zCrcOpt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/7zStream.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Aes.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/AesOpt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Alloc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Bcj2.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Bcj2Enc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Bra.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Bra86.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/BraIA64.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/CpuArch.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Delta.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/DllSecur.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzFind.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzFindMt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzFindOpt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Lzma2Dec.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Lzma2DecMt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Lzma2Enc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzmaDec.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzmaEnc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/MtCoder.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/MtDec.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Sha256.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Sha256Opt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/SwapBytes.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Threads.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Xz.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzCrc64.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzCrc64Opt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzDec.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzEnc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzIn.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Debug>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Release>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            $<$<CONFIG:RelStatic>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            /NOLOGO;
            /SUBSYSTEM:CONSOLE
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Debug>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Release>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            $<$<CONFIG:RelStatic>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            /NOLOGO;
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
        COMMAND $<CONFIG:DbgStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.exe" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND     $<CONFIG:Debug> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.exe" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND   $<CONFIG:Release> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.exe" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND $<CONFIG:RelStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.exe" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    add_custom_command_if(
        TARGET ${PROJECT_NAME}
        POST_BUILD
        COMMANDS
        COMMAND $<CONFIG:DbgStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.exe" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND     $<CONFIG:Debug> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.exe" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND   $<CONFIG:Release> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.exe" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
        COMMAND $<CONFIG:RelStatic> copy "${OUTPUT_DIRECTORY}${TARGET_NAME}.exe" "${OUTPUT_DIRECTORY}..\\..\\..\\..\\..\\..\\bin\\md\\win32-dll\\" /y
    )
endif()

################################################################################
# Dependencies
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set(ADDITIONAL_LIBRARY_DEPENDENCIES
        "odbc32;"
        "odbccp32"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set(ADDITIONAL_LIBRARY_DEPENDENCIES
        "odbc32;"
        "odbccp32"
    )
endif()
target_link_libraries(${PROJECT_NAME} PRIVATE "${ADDITIONAL_LIBRARY_DEPENDENCIES}")



























set(PROJECT_NAME AloneLib_md)

################################################################################
# Source groups
################################################################################
set(Headers
    "../../../../C/7zCrc.h"
    "../../../../C/7zTypes.h"
    "../../../../C/7zWindows.h"
    "../../../../C/Aes.h"
    "../../../../C/Alloc.h"
    "../../../../C/Bcj2.h"
    "../../../../C/Bra.h"
    "../../../../C/Compiler.h"
    "../../../../C/Compress/Lz/LzHash.h"
    "../../../../C/CpuArch.h"
    "../../../../C/Delta.h"
    "../../../../C/DllSecur.h"
    "../../../../C/IStream.h"
    "../../../../C/LzFind.h"
    "../../../../C/LzFindMt.h"
    "../../../../C/LzHash.h"
    "../../../../C/Lzma2Dec.h"
    "../../../../C/Lzma2DecMt.h"
    "../../../../C/Lzma2Enc.h"
    "../../../../C/LzmaDec.h"
    "../../../../C/LzmaEnc.h"
    "../../../../C/MtCoder.h"
    "../../../../C/MtDec.h"
    "../../../../C/RotateDefs.h"
    "../../../../C/Sha256.h"
    "../../../../C/SwapBytes.h"
    "../../../../C/Threads.h"
    "../../../../C/Xz.h"
    "../../../../C/XzCrc64.h"
    "../../../../C/XzEnc.h"
    "../../../Common/AutoPtr.h"
    "../../../Common/Buffer.h"
    "../../../Common/CommandLineParser.h"
    "../../../Common/Common.h"
    "../../../Common/ComTry.h"
    "../../../Common/Defs.h"
    "../../../Common/DynamicBuffer.h"
    "../../../Common/DynLimBuf.h"
    "../../../Common/IntToString.h"
    "../../../Common/ListFileUtils.h"
    "../../../Common/MyBuffer.h"
    "../../../Common/MyBuffer2.h"
    "../../../Common/MyCom.h"
    "../../../Common/MyException.h"
    "../../../Common/MyGuidDef.h"
    "../../../Common/MyInitGuid.h"
    "../../../Common/MyString.h"
    "../../../Common/MyTypes.h"
    "../../../Common/MyUnknown.h"
    "../../../Common/MyVector.h"
    "../../../Common/MyWindows.h"
    "../../../Common/NewHandler.h"
    "../../../Common/StdInStream.h"
    "../../../Common/StdOutStream.h"
    "../../../Common/StringConvert.h"
    "../../../Common/StringToInt.h"
    "../../../Common/Types.h"
    "../../../Common/UTFConvert.h"
    "../../../Common/Wildcard.h"
    "../../../Windows/Defs.h"
    "../../../Windows/Device.h"
    "../../../Windows/DLL.h"
    "../../../Windows/ErrorMsg.h"
    "../../../Windows/FileDir.h"
    "../../../Windows/FileFind.h"
    "../../../Windows/FileIO.h"
    "../../../Windows/FileMapping.h"
    "../../../Windows/FileName.h"
    "../../../Windows/FileSystem.h"
    "../../../Windows/Handle.h"
    "../../../Windows/MemoryLock.h"
    "../../../Windows/NtCheck.h"
    "../../../Windows/PropVariant.h"
    "../../../Windows/PropVariantConv.h"
    "../../../Windows/Registry.h"
    "../../../Windows/Synchronization.h"
    "../../../Windows/System.h"
    "../../../Windows/SystemInfo.h"
    "../../../Windows/Thread.h"
    "../../../Windows/TimeUtils.h"
    "../../Archive/7z/7zCompressionMode.h"
    "../../Archive/7z/7zDecode.h"
    "../../Archive/7z/7zEncode.h"
    "../../Archive/7z/7zFolderInStream.h"
    "../../Archive/7z/7zHandler.h"
    "../../Archive/7z/7zHeader.h"
    "../../Archive/7z/7zIn.h"
    "../../Archive/7z/7zItem.h"
    "../../Archive/7z/7zOut.h"
    "../../Archive/7z/7zProperties.h"
    "../../Archive/7z/7zSpecStream.h"
    "../../Archive/7z/7zUpdate.h"
    "../../Archive/Common/CoderMixer2.h"
    "../../Archive/Common/DummyOutStream.h"
    "../../Archive/Common/HandlerOut.h"
    "../../Archive/Common/InStreamWithCRC.h"
    "../../Archive/Common/ItemNameUtils.h"
    "../../Archive/Common/MultiStream.h"
    "../../Archive/Common/OutStreamWithCRC.h"
    "../../Archive/Common/ParseProperties.h"
    "../../Archive/IArchive.h"
    "../../Common/CreateCoder.h"
    "../../Common/CWrappers.h"
    "../../Common/FilePathAutoRename.h"
    "../../Common/FileStreams.h"
    "../../Common/FilterCoder.h"
    "../../Common/InBuffer.h"
    "../../Common/InOutTempBuffer.h"
    "../../Common/LimitedStreams.h"
    "../../Common/LockedStream.h"
    "../../Common/MethodId.h"
    "../../Common/MethodProps.h"
    "../../Common/MultiOutStream.h"
    "../../Common/OffsetStream.h"
    "../../Common/OutBuffer.h"
    "../../Common/ProgressUtils.h"
    "../../Common/RegisterArc.h"
    "../../Common/RegisterCodec.h"
    "../../Common/StreamBinder.h"
    "../../Common/StreamObjects.h"
    "../../Common/StreamUtils.h"
    "../../Common/UniqBlocks.h"
    "../../Common/VirtThread.h"
    "../../Compress/Bcj2Coder.h"
    "../../Compress/BcjCoder.h"
    "../../Compress/BranchMisc.h"
    "../../Compress/CopyCoder.h"
    "../../Compress/Lzma2Decoder.h"
    "../../Compress/Lzma2Encoder.h"
    "../../Compress/LzmaDecoder.h"
    "../../Compress/LzmaEncoder.h"
    "../../Compress/XzDecoder.h"
    "../../Compress/XzEncoder.h"
    "../../Crypto/7zAes.h"
    "../../Crypto/MyAes.h"
    "../../Crypto/RandGen.h"
    "../../ICoder.h"
    "../../IDecl.h"
    "../../IPassword.h"
    "../../IProgress.h"
    "../../IStream.h"
    "../../PropID.h"
    "../../UI/Common/ArchiveCommandLine.h"
    "../../UI/Common/ArchiveExtractCallback.h"
    "../../UI/Common/ArchiveOpenCallback.h"
    "../../UI/Common/Bench.h"
    "../../UI/Common/DefaultName.h"
    "../../UI/Common/EnumDirItems.h"
    "../../UI/Common/ExitCode.h"
    "../../UI/Common/Extract.h"
    "../../UI/Common/ExtractingFilePath.h"
    "../../UI/Common/HashCalc.h"
    "../../UI/Common/LoadCodecs.h"
    "../../UI/Common/OpenArchive.h"
    "../../UI/Common/Property.h"
    "../../UI/Common/PropIDUtils.h"
    "../../UI/Common/SetProperties.h"
    "../../UI/Common/SortUtils.h"
    "../../UI/Common/TempFiles.h"
    "../../UI/Common/Update.h"
    "../../UI/Common/UpdateAction.h"
    "../../UI/Common/UpdateCallback.h"
    "../../UI/Common/UpdatePair.h"
    "../../UI/Common/UpdateProduce.h"
    "../../UI/Console/BenchCon.h"
    "../../UI/Console/CompressionMode.h"
    "../../UI/Console/ConsoleClose.h"
    "../../UI/Console/ExtractCallbackConsole.h"
    "../../UI/Console/HashCon.h"
    "../../UI/Console/List.h"
    "../../UI/Console/OpenCallbackConsole.h"
    "../../UI/Console/PercentPrinter.h"
    "../../UI/Console/UpdateCallbackConsole.h"
    "../../UI/Console/UserInputUtils.h"
    "StdAfx.h"
)
source_group("Headers" FILES ${Headers})

set(Sources
    "../../../../C/7zCrc.c"
    "../../../../C/7zCrcOpt.c"
    "../../../../C/7zStream.c"
    "../../../../C/Aes.c"
    "../../../../C/AesOpt.c"
    "../../../../C/Alloc.c"
    "../../../../C/Bcj2.c"
    "../../../../C/Bcj2Enc.c"
    "../../../../C/Bra.c"
    "../../../../C/Bra86.c"
    "../../../../C/BraIA64.c"
    "../../../../C/CpuArch.c"
    "../../../../C/Delta.c"
    "../../../../C/DllSecur.c"
    "../../../../C/LzFind.c"
    "../../../../C/LzFindMt.c"
    "../../../../C/LzFindOpt.c"
    "../../../../C/Lzma2Dec.c"
    "../../../../C/Lzma2DecMt.c"
    "../../../../C/Lzma2Enc.c"
    "../../../../C/LzmaDec.c"
    "../../../../C/LzmaEnc.c"
    "../../../../C/MtCoder.c"
    "../../../../C/MtDec.c"
    "../../../../C/Sha256.c"
    "../../../../C/Sha256Opt.c"
    "../../../../C/SwapBytes.c"
    "../../../../C/Threads.c"
    "../../../../C/Xz.c"
    "../../../../C/XzCrc64.c"
    "../../../../C/XzCrc64Opt.c"
    "../../../../C/XzDec.c"
    "../../../../C/XzEnc.c"
    "../../../../C/XzIn.c"
    "../../../Common/CommandLineParser.cpp"
    "../../../Common/CRC.cpp"
    "../../../Common/CrcReg.cpp"
    "../../../Common/DynLimBuf.cpp"
    "../../../Common/IntToString.cpp"
    "../../../Common/ListFileUtils.cpp"
    "../../../Common/LzFindPrepare.cpp"
    "../../../Common/MyString.cpp"
    "../../../Common/MyVector.cpp"
    "../../../Common/MyWindows.cpp"
    "../../../Common/NewHandler.cpp"
    "../../../Common/Sha256Prepare.cpp"
    "../../../Common/Sha256Reg.cpp"
    "../../../Common/StdInStream.cpp"
    "../../../Common/StdOutStream.cpp"
    "../../../Common/StringConvert.cpp"
    "../../../Common/StringToInt.cpp"
    "../../../Common/UTFConvert.cpp"
    "../../../Common/Wildcard.cpp"
    "../../../Common/XzCrc64Init.cpp"
    "../../../Common/XzCrc64Reg.cpp"
    "../../../Windows/DLL.cpp"
    "../../../Windows/ErrorMsg.cpp"
    "../../../Windows/FileDir.cpp"
    "../../../Windows/FileFind.cpp"
    "../../../Windows/FileIO.cpp"
    "../../../Windows/FileLink.cpp"
    "../../../Windows/FileName.cpp"
    "../../../Windows/FileSystem.cpp"
    "../../../Windows/MemoryLock.cpp"
    "../../../Windows/PropVariant.cpp"
    "../../../Windows/PropVariantConv.cpp"
    "../../../Windows/Registry.cpp"
    "../../../Windows/System.cpp"
    "../../../Windows/SystemInfo.cpp"
    "../../../Windows/TimeUtils.cpp"
    "../../Archive/7z/7zCompressionMode.cpp"
    "../../Archive/7z/7zDecode.cpp"
    "../../Archive/7z/7zEncode.cpp"
    "../../Archive/7z/7zExtract.cpp"
    "../../Archive/7z/7zFolderInStream.cpp"
    "../../Archive/7z/7zHandler.cpp"
    "../../Archive/7z/7zHandlerOut.cpp"
    "../../Archive/7z/7zHeader.cpp"
    "../../Archive/7z/7zIn.cpp"
    "../../Archive/7z/7zOut.cpp"
    "../../Archive/7z/7zProperties.cpp"
    "../../Archive/7z/7zRegister.cpp"
    "../../Archive/7z/7zSpecStream.cpp"
    "../../Archive/7z/7zUpdate.cpp"
    "../../Archive/Common/CoderMixer2.cpp"
    "../../Archive/Common/DummyOutStream.cpp"
    "../../Archive/Common/HandlerOut.cpp"
    "../../Archive/Common/InStreamWithCRC.cpp"
    "../../Archive/Common/ItemNameUtils.cpp"
    "../../Archive/Common/MultiStream.cpp"
    "../../Archive/Common/OutStreamWithCRC.cpp"
    "../../Archive/Common/ParseProperties.cpp"
    "../../Archive/LzmaHandler.cpp"
    "../../Archive/SplitHandler.cpp"
    "../../Archive/XzHandler.cpp"
    "../../Common/CreateCoder.cpp"
    "../../Common/CWrappers.cpp"
    "../../Common/FilePathAutoRename.cpp"
    "../../Common/FileStreams.cpp"
    "../../Common/FilterCoder.cpp"
    "../../Common/InBuffer.cpp"
    "../../Common/InOutTempBuffer.cpp"
    "../../Common/LimitedStreams.cpp"
    "../../Common/LockedStream.cpp"
    "../../Common/MethodId.cpp"
    "../../Common/MethodProps.cpp"
    "../../Common/MultiOutStream.cpp"
    "../../Common/OffsetStream.cpp"
    "../../Common/OutBuffer.cpp"
    "../../Common/ProgressUtils.cpp"
    "../../Common/PropId.cpp"
    "../../Common/StreamBinder.cpp"
    "../../Common/StreamObjects.cpp"
    "../../Common/StreamUtils.cpp"
    "../../Common/UniqBlocks.cpp"
    "../../Common/VirtThread.cpp"
    "../../Compress/Bcj2Coder.cpp"
    "../../Compress/Bcj2Register.cpp"
    "../../Compress/BcjCoder.cpp"
    "../../Compress/BcjRegister.cpp"
    "../../Compress/BranchMisc.cpp"
    "../../Compress/BranchRegister.cpp"
    "../../Compress/ByteSwap.cpp"
    "../../Compress/CopyCoder.cpp"
    "../../Compress/CopyRegister.cpp"
    "../../Compress/DeltaFilter.cpp"
    "../../Compress/Lzma2Decoder.cpp"
    "../../Compress/Lzma2Encoder.cpp"
    "../../Compress/Lzma2Register.cpp"
    "../../Compress/LzmaDecoder.cpp"
    "../../Compress/LzmaEncoder.cpp"
    "../../Compress/LzmaRegister.cpp"
    "../../Compress/XzDecoder.cpp"
    "../../Compress/XzEncoder.cpp"
    "../../Crypto/7zAes.cpp"
    "../../Crypto/7zAesRegister.cpp"
    "../../Crypto/MyAes.cpp"
    "../../Crypto/MyAesReg.cpp"
    "../../Crypto/RandGen.cpp"
    "../../UI/Common/ArchiveCommandLine.cpp"
    "../../UI/Common/ArchiveExtractCallback.cpp"
    "../../UI/Common/ArchiveOpenCallback.cpp"
    "../../UI/Common/Bench.cpp"
    "../../UI/Common/DefaultName.cpp"
    "../../UI/Common/EnumDirItems.cpp"
    "../../UI/Common/Extract.cpp"
    "../../UI/Common/ExtractingFilePath.cpp"
    "../../UI/Common/HashCalc.cpp"
    "../../UI/Common/LoadCodecs.cpp"
    "../../UI/Common/OpenArchive.cpp"
    "../../UI/Common/PropIDUtils.cpp"
    "../../UI/Common/SetProperties.cpp"
    "../../UI/Common/SortUtils.cpp"
    "../../UI/Common/TempFiles.cpp"
    "../../UI/Common/Update.cpp"
    "../../UI/Common/UpdateAction.cpp"
    "../../UI/Common/UpdateCallback.cpp"
    "../../UI/Common/UpdatePair.cpp"
    "../../UI/Common/UpdateProduce.cpp"
    "../../UI/Console/BenchCon.cpp"
    "../../UI/Console/ConsoleClose.cpp"
    "../../UI/Console/ExtractCallbackConsole.cpp"
    "../../UI/Console/HashCon.cpp"
    "../../UI/Console/List.cpp"
    "../../UI/Console/Main.cpp"
    "../../UI/Console/MainAr.cpp"
    "../../UI/Console/OpenCallbackConsole.cpp"
    "../../UI/Console/PercentPrinter.cpp"
    "../../UI/Console/UpdateCallbackConsole.cpp"
    "../../UI/Console/UserInputUtils.cpp"
    "StdAfx.cpp"
)
source_group("Sources" FILES ${Sources})

set(ALL_FILES
    ${Headers}
    ${Sources}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} SHARED ${ALL_FILES})

target_precompile_headers(${PROJECT_NAME} PRIVATE
    "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/StdAfx.h>"
)

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DBGSTATIC "7zrd"
        TARGET_NAME_DEBUG     "7zrd"
        TARGET_NAME_RELEASE   "7zr"
        TARGET_NAME_RELSTATIC "7zr"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DBGSTATIC "7zrd"
        TARGET_NAME_DEBUG     "7zrd"
        TARGET_NAME_RELEASE   "7zr"
        TARGET_NAME_RELSTATIC "7zr"
    )
endif()
################################################################################
# Output directory
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DBGSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./bin/lib/"
        OUTPUT_DIRECTORY_DEBUG     "${CMAKE_CURRENT_SOURCE_DIR}/./bin/lib/"
        OUTPUT_DIRECTORY_RELEASE   "${CMAKE_CURRENT_SOURCE_DIR}/./bin/lib/"
        OUTPUT_DIRECTORY_RELSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./bin/lib/"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DBGSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./bin/lib/"
        OUTPUT_DIRECTORY_DEBUG     "${CMAKE_CURRENT_SOURCE_DIR}/./bin/lib/"
        OUTPUT_DIRECTORY_RELEASE   "${CMAKE_CURRENT_SOURCE_DIR}/./bin/lib/"
        OUTPUT_DIRECTORY_RELSTATIC "${CMAKE_CURRENT_SOURCE_DIR}/./bin/lib/"
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
# Include directories
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../.."
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../.."
    )
endif()

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:DbgStatic>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Debug>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Release>:"
            "NDEBUG"
        ">"
        "$<$<CONFIG:RelStatic>:"
            "NDEBUG"
        ">"
        "WIN32;"
        "_CONSOLE;"
        "Z7_LARGE_PAGES;"
        "Z7_DEVICE_FILE;"
        "UNICODE;"
        "_UNICODE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:DbgStatic>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Debug>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Release>:"
            "NDEBUG"
        ">"
        "$<$<CONFIG:RelStatic>:"
            "NDEBUG"
        ">"
        "WIN32;"
        "_CONSOLE;"
        "Z7_LARGE_PAGES;"
        "Z7_DEVICE_FILE;"
        "UNICODE;"
        "_UNICODE"
    )
endif()
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_source_files_properties(../../UI/Console/Main.cpp PROPERTIES
        COMPILE_DEFINITIONS "PROG_VARIANT_R"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_source_files_properties(../../UI/Console/Main.cpp PROPERTIES
        COMPILE_DEFINITIONS "PROG_VARIANT_R"
    )
endif()

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /Gm;
                /Od;
                /RTC1;
                /Gy-
            >
            $<$<CONFIG:Debug>:
                /Gm;
                /Od;
                /RTC1;
                /Gy-
            >
            $<$<CONFIG:Release>:
                /O1;
                /GF;
                /Gy;
                /FAcs
            >
            $<$<CONFIG:RelStatic>:
                /O1;
                /GF;
                /Gy;
                /FAcs
            >
            /Gr;
            /W4;
            /WX;
            ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
            ${DEFAULT_CXX_EXCEPTION_HANDLING}
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /Gm;
                /Od;
                /RTC1;
                /Gy-
            >
            $<$<CONFIG:Debug>:
                /Gm;
                /Od;
                /RTC1;
                /Gy-
            >
            $<$<CONFIG:Release>:
                /O1;
                /GF;
                /Gy;
                /FAcs
            >
            $<$<CONFIG:RelStatic>:
                /O1;
                /GF;
                /Gy;
                /FAcs
            >
            /Gr;
            /W4;
            /WX;
            ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
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
    source_file_compile_options(../../../../C/7zCrc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/7zCrcOpt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/7zStream.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Aes.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/AesOpt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Alloc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Bcj2.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Bcj2Enc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Bra.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Bra86.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/BraIA64.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/CpuArch.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Delta.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/DllSecur.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzFind.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzFindMt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzFindOpt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Lzma2Dec.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Lzma2DecMt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Lzma2Enc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzmaDec.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/LzmaEnc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/MtCoder.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/MtDec.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Sha256.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Sha256Opt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/SwapBytes.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Threads.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/Xz.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzCrc64.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzCrc64Opt.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzDec.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzEnc.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        string(CONCAT FILE_CL_OPTIONS
            "$<$<CONFIG:Release>:"
                "/O2"
            ">"
            "$<$<CONFIG:RelStatic>:"
                "/O2"
            ">"
            "/Y-"
        )
    endif()
    source_file_compile_options(../../../../C/XzIn.c ${FILE_CL_OPTIONS})
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Debug>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Release>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            $<$<CONFIG:RelStatic>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            /NOLOGO;
            /SUBSYSTEM:CONSOLE
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:DbgStatic>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Debug>:
                /DEBUG;
                /INCREMENTAL
            >
            $<$<CONFIG:Release>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            $<$<CONFIG:RelStatic>:
                /DEBUG:FULL;
                /INCREMENTAL:NO
            >
            /NOLOGO;
            /SUBSYSTEM:CONSOLE
        )
    endif()
endif()

################################################################################
# Dependencies
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set(ADDITIONAL_LIBRARY_DEPENDENCIES
        "odbc32;"
        "odbccp32"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set(ADDITIONAL_LIBRARY_DEPENDENCIES
        "odbc32;"
        "odbccp32"
    )
endif()
target_link_libraries(${PROJECT_NAME} PUBLIC "${ADDITIONAL_LIBRARY_DEPENDENCIES}")

