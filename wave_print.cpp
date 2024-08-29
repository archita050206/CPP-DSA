#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        
        if(i%2==0){
             for(int j=0;j<3;j++){
                cout<<arr[j][i]<<' ';
             }
        }
        if(i%2==1){
            for(int j=3;j>0;j--){
                cout<<arr[j][i]<<' ';
            }
        }
    }
    
}