#include<iostream>
using namespace std;
int partition(int *arr, int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);;
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(int* arr,int low, int high){
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }
}