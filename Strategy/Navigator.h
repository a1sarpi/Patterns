#pragma once
#include "RouteStrategy.h"

class Navigator {
private:
    RouteStrategy *routeStrategy;

public:
    void setStrategy(RouteStrategy *strategy) {
        routeStrategy = strategy;
    }

    void buildRoute(int A, int B) {
        routeStrategy->buildRoute(A, B);
    }

};