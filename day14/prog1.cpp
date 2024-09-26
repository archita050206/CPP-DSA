#include<iostream>
using namespace std;
class Car{
    private:
    string brand;
    string model;
    string engine;
    int seats;
    public:
    Car(string b, string m, string e,int s):
    brand(b),model(m),engine(e),seats(s){}
    void display(){

        cout<<brand<<"'s model "<<model<<" with engine "<<engine<<" and seats "<<seats;
    }
};
int main(){
    Car c("Hyundai","i20","Mach1",5);
    c.display();
}