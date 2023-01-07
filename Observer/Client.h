#pragma once
#include "Publisher.h"
#include "ConcreteSubscriber.h"

class Client {
public:
    void MyCode() {
        auto *publisher = new Publisher;
        auto *subscriber1 = new ConcreteSubscriber(*publisher);
        auto *subscriber2 = new ConcreteSubscriber(*publisher);
        auto *subscriber3 = new ConcreteSubscriber(*publisher);
        Subscriber *subscriber4;
        Subscriber *subscriber5;

        publisher->createMessage("Hello World!");
        subscriber3->removeMeFromTheList();

        publisher->createMessage("Are you ready for exam, fellas?");
        subscriber4 = new ConcreteSubscriber(*publisher);

        subscriber2->removeMeFromTheList();
        subscriber5 = new ConcreteSubscriber(*publisher);

        publisher->createMessage("I've got fucking tired doing this examples");
        subscriber5->removeMeFromTheList();

        subscriber4->removeMeFromTheList();
        subscriber1->removeMeFromTheList();

        delete subscriber5;
        delete subscriber4;
        delete subscriber3;
        delete subscriber2;
        delete subscriber1;
        delete publisher;
    }
};
