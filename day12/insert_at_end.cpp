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
void insertAtEnd(node *&head, int x){
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
void display(node *head){
    if(!head)return;
    node* temp=head;
    while(temp){
        cout<<temp->data<<' ';
        temp=temp->next;
    }
}
int main(){
    node *head=nullptr;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    display(head);
}