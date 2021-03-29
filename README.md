# AES-Encrypt-Decrypt

<h2 align="center">- AES-Encrypt-Decrypt - </h2>
<p align="center">C Language Version of the AES Encrypt/Decrypt Code</p>

<p align="center">
    <a href="https://travis-ci.org/songshuaisong/AES-Encrypt-Decrypt"><img alt="Build Status" src="https://travis-ci.com/songshuaisong/AES-Encrypt-Decrypt.svg?branch=master"></a>
	<a href="http://www.kernel.org"><img alt="Platform (GNU/Linux)" src="https://img.shields.io/badge/platform-GNU/Linux-blue.svg"></a>
    <a href="http://www.windows.org"><img alt="Platform (MinGW/Windows)" src="https://img.shields.io/badge/platform-MinGW/Windows-blue.svg"></a>
    <a href="http://www.apache.org"><img alt="license-Apache2.0" src="https://img.shields.io/badge/license-Apache2.0-yellow.svg"></a>
	<a href="https://mit-license.org/"><img alt="license-Apache2.0" src="https://img.shields.io/badge/license-MIT-yellow.svg"></a>
    <a href="https://cmake.org/"><img alt="cmake" src="https://img.shields.io/badge/cmake->3.0-green.svg"></a>
</p>

<br>


	Support windows and Linux system.


## windows
If it is a Windows, it depends on the following environment:

    - MinGW-5.1.6 (Necessary!)
    - Visual Studio Code 1.40.1 
    - gcc version 3.4.5 (mingw-vista special r3) (Necessary!)

## linux
If it is a Linux, it depends on the following environment:

    - Ubuntu16.04 64Bits LTS 
    - gcc version 5.4.0 (Necessary!)
	

## AES

	主要是 AES 算法的代码，主要包括算法为：
	CBC、ECB、CTR、CCM
	
	在main.c测试文件中，分别对各种算法实现测试
	并且将测试结果输出到终端上
	
	用需要的话可以根据测试历程编写相关的代码


## AES_ECB

	主要是 AES-ECB 算法的代码，与上面的代码实现
	方式不同，但是加密解密后的数据是可以通用的。
	
	在main.c测试文件中，分别对各种算法实现测试
	并且将测试结果输出到终端上
	
	用需要的话可以根据测试历程编写相关的代码


## AES-SM3-SM4

	主要是 AES-SM3、AES-SM4 算法的代码，具体没有
	使用过，不过有相关的测试历程，可按照测试历程
	按需要进行相关的调用或者使用。
	
	在main.c测试文件中，分别对各种算法实现测试
	并且将测试结果输出到终端上
	
	用需要的话可以根据测试历程编写相关的代码

## README.md

	README文件。


    