#include "TV.h"
#include "Radio.h"
#include "AdvancedRemote.h"

using std::cin;

int main() {
    auto tv = new TV();
    auto remote = new AdvancedRemote(tv);
    remote->togglePower();
    remote->volumeUp();
    remote->volumeDown();
    tv->setChannel(5);
    remote->channelDown();
    tv->getVolume();
    tv->getChannel();

    auto radio = new Radio();
    auto radio_remote = new AdvancedRemote(radio);
    radio_remote->togglePower();
    radio_remote->volumeUp();
    tv->setChannel(5);
    radio_remote->channelDown();
    radio_remote->mute();
    tv->getVolume();
    tv->getChannel();

    return 0;
}