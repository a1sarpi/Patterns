#pragma once
#include "Logistics.h"
#include "Truck.h"
#include <iostream>

class RoadLogistics : public Logistics {
public:
    Transport * createTransport() override {
        return new Truck;
    }

};