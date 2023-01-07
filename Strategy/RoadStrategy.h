#pragma once
#include "RouteStrategy.h"

class RoadStrategy : public RouteStrategy {
public:
    void buildRoute(int A, int B) override {
        cout << "There's good road from A: "
             << A << " to B: " << B << endl;
    }

};
