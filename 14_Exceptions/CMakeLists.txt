cmake_minimum_required(VERSION 2.8)
project(14_Exceptions)

add_compile_options(-std=c++11)

add_executable(${PROJECT_NAME} main.cpp unwinding.hpp)
