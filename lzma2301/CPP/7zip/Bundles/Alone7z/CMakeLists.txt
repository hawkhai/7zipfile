set(PROJECT_NAME Alone_md)

################################################################################
# Source groups
################################################################################
set(7-zip
    "../../ICoder.h"
    "../../IDecl.h"
    "../../IPassword.h"
    "../../IProgress.h"
    "../../IStream.h"
    "../../PropID.h"
)
source_group("7-zip" FILES ${7-zip})

set(7zip_Common
    "../../Common/CreateCoder.cpp"
    "../../Common/CreateCoder.h"
    "../../Common/CWrappers.cpp"
    "../../Common/CWrappers.h"
    "../../Common/FilePathAutoRename.cpp"
    "../../Common/FilePathAutoRename.h"
    "../../Common/FileStreams.cpp"
    "../../Common/FileStreams.h"
    "../../Common/FilterCoder.cpp"
    "../../Common/FilterCoder.h"
    "../../Common/InBuffer.cpp"
    "../../Common/InBuffer.h"
    "../../Common/InOutTempBuffer.cpp"
    "../../Common/InOutTempBuffer.h"
    "../../Common/LimitedStreams.cpp"
    "../../Common/LimitedStreams.h"
    "../../Common/LockedStream.cpp"
    "../../Common/LockedStream.h"
    "../../Common/MethodId.cpp"
    "../../Common/MethodId.h"
    "../../Common/MethodProps.cpp"
    "../../Common/MethodProps.h"
    "../../Common/MultiOutStream.cpp"
    "../../Common/MultiOutStream.h"
    "../../Common/OffsetStream.cpp"
    "../../Common/OffsetStream.h"
    "../../Common/OutBuffer.cpp"
    "../../Common/OutBuffer.h"
    "../../Common/ProgressUtils.cpp"
    "../../Common/ProgressUtils.h"
    "../../Common/PropId.cpp"
    "../../Common/RegisterArc.h"
    "../../Common/RegisterCodec.h"
    "../../Common/StreamBinder.cpp"
    "../../Common/StreamBinder.h"
    "../../Common/StreamObjects.cpp"
    "../../Common/StreamObjects.h"
    "../../Common/StreamUtils.cpp"
    "../../Common/StreamUtils.h"
    "../../Common/UniqBlocks.cpp"
    "../../Common/UniqBlocks.h"
    "../../Common/VirtThread.cpp"
    "../../Common/VirtThread.h"
)
source_group("7zip Common" FILES ${7zip_Common})

set(Archive
    "../../Archive/IArchive.h"
    "../../Archive/LzmaHandler.cpp"
    "../../Archive/SplitHandler.cpp"
    "../../Archive/XzHandler.cpp"
)
source_group("Archive" FILES ${Archive})

set(Archive__7z
    "../../Archive/7z/7zCompressionMode.cpp"
    "../../Archive/7z/7zCompressionMode.h"
    "../../Archive/7z/7zDecode.cpp"
    "../../Archive/7z/7zDecode.h"
    "../../Archive/7z/7zEncode.cpp"
    "../../Archive/7z/7zEncode.h"
    "../../Archive/7z/7zExtract.cpp"
    "../../Archive/7z/7zFolderInStream.cpp"
    "../../Archive/7z/7zFolderInStream.h"
    "../../Archive/7z/7zHandler.cpp"
    "../../Archive/7z/7zHandler.h"
    "../../Archive/7z/7zHandlerOut.cpp"
    "../../Archive/7z/7zHeader.cpp"
    "../../Archive/7z/7zHeader.h"
    "../../Archive/7z/7zIn.cpp"
    "../../Archive/7z/7zIn.h"
    "../../Archive/7z/7zItem.h"
    "../../Archive/7z/7zOut.cpp"
    "../../Archive/7z/7zOut.h"
    "../../Archive/7z/7zProperties.cpp"
    "../../Archive/7z/7zProperties.h"
    "../../Archive/7z/7zRegister.cpp"
    "../../Archive/7z/7zSpecStream.cpp"
    "../../Archive/7z/7zSpecStream.h"
    "../../Archive/7z/7zUpdate.cpp"
    "../../Archive/7z/7zUpdate.h"
)
source_group("Archive\\7z" FILES ${Archive__7z})

