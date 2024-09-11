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
            p->next=head;
            
        }
        else{
            node *temp=head;
            while(temp->next!=head){
            temp=temp->next;

            }
        temp->next=p;
        p->next=head;
        }

    }
    void dlthead(){
        if(!head)return;
        node *n=head->next;
        node *t=head;
        while(t->next!=head){
            t=t->next;
        }
        node *d=t->next;
        t->next=d->next;
        delete d;
        head=n;
    }
    void display(){
        if(!head)return;
        node *t=head;
        do{
            cout<<t->data<<"->";
            t=t->next;
        }while(t!=head);
        cout<<"nullptr";
    }
    bool detectloop(){
        node *slow=head;
        node *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
    }
};
int main(){
    LinkedList li;
    li.insert(1);
    li.insert(2);
    li.insert(3);
    li.display();

    cout<<endl;
    li.dlthead();
    li.display();
    cout<<endl;
    li.detectloop()==1?cout<<"true":cout<<"false";
}