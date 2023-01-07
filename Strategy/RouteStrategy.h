#pragma once
#include <iostream>

using std::cout, std::endl, std::cin;

class RouteStrategy {
public:
    virtual void buildRoute(int A, int B) = 0;

};
