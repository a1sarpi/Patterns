#pragma once
#include "RouteStrategy.h"

class WalkingStrategy : public RouteStrategy {
public:
    void buildRoute(int A, int B) override {
        cout << "You can easily walk from A: "
             << A << " to B: " << B << endl;
    }

};
