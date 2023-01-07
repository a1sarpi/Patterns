#pragma once

class Graphic {
public:
    virtual void move(int dX, int dY) = 0;

    virtual void draw() = 0;

};