set(Archive__Archive_Common
    "../../Archive/Common/CoderMixer2.cpp"
    "../../Archive/Common/CoderMixer2.h"
    "../../Archive/Common/DummyOutStream.cpp"
    "../../Archive/Common/DummyOutStream.h"
    "../../Archive/Common/HandlerOut.cpp"
    "../../Archive/Common/HandlerOut.h"
    "../../Archive/Common/InStreamWithCRC.cpp"
    "../../Archive/Common/InStreamWithCRC.h"
    "../../Archive/Common/ItemNameUtils.cpp"
    "../../Archive/Common/ItemNameUtils.h"
    "../../Archive/Common/MultiStream.cpp"
    "../../Archive/Common/MultiStream.h"
    "../../Archive/Common/OutStreamWithCRC.cpp"
    "../../Archive/Common/OutStreamWithCRC.h"
    "../../Archive/Common/ParseProperties.cpp"
    "../../Archive/Common/ParseProperties.h"
)
source_group("Archive\\Archive Common" FILES ${Archive__Archive_Common})

set(C
    "../../../../C/7zCrc.c"
    "../../../../C/7zCrc.h"
    "../../../../C/7zCrcOpt.c"
    "../../../../C/7zStream.c"
    "../../../../C/7zTypes.h"
    "../../../../C/7zWindows.h"
    "../../../../C/Aes.c"
    "../../../../C/Aes.h"
    "../../../../C/AesOpt.c"
    "../../../../C/Alloc.c"
    "../../../../C/Alloc.h"
    "../../../../C/Bcj2.c"
    "../../../../C/Bcj2.h"
    "../../../../C/Bcj2Enc.c"
    "../../../../C/Bra.c"
    "../../../../C/Bra.h"
    "../../../../C/Bra86.c"
    "../../../../C/BraIA64.c"
    "../../../../C/Compiler.h"
    #"../../../../C/Compress/Lz/LzHash.h"
    "../../../../C/CpuArch.c"
    "../../../../C/CpuArch.h"
    "../../../../C/Delta.c"
    "../../../../C/Delta.h"
    "../../../../C/DllSecur.c"
    "../../../../C/DllSecur.h"
    #"../../../../C/IStream.h"
    "../../../../C/LzFind.c"
    "../../../../C/LzFind.h"
    "../../../../C/LzFindMt.c"
    "../../../../C/LzFindMt.h"
    "../../../../C/LzFindOpt.c"
    "../../../../C/LzHash.h"
    "../../../../C/Lzma2Dec.c"
    "../../../../C/Lzma2Dec.h"
    "../../../../C/Lzma2DecMt.c"
    "../../../../C/Lzma2DecMt.h"
    "../../../../C/Lzma2Enc.c"
    "../../../../C/Lzma2Enc.h"
    "../../../../C/LzmaDec.c"
    "../../../../C/LzmaDec.h"
    "../../../../C/LzmaEnc.c"
    "../../../../C/LzmaEnc.h"
    "../../../../C/MtCoder.c"
    "../../../../C/MtCoder.h"
    "../../../../C/MtDec.c"
    "../../../../C/MtDec.h"
    "../../../../C/RotateDefs.h"
    "../../../../C/Sha256.c"
    "../../../../C/Sha256.h"
    "../../../../C/Sha256Opt.c"
    "../../../../C/SwapBytes.c"
    "../../../../C/SwapBytes.h"
    "../../../../C/Threads.c"
    "../../../../C/Threads.h"
)
source_group("C" FILES ${C})

set(C__Xz
    "../../../../C/Xz.c"
    "../../../../C/Xz.h"
    "../../../../C/XzCrc64.c"
    "../../../../C/XzCrc64.h"
    "../../../../C/XzCrc64Opt.c"
    "../../../../C/XzDec.c"
    "../../../../C/XzEnc.c"
    "../../../../C/XzEnc.h"
    "../../../../C/XzIn.c"
)
source_group("C\\Xz" FILES ${C__Xz})

