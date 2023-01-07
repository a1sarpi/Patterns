#pragma once

class SquarePeg {
private:
    int width;

public:
    SquarePeg() = default;

    explicit SquarePeg(int p_width) : width(p_width) {}

    int getWidth() const {
        return this->width;
    }

};