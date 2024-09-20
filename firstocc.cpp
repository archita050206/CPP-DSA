#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,4,3,2,1};
    int n=7;
    int x=1;
    int foc=-1;
    for(int i=0;i<=n;i++){
        if(arr[i]==x){
            foc=i;
            break;
        }
        

    }
    cout<<foc;
    int loc=-1;
    for(int j=foc+1;j<=n;j++){
        if(arr[j]==x){
            loc=j;
            break;
        }
    }
    cout<<endl;
    if(loc==-1){
        cout<<"No last occurence";
    }
    else{
        cout<<loc;
    }
}