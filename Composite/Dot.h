#pragma once
#include "Graphic.h"
#include <iostream>

using std::cout, std::endl;

class Dot : public Graphic {
private:
    int X;
    int Y;

public:
    Dot() = default;

    Dot(int p_X, int p_Y) : X(p_X), Y(p_Y) {}

    void move(int dX, int dY) override {
        this->X += dX;
        this->Y += dY;
    }

    void draw() override {
        cout << "Here's your dot (coord.: "
                                        << X << ", "
                                        << Y << "): ." << endl;
    }

    int getX() {
        return X;
    }

    int getY() {
        return Y;
    }
};