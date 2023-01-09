#pragma once

#include "CompoundGraphic.h"
#include "Dot.h"
#include "Circle.h"

class ImageEditor {
private:
    CompoundGraphic *all;

public:
    void load() {
        all = new CompoundGraphic();
        all->add(new Dot(1, 2));
        all->add(new Circle(5, 3, 5));
    }

    void groupAll() {
        groupSelected(all->children);
    }

    void draw() {
        all->draw();
    }

    void groupSelected(const vector<Graphic *> &components = {}) {
        if (components.empty())
            return;
        cout << "Making sophisticated component from others" << endl;
        auto *group = new CompoundGraphic();
        for (auto item: components) {
            group->add(item);
            all->remove(item);
        }
        all->add(group);
        all->draw();
    }
};