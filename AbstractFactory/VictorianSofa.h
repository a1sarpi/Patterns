#pragma once
#include "Sofa.h"
#include <iostream>

using std::cout, std::endl;

class VictorianSofa : public Sofa {
public:
    void hasSeat() override {
        cout << "Victorian Sofa Seat" << endl;
    }

    void hasOneMoreSeat() override {
        cout << "Victorian Sofa One More Seat" << endl;
    }

    void hasLegs() override {
        cout << "Victorian Sofa Seat" << endl;
    }

};