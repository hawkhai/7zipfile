#pragma once
#include <assert.h>
#include <windows.h>

#ifdef Z7_DLL_EXPOTS
#define Z7DLLEXPORT __declspec(dllexport)
#else
#define Z7DLLEXPORT __declspec(dllimport)
#endif

#define Z7DLL_VERSION 1

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

#include <string>

__interface IZ7DllInterface {
    virtual int Version() = 0;
    virtual int Release() = 0;
    virtual int Extract7z(const wchar_t* pSrcFile, const wchar_t* pDstPath) = 0;
    virtual int SetLogPrint(BOOL value) = 0;
};

extern "C" Z7DLLEXPORT IZ7DllInterface* CreateEntry();

class KZ7DllWrap : public IZ7DllInterface {

    static std::wstring getCurrentDir() {
        wchar_t tpath[MAX_PATH] = { 0 };
        DWORD dwRet = GetModuleFileNameW(NULL, tpath, MAX_PATH);
        if (dwRet == 0) {
            return L".\\";
        }
        std::wstring strexe = tpath;
        int index = strexe.rfind(L'\\');
        if (index <= 0) {
            return L".\\";
        }
        return strexe.substr(0, index + 1);
}
    static HINSTANCE loadLibrary(const wchar_t* libPath) {
        std::wstring curdir = getCurrentDir();
        if (curdir.empty()) {
            return NULL;
        }

        std::wstring current = curdir;
        current.append(libPath);

        wchar_t lpBuffer[MAX_PATH];
        GetCurrentDirectory(MAX_PATH, lpBuffer);
        SetCurrentDirectory(curdir.c_str());
        HINSTANCE hDLL = LoadLibrary(current.c_str());
        SetCurrentDirectory(lpBuffer);

        if (hDLL == NULL) {
            int err = GetLastError();
            err;
            assert(false);
            return NULL;
        }
        return hDLL;
    }

public:
    virtual int Version() override {
        if (!m_interface) {
            return -1;
        }
        return m_interface->Version();
    }

    virtual int Release() override {
        if (!m_interface) {
            return -1;
        }
        auto retv = m_interface->Release();
        m_interface = nullptr;
        return retv;
    }

    virtual int Extract7z(const wchar_t* pSrcFile, const wchar_t* pDstPath) override {
        if (!m_interface) {
            return SZ_ERROR_FAIL;
        }
        return m_interface->Extract7z(pSrcFile, pDstPath);
    }

    virtual int SetLogPrint(BOOL value) override {
        if (!m_interface) {
            return SZ_ERROR_FAIL;
        }
        return m_interface->SetLogPrint(value);
    }

    KZ7DllWrap() {
#if defined __amd64__ || defined __x86_64__ || defined _WIN64 || defined _M_X64
#ifdef _DEBUG
        const TCHAR* libPath = L"7z64d.dll";
#else
        const TCHAR* libPath = L"7z64.dll";
#endif
#else
#ifdef _DEBUG
        const TCHAR* libPath = L"7zd.dll";
#else
        const TCHAR* libPath = L"7z.dll";
#endif
#endif

        m_hDLL = loadLibrary(libPath);
        if (m_hDLL == nullptr) {
            int err = GetLastError();
            err;
            assert(false);
            return;
        }

        typedef IZ7DllInterface* (*CreateEntryFunc)();
        CreateEntryFunc fptr = (CreateEntryFunc)GetProcAddress(m_hDLL, "CreateEntry");
        if (fptr == nullptr) {
            int err = GetLastError();
            err;
            assert(false);
            return;
        }
        m_interface = fptr();
        if (m_interface->Version() < Z7DLL_VERSION) {
            m_interface->Release();
            m_interface = nullptr;
            assert(false);
        }
    }
    virtual ~KZ7DllWrap() {
        if (!m_interface) {
            return;
        }
        m_interface->Release();
        m_interface = nullptr;
        // m_hDLL 不释放了。
    }

private:
    IZ7DllInterface* m_interface = nullptr;
    HINSTANCE m_hDLL = nullptr;
};

#endif

#ifdef __cplusplus
extern "C" {
#endif

    /*
        pSrcFile : .7z文件名（可包含路径）
        pDstPath : 解压至目标文件夹（必须用绝对路径，目录必须存在，如果为空，直接解压到当前目录）
    */
    int Z7DLLEXPORT Extract7z(const wchar_t* pSrcFile, const wchar_t* pDstPath);

    int Z7DLLEXPORT SetLogPrint(BOOL value);

#ifdef __cplusplus
}
#endif
