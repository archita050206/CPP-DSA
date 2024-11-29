#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int img;
    Complex(int r, int i){
        real=r;
        img=i;
    }
    Complex operator +(const Complex &c){
        return Complex(real+c.real, img+c.img);
    }
    void display(){
        cout<<real<<" + "<<img<<" i "<<endl;
    }
};
int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3=c1+c2;
    c3.display();
}