# SM4

Support windows and Linux system Cmake.

# windows
If it is a Windows, it depends on the following environment:

    - MinGW-5.1.6 (Necessary!)
    - Visual Studio Code 1.40.1
    - cmake version 3.16.0-rc3 (Necessary!)
    - gcc version 3.4.5 (mingw-vista special r3) (Necessary!)

    And use the following commands : 
        - cd build.win
        - cmake -G"MinGW Makefiles" ../
        - make
        - ./sm4test.exe
# linux
If it is a Linux, it depends on the following environment:

    - Ubuntu16.04 64Bits LTS
    - cmake version 3.5.1 (Necessary!)
    - gcc version 5.4.0 (Necessary!)
    
    And use the following commands : 
        - cd build.unix
        - cmake -G"Unix Makefiles" ../
        - make
        - ./sm4test