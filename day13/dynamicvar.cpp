#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    cin>>*p;
    cout<<*p;
    delete p;
    p=nullptr;
}