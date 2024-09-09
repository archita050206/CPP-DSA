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
    void display(){
        if(!head)return;
        node *t=head;
        do{
            cout<<t->data<<"->";
            t=t->next;
        }while(t!=head);
        //cout<<"nullptr";
    }
};
int main(){
    LinkedList li;
    li.insert(1);
    li.insert(2);
    li.insert(3);
    li.display();
    cout<<"yes";
}