#pragma once
#include "Subscriber.h"
#include "Publisher.h"

class ConcreteSubscriber : public Subscriber {
private:
    string m_message_from_publisher;
    Publisher &mPublisher;
    static int subscriptions_count;
    int number;

public:
    ConcreteSubscriber(Publisher &publisher) : mPublisher(publisher) {
        this->mPublisher.attach(this);
        cout << "Hi, I'm the Subscriber \""
             << ++ConcreteSubscriber::subscriptions_count
             << "\"." << endl;
        this->number = ConcreteSubscriber::subscriptions_count;
    }

    ~ConcreteSubscriber() override {
        cout << "Bye, I's the Subscriber \""
             << this->number << "\"." << endl;
    }

    void update(std::string &message_from_publisher) override {
        this->m_message_from_publisher = message_from_publisher;
        printInfo();
    }

    void removeMeFromTheList() override {
        mPublisher.detach(this);
        cout << "Subscriber \"" << number <<
                "\" removed from the list. " << endl;
    }

    void printInfo() {
        cout << "Subscriber \"" << number << "\": "
                "a new message is available --> " <<
                m_message_from_publisher << endl;
    }

};

int ConcreteSubscriber::subscriptions_count = 0;
