#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int k=arr[s];
    int c=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<k){
            c++;
        }
    }
    int kindex=s+c;
    swap(arr[s],arr[kindex]);
    int i=s;
    int j=e;
    while(i<kindex && j>kindex){
        while(arr[i]<k)i++;
        while(arr[j]>k)j--;
        swap(arr[i++],arr[j--]);
    }
    return kindex;
}
void quicksort(int arr[], int s,int e){
    if(s>=e)return;
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(){
    int arr[5]={5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }
}