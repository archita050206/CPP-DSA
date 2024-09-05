#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;
    node(int n){
        prev=nullptr;
        next=nullptr;
        data=n;
    }
    
};
class LinkedList{
    node *head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void insert(int n){
        node *temp=head;
        node *p=new node(n);
       
        if(head==nullptr){
            head=p;
            return;
        }
        
        while(temp->next){
            temp=temp->next;
        }
        temp->next=p;
        p->prev=temp;
        

    }
    void display(){
        node *t=head;
        while(t){
            cout<<t->data<<"->";
            t=t->next;
        }
        cout<<"nullptr";
    }

};
int main(){
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);

    l.display();
}