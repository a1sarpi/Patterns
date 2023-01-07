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

    void groupSelected(vector<Graphic *> components = {}) {
        cout << "Making sophisticated component from others" << endl;
        all->draw();
        for (auto item: all->children) {
            item->draw();
        }
    }

};