#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *ptr= arr;
    for(int i=0;i<n;i++){
        cout<<*(ptr +i)<<' ';
    }

}