#include<iostream>
int find(int arr[],int l, int h, int key){
    if(l>h)return -1;
    int mid=(l+h)/2;
    if(arr[mid]==key)return 1;
    else if(arr[mid]>key)return find(arr,l,mid-1,key);
    else if(arr[mid]<key)return find(arr,mid+1,h,key);
}
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int key=1;
    int x=find(arr,0,4,key);
    cout<<x;
}