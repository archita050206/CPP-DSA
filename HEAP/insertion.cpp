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
    void deletion(){
        // replace the first element with last element 
        // remove the last element 
        // take the root to its correct position
        int t=arr[1];
        arr[1]=arr[2];
        arr[2]=t;
        size--;
    }
};
int main(){
    Heap h;
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(45);
    h.display();
    cout<<endl;
    h.deletion();
    h.display();
}
