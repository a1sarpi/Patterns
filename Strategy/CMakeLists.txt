cmake_minimum_required(VERSION 3.22)
project(Strategy)

set(CMAKE_CXX_STANDARD 23)

add_executable(Strategy ../Strategy/main.cpp RouteStrategy.h RoadStrategy.h WalkingStrategy.h PublicTransportStrategy.h Navigator.h)