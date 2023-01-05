#pragma once
#include "FurnitureFactory.h"
#include "ModernChair.h"
#include "ModernSofa.h"
#include <iostream>


class ModernFurnitureFactory : public FurnitureFactory {
public:
    Chair *createChair() override {
        auto modern_chair = new ModernChair;
        cout << "Creating Modern Chair..." << endl;
        modern_chair->hasLegs();
        modern_chair->hasSeat();
        return modern_chair;
    }

    Sofa *createSofa() override {
        auto modern_sofa = new ModernSofa;
        cout << "Creating Modern Sofa..." << endl;
        modern_sofa->hasLegs();
        modern_sofa->hasSeat();
        modern_sofa->hasOneMoreSeat();
        return modern_sofa;
    }
};