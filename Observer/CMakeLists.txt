cmake_minimum_required(VERSION 3.22)
project(Observer)

set(CMAKE_CXX_STANDARD 23)

add_executable(Observer ../Observer/main.cpp Subscriber.h ConcreteSubscriber.h Publisher.h Client.h)