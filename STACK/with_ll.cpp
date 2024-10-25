#include<iostream>
using namespace std;
class node {
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
    if(!head){
        cout<<"Stack empty!"<<endl;
        return nullptr;
    }
    
    node *t=head;
    while(t->next->next){
        t=t->next;
    }
    delete t->next;
    t->next=nullptr;
    return head;
}
void display(node *head){
    node *t=head;
    while(t){
        cout<<t->data<<' ';
        t=t->next;
    }
}
int main(){
    int n;
    cin>>n;
    int d;
    node *head=nullptr;
    for(int i=0;i<n;i++){
        cin>>d;
        head=push(head,d);
    }
    display(head);
    pop(head);
    display(head);
}