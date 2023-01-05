#pragma once
#include <iostream>

using std::cout, std::endl;

class Motorcycle {
public:
    int  engine;
    bool spoiler = false;

    void characteristics() {
        cout << "--------------"    << endl
             << "Characteristics: " << endl;
        cout << "There's " << engine << "l engine" << endl;
        cout << (spoiler ? "There's spoiler" :
                 "There's no spoiler") << endl;
    }
};