#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n=7;
    int arr[]={1,2,3,3,3,3,5};
    int key;
    cin>>key;
    int x=search(arr,n,key);
    cout<<x;
    return 0;
}