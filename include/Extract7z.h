#pragma once

#ifdef Z7_DLL_EXPOTS
#define Z7DLLEXPORT __declspec(dllexport)
#else
#define Z7DLLEXPORT __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

    /*
        pSrcFile : .7z文件名（可包含路径）
        pDstPath : 解压至目标文件夹（必须用绝对路径，目录必须存在，如果为空，直接解压到当前目录）
    */
    int Z7DLLEXPORT Extract7z(wchar_t* pSrcFile, wchar_t* pDstPath);

#ifdef __cplusplus
}
#endif
