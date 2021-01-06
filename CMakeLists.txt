cmake_minimum_required(VERSION 3.14)
project(JUMPGAME)

set(CMAKE_CXX_STANDARD 14)

add_executable(JumpGame main.cpp helper.cpp helper.h nullSolution.cpp nullSolution.h displaySolution.cpp displaySolution.h)