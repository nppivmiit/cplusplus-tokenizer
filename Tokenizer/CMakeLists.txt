cmake_minimum_required(VERSION 3.1)
project(Tokenizer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Tokenizer ${SOURCE_FILES} Def.h Def.cpp)