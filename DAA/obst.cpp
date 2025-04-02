#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int keys[]={11,22,33,44};
int freq[]={4,2,6,3};
int n=4;
int arr[n+1][n+1]={0};
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(i==j)arr[i][j]=0;
        int w=0, d=INT_MAX;
        for(int k=i+1;k<=j;k++){
            w+=freq[k];
        }
        for(int k=i+1;k<=j;k++){
            d=min(d,arr[i][k-1]+arr[k][j]+w);
        }
    }
}
for(int i=0;i<n;i++){
    
}
}