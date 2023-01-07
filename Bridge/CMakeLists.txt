cmake_minimum_required(VERSION 3.22)
project(Bridge)

set(CMAKE_CXX_STANDARD 23)

add_executable(Bridge ../Bridge/main.cpp Remote.h Device.h Radio.h TV.h AdvancedRemote.h)