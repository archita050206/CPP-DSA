#include<iostream>
using namespace std;
int binsearch(int arr[], int key,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;

}
int main(){
    int n,key;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>key;
    int x=binsearch(arr,key,n);
    cout<<x+1;
}