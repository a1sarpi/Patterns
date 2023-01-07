#pragma once
#include "RouteStrategy.h"

class PublicTransportStrategy : public RouteStrategy {
public:
    void buildRoute(int A, int B) override {
        cout << "There's public transport, that "
                "can deliver you from A: " << A
                              << " to B: " << B << endl;
    }

};