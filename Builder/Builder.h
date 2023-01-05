#pragma once
#include <iostream>

class Builder {
public:
    virtual void reset() = 0;

    virtual void setSeats(int number) = 0;
    virtual void setEngine(int engine) = 0;
    virtual void setSpoiler(bool isThereSpoiler) = 0;
    virtual void setGPS(bool isThereGPS) = 0;

};
