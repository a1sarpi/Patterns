cmake_minimum_required(VERSION 3.22)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 23)

add_executable(AbstractFactory ../AbstractFactory/main.cpp FurnitureFactory.h Chair.h Sofa.h
        ModernFurnitureFactory.h ModernChair.h ModernSofa.h
        VictorianFurnitureFactory.h VictorianChair.h VictorianSofa.h)