#ifndef PATTERNS_TEMPLATED_H
#define PATTERNS_TEMPLATED_H

#include <stdexcept>
#include <iostream>

class CheckNotNull {
public:
    void check(const void *ptr) {
        if (ptr == nullptr) {
            throw std::runtime_error("Null pointer exception");
        }
    }
};

class NoCheck {
public:
    void check(const void *ptr) {}
};

template<typename T, class CheckPolicy = NoCheck>
class SmartPtr : public CheckPolicy {
    T *ptr;
public:
    explicit SmartPtr(T *p = nullptr) : ptr(p) {}

    T *operator->() {
        CheckPolicy::check(ptr);
        return ptr;
    }
};

struct Test {
    std::string msg;

    explicit Test(const std::string &msg) : msg(msg) {}

    void print() const {
        std::cout << "Test: " << msg << std::endl;
    }
};

void test() {
    SmartPtr<Test> p1(new Test("test 1"));
    SmartPtr<Test> p2;
    SmartPtr<Test, CheckNotNull> p3;
    p1->print();
    p2->print(); // SEGFAULT HERE
    p3->print();
}

#endif //PATTERNS_TEMPLATED_H
