#pragma once
#include "Device.h"

class Remote {
public:
    Device *device;

    explicit Remote(Device *p_device) : device(p_device) {}

    void togglePower() {
        if (device->isEnabled()) {
            device->disable();
        }
        else {
            device->enable();
        }
    }

    void volumeDown() {
        device->setVolume(device->getVolume() - 10);
    }

    void volumeUp() {
        device->setVolume(device->getVolume() + 10);
    }

    void channelDown() {
        device->setChannel(device->getChannel() - 1);
    }

    void channelUp() {
        device->setChannel(device->getChannel() + 1);
    }

};