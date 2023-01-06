#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
    int width;
    int height;

    Rectangle() = default;

    Rectangle(Rectangle *source) : Shape(source) {
        if (source != nullptr) {
            this->width  = source->width;
            this->height = source->height;
        }
    }

    void info() override {
        cout << "i'm rectangle: "    << endl
             << "width:  " << width  << endl
             << "height: " << height << endl;
    }

    Shape * clone() override {
        return new Rectangle(this);
    }

};