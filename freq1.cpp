// You are using GCC
#include<iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>val;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        val[arr[i]]++;
    }
    int maxVal=0,maxIndex=-1;
    for(auto i:val){
        if(i.second>maxVal){maxVal=i.second;
        maxIndex=i.first;
        }
    }
    if(maxVal<n/2)cout<<"No majority candidate found";
    else cout<<"The majority candidate is ID"<<maxIndex;
}