#pragma once
#include "Logistics.h"
#include "Ship.h"
#include <iostream>

class SeaLogistics : public Logistics {
public:
    Transport * createTransport() override {
        return new Ship;
    }

};