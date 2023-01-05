#pragma once
#include <iostream>

using std::cout, std::endl;

class Car {
public:
    int  seats;
    int  engine;
    bool GPS = false;
    bool spoiler = false;

    void characteristics() {
        cout << "--------------"    << endl
             << "Characteristics: " << endl;
        cout << "There's " << seats << ((seats <= 1) ? " seat" : " seats") << endl;
        cout << "There's " << engine << "l engine" << endl;
        cout << (GPS ? "There's GPS" :
                       "There's no GPS") << endl;
        cout << (spoiler ? "There's spoiler" :
                           "There's no spoiler") << endl;
    }
};