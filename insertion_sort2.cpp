#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int t=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=t;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }

}