# cmake版本最低要求
cmake_minimum_required(VERSION 3.16)

# 项目名字
project(instance)

# C++11
set(CMAKE_CXX_STANDARD 11)

# 项目根目录
set(ROOT ${PROJECT_SOURCE_DIR})

# 设置查找头文件的目录
include_directories(${ROOT}/include)

# 源文件目录
aux_source_directory(${ROOT}/src DIR_SRC)

# 生成可执行文件
add_executable(instance ${DIR_SRC})