#pragma once
#include "Remote.h"

class AdvancedRemote : public Remote {
public:
    explicit AdvancedRemote(Device *p_device) : Remote(p_device) {}

    void mute() {
        cout << "You muted device!" << endl;
        device->setVolume(0);
    }
};
