#pragma once
#include "Chair.h"

using std::cout, std::endl;

class ModernChair : public Chair {
public:
    void hasLegs() override {
        cout << "Modern Chair Legs" << endl;
    }

    void hasSeat() override {
        cout << "Modern Chair Seat" << endl;
    }

};
