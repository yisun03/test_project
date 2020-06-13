cmake_minimum_required(VERSION 3.14)
project(test_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_project main.cpp base.cpp returns.cpp derived.cpp)