#pragma once
#include "RoundPeg.h"

class RoundHole {
private:
    int radius;

public:
    RoundHole() = default;

    explicit RoundHole(int p_radius) : radius(p_radius) {}

    int getRadius() const {
        return radius;
    }

    bool fits(RoundPeg *peg) const {
        return (this->getRadius() >= peg->getRadius());
    }

};
