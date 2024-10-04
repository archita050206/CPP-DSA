#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[][3]={{7,4,1}, {8,5,2},{9,6,3}};
    vector<int>a;
    a.resize(9);
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[k]=arr[i][j];
            k++;
        }
    }
    sort(a.begin(),a.end());
    for(int i=0;i<9;i++){
        if(i%3==0)cout<<endl;
        cout<<a[i]<<' ';
    }

}