#pragma once
#include <iostream>
#include <list>
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
        list<Subscriber *>::iterator iterator =
        list_of_subscribers.begin();
        howManyObserver();
        while (iterator != list_of_subscribers.end()) {
            (*iterator)->update(message);
            ++iterator;
        }
    }

    void createMessage(string message = "Empty") {
        this->message = message;
        notify();
    }

    void howManyObserver() {
        cout << "There are " << list_of_subscribers.size() <<
                                  " observers in the list" << endl;

    }

    void businessNotificationLogic() {
        this->message = "change message message";
        notify();
        cout << "I'm about to do something important" << endl;
    }

};
