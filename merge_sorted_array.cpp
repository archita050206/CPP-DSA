#include<iostream>
using namespace std;
int main(){
    int a1[]={1,2,2,2,2};
    int a2[]={2,2,4,5,6};
    int i=0;
    int j=0;
    
    int k=0;
    int m=sizeof(a1)/sizeof(a1[0]);
    int n=sizeof(a2)/sizeof(a2[0]);
    int arr[100];
    while(i<m && j<n){
        if(k==0 || a1[i]<=a2[j]){
            if(arr[k-1]!=a1[i]){
            arr[k++]=a1[i];
            }
            
            i++;
            
        
        }
        else if(a1[i]>a2[j]){
            if(k==0||arr[k-1]!=a2[j]){
            arr[k++]=a2[j];
            }
            
            j++;
            
            
            
        }
        
    }
    cout<<k<<endl;
    while(i<m){
        if(k==0||arr[k-1]!=a1[i]){
        arr[k++]=a1[i++];
        }
        i++;
    }
    while(j<n){
        if(k==0||arr[k-1]!=a2[j]){
        arr[k++]=a2[j];}
        j++;
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<' ';
    }
}