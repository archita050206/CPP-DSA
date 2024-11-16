#include<iostream>
#include<iomanip>
#include<limits.h>
using namespace std;
void floyd_warshall(int arr[][100],int n){
    int dist[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dist[i][j]=arr[i][j];
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    cout<<"Minimum distance between the noodes is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dist[i][j]==INT_MAX)cout<<"INF";
            else cout<<dist[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int arr[100][100];
    int n;
    cin>>n;
    cout<<INT_MAX<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    floyd_warshall(arr,n);
}