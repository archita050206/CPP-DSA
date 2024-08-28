#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    cout<<"Sum of elements of the array: "<<s;
}