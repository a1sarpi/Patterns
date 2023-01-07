cmake_minimum_required(VERSION 3.22)
project(Composite)

set(CMAKE_CXX_STANDARD 23)

add_executable(Composite ../Composite/main.cpp Circle.h Dot.h CompoundGraphic.h Graphic.h ImageEditor.h)