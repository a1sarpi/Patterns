#include "Navigator.h"
#include "WalkingStrategy.h"
#include "PublicTransportStrategy.h"
#include "RoadStrategy.h"

int main() {
    auto navigator = new Navigator;
    int choise;
    auto walk = new WalkingStrategy;
    auto car  = new RoadStrategy;
    auto bus  = new PublicTransportStrategy;
    cout << "Choose how you want to build route: " << endl
         << "1) By foot"                           << endl
         << "2) By car"                            << endl
         << "3) By public transport"               << endl;
    cin >> choise;
    if (choise == 1) {
        navigator->setStrategy(walk);
    }
    else if (choise == 2) {
        navigator->setStrategy(car);
    }
    else if (choise == 3) {
        navigator->setStrategy(bus);
    }
    navigator->buildRoute(1, 2);
    return 0;
}