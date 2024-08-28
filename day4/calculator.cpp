#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    cout<<"Addition : "<<a+b<<endl;
    cout<<"Subtraction : "<<a-b<<endl;
    cout<<"Multiplication : "<<a*b<<endl;
    if(b==0){
        cout<<"Division not possible"<<endl;
    }
    else{
        cout<<"Division : "<<(double)a/b<<endl;
    }
    if(b==0){
        cout<<"Modulus not possible"<<endl;
    }
    else{
        cout<<"Modulus : "<<a%b<<endl;
    }
}