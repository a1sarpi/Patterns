#pragma once
#include "Chair.h"
#include "Sofa.h"

class FurnitureFactory {
public:
    virtual Chair *createChair() = 0;

    virtual Sofa *createSofa() = 0;

};
