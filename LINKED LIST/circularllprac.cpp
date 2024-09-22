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
class Circular{
    node *tail;
    public:
    Circular(){
        tail=nullptr;
    }
    void insert_end(int x){
        node *p=new node(x);
        if(!tail){
            p->next=p;
            tail=p;
            return;
        }
        p->next=tail->next;
        tail->next=p;
        tail=tail->next;
    }
    void insert_front(int x){
        node *p=new node(x);
        if(!tail){
            p->next=p;
            tail=p;
        }
        p->next=tail->next;
        tail->next=p;
    }
    void delete_front(){
        if(!tail)return;
        node *head=tail->next;
        if(head==tail){
            delete head;
            tail=nullptr;
        }
        tail->next=head->next;
        delete head;
    }
    void delete_end(){
        if(!tail)return;
        node *head=tail->next;
        if(head==tail){
            delete head;
            tail=nullptr;
        }
        node *p=head;
        while(p->next!=tail){
            p=p->next;
        }
        p->next=head;
        delete tail;
        tail=p;
    }
};

