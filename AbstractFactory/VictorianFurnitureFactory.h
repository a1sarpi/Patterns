#pragma once
#include "FurnitureFactory.h"
#include "VictorianChair.h"
#include "VictorianSofa.h"
#include <iostream>


class VictorianFurnitureFactory : public FurnitureFactory {
public:
    Chair *createChair() override {
        auto victorian_chair = new VictorianChair;
        cout << "Creating Victorian Chair..." << endl;
        victorian_chair->hasLegs();
        victorian_chair->hasSeat();
        return victorian_chair;
    }

    Sofa *createSofa() override {
        auto victorian_sofa = new VictorianSofa;
        cout << "Creating Victorian Sofa..." << endl;
        victorian_sofa->hasLegs();
        victorian_sofa->hasSeat();
        victorian_sofa->hasOneMoreSeat();
        return victorian_sofa;
    }
};