cmake_minimum_required(VERSION 3.22)
project(Builder)

set(CMAKE_CXX_STANDARD 23)

add_executable(Builder ../Builder/main.cpp Builder.h Car.h CarBuilder.h Motorcycle.h MotorcycleBuilder.h Director.h)