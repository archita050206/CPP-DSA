#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
  
    int lc=0;
    int tr=0;
    int br=3;
    int rc=3;
    while(lc<rc && tr<br){
        for(int i=lc;i<=rc;i++){
            cout<<arr[tr][i]<<' ';
        }
        tr++;
        for(int i=tr;i<=br;i++){
            cout<<arr[i][rc]<<' ';
        }
        rc--;
        for(int i=rc;i>=lc;i--){
            cout<<arr[br][i]<<' ';
        }
        br--;
        for(int i=br;i>=tr;i--){
            cout<<arr[i][lc]<<' ';
        }
        lc++;
    }
    
}