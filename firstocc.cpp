#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,1,3,2,1};
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
    //1 1 1 1 2 2 3 1 =7
    for(int i=7;i>=0;i--){
        if(arr[i]==x){
            loc=i;
            break;
        }
    }
    cout<<loc;
}