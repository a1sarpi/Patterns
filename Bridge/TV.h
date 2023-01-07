#pragma once
#include "Device.h"

class TV : public Device {
public:
    TV() = default;

    bool isEnabled() const override {
        cout << "TV: " << ((enabled)? "is enabled" :
                                      "isn't enabled") << endl;
        return enabled;
    }

    void enable() override {
        cout << "TV on!" << endl;
        enabled = true;
    }

    void disable() override {
        cout << "TV off!" << endl;
        enabled = false;
    }

    int getVolume() override {
        cout << "TV volume: " << volume << endl;
        return volume;
    }

    void setVolume(int p_volume) override {
        cout << "You set TV volume = " << p_volume << endl;
        volume = p_volume;
    }

    int getChannel() override {
        cout << "TV channel: " << channel << endl;
        return channel;
    }

    void setChannel(int p_channel) override {
        cout << "You set TV channel = " << p_channel << endl;
        channel = p_channel;
    }

};