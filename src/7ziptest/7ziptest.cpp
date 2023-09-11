#include <iostream>
#include "../../3rdsdk/vld/include/vld.h"
//#define Z7STATIC_IMPORT
#include "../../include/Extract7z.h"

int main()
{
    KZ7DllWrap wrap;

    auto code = wrap.Extract7z(L"7zipfile.7z", L"tempdir");
    assert(code == SZ_OK);
    printf("code = %d \n", code);
    return code;
}
