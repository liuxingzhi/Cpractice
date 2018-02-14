cmake_minimum_required(VERSION 3.9)
project(list)

set(CMAKE_CXX_STANDARD 11)

add_executable(list main.cpp People.cpp People.h LinkedList.cpp LinkedList.h Queue.cpp Queue.h)