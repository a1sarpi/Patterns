#include <iostream>
#include "Director.h"
#include "Builder.h"
#include "CarBuilder.h"
#include "MotorcycleBuilder.h"

int main() {
    cout << "Sport Car: " << endl;
    auto *director = new Director;
    auto car_builder = new CarBuilder;
    director->constructSportsVehicle(car_builder);

    Car *car = car_builder->getResult();
    car->characteristics();

    cout << endl << "Sport Motorcycle: " << endl;

    auto motorcycle_builder = new MotorcycleBuilder;
    director->constructSportsVehicle(motorcycle_builder);

    Motorcycle *motorcycle = motorcycle_builder->getResult();
    motorcycle->characteristics();

    return 0;
}
