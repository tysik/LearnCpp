cmake_minimum_required(VERSION 2.8)
project(13_Templates)

add_compile_options(-std=c++11)

add_executable(${PROJECT_NAME} main.cpp cents.hpp array.hpp static_array.hpp storage.hpp)
