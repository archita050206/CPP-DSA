#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int maxe=INT_MIN;
    int c=-1;
    for(int i=0;i<3;i++){
        int s=0;
        
        for(int j=0;j<3;j++){
            s+=arr[i][j];

        }
        if(maxe<s){
            maxe=s;
            c++;
        }
        cout<<"sum of row "<<i+1<<" :"<<s<<endl;
    }
    cout<<maxe<<endl;
    cout<<"at row: "<<c;
}