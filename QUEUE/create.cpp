#include<iostream>
using namespace std;
class MyQueue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    MyQueue(int size){
        this->size=size;
        arr=new int[size];
        front,rear=-1;
    }
    void push(int x){
        if(rear==size-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        rear++;
        arr[rear]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1){
            cout<<"Queue underflow"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        return arr[front];
    }
};
int main(){
    MyQueue q(10);
    for(int i=0;i<10;i++){
        q.push(i);
    }
    int k=q.peek();
    cout<<k;
}