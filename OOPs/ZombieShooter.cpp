#include<iostream>
#include<string>
using namespace std;
class MasterZombie{
    public:
    string name;
    int heaight;
    int power;
};
class zombie1 : public MasterZombie{
    string description;
    void fly(){

    }
};
class zombie2: public MasterZombie{
    void spitFire(){

    }
};