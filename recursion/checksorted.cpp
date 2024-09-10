#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1])return false;
    else issorted(arr+1,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool b=issorted(arr,n);
    cout<<b;
}