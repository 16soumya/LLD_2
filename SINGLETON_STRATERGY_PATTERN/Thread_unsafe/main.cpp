#include <iostream>
#include "/workspaces/LLD_2/SINGLETON_STRATERGY_PATTERN/Thread_unsafe/singleton.cpp"
#include <thread>
#include <chrono>
#include <vector>

Singleton* Singleton::instance = nullptr;

int main(){
    std::vector<std::thread> threads;
    for(int i=0;i<30;i++){
        threads.emplace_back([]() {Singleton::getInstance();});
    }

    for(auto& thread: threads){
        thread.join();
    }
    return 0;
}