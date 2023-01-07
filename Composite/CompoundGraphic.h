#pragma once
#include "Graphic.h"
#include <vector>
#include <iostream>

using std::vector, std::cout, std::endl;

class CompoundGraphic : public Graphic {
public:
    vector<Graphic *> children;

    CompoundGraphic() = default;

    void add(Graphic *child) {
        children.push_back(child);
    }

    void remove(Graphic *child) {
        std::remove(children.begin(), children.end(),child);
    }

    void move(int dX, int dY) override {
        for (auto child: children) {
            child->move(dX, dY);
        }
    }

    void draw() {
        cout << "Drawing graphic and components" << endl;
    }

};
