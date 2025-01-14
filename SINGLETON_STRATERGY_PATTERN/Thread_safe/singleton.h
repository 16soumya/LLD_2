#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <mutex>

using namespace std;

class Singleton {
private:
    static Singleton* instance;
    static mutex mutex_;
    
    Singleton(); 

public:
    static Singleton* getInstance();
    ~Singleton();
};

#endif
