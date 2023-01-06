#pragma once
#include "Transport.h"
#include <iostream>

using std::cout, std::endl;

class Truck : public Transport {
public:
    void deliver() override {
        cout << "Your product will be "
                "delivered by truck (road)" << endl;
    }

};