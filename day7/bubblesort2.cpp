#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=n-1;i>=1;i--){
        bool b=false;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                b=true;
            }
        }
        if(!b)break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}