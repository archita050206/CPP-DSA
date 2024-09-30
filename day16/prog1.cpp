#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int x){
        data=x;
        next=nullptr;
    }
};
class LinkedList{
    node *head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void insert(int x){
        node *p=new node(x);
        if(!head){
            head=p;
            return;
        }
        node *t=head;
        while(t->next){
            t=t->next;
        }
        t->next=p;
    }
    void sortedInsert(int x){
        node *n=new node(x);
        if(head->data>x){
            n->next=head;
            head=n;
            return;
        }
        node *temp=head;
        while(temp->next->data<x){
            temp=temp->next;
            
        }
        n->next=temp->next;
        temp->next=n;
    }
    void display(){
        if(!head){
            return;
        }
        node *t=head;
        while(t){
            cout<<t->data<<"->";
            t=t->next;
        }
        cout<<"nullptr"<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(40);
    ll.display();
    ll.sortedInsert(25);
    ll.display();
}