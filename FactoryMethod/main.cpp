#include <iostream>
#include "Logistics.h"
#include "RoadLogistics.h"
#include "SeaLogistic.h"
#include "Transport.h"

using std::cin, std::cout, std::endl;

int main() {
    Logistics *logistics;
    cout << "Choose transport: " << endl
         << "0) Truck" << endl
         << "1) Ship"  << endl;
    int choise;
    cin >> choise;
    if (choise) {
        logistics = new SeaLogistics;
    }
    else {
        logistics = new RoadLogistics;
    }
    Transport *transport;
    transport = logistics->createTransport();
    transport->deliver();
    return 0;
}