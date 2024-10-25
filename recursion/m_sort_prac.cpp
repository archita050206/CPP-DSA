#include<iostream>
using namespace std;
void merge(int *arr, int low, int high, int mid){

    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i]=arr[low+i];

    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=low;
    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;

    }
    while(j<n2){
        arr[k]=right[j];
        k++;
        j++;
    }
}
void merge_sort(int *arr, int low, int high){
    if(low<high){
        int mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    merge_sort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }
}
