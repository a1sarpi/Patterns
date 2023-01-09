#include "Application.h"
#include <iostream>

int main() {
    auto *app = new Application();
    app->app_info();
    std::cout << "\n\n\n\n";
    app->blindCopy();
    app->app_info();
    return 0;
}