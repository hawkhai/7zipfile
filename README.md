## 7zipfile

**通常使用 7-Zip 的固实压缩 7z 格式能比使用 zip 格式的压缩档案小 30-70%。**
**并且使用 7-Zip 创建的 zip 格式比大多数其它压缩软件创建的都小 2-10%。**

为了方便集成，不用再捣鼓 7z 源码：
**自己编译 7zr.exe 用于压缩。**
**客户端集成 7z.dll / 7z.lib 用于解压。**

4. CPP 文件夹下的 client7z.exe，依赖 DLL，需要加入 7z.dll，没用上。
    * 7zipfile\lzma2301\CPP\7zip\UI\Client7z\Client7z.dsw
5. CPP 文件夹下的 LzmaCom 工程，编译出来是 lzma.exe，支持压缩、解压，只能是单文件对单文件的，适用于程序内部使用的：
    使用 lzma.exe 压缩出来的文件，无法使用 7z.exe 打开，7z.exe 压缩的单个文件，也无法使用 lzma.exe 做解压。像 7lzma.exe。
    * 7zipfile\lzma2301\CPP\7zip\Bundles\LzmaCon\LzmaCon.dsw
6. CPP 文件夹下的 Alone 工程，编译出来是 7zr.exe。可以用于压缩、解压：LZMA\BCJ\BCJ2 压缩算法。
    设置压缩算法的参数为 `-m` ，如 `-m0=BCJ2` 。这个 7zr.exe 号称 7z.exe 的精简版。
    * 7zipfile\lzma2301\CPP\7zip\Bundles\Alone7z\Alone.dsw

稍微参考了一下这两个源码：
[将 7z 解压功能以 lib 的方式集成到工程中](https://blog.csdn.net/Vincent95/article/details/73835385/)
[解压 7z 文件 windows 代码](https://blog.csdn.net/azymq/article/details/8814281)
虽然这两个源码里面存在严重的 bug。


## 改造

下载 最新的 7z sdk <https://sparanoid.com/lab/7z/>。
下载 7-Zip 23.01 稳定版适用于 Windows 操作系统（ **2023-06-30** ）。

* 7zipfile\src\7ziptest.sln
* 7zipfile\src\7ziptest_md.sln


## 编译结果

头文件：
`7zipfile\include\Extract7z.h`

如果是 dll 集成，只需要 头文件， **不需要 lib 文件** ；如果是 lib 静态集成，则须要静态 lib 文件。


### mt version

1. `7zipfile\bin\win32-dll\` MT 编译的 dll，结合头文件可以直接使用， **不需要 lib 文件** 。
    * 7zipfile\bin\win32-dll\7z.dll
    * 7zipfile\bin\win32-dll\7zd.dll
    * 7zipfile\bin\win32-dll\7zr.exe -- 用于压缩的 exe。
    * 7zipfile\bin\win32-dll\7zrd.exe
2. `7zipfile\bin\win32-lib\` MT 编译的 lib，结合头文件可以直接使用。
    * 7zipfile\bin\win32-lib\7zmt.lib
    * 7zipfile\bin\win32-lib\7zmtd.lib
3. `7zipfile\bin\win64-dll\` 同上，x64 mt dll 版本。
    * 7zipfile\bin\win64-dll\7z64.dll
    * 7zipfile\bin\win64-dll\7z64d.dll
4. `7zipfile\bin\win64-lib\` 同上，x64 mt lib 版本。
    * 7zipfile\bin\win64-lib\7z64mt.lib
    * 7zipfile\bin\win64-lib\7z64mtd.lib


### md version

5. `7zipfile\bin\md\win32-dll\` MD 编译的 dll，结合头文件可以直接使用， **不需要 lib 文件** 。
    * 7zipfile\bin\md\win32-dll\7z.dll
    * 7zipfile\bin\md\win32-dll\7zd.dll
    * 7zipfile\bin\md\win32-dll\7zr.exe -- 用于压缩的 exe。
    * 7zipfile\bin\md\win32-dll\7zrd.exe
6. `7zipfile\bin\md\win32-lib\` MD 编译的 lib，结合头文件可以直接使用。
    * 7zipfile\bin\md\win32-lib\7zmd.lib
    * 7zipfile\bin\md\win32-lib\7zmdd.lib
7. `7zipfile\bin\md\win64-dll\` 同上，x64 md dll 版本。
    * 7zipfile\bin\md\win64-dll\7z64.dll
    * 7zipfile\bin\md\win64-dll\7z64d.dll
8. `7zipfile\bin\md\win64-lib\` 同上，x64 md lib 版本。
    * 7zipfile\bin\md\win64-lib\7z64md.lib
    * 7zipfile\bin\md\win64-lib\7z64mdd.lib


## 示例

`src/7ziptest/7ziptest.cpp`

```cpp
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
```


## 压缩命令行

* 将 lzma2301 目录压缩到 lzma2301.7z
    * `7zr.exe a lzma2301.7z lzma2301 -ms=on -bd -y`
    * `7zr.exe a lzma2301.7z lzma2301 -ms=on -mx=9 -bd -y`
        * `a` 表示压缩。
        * `lzma2301.7z` 目标的 7z 文件。
        * `lzma2301` 须要被压缩的文件夹。
        * `-ms=on` 采用固实压缩。
        * `-mx=9` 压缩率调整到最高。
        * `-bd` 禁用进度指示器。
        * `-y` 假设所有查询都是。
* 将 lzma2301.7z 解压到 tempz 目录
    * `7zr.exe x lzma2301.7z -o.\tempz -bd -y`
* 解压并覆盖已有，到 tempz 目录
    * `7zr.exe x lzma2301.7z -o.\tempz -aoa -bd -y`
        * `x` 表示解压。
        * `lzma2301.7z` 源 7z 文件。
        * `-o.\tempz` 解压到文件夹 `.\tempz` 。
        * `-aoa` 如果文件存在，直接覆盖。
        * `-bd` 禁用进度指示器。
        * `-y` 假设所有查询都是。

[7z 常用压缩与解压缩命令](http://www.taodudu.cc/news/show-3157525.html)
[压缩命令行](https://blog.csdn.net/feiyuwangluo/article/details/125681567)
