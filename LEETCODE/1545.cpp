#include<iostream>
#include<cmath>
using namespace std;
char giveChar(int n, int k){
    if(n==1)return '0';
    int length=pow(2,n)-1;
    int mid=length/2+1;
    if(k==mid)return '1';
    else if(k<mid){
        return giveChar(n-1,k);
    }
    else{
        int pos=length-mid+1;
        char c=giveChar(n-1,pos);
        return (c==1)?'0':'1';
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    char c= giveChar(n,k);
    cout<<c<<endl;
}