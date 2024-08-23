#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}