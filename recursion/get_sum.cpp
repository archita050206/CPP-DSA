#include<iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==0)return 0;
    if(n==1)return arr[0];
    return arr[0]+sum(arr+1,n-1);
}
bool search(int arr[],int n,int key){
    if(n==0)return false;
    if(arr[0]==key)return true;
    return search(arr+1,n-1,key);
}
int main(){
    int arr[]={1,2,3};
    int x=sum(arr,3);
    cout<<x<<endl;
    bool b=search(arr,3,6);
    cout<<b;
}