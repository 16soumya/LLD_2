#include "singleton.h"

using namespace std;

// Define static members outside the class
Singleton* Singleton::instance = nullptr;
mutex Singleton::mutex_;

Singleton::Singleton() {
    cout << "Constructor called.\n";
}

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        lock_guard<mutex> lock(mutex_);
        if (instance == nullptr) {
            cout << "Create first instance.\n";
            instance = new Singleton();
        } else {
            cout << "Instance already created.1\n";
        }
    } else {
        cout << "Instance already created.2\n";
    }
    return instance;
}

Singleton::~Singleton() {
    cout << "Destructor called.\n";
}
