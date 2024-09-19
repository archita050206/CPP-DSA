#include<iostream>
using namespace std;
int main(){
    int arr[100][100];
    int row,col,key;
    cin>>row>>col>>key;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}