set(Common
    "../../../Common/AutoPtr.h"
    #"../../../Common/Buffer.h"
    "../../../Common/CommandLineParser.cpp"
    "../../../Common/CommandLineParser.h"
    "../../../Common/Common.h"
    "../../../Common/ComTry.h"
    "../../../Common/CRC.cpp"
    "../../../Common/CrcReg.cpp"
    "../../../Common/Defs.h"
    "../../../Common/DynamicBuffer.h"
    "../../../Common/DynLimBuf.cpp"
    "../../../Common/DynLimBuf.h"
    "../../../Common/IntToString.cpp"
    "../../../Common/IntToString.h"
    "../../../Common/ListFileUtils.cpp"
    "../../../Common/ListFileUtils.h"
    "../../../Common/LzFindPrepare.cpp"
    "../../../Common/MyBuffer.h"
    "../../../Common/MyBuffer2.h"
    "../../../Common/MyCom.h"
    "../../../Common/MyException.h"
    "../../../Common/MyGuidDef.h"
    "../../../Common/MyInitGuid.h"
    "../../../Common/MyString.cpp"
    "../../../Common/MyString.h"
    "../../../Common/MyTypes.h"
    "../../../Common/MyUnknown.h"
    "../../../Common/MyVector.cpp"
    "../../../Common/MyVector.h"
    "../../../Common/MyWindows.cpp"
    "../../../Common/MyWindows.h"
    "../../../Common/NewHandler.cpp"
    "../../../Common/NewHandler.h"
    "../../../Common/Sha256Prepare.cpp"
    "../../../Common/Sha256Reg.cpp"
    "../../../Common/StdInStream.cpp"
    "../../../Common/StdInStream.h"
    "../../../Common/StdOutStream.cpp"
    "../../../Common/StdOutStream.h"
    "../../../Common/StringConvert.cpp"
    "../../../Common/StringConvert.h"
    "../../../Common/StringToInt.cpp"
    "../../../Common/StringToInt.h"
    #"../../../Common/Types.h"
    "../../../Common/UTFConvert.cpp"
    "../../../Common/UTFConvert.h"
    "../../../Common/Wildcard.cpp"
    "../../../Common/Wildcard.h"
    "../../../Common/XzCrc64Init.cpp"
    "../../../Common/XzCrc64Reg.cpp"
)
source_group("Common" FILES ${Common})

set(Compress
    "../../Compress/Bcj2Coder.cpp"
    "../../Compress/Bcj2Coder.h"
    "../../Compress/Bcj2Register.cpp"
    "../../Compress/BcjCoder.cpp"
    "../../Compress/BcjCoder.h"
    "../../Compress/BcjRegister.cpp"
    "../../Compress/BranchMisc.cpp"
    "../../Compress/BranchMisc.h"
    "../../Compress/BranchRegister.cpp"
    "../../Compress/ByteSwap.cpp"
    "../../Compress/CopyCoder.cpp"
    "../../Compress/CopyCoder.h"
    "../../Compress/CopyRegister.cpp"
    "../../Compress/DeltaFilter.cpp"
    "../../Compress/Lzma2Decoder.cpp"
    "../../Compress/Lzma2Decoder.h"
    "../../Compress/Lzma2Encoder.cpp"
    "../../Compress/Lzma2Encoder.h"
    "../../Compress/Lzma2Register.cpp"
    "../../Compress/LzmaDecoder.cpp"
    "../../Compress/LzmaDecoder.h"
    "../../Compress/LzmaEncoder.cpp"
    "../../Compress/LzmaEncoder.h"
    "../../Compress/LzmaRegister.cpp"
    "../../Compress/XzDecoder.cpp"
    "../../Compress/XzDecoder.h"
    "../../Compress/XzEncoder.cpp"
    "../../Compress/XzEncoder.h"
)
source_group("Compress" FILES ${Compress})

set(Console
    "../../UI/Console/BenchCon.cpp"
    "../../UI/Console/BenchCon.h"
    #"../../UI/Console/CompressionMode.h"
    "../../UI/Console/ConsoleClose.cpp"
    "../../UI/Console/ConsoleClose.h"
    "../../UI/Console/ExtractCallbackConsole.cpp"
    "../../UI/Console/ExtractCallbackConsole.h"
    "../../UI/Console/HashCon.cpp"
    "../../UI/Console/HashCon.h"
    "../../UI/Console/List.cpp"
    "../../UI/Console/List.h"
    "../../UI/Console/Main.cpp"
    "../../UI/Console/MainAr.cpp"
    "../../UI/Console/OpenCallbackConsole.cpp"
    "../../UI/Console/OpenCallbackConsole.h"
    "../../UI/Console/PercentPrinter.cpp"
    "../../UI/Console/PercentPrinter.h"
    "../../UI/Console/UpdateCallbackConsole.cpp"
    "../../UI/Console/UpdateCallbackConsole.h"
    "../../UI/Console/UserInputUtils.cpp"
    "../../UI/Console/UserInputUtils.h"
)
source_group("Console" FILES ${Console})

set(Crypto
    "../../Crypto/7zAes.cpp"
    "../../Crypto/7zAes.h"
    "../../Crypto/7zAesRegister.cpp"
    "../../Crypto/MyAes.cpp"
    "../../Crypto/MyAes.h"
    "../../Crypto/MyAesReg.cpp"
    "../../Crypto/RandGen.cpp"
    "../../Crypto/RandGen.h"
)
source_group("Crypto" FILES ${Crypto})

