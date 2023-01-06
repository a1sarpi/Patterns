cmake_minimum_required(VERSION 3.22)
project(FactoryMethod)

set(CMAKE_CXX_STANDARD 23)

add_executable(FactoryMethod ../FactoryMethod/main.cpp Logistics.h RoadLogistics.h SeaLogistic.h Transport.h Truck.h Ship.h)