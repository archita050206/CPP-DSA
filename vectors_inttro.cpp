#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i:v){
        cout<<i<<' ';
    }cout<<endl;
    v.at(2)=7;
    cout<<v.at(2)<<endl;
    for(int i:v){
        cout<<i<<' ';
    }cout<<endl;

}