#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    int max=-1;
    if((a>b)&&(a>c))max=a;
    else if((b>c)&&(b>a))max=b;
    else if((c>a)&&(c>b))max=c;
    if(max!=-1)cout<<"Largest value is: "<<max;
    else cout<<"No largest value";


}