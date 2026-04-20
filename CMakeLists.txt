# 1. 指定需要的 CMake 最低版本
cmake_minimum_required(VERSION 3.10)

# 2. 给你的项目起个名字
project(hello_ai)

# 3. 告诉编译器，把 main.cpp 编译成一个叫做 hello_ai 的可执行程序
add_executable(hello_ai main.cpp)