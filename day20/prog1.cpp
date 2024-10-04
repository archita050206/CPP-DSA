#include<iostream>
using namespace std;
int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int lr=0;
    int hr=2;
    int lc=0;
    for(int k=0;k<3;k++){
    for(int i=hr;i>=lr;i--){
        cout<<arr[i][lc]<<' ';
        
    }
    lc++;
    cout<<endl;
    }
}