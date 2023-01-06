#pragma once
#include "Transport.h"
#include <iostream>

using std::cout, std::endl;

class Ship : public Transport {
public:
    void deliver() override {
        cout << "Your product will be "
                "delivered by ship (sea)" << endl;
    }

};