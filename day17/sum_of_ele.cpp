#include<iostream>
using namespace std;
int main(){
    int arr[100][100];
    int row,col;
    cin>>row>>col;
    int s=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            s+=arr[i][j];
        }
    }
    cout<<"Sum: "<<s;
    return 0;
}