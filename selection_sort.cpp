#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;

            }
        
        int t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}