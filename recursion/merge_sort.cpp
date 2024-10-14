#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int start, int end,int mid){
    int n1=mid-start+1;
    int n2=end-mid;
    vector<int>left;
    vector<int>right;
    for(int i=0;i<n1;i++){
        left.push_back(arr[start+i]);
    }
    for(int j=0;j<n2;j++){
        right.push_back(arr[mid+1+j]);
    }
    int i=0;
    int j=0;
    int k=start;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }
        else{
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;

    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int>&arr, int start, int end){
    if(start<end){
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,end,mid);
    }
}
int main(){
    vector<int>v={5,4,3,2,1};
    mergeSort(v,0,4);
    for(int i=0;i<5;i++){
        cout<<v[i]<<' ';
    }
}