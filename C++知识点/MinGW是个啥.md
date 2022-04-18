# 前言

我们日常在配置C/C++开发环境的时候经常会见到这几个字，今天开一片博文来详细介绍一下MinGW

(数据来源：维基百科、知乎)

-----------

# 正文

## 一、GCC是啥

在介绍**MinGW**之前先介绍一下**GCC**

GCC全名GNU Compiler Collection——GNU编译器套装，即一套编程语言编译器，支持[GPL](https://www.bing.com/search?q=GPL&form=ANSPH1&refig=d1c6ba4b3eef4479cbb4629d2d6e29e6&pc=U531)及[LGPL](https://www.bing.com/newtabredir?url=https%3A%2F%2Fcloud.tencent.com%2Fdeveloper%2Farticle%2F1449672)许可证。GCC的原名是，GNU C语言编译器（GNU C Compiler），因为在最开始的时候仅仅支持编译C语言，在日后的发展中逐渐可以支持C++、Fortran、Objective-C、Java，Go与其他语言

### GCC和G++的区别

gcc是GCC中的GUN C Compiler（C 编译器）

g++是GCC中的GUN C++ Compiler（C++编译器）

两者在使用过程中，对于 `.c`和`.cpp`文件，gcc分别当做c和cpp文件编译，而g++将两者都当作cpp文件进行编译。由于c语言和c++两者的语法有着细微的差别，因此gcc和g++有时候对c语言文件的运行结果是不同的。其次在使用g++编译文件时，g++会自动链接标准库[STL](http://c.biancheng.net/view/1436.html)，而gcc不会自动链接STL。gcc在编译C文件时，可使用的预定义宏是比较少的，这也是由于C++是C语言的超集，后续的扩展分支很多。

### 目前GCC支持的主流处理器架构

|       [Alpha](https://zh.wikipedia.org/wiki/DEC_Alpha)       | [MorphoSys](https://zh.wikipedia.org/w/index.php?title=MorphoSys&action=edit&redlink=1)家族 | [System/370](https://zh.wikipedia.org/w/index.php?title=System/370&action=edit&redlink=1)，[System/390](https://zh.wikipedia.org/w/index.php?title=ZSeries&action=edit&redlink=1) |
| :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: |
| [Alpha](https://zh.wikipedia.org/wiki/DEC_Alpha)[ARM](https://zh.wikipedia.org/wiki/ARM_architecture) | [Motorola 68000](https://zh.wikipedia.org/wiki/Motorola_68000) |        [SuperH](https://zh.wikipedia.org/wiki/SuperH)        |
|     [Atmel AVR](https://zh.wikipedia.org/wiki/Atmel_AVR)     | [Motorola 88000](https://zh.wikipedia.org/wiki/Motorola_88000) | [HC12](https://zh.wikipedia.org/w/index.php?title=HC12&action=edit&redlink=1) |
| [Blackfin](https://zh.wikipedia.org/w/index.php?title=Blackfin&action=edit&redlink=1) | [MIPS](https://zh.wikipedia.org/wiki/MIPS架構)与[龙芯](https://zh.wikipedia.org/wiki/龍芯) |         [SPARC](https://zh.wikipedia.org/wiki/SPARC)         |
| [H8/300](https://zh.wikipedia.org/w/index.php?title=Hitachi_H8&action=edit&redlink=1) |       [PA-RISC](https://zh.wikipedia.org/wiki/PA-RISC)       |           [VAX](https://zh.wikipedia.org/wiki/VAX)           |
| [IA-32](https://zh.wikipedia.org/wiki/IA-32)（[x86](https://zh.wikipedia.org/wiki/X86)）与[x86-64](https://zh.wikipedia.org/wiki/X86-64) |        [PDP-11](https://zh.wikipedia.org/wiki/PDP-11)        | [Renesas](https://zh.wikipedia.org/wiki/Renesas) [R8C](https://zh.wikipedia.org/w/index.php?title=R8C&action=edit&redlink=1)／[M16C](https://zh.wikipedia.org/w/index.php?title=M16C&action=edit&redlink=1)／[M32C](https://zh.wikipedia.org/w/index.php?title=M32C&action=edit&redlink=1)家族 |
| [IA-64](https://zh.wikipedia.org/wiki/IA-64)例如：[Itanium](https://zh.wikipedia.org/wiki/Itanium) |       [PowerPC](https://zh.wikipedia.org/wiki/PowerPC)       |                                                              |

## 二、MinGW

MinGW（Minimalist GNU for Windows），又称mingw32，是将GCC编译器GNU Binutils移植到Win32平台下的产物，包括一系列头文件Win32API和可执行文件。另有可用于产生32位及64位Windows可执行文件的MinGW-w64项目，是从原本MinGW产生的分支,如今基于x64架构的计算机基本都使用MinGW-W64。而MinGW是基于**Cygwin**上发展而来的

### 编程语言支持

GCC支持的语言大多在MinGW也受支持，其中涵盖[C](https://zh.wikipedia.org/wiki/C語言)、[C++](https://zh.wikipedia.org/wiki/C%2B%2B)、[Objective-C](https://zh.wikipedia.org/wiki/Objective-C)、[Fortran](https://zh.wikipedia.org/wiki/Fortran)及[Ada](https://zh.wikipedia.org/wiki/Ada)。

对于C语言之外的语言，MinGW使用标准的GNU[运行时库](https://zh.wikipedia.org/wiki/运行时库)，如C++使用GNU [libstdc++](https://zh.wikipedia.org/wiki/Libstdc%2B%2B)。

但是MinGW使用Windows中的C运行时库。因此用MinGW开发的程序不需要额外的第三方[DLL](https://zh.wikipedia.org/wiki/动态链接库)支持就可以直接在Windows下运行，而且也不一定必须遵从[GPL](https://zh.wikipedia.org/wiki/GPL)许可证。这同时造成了MinGW开发的程序只能使用Win32API和跨平台的第三方库，而缺少POSIX支持[[4\]](https://zh.wikipedia.org/wiki/MinGW#cite_note-4)，大多数GNU软件无法在不修改源代码的情况下用MinGW编译。

### 与Cygwin比较

Cygwin 与 MinGW 皆可用来移植 Unix 软件到 Windows，但它们采用截然不同的实现。Cygwin 旨在提供一个完整的 [POSIX](https://zh.wikipedia.org/wiki/POSIX) 层，包括主流 Unix 的系统调用及库实现；其重视兼容性优先于性能。相对的，MinGW 则着重简化与性能。因此，它并不提供某些难以用 Windows API 实现的 POSIX API，例如 `fork()`，`mmap()` 和 `ioctl()`。使用跨平台库写成的应用，若库本身已移植到了 MinGW（例如 [SDL](https://zh.wikipedia.org/wiki/SDL)、[wxWidgets](https://zh.wikipedia.org/wiki/WxWidgets)、[Qt](https://zh.wikipedia.org/wiki/Qt) 或 [GTK+](https://zh.wikipedia.org/wiki/GTK)），则那些应用通常也容易用 MinGW 编译。

用 Cygwin 写成的 Windows 程序，因为是执行在[公共著作权](https://zh.wikipedia.org/wiki/Copyleft)的兼容 [DLL](https://zh.wikipedia.org/wiki/动态链接库) 上，所以 DLL 必须随着程序源代码一起发布。MinGW 则不需要[兼容层](https://zh.wikipedia.org/wiki/兼容层)，因为基于 MinGW 的程序是直接调用 Windows API 编译的。

MinGW 搭配 MSYS 可以产生一个小却完整的执行环境，让程序可以加载随身设备当中，却不动到[注册表](https://zh.wikipedia.org/wiki/注册表)或产生额外文件。

在 POSIX 系统下，用 MinGW-GCC [交叉编译](https://zh.wikipedia.org/wiki/交叉編譯器) Windows 应用也是可行的。这意味着开发者不需要安装 Windows 与 MSYS 才能编译 Windows 软件，或 Windows+Cygwin 软件。

