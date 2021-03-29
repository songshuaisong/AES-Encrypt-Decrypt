#设置C编译器  
set(CMAKE_C_FLAGS "-g")
set(CMAKE_CXX_COMPILER "gcc")

PROJECT (SM4TEST)  
SET(SRC_LIST src/sm4.c src/sm4test.c src/sms4.c)  
ADD_EXECUTABLE(sm4test ${SRC_LIST})  

MESSAGE(STATUS "This is BINARY dir " ${HELLO_BINARY_DIR})  
MESSAGE(STATUS "This is SOURCE dir " ${HELLO_SOURCE_DIR}) 