set(Spec
    "StdAfx.cpp"
    "StdAfx.h"
)
source_group("Spec" FILES ${Spec})

set(UI_Common
    "../../UI/Common/ArchiveCommandLine.cpp"
    "../../UI/Common/ArchiveCommandLine.h"
    "../../UI/Common/ArchiveExtractCallback.cpp"
    "../../UI/Common/ArchiveExtractCallback.h"
    "../../UI/Common/ArchiveOpenCallback.cpp"
    "../../UI/Common/ArchiveOpenCallback.h"
    "../../UI/Common/Bench.cpp"
    "../../UI/Common/Bench.h"
    "../../UI/Common/DefaultName.cpp"
    "../../UI/Common/DefaultName.h"
    "../../UI/Common/EnumDirItems.cpp"
    "../../UI/Common/EnumDirItems.h"
    "../../UI/Common/ExitCode.h"
    "../../UI/Common/Extract.cpp"
    "../../UI/Common/Extract.h"
    "../../UI/Common/ExtractingFilePath.cpp"
    "../../UI/Common/ExtractingFilePath.h"
    "../../UI/Common/HashCalc.cpp"
    "../../UI/Common/HashCalc.h"
    "../../UI/Common/LoadCodecs.cpp"
    "../../UI/Common/LoadCodecs.h"
    "../../UI/Common/OpenArchive.cpp"
    "../../UI/Common/OpenArchive.h"
    "../../UI/Common/Property.h"
    "../../UI/Common/PropIDUtils.cpp"
    "../../UI/Common/PropIDUtils.h"
    "../../UI/Common/SetProperties.cpp"
    "../../UI/Common/SetProperties.h"
    "../../UI/Common/SortUtils.cpp"
    "../../UI/Common/SortUtils.h"
    "../../UI/Common/TempFiles.cpp"
    "../../UI/Common/TempFiles.h"
    "../../UI/Common/Update.cpp"
    "../../UI/Common/Update.h"
    "../../UI/Common/UpdateAction.cpp"
    "../../UI/Common/UpdateAction.h"
    "../../UI/Common/UpdateCallback.cpp"
    "../../UI/Common/UpdateCallback.h"
    "../../UI/Common/UpdatePair.cpp"
    "../../UI/Common/UpdatePair.h"
    "../../UI/Common/UpdateProduce.cpp"
    "../../UI/Common/UpdateProduce.h"
)
source_group("UI Common" FILES ${UI_Common})

set(Windows
    "../../../Windows/Defs.h"
    #"../../../Windows/Device.h"
    "../../../Windows/DLL.cpp"
    "../../../Windows/DLL.h"
    "../../../Windows/ErrorMsg.cpp"
    "../../../Windows/ErrorMsg.h"
    "../../../Windows/FileDir.cpp"
    "../../../Windows/FileDir.h"
    "../../../Windows/FileFind.cpp"
    "../../../Windows/FileFind.h"
    "../../../Windows/FileIO.cpp"
    "../../../Windows/FileIO.h"
    "../../../Windows/FileLink.cpp"
    "../../../Windows/FileMapping.h"
    "../../../Windows/FileName.cpp"
    "../../../Windows/FileName.h"
    "../../../Windows/FileSystem.cpp"
    "../../../Windows/FileSystem.h"
    "../../../Windows/Handle.h"
    "../../../Windows/MemoryLock.cpp"
    "../../../Windows/MemoryLock.h"
    "../../../Windows/NtCheck.h"
    "../../../Windows/PropVariant.cpp"
    "../../../Windows/PropVariant.h"
    "../../../Windows/PropVariantConv.cpp"
    "../../../Windows/PropVariantConv.h"
    "../../../Windows/Registry.cpp"
    "../../../Windows/Registry.h"
    "../../../Windows/Synchronization.h"
    "../../../Windows/System.cpp"
    "../../../Windows/System.h"
    "../../../Windows/SystemInfo.cpp"
    "../../../Windows/SystemInfo.h"
    "../../../Windows/Thread.h"
    "../../../Windows/TimeUtils.cpp"
    "../../../Windows/TimeUtils.h"
)
source_group("Windows" FILES ${Windows})

