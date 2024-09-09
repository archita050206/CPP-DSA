#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int n){
        data=n;
        next=nullptr;
    }
};
class LinkedList{
    Node *head;
    public:
    LinkedList(){
        head=nullptr;
    }
    void insert(int n){
        Node *p=new Node(n);
        if(!head){
            head=p;
            return;
        }
        Node *t=head;
        while(t->next){
            t=t->next;

        }
        t->next=p;

    }
    void display(){
        Node *h=head;
        while(h){
            cout<<h->data<<"->";
            h=h->next;
        }
        cout<<"nullptr";
    }
    void reverse(){
        if(!head)return;
        Node *p=head;
        Node *q=nullptr;
        Node *r=nullptr;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
    }
};
int main(){
    LinkedList l;
    l.insert(1); 
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.display();
    cout<<endl;
    l.reverse();
    l.display();
}