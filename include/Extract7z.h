#pragma once

#ifdef Z7_DLL_EXPOTS
#define Z7DLLEXPORT __declspec(dllexport)
#else
#define Z7DLLEXPORT __declspec(dllimport)
#endif

// 从 7z 里面拷贝出来的。
#define SZ_OK 0

#define SZ_ERROR_DATA 1
#define SZ_ERROR_MEM 2
#define SZ_ERROR_CRC 3
#define SZ_ERROR_UNSUPPORTED 4
#define SZ_ERROR_PARAM 5
#define SZ_ERROR_INPUT_EOF 6
#define SZ_ERROR_OUTPUT_EOF 7
#define SZ_ERROR_READ 8
#define SZ_ERROR_WRITE 9
#define SZ_ERROR_PROGRESS 10
#define SZ_ERROR_FAIL 11
#define SZ_ERROR_THREAD 12

#define SZ_ERROR_ARCHIVE 16
#define SZ_ERROR_NO_ARCHIVE 17

#ifdef __cplusplus
extern "C" {
#endif

    /*
        pSrcFile : .7z文件名（可包含路径）
        pDstPath : 解压至目标文件夹（必须用绝对路径，目录必须存在，如果为空，直接解压到当前目录）
    */
    int Z7DLLEXPORT Extract7z(wchar_t* pSrcFile, wchar_t* pDstPath);

    int Z7DLLEXPORT SetLogPrint(BOOL value);

#ifdef __cplusplus
}
#endif
