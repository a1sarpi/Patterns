#pragma once
#include "SquarePeg.h"
#include "RoundPeg.h"
#include <cmath>
#include <iostream>

using std::sqrt, std::pow;

class SquarePegAdapter : public RoundPeg {
private:
    SquarePeg peg;

public:
    SquarePegAdapter() = default;

    explicit SquarePegAdapter(SquarePeg p_peg) : peg(p_peg) {}

    int getRadius() const override {
        return sqrt(2 * pow(peg.getWidth(), 2)) / 2;
    }

};