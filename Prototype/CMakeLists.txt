cmake_minimum_required(VERSION 3.22)
project(Prototype)

set(CMAKE_CXX_STANDARD 23)

add_executable(Prototype ../Prototype/main.cpp Shape.h Rectangle.h Circle.h Application.h)