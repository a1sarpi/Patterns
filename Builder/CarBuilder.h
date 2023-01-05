#pragma once
#include "Builder.h"
#include "Car.h"
#include <iostream>

using std::cout, std::endl;


class CarBuilder : public Builder {
private:
    Car *car;

public:
    void reset() override {
        car = new Car;
    }

    void setSeats(int number) override {
        cout << "building seats..." << endl;
        car->seats = number;
    }

    void setEngine(int engine) override {
        cout << "building engine..." << endl;
        car->engine = engine;
    }

    void setGPS(bool isThereGPS) override {
        cout << "looking for GPS..." << endl;
        car->GPS = isThereGPS;
    }

    void setSpoiler(bool isThereSpoiler) override {
        cout << "looking for spoiler..." << endl;
        car->spoiler = isThereSpoiler;
    }

    Car *getResult() {
        return this->car;
    }

};