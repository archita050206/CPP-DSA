#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    //find pivot: first element
    int pivot=arr[s];
    //count how many ele less than pivot
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)count++;
    }
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);
    //handling the right and left in which all elements 
    //should be greater and less respectively
    int i=s;
    int j=e;
    while(i<pivotIndex  && j>pivotIndex){
        while(arr[i]<pivot)i++;
        while(arr[j]>pivot)j--;
        swap(arr[i++],arr[j--]);
    }
    return pivotIndex; 
}
void quicksort(int arr[],int s, int e){
    if(s>=e)return;
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(){
    int arr[5]={5,3,1,2,4};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }
}