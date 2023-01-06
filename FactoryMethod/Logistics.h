#pragma once
#include <iostream>
#include "Transport.h"

class Logistics {
private:
    Transport *transport;

public:
    virtual void planDelivery() {
        transport = createTransport();
        transport->deliver();
    }

    virtual Transport *createTransport() = 0;
};
