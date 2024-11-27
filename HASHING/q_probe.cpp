// You are using GCC
#include<iostream>
using namespace std;

int nIndex(int key, int size){
    return key%size;
}
int quad(int h[], int size, int key){
    int index=nIndex(key,size);
    int i=0;
    while(h[(index+i*i)%size]!=-1){
        i++;
        if(i==size)return -1;
    }
    return (index+i*i)%size;
}
void insert(int h[], int size, int key){
    int index=nIndex(key,size);
    if(h[index]!=-1){
        
        index=quad(h,size,key);
    }
    if(index!=-1)h[index]=key;
}
int main(){
    int n,x,size;
    cin>>n;// l of array
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    
    cin>>size;
    int h[size];
    for(int i=0;i<size;i++){
        h[i]=-1;
    }
    
    for(int i=0;i<n;i++){
        insert(h,size,arr[i]);
    }
    for(int i=0;i<size;i++){
        if(h[i]!=-1)cout<<h[i]<<' ';
    }
}