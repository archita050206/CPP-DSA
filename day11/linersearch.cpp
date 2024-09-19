#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}