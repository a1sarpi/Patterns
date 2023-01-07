#pragma once
#include "Dot.h"
#include "cmath"

using std::sqrt;

class Circle : public Dot {
private:
    int radius;

public:
    Circle() = default;

    Circle(int p_X, int p_Y, int p_radius)
        : Dot(p_X, p_Y), radius(p_radius) {}

    void draw() override {
        cout << "Here's your circle (center coord.: "
             << getX() << ", "
             << getY() << "; "
             << "radius: " << radius << endl;
        for (auto i = 0; i <= 2 * radius; i++) {
            for (auto j = 0; j <= 2 * radius; j++) {
                auto distance = sqrt(static_cast<double>
                                           ((i - radius) * (i - radius) +
                                           (j - radius) * (j - radius)));
                if (distance > radius - 0.5 && distance < radius + 0.5) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

};
