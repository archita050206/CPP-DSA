#include<iostream>
using namespace std;
int main(){
    int n;
    int se=0;
    int so=0;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            se+=arr[i];
        }
        else{
            so+=arr[i];
        }
    }
    cout<<"Sum of even elements: "<<se<<endl;
    cout<<"sum of odd elements: "<<so;

}