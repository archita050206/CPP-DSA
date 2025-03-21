#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        // 1 based indexing
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size++;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else return;
        }
    }
    void display(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<' ';
        }
    }
    void heapify(int arr[], int n, int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;

        //getting the node we need to swap or replace 

        if(left<n && arr[largest]<arr[left]){
            largest=left;
        }
        else if(right<n && arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }

    }
    void deletion(){
        if(size==0)return;
        // replace the first element with last element 
        arr[1]=arr[size];

        // remove the last element 
        size--;
        // take the root to its correct position
        int i=1;
        while(i<=size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if(leftIndex<=size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<=size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else return;
        }

    }
};
int main(){
    Heap h;
    // h.insert(50);
    // h.insert(40);
    // h.insert(30);
    // h.insert(20);
    // h.insert(45);
    // h.display();
    // cout<<endl;
    // h.deletion();
    
    // h.display();
    int arr[]={-1,10,9,8,12,7};
    int n=6;
    for(int i=n/2;i>=1;i--){
        h.heapify(arr,n,i);
    }
    for(int i=1;i<n;i++){
        cout<<arr[i]<<' ';
    }
}
