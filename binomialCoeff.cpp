#include<iostream>
using namespace std;
int main(){
    int k,n;
    cin>>n>>k;
    int arr[n+1]={0};
    int parr[n+1][k+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<k+1;j++){
            parr[i][j]=0;
        }
    }
    arr[0]=1;
    for(int i=1;i<n+1;i++){
        for(int j=i;j>0;j--){
            arr[j]=arr[j]+arr[j-1];
            if(j<=k){
            parr[i][j]=arr[j];
            }
        }
    }
    cout<<"Answer is: "<<parr[n][k];

}
