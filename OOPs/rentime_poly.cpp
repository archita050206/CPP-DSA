#include<iostream>
using namespace std;
//Runtime polymorphism -> function overriding 
// it is decided durin runtime as in which function will be called
class Base{
    public:
    virtual void print(){
        cout<<"From base"<<endl;
    }
};
class Derived:public Base{
    public:
    void print(){
        cout<<"From derived"<<endl;
    }
};
int main(){
    //Derived d1;
    //d1.print();
    Base *d1=new Derived();//pointer of a parent class pointing to the child class 
    
    d1->print();
    Base *d2=new Base();
    d2->print();
    Derived *d3=new Derived();
    d3->print();
}