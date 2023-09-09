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
        pSrcFile : .7z�ļ������ɰ���·����
        pDstPath : ��ѹ��Ŀ���ļ��У������þ���·����Ŀ¼������ڣ����Ϊ�գ�ֱ�ӽ�ѹ����ǰĿ¼��
    */
    int Z7DLLEXPORT Extract7z(wchar_t* pSrcFile, wchar_t* pDstPath);

#ifdef __cplusplus
}
#endif
