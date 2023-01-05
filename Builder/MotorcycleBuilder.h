#pragma once
#include "Builder.h"
#include "Motorcycle.h"
#include <iostream>

using std::cout, std::endl;

class MotorcycleBuilder : public Builder {
private:
    Motorcycle *motorcycle;

public:
    void reset() override {
        motorcycle = new Motorcycle;
    }

    void setSeats(int number) override {
        number = 1;
        cout << "building ONE (" << number << ")  seat for motorcycle..." << endl;
    }

    void setEngine(int engine) override {
        cout << "building engine..." << endl;
        motorcycle->engine = engine;
    }

    void setGPS(bool isThereGPS) override {
        isThereGPS = false;
        cout << "there's no GPS in motorcycle" << endl;
    }

    void setSpoiler(bool isThereSpoiler) override {
        cout << "looking for spoiler..." << endl;
        motorcycle->spoiler = isThereSpoiler;
    }

    Motorcycle *getResult() {
        return this->motorcycle;
    }

};