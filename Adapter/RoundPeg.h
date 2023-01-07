#pragma once

class RoundPeg {
private:
    int radius;

public:
    RoundPeg() = default;

    explicit RoundPeg(int p_radius) : radius(p_radius) {}

    virtual int getRadius() const {
        return this->radius;
    }

};