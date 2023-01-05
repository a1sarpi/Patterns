#include "ModernFurnitureFactory.h"
#include "VictorianFurnitureFactory.h"
#include <iostream>

using std::cin;

int main() {
    FurnitureFactory *Factory;
    cout << "What furniture you want?" << endl
         << "0) Victorian" << endl
         << "1) Modern" << endl;
    int choise;
    cin >> choise;
    if (choise) {
        Factory = new ModernFurnitureFactory;
    }
    else {
        Factory = new VictorianFurnitureFactory;
    }
    Factory->createChair();
    Factory->createSofa();
    return 0;
}