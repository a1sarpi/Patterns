#pragma once
#include "Device.h"

class Radio : public Device {
public:
    Radio() = default;

    bool isEnabled() const override {
        cout << "Radio: " << ((enabled)? "is enabled" :
                           "isn't enabled") << endl;
        return enabled;
    }

    void enable() override {
        cout << "Radio on!" << endl;
        enabled = true;
    }

    void disable() override {
        cout << "Radio off!" << endl;
        enabled = false;
    }

    int getVolume() override {
        cout << "Radio volume: " << volume << endl;
        return volume;
    }

    void setVolume(int p_volume) override {
        cout << "You set radio volume = " << p_volume << endl;
        volume = p_volume;
    }

    int getChannel() override {
        cout << "Radio channel: " << channel << endl;
        return channel;
    }

    void setChannel(int p_channel) override {
        cout << "You set radio channel = " << p_channel << endl;
        channel = p_channel;
    }

};