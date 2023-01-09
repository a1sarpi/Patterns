#pragma once

#include <iostream>
#include <list>
#include <algorithm>
#include "Subscriber.h"

using std::cout, std::endl, std::list;

class Publisher {
private:
    list<Subscriber *> list_of_subscribers;
    string message;

public:
    virtual ~Publisher() {
        cout << "Bye, I's the Publisher!" << endl;
    }

    void attach(Subscriber *subscriber) {
        list_of_subscribers.push_back(subscriber);
    }

    void detach(Subscriber *subscriber) {
        list_of_subscribers.remove(subscriber);
    }

    void notify() {
        howManyObserver();
        for (const auto &subscriber: list_of_subscribers) {
            subscriber->update(message);
        }
    }

    void createMessage(const string &new_message = "Empty") {
        message = new_message;
        notify();
    }

    void howManyObserver() {
        cout << "There are " << list_of_subscribers.size() <<
             " observers in the list" << endl;

    }

    void businessNotificationLogic() {
        cout << "I'm about to do something important" << endl;
        createMessage("important business message");
    }
};
