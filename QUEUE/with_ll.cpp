#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=nullptr;

    }
};
node *push(node *head,int val){
    node *p=new node(val);
    if(!head){
        head=p;
        return head;
    }
    node *t=head;
    while(t->next){
        t=t->next;
    }
    t->next=p;
    return head;
}

node *pop(node *head){
    if(!head)return nullptr;
    node *t=head;
    head=t->next;
    delete t;
    return head;
}
void display(node *head){
    if(!head)return;
    node *t=head;
    while(t){
        cout<<t->data<<' ';
        t=t->next;
    }
}
int main(){
    node *head=nullptr;
    int n,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d;
        head=push(head,d);
    }
    display(head);
    head=pop(head);
    display(head);
}