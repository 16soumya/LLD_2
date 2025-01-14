#include "iostream"
// #include "mutex"

class Singleton{
    private:
    static Singleton* instance;
    Singleton(){
        std::cout<<"Constructor called.\n";
    }

    public:
    static Singleton* getInstance(){
        if(instance==nullptr){
            std::cout<<"Create first instance.\n";
            instance = new Singleton();
        } else {
            std::cout<<"Instance already created.2\n";
        }
        return instance;
    }
};
