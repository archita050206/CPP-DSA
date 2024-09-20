#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    for(int i=1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
        
    }
    cout<<endl;
    for(int i=2;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';

    }
    cout<<endl;
    for(int i=4;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';

    }
    
}