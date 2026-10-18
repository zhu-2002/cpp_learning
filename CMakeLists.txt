cmake_minimum_required(VERSION 3.28.3)
project(cpp_learning)

set(CMAKE_CXX_STANDARD 26)

# 00 - 模板
add_executable(lesson00
        "00-Template/main.cpp"
)

# 01 - 输出
add_executable(lesson01
        "01-Print/main.cpp"
)

# 02 - 变量与常量
add_executable(lesson02
        "02-Variables&Constants/main.cpp"
)

# 03 - 数据类型与 sizeof
add_executable(lesson03
        "03-DataTypes&Sizeof/main.cpp"
)

# 04 - 位运算
add_executable(lesson04
        "04-Bit/main.cpp"
)

# 05 - 选择结构
add_executable(lesson05
        "05-Selection/main.cpp"
)

# 06 - 范围 for 循环
add_executable(lesson06
        "06-Foreach/main.cpp"
)

# 07 - 数学函数
add_executable(lesson07
        "07-Cmath/main.cpp"
)

# 08 - 函数
add_executable(lesson08
        "08-Function/main.cpp"
)

# 09 - 指针
add_executable(lesson09
        "09-Pointers/main.cpp"
)

# 10 - 引用
add_executable(lesson10
        "10-Reference/main.cpp"
)

# 11 - 函数指针
add_executable(lesson11
        "11-FuncPointer/main.cpp"
)

# 12 - 左值与右值
add_executable(lesson12
        "12-LeftVal&RightVal/main.cpp"
)

# 13 - 字符串
add_executable(lesson13
        "13-String/main.cpp"
)

# 14 - 头文件与多文件编译
add_executable(lesson14
        "14-HeadFile/main.cpp"
        "14-HeadFile/yourfile.cpp"
        "14-HeadFile/yourfile.h"
)

# 15 - 对象与类
add_executable(lesson15
        "15-Class&Object/main.cpp"
        15-Class&Object/constants.h
        15-Class&Object/circle.h
        15-Class&Object/circle.cpp
)