#include<iostream>
using namespace std;
int main(){
    int a1[100];
    int a2[100];
    int n1;
    cin>>n1;//length of first array
    int n2;
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    cin>>n2;//length of second array
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    int l;
    if(n1>n2)l=n2;
    else l=n1;
    if(l==n2){
        for(int i=0;i<l;i++){
            a1[i]=a1[i]*a2[i];
        }
    }
    else{
        for(int i=0;i<l;i++){
            a2[i]=a1[i]*a2[i];
        }
    }
    cout<<"Final array: ";
    if(l==n2){
        for(int i=0;i<n1;i++){
            cout<<a1[i]<<' ';
        }
    }
    else{
        for(int i=0;i<n2;i++){
            cout<<a2[i]<<' ';
        }
    }
}