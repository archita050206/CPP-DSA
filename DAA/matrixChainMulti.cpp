#include <iostream>
#include<climits>
using namespace std;
#define n 5
void print(int i, int j, int arr[n][n]){
    if(i==j){
        cout<<i;return;}
    cout<<'(';
    print(i,arr[i][j],arr);
    print(arr[i][j]+1, j, arr);
    cout<<')';
}
int main(){
    
    int p[]={5,4,6,2,7};
    int c[n][n]={0};
    int valk[n][n]={0};
    int j,min,q;
    for(int d=1;d<n-1;d++){
        for(int i=1;i<n-d;i++){
            j=i+d;
            min=INT_MAX;
            for(int k=i;k<j;k++){
                q=c[i][k]+c[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<min){
                    min=q;
                    valk[i][j]=k;
                }
                c[i][j]=min;
            }
        }
    }
    cout<<c[1][n-1]<<" "<<valk[1][n-1];
    print(1,n-1,valk);
}