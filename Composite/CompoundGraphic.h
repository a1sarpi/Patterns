#pragma once
#include "Graphic.h"
#include <vector>
#include <iostream>
#include <algorithm>

using std::vector, std::cout, std::endl;

class CompoundGraphic : public Graphic {
public:
    vector<Graphic *> children;

    CompoundGraphic() = default;

    void add(Graphic *child) {
        children.push_back(child);
    }

    void remove(Graphic *child) {
        auto it = std::find(children.begin(), children.end(), child);
        if (it != children.end())
            children.erase(it);
    }

    void move(int dX, int dY) override {
        for (auto child: children) {
            child->move(dX, dY);
        }
    }

    void draw() override {
        cout << "Drawing group" << endl;
        for (auto item: children) {
            item->draw();
        }
        cout << "----------------" << endl;
    }

};
