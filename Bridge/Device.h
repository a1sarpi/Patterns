#pragma once
#include <iostream>

using std::cout, std::endl;

class Device {
public:
    bool enabled = false;
    int  volume;
    int  channel;

    Device() = default;

    virtual bool isEnabled() const = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;

    virtual int getVolume() = 0;
    virtual void setVolume(int p_volume) = 0;

    virtual int getChannel() = 0;
    virtual void setChannel(int p_channel) = 0;

};
