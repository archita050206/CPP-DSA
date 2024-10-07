#include<iostream>
using namespace std;

//Function Overloading: we are adding or removing certain features
//compile time polymorphism: it is decided upon compilation time that which method will be called
//same signature, same name but different return type is not allowed

void add(int num1, int num2){
    cout<<"Sum is: "<<num1+num2<<endl;
}
void add(int num1, int num2, int num3){
    cout<<"Sum is: "<<num1+num2+num3<<endl;
}
void add(double a, double b){
    cout<<"Sum is: "<<a+b<<endl;
}
int main(){
    add(1,2,3);
    add(2.7,2.5);
}