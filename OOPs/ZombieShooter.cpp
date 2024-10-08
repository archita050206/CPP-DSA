#include<iostream>
#include<string>
using namespace std;
class MasterZombie{//abstract class: class containing pure virtual function
    public:
    string name="Zaza";
    int height=50;
    int power=40;

    virtual void changeHealth(){
        power-=20;
    }
    virtual void infection() =0;//pure virtual function
};
class zombie1 : public MasterZombie{
    string description;
    void fly(){
        cout<<name<<endl;
    }
};
class zombie2: public MasterZombie{
    public:
    void spitFire(){

    }
    void changeHealth() override{
        cout<<"Health";
    }
    
};
int main(){
    zombie1 z;
    MasterZombie *m1=new zombie2();
    m1->changeHealth();
}