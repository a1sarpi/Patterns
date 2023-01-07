#pragma once
#include <iostream>

using std::string;

class Subscriber {
public:
    virtual ~Subscriber() = default;

    virtual void removeMeFromTheList() = 0;

    virtual void update(string &message_from_publisher) = 0;

};
