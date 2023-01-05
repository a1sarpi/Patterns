#pragma once
#include "Chair.h"
#include <iostream>

using std::cout, std::endl;

class VictorianChair : public Chair {
public:
    void hasLegs() override {
        cout << "Victorian Chair Legs" << endl;
    }

    void hasSeat() override {
        cout << "Victorian Chair Seat" << endl;
    }
};
