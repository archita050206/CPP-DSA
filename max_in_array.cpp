#include<iostream>
#include<climits>
using namespace std;
int findMax(int arr[], int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=findMax(arr,n);
    cout<<"maximum element: "<<x;
}