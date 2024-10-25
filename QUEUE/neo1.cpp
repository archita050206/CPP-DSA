#include<iostream>
using namespace std;
#define s 5
class Node{
    public:
    int front;
    int rear;
    int arr[s];
    int size;
    Node(){
        front=0;
        rear=-1;
        size=0;
    }
    void push(int val){
        if(size==s){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear++;
            size++;
            arr[rear]=val;
        }
    }
    void pop(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            front++;
            size--;
        }
    }
    void display(){

        if(size==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
};
int main(){
    Node queue;
    int choice, ticketID;

    while (true) {
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> ticketID;
                queue.push(ticketID);
                break;
            case 2:
                queue.pop();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "Exiting the program" << endl;
                return 0;
            default:
                cout << "Invalid option." << endl;
        }
    }
}