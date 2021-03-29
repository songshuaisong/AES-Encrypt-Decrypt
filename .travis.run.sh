#!/bin/bash

do_run()
{
	echo 
	echo [ Running 1 ] The Working directory is : `pwd` # 显示当前目录
	echo 
	cd AES/ # 进入到目录中   
	do_build
	cd ../AES_ECB
	do_build 
	cd ../AES-SM3-SM4/ 
	pwd
	cd SM3/
	do_build
	cd ../SM4
	do_build
	cd ../../
	echo [ Running 1 ] Leave The directory \"`pwd`\" # 显示当前目录
	pwd
}

do_build()
{
	echo 
	echo [ Running 2 ] Enter The directory \"`pwd`\" # 显示当前目录
	make 
	echo [ Running 2 ] Test the code execution results are :  # 显示当前目录
	make run 
	make clean 
	echo [ Running 2 ] Leave The directory \"`pwd`\" # 显示当前目录
}

 
# 开始运行
do_run
