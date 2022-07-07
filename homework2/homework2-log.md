# lesson 2

## Project files
- hello,hpp
- hello.cpp
- main.cpp

## Kubuntu 22.04 build listing
```
pbash@ku2204:~/repos/otus-cpp-basic$ cmake -B build
-- The CXX compiler identification is GNU 11.2.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/pbash/repos/otus-cpp-basic/build

pbash@ku2204:~/repos/otus-cpp-basic$ cmake --build build
[ 33%] Building CXX object CMakeFiles/hello.dir/hello.cpp.o
[ 66%] Building CXX object CMakeFiles/hello.dir/main.cpp.o
[100%] Linking CXX executable hello
[100%] Built target hello
pbash@ku2204:~/repos/otus-cpp-basic$ ./build/hello 
Hello, world!
```
## Windows 11 build listing
```
PS C:\home\pbash\github-repos\otus-cpp-basic> cmake -B build
-- Building for: Visual Studio 17 2022
-- Selecting Windows SDK version 10.0.19041.0 to target Windows 10.0.22000.
-- The CXX compiler identification is MSVC 19.32.31332.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/VC/Tools/MSVC/14.32.31326/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: C:/home/pbash/github-repos/otus-cpp-basic/build
PS C:\home\pbash\github-repos\otus-cpp-basic> cmake --build build
Microsoft (R) Build Engine version 17.2.1+52cd2da31 for .NET Framework
Copyright (C) Microsoft Corporation. All rights reserved.

  Building Custom Rule C:/home/pbash/github-repos/otus-cpp-basic/CMakeLists.txt
  hello.cpp
  main.cpp
  Generating Code...
  hello.vcxproj -> C:\home\pbash\github-repos\otus-cpp-basic\build\Debug\hello.exe
  Building Custom Rule C:/home/pbash/github-repos/otus-cpp-basic/CMakeLists.txt
PS C:\home\pbash\github-repos\otus-cpp-basic> .\build\Debug\hello.exe
Hello, world!
```