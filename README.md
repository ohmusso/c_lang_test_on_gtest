# c_lang_test_on_gtest

Try : "https://google.github.io/googletest/quickstart-cmake.html"

## my run enviroment

### OS

Windows 10

### Compiler

MinGW-w64
<https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/8.1.0/threads-posix/sjlj/x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0.7z>

### CMake

version: 3.24.3

Download: <https://cmake.org/download/>

Note: Set system path. ex) Path: C:\Program Files\CMake\bin

### Ninja

version: 1.11.1

Download: <https://github.com/ninja-build/ninja/releases>

Note: downloaded ninja.exe which is zipped then unzip at c drive and set system path. ex) Path: C:\Program Files\ninja

## Sample commands

Exacute at this directory.

### Generate makefile at Ninja

```powershell
cmake -B build -G Ninja
```

### Build

```powershell
cmake --build build
```

### Test

```powershell
ctest --test-dir build
```

## Note

### Test code is c++, but tested code is c

c hedder must need "C Linkage".

```c:sample.h
#ifdef __cplusplus
extern "C" {
    extern ... ;
}
#endif /* __cplusplus */
```

### If use vscode

Add include path for lint tool.

```json:.vscode/c_cpp_properties.json
    "configurations": [
        {
            "includePath": [
                "${workspaceFolder}/**",
                "${workspaceFolder}/build/**"
            ],            
```
