#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int *ptr=&x;
    int **p=&ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p;
}