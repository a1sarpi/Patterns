#pragma once
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

class Application {
private:
    vector<Shape *> shapes;

public:
    Application() {
        auto *circle = new Circle();
        circle->X = 10;
        circle->Y = 20;
        circle->radius = 15;
        shapes.push_back(circle);

        auto *rectangle = new Rectangle();
        rectangle->width = 10;
        rectangle->height = 20;
        shapes.push_back(rectangle);
    }

    void blindCopy() {
        auto shapesCopy = new vector<Shape *>;

        for (auto s: shapes) {
            shapesCopy->push_back(s->clone());
        }
    }

    void app_info() {
        for (auto s: shapes) {
            cout << "--------" << endl;
            s->info();
            cout << "--------" << endl;
        }
    }

};