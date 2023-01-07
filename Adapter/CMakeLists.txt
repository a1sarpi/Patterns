cmake_minimum_required(VERSION 3.22)
project(Adapter)

set(CMAKE_CXX_STANDARD 23)

add_executable(Adapter ../Adapter/main.cpp RoundHole.h RoundPeg.h SquarePeg.h SquarePegAdapter.h)