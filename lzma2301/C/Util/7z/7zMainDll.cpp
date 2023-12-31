//#include "Precomp.h"
#include "../../../../include/Extract7z.h"

class KDllInstance : public IZ7DllInterface {
public:
    virtual int Version() override {
        return Z7DLL_VERSION;
    }
    virtual int Release() override {
        delete this;
        return 0;
    }
    virtual int Extract7z(const wchar_t* pSrcFile, const wchar_t* pDstPath) {
        return ::Extract7z(pSrcFile, pDstPath);
    }
    virtual int SetLogPrint(BOOL value) {
        return ::SetLogPrint(value);
    }
};

IZ7DllInterface* CreateEntry7z() {
    return new KDllInstance();
}
