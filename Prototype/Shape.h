#pragma once
#include <iostream>

using std::string, std::cout, std::endl;

class Shape {
public:
    int X;
    int Y;
    string color;

    Shape() = default;

    Shape(Shape *source) {
        if (source != nullptr) {
            this->X = source->X;
            this->Y = source->Y;
            this->color = source->color;
        }
    }

    virtual void info() = 0;

    virtual Shape *clone() = 0;

};