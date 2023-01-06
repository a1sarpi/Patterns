#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    int radius;

    Circle() = default;

    Circle(Circle *source) : Shape(source) {
        if (source != nullptr) {
            this->radius = source->radius;
        }
    }

    void info() override {
        cout << "i'm circle: "       << endl
             << "radius: " << radius << endl;
    }

    Shape * clone() override {
        return new Circle(this);
    }
};