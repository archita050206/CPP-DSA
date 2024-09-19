#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int n){
        data=n;
        next=nullptr;
    }
};
node * split(node *head){
    if(!head|| !head->next)return head;
    node *fast=head;
    node *slow=head;
    while(fast && fast->next){
        fast=fast->next->next;
        if(fast){
        slow=slow->next;}
    }
    node *t=slow->next;
    slow->next=nullptr;
    return t;
}
node *merge(node *first, node *second){
    if(!first)return second;
    if(!second)return first;
    if(first->data<second->data){
        first->next=merge(first->next,second);
        return first;
    }
    else{
        second->next=merge(first,second->next);
        return second;
    }

}
node *mergeSort(node *head){
    if(!head || !head->next)return head;
    //give head of second half
    node *second=split(head);
    //continuously split the ll to single elements
    head=mergeSort(head);
    second=mergeSort(second);
    //merge the final elements
    return merge(head,second);
}
void display(node *head){
    if(!head)return;
    node *p=head;
    while(p){
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<"nullptr";

}
int main(){
    node *head=new node(5);
    head->next=new node(4);
    head->next->next=new node(3);
    head->next->next->next=new node(2);
    head->next->next->next->next=new node(1);
    head=mergeSort(head);
    display(head);
}