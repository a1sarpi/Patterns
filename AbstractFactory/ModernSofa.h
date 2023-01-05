#pragma once
#include "Sofa.h"
#include <iostream>

using std::cout, std::endl;

class ModernSofa : public Sofa {
public:
    void hasSeat() override {
        cout << "Modern Sofa Seat" << endl;
    }

    void hasOneMoreSeat() override {
        cout << "Modern Sofa One More Seat" << endl;
    }

    void hasLegs() override {
        cout << "Modern Sofa Legs" << endl;
    }

};