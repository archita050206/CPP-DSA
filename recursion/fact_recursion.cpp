#include<iostream>
using namespace std;
int fact(int n){
    if(n==1||n==0)return 1;
    return n*fact(n-1);
}
int power(int n){
    if(n==0)return 1;
    return 2*power(n-1);
}
int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    int x=fact(n);
    cout<<x<<endl;
    int y=power(n);
    cout<<y<<endl;
    int z=fib(n);
    cout<<z;
}