set(ALL_FILES
    ${7-zip}
    ${7zip_Common}
    ${Archive}
    ${Archive__7z}
    ${Archive__Archive_Common}
    ${C}
    ${C__Xz}
    ${Common}
    ${Compress}
    ${Console}
    ${Crypto}
    ${Spec}
    ${UI_Common}
    ${Windows}
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
set(7-zip
    "../../ICoder.h"
    "../../IDecl.h"
    "../../IPassword.h"
    "../../IProgress.h"
    "../../IStream.h"
    "../../PropID.h"
)
source_group("7-zip" FILES ${7-zip})

set(7zip_Common
    "../../Common/CreateCoder.cpp"
    "../../Common/CreateCoder.h"
    "../../Common/CWrappers.cpp"
    "../../Common/CWrappers.h"
    "../../Common/FilePathAutoRename.cpp"
    "../../Common/FilePathAutoRename.h"
    "../../Common/FileStreams.cpp"
    "../../Common/FileStreams.h"
    "../../Common/FilterCoder.cpp"
    "../../Common/FilterCoder.h"
    "../../Common/InBuffer.cpp"
    "../../Common/InBuffer.h"
    "../../Common/InOutTempBuffer.cpp"
    "../../Common/InOutTempBuffer.h"
    "../../Common/LimitedStreams.cpp"
    "../../Common/LimitedStreams.h"
    "../../Common/LockedStream.cpp"
    "../../Common/LockedStream.h"
    "../../Common/MethodId.cpp"
    "../../Common/MethodId.h"
    "../../Common/MethodProps.cpp"
    "../../Common/MethodProps.h"
    "../../Common/MultiOutStream.cpp"
    "../../Common/MultiOutStream.h"
    "../../Common/OffsetStream.cpp"
    "../../Common/OffsetStream.h"
    "../../Common/OutBuffer.cpp"
    "../../Common/OutBuffer.h"
    "../../Common/ProgressUtils.cpp"
    "../../Common/ProgressUtils.h"
    "../../Common/PropId.cpp"
    "../../Common/RegisterArc.h"
    "../../Common/RegisterCodec.h"
    "../../Common/StreamBinder.cpp"
    "../../Common/StreamBinder.h"
    "../../Common/StreamObjects.cpp"
    "../../Common/StreamObjects.h"
    "../../Common/StreamUtils.cpp"
    "../../Common/StreamUtils.h"
    "../../Common/UniqBlocks.cpp"
    "../../Common/UniqBlocks.h"
    "../../Common/VirtThread.cpp"
    "../../Common/VirtThread.h"
)
source_group("7zip Common" FILES ${7zip_Common})

set(Archive
    "../../Archive/IArchive.h"
    "../../Archive/LzmaHandler.cpp"
    "../../Archive/SplitHandler.cpp"
    "../../Archive/XzHandler.cpp"
)
source_group("Archive" FILES ${Archive})

set(Archive__7z
    "../../Archive/7z/7zCompressionMode.cpp"
    "../../Archive/7z/7zCompressionMode.h"
    "../../Archive/7z/7zDecode.cpp"
    "../../Archive/7z/7zDecode.h"
    "../../Archive/7z/7zEncode.cpp"
    "../../Archive/7z/7zEncode.h"
    "../../Archive/7z/7zExtract.cpp"
    "../../Archive/7z/7zFolderInStream.cpp"
    "../../Archive/7z/7zFolderInStream.h"
    "../../Archive/7z/7zHandler.cpp"
    "../../Archive/7z/7zHandler.h"
    "../../Archive/7z/7zHandlerOut.cpp"
    "../../Archive/7z/7zHeader.cpp"
    "../../Archive/7z/7zHeader.h"
    "../../Archive/7z/7zIn.cpp"
    "../../Archive/7z/7zIn.h"
    "../../Archive/7z/7zItem.h"
    "../../Archive/7z/7zOut.cpp"
    "../../Archive/7z/7zOut.h"
    "../../Archive/7z/7zProperties.cpp"
    "../../Archive/7z/7zProperties.h"
    "../../Archive/7z/7zRegister.cpp"
    "../../Archive/7z/7zSpecStream.cpp"
    "../../Archive/7z/7zSpecStream.h"
    "../../Archive/7z/7zUpdate.cpp"
    "../../Archive/7z/7zUpdate.h"
)
source_group("Archive\\7z" FILES ${Archive__7z})

set(Archive__Archive_Common
    "../../Archive/Common/CoderMixer2.cpp"
    "../../Archive/Common/CoderMixer2.h"
    "../../Archive/Common/DummyOutStream.cpp"
    "../../Archive/Common/DummyOutStream.h"
    "../../Archive/Common/HandlerOut.cpp"
    "../../Archive/Common/HandlerOut.h"
    "../../Archive/Common/InStreamWithCRC.cpp"
    "../../Archive/Common/InStreamWithCRC.h"
    "../../Archive/Common/ItemNameUtils.cpp"
    "../../Archive/Common/ItemNameUtils.h"
    "../../Archive/Common/MultiStream.cpp"
    "../../Archive/Common/MultiStream.h"
    "../../Archive/Common/OutStreamWithCRC.cpp"
    "../../Archive/Common/OutStreamWithCRC.h"
    "../../Archive/Common/ParseProperties.cpp"
    "../../Archive/Common/ParseProperties.h"
)
source_group("Archive\\Archive Common" FILES ${Archive__Archive_Common})

set(C
    "../../../../C/7zCrc.c"
    "../../../../C/7zCrc.h"
    "../../../../C/7zCrcOpt.c"
    "../../../../C/7zStream.c"
    "../../../../C/7zTypes.h"
    "../../../../C/7zWindows.h"
    "../../../../C/Aes.c"
    "../../../../C/Aes.h"
    "../../../../C/AesOpt.c"
    "../../../../C/Alloc.c"
    "../../../../C/Alloc.h"
    "../../../../C/Bcj2.c"
    "../../../../C/Bcj2.h"
    "../../../../C/Bcj2Enc.c"
    "../../../../C/Bra.c"
    "../../../../C/Bra.h"
    "../../../../C/Bra86.c"
    "../../../../C/BraIA64.c"
    "../../../../C/Compiler.h"
    #"../../../../C/Compress/Lz/LzHash.h"
    "../../../../C/CpuArch.c"
    "../../../../C/CpuArch.h"
    "../../../../C/Delta.c"
    "../../../../C/Delta.h"
    "../../../../C/DllSecur.c"
    "../../../../C/DllSecur.h"
    #"../../../../C/IStream.h"
    "../../../../C/LzFind.c"
    "../../../../C/LzFind.h"
    "../../../../C/LzFindMt.c"
    "../../../../C/LzFindMt.h"
    "../../../../C/LzFindOpt.c"
    "../../../../C/LzHash.h"
    "../../../../C/Lzma2Dec.c"
    "../../../../C/Lzma2Dec.h"
    "../../../../C/Lzma2DecMt.c"
    "../../../../C/Lzma2DecMt.h"
    "../../../../C/Lzma2Enc.c"
    "../../../../C/Lzma2Enc.h"
    "../../../../C/LzmaDec.c"
    "../../../../C/LzmaDec.h"
    "../../../../C/LzmaEnc.c"
    "../../../../C/LzmaEnc.h"
    "../../../../C/MtCoder.c"
    "../../../../C/MtCoder.h"
    "../../../../C/MtDec.c"
    "../../../../C/MtDec.h"
    "../../../../C/RotateDefs.h"
    "../../../../C/Sha256.c"
    "../../../../C/Sha256.h"
    "../../../../C/Sha256Opt.c"
    "../../../../C/SwapBytes.c"
    "../../../../C/SwapBytes.h"
    "../../../../C/Threads.c"
    "../../../../C/Threads.h"
)
source_group("C" FILES ${C})

set(C__Xz
    "../../../../C/Xz.c"
    "../../../../C/Xz.h"
    "../../../../C/XzCrc64.c"
    "../../../../C/XzCrc64.h"
    "../../../../C/XzCrc64Opt.c"
    "../../../../C/XzDec.c"
    "../../../../C/XzEnc.c"
    "../../../../C/XzEnc.h"
    "../../../../C/XzIn.c"
)
source_group("C\\Xz" FILES ${C__Xz})

set(Common
    "../../../Common/AutoPtr.h"
    #"../../../Common/Buffer.h"
    "../../../Common/CommandLineParser.cpp"
    "../../../Common/CommandLineParser.h"
    "../../../Common/Common.h"
    "../../../Common/ComTry.h"
    "../../../Common/CRC.cpp"
    "../../../Common/CrcReg.cpp"
    "../../../Common/Defs.h"
    "../../../Common/DynamicBuffer.h"
    "../../../Common/DynLimBuf.cpp"
    "../../../Common/DynLimBuf.h"
    "../../../Common/IntToString.cpp"
    "../../../Common/IntToString.h"
    "../../../Common/ListFileUtils.cpp"
    "../../../Common/ListFileUtils.h"
    "../../../Common/LzFindPrepare.cpp"
    "../../../Common/MyBuffer.h"
    "../../../Common/MyBuffer2.h"
    "../../../Common/MyCom.h"
    "../../../Common/MyException.h"
    "../../../Common/MyGuidDef.h"
    "../../../Common/MyInitGuid.h"
    "../../../Common/MyString.cpp"
    "../../../Common/MyString.h"
    "../../../Common/MyTypes.h"
    "../../../Common/MyUnknown.h"
    "../../../Common/MyVector.cpp"
    "../../../Common/MyVector.h"
    "../../../Common/MyWindows.cpp"
    "../../../Common/MyWindows.h"
    "../../../Common/NewHandler.cpp"
    "../../../Common/NewHandler.h"
    "../../../Common/Sha256Prepare.cpp"
    "../../../Common/Sha256Reg.cpp"
    "../../../Common/StdInStream.cpp"
    "../../../Common/StdInStream.h"
    "../../../Common/StdOutStream.cpp"
    "../../../Common/StdOutStream.h"
    "../../../Common/StringConvert.cpp"
    "../../../Common/StringConvert.h"
    "../../../Common/StringToInt.cpp"
    "../../../Common/StringToInt.h"
    #"../../../Common/Types.h"
    "../../../Common/UTFConvert.cpp"
    "../../../Common/UTFConvert.h"
    "../../../Common/Wildcard.cpp"
    "../../../Common/Wildcard.h"
    "../../../Common/XzCrc64Init.cpp"
    "../../../Common/XzCrc64Reg.cpp"
)
source_group("Common" FILES ${Common})

set(Compress
    "../../Compress/Bcj2Coder.cpp"
    "../../Compress/Bcj2Coder.h"
    "../../Compress/Bcj2Register.cpp"
    "../../Compress/BcjCoder.cpp"
    "../../Compress/BcjCoder.h"
    "../../Compress/BcjRegister.cpp"
    "../../Compress/BranchMisc.cpp"
    "../../Compress/BranchMisc.h"
    "../../Compress/BranchRegister.cpp"
    "../../Compress/ByteSwap.cpp"
    "../../Compress/CopyCoder.cpp"
    "../../Compress/CopyCoder.h"
    "../../Compress/CopyRegister.cpp"
    "../../Compress/DeltaFilter.cpp"
    "../../Compress/Lzma2Decoder.cpp"
    "../../Compress/Lzma2Decoder.h"
    "../../Compress/Lzma2Encoder.cpp"
    "../../Compress/Lzma2Encoder.h"
    "../../Compress/Lzma2Register.cpp"
    "../../Compress/LzmaDecoder.cpp"
    "../../Compress/LzmaDecoder.h"
    "../../Compress/LzmaEncoder.cpp"
    "../../Compress/LzmaEncoder.h"
    "../../Compress/LzmaRegister.cpp"
    "../../Compress/XzDecoder.cpp"
    "../../Compress/XzDecoder.h"
    "../../Compress/XzEncoder.cpp"
    "../../Compress/XzEncoder.h"
)
source_group("Compress" FILES ${Compress})

set(Console
    "../../UI/Console/BenchCon.cpp"
    "../../UI/Console/BenchCon.h"
    #"../../UI/Console/CompressionMode.h"
    "../../UI/Console/ConsoleClose.cpp"
    "../../UI/Console/ConsoleClose.h"
    "../../UI/Console/ExtractCallbackConsole.cpp"
    "../../UI/Console/ExtractCallbackConsole.h"
    "../../UI/Console/HashCon.cpp"
    "../../UI/Console/HashCon.h"
    "../../UI/Console/List.cpp"
    "../../UI/Console/List.h"
    "../../UI/Console/Main.cpp"
    "../../UI/Console/MainAr.cpp"
    "../../UI/Console/OpenCallbackConsole.cpp"
    "../../UI/Console/OpenCallbackConsole.h"
    "../../UI/Console/PercentPrinter.cpp"
    "../../UI/Console/PercentPrinter.h"
    "../../UI/Console/UpdateCallbackConsole.cpp"
    "../../UI/Console/UpdateCallbackConsole.h"
    "../../UI/Console/UserInputUtils.cpp"
    "../../UI/Console/UserInputUtils.h"
)
source_group("Console" FILES ${Console})

set(Crypto
    "../../Crypto/7zAes.cpp"
    "../../Crypto/7zAes.h"
    "../../Crypto/7zAesRegister.cpp"
    "../../Crypto/MyAes.cpp"
    "../../Crypto/MyAes.h"
    "../../Crypto/MyAesReg.cpp"
    "../../Crypto/RandGen.cpp"
    "../../Crypto/RandGen.h"
)
source_group("Crypto" FILES ${Crypto})

set(Spec
    "StdAfx.cpp"
    "StdAfx.h"
)
source_group("Spec" FILES ${Spec})

set(UI_Common
    "../../UI/Common/ArchiveCommandLine.cpp"
    "../../UI/Common/ArchiveCommandLine.h"
    "../../UI/Common/ArchiveExtractCallback.cpp"
    "../../UI/Common/ArchiveExtractCallback.h"
    "../../UI/Common/ArchiveOpenCallback.cpp"
    "../../UI/Common/ArchiveOpenCallback.h"
    "../../UI/Common/Bench.cpp"
    "../../UI/Common/Bench.h"
    "../../UI/Common/DefaultName.cpp"
    "../../UI/Common/DefaultName.h"
    "../../UI/Common/EnumDirItems.cpp"
    "../../UI/Common/EnumDirItems.h"
    "../../UI/Common/ExitCode.h"
    "../../UI/Common/Extract.cpp"
    "../../UI/Common/Extract.h"
    "../../UI/Common/ExtractingFilePath.cpp"
    "../../UI/Common/ExtractingFilePath.h"
    "../../UI/Common/HashCalc.cpp"
    "../../UI/Common/HashCalc.h"
    "../../UI/Common/LoadCodecs.cpp"
    "../../UI/Common/LoadCodecs.h"
    "../../UI/Common/OpenArchive.cpp"
    "../../UI/Common/OpenArchive.h"
    "../../UI/Common/Property.h"
    "../../UI/Common/PropIDUtils.cpp"
    "../../UI/Common/PropIDUtils.h"
    "../../UI/Common/SetProperties.cpp"
    "../../UI/Common/SetProperties.h"
    "../../UI/Common/SortUtils.cpp"
    "../../UI/Common/SortUtils.h"
    "../../UI/Common/TempFiles.cpp"
    "../../UI/Common/TempFiles.h"
    "../../UI/Common/Update.cpp"
    "../../UI/Common/Update.h"
    "../../UI/Common/UpdateAction.cpp"
    "../../UI/Common/UpdateAction.h"
    "../../UI/Common/UpdateCallback.cpp"
    "../../UI/Common/UpdateCallback.h"
    "../../UI/Common/UpdatePair.cpp"
    "../../UI/Common/UpdatePair.h"
    "../../UI/Common/UpdateProduce.cpp"
    "../../UI/Common/UpdateProduce.h"
)
source_group("UI Common" FILES ${UI_Common})

set(Windows
    "../../../Windows/Defs.h"
    #"../../../Windows/Device.h"
    "../../../Windows/DLL.cpp"
    "../../../Windows/DLL.h"
    "../../../Windows/ErrorMsg.cpp"
    "../../../Windows/ErrorMsg.h"
    "../../../Windows/FileDir.cpp"
    "../../../Windows/FileDir.h"
    "../../../Windows/FileFind.cpp"
    "../../../Windows/FileFind.h"
    "../../../Windows/FileIO.cpp"
    "../../../Windows/FileIO.h"
    "../../../Windows/FileLink.cpp"
    "../../../Windows/FileMapping.h"
    "../../../Windows/FileName.cpp"
    "../../../Windows/FileName.h"
    "../../../Windows/FileSystem.cpp"
    "../../../Windows/FileSystem.h"
    "../../../Windows/Handle.h"
    "../../../Windows/MemoryLock.cpp"
    "../../../Windows/MemoryLock.h"
    "../../../Windows/NtCheck.h"
    "../../../Windows/PropVariant.cpp"
    "../../../Windows/PropVariant.h"
    "../../../Windows/PropVariantConv.cpp"
    "../../../Windows/PropVariantConv.h"
    "../../../Windows/Registry.cpp"
    "../../../Windows/Registry.h"
    "../../../Windows/Synchronization.h"
    "../../../Windows/System.cpp"
    "../../../Windows/System.h"
    "../../../Windows/SystemInfo.cpp"
    "../../../Windows/SystemInfo.h"
    "../../../Windows/Thread.h"
    "../../../Windows/TimeUtils.cpp"
    "../../../Windows/TimeUtils.h"
)
source_group("Windows" FILES ${Windows})

set(ALL_FILES
    ${7-zip}
    ${7zip_Common}
    ${Archive}
    ${Archive__7z}
    ${Archive__Archive_Common}
    ${C}
    ${C__Xz}
    ${Common}
    ${Compress}
    ${Console}
    ${Crypto}
    ${Spec}
    ${UI_Common}
    ${Windows}
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

