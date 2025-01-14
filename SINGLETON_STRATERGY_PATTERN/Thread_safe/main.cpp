#include <iostream>
#include "singleton.h"
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

using namespace std;

int main(){
    vector<thread> threads;
    for(int i=0;i<30;i++){
        threads.emplace_back([]() {Singleton::getInstance();});
        // this_thread::sleep_for(chrono::milliseconds(1000));
    }

    for(auto& thread: threads){
        thread.join();
    }
    return 0;
}