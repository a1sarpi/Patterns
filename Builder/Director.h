#pragma once
#include "Builder.h"

class Director {
public:
    void constructSportsVehicle(Builder *builder) {
        builder->reset();
        builder->setSeats(2);
        builder->setEngine(60);
        builder->setGPS(true);
        builder->setSpoiler(true);
    